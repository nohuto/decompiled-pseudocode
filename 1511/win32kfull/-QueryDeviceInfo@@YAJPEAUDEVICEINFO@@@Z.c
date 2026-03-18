/*
 * XREFs of ?QueryDeviceInfo@@YAJPEAUDEVICEINFO@@@Z @ 0x1C01DE648
 * Callers:
 *     ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01DE3E0 (-OpenDevice@@YAHPEAUDEVICEINFO@@@Z.c)
 *     ProcessDeviceChanges @ 0x1C01E0120 (ProcessDeviceChanges.c)
 * Callees:
 *     ?GetKbdExId@@YAJPEAXPEAU_KEYBOARD_ID_EX@@@Z @ 0x1C01DE304 (-GetKbdExId@@YAJPEAXPEAU_KEYBOARD_ID_EX@@@Z.c)
 */

__int64 __fastcall QueryDeviceInfo(struct DEVICEINFO *a1)
{
  ULONG *v2; // r9
  NTSTATUS v3; // eax
  bool v4; // zf
  unsigned int v5; // edi
  _KEYBOARD_ID_EX v7; // [rsp+60h] [rbp+8h] BYREF

  v2 = (ULONG *)&aDeviceTemplate[71 * *((unsigned __int8 *)a1 + 48)];
  v3 = ZwDeviceIoControlFile(
         *((HANDLE *)a1 + 27),
         0LL,
         0LL,
         0LL,
         (PIO_STATUS_BLOCK)((char *)a1 + 248),
         v2[12],
         0LL,
         0,
         (char *)a1 + v2[13],
         v2[14]);
  v4 = *((_BYTE *)a1 + 48) == 1;
  v5 = v3;
  *((_DWORD *)a1 + 71) = v3;
  if ( v4 )
  {
    if ( (int)GetKbdExId(*((HANDLE *)a1 + 27), &v7) < 0 )
    {
      *((_DWORD *)a1 + 107) = *((unsigned __int8 *)a1 + 400);
      *((_DWORD *)a1 + 108) = *((unsigned __int8 *)a1 + 401);
    }
    else
    {
      *(_KEYBOARD_ID_EX *)((char *)a1 + 428) = v7;
    }
  }
  *((_DWORD *)a1 + 83) &= ~2u;
  return v5;
}
