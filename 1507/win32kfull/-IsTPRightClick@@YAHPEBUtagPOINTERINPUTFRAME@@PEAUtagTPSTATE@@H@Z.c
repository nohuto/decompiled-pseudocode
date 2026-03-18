/*
 * XREFs of ?IsTPRightClick@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@H@Z @ 0x1C01F196C
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01F3238 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 * Callees:
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 */

__int64 __fastcall IsTPRightClick(const struct tagPOINTERINPUTFRAME *a1, struct tagTPSTATE *a2, int a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // edi
  int v6; // ebx
  __int64 v7; // r11
  unsigned int v8; // ebp
  unsigned __int64 *v9; // r8
  _DWORD *v10; // r10
  unsigned __int16 *v11; // r11

  v3 = 0;
  if ( a3 || (qword_1C0323098 & 0x200000000LL) == 0 )
    return 0LL;
  v5 = *((_DWORD *)a1 + 6);
  v6 = 0;
  v7 = *((_QWORD *)a1 + 9);
  if ( v5 )
  {
    v8 = *((_DWORD *)a2 + 267);
    v9 = (unsigned __int64 *)(v7 + 96);
    v10 = (_DWORD *)(v7 + 68);
    v11 = (unsigned __int16 *)(v7 + 48);
    while ( !*v10
         || (*v10 & 0x40000) != 0
         || (*((_DWORD *)a2 + 44 * (*v11 % v8) + 42) & 0x20) != 0
         || !PtInRect((_DWORD *)a2 + 310, *v9) )
    {
      v11 += 108;
      v10 += 54;
      v9 += 27;
      if ( ++v6 >= v5 )
        return v3;
    }
    return 1;
  }
  return v3;
}
