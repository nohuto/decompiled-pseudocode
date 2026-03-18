/*
 * XREFs of SiIsWinPeHardDiskZeroUfdBoot @ 0x140712080
 * Callers:
 *     SiGetBiosSystemDisk @ 0x140711E24 (SiGetBiosSystemDisk.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _snwscanf_s @ 0x140176F2C (_snwscanf_s.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SiTranslateSymbolicLink @ 0x14057FC04 (SiTranslateSymbolicLink.c)
 *     SiGetFirmwareBootDeviceNameFromRegistry @ 0x14057FED0 (SiGetFirmwareBootDeviceNameFromRegistry.c)
 *     SiIsWinPEBoot @ 0x14057FF3C (SiIsWinPEBoot.c)
 *     SiIssueSynchronousIoctl @ 0x140711660 (SiIssueSynchronousIoctl.c)
 */

bool __fastcall SiIsWinPeHardDiskZeroUfdBoot(int a1, __int64 a2, __int64 a3, int a4)
{
  bool result; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // r9d
  char v8; // bl
  wchar_t *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  int v15; // [rsp+30h] [rbp-9h] BYREF
  wchar_t *Src; // [rsp+38h] [rbp-1h] BYREF
  int v17; // [rsp+40h] [rbp+7h] BYREF
  int v18; // [rsp+44h] [rbp+Bh] BYREF
  _DWORD v19[4]; // [rsp+48h] [rbp+Fh] BYREF
  _DWORD v20[10]; // [rsp+58h] [rbp+1Fh] BYREF

  result = SiIsWinPEBoot(a1, a2, a3, a4);
  v8 = 0;
  if ( result )
  {
    if ( (int)SiGetFirmwareBootDeviceNameFromRegistry(&Src, v5, v6, v7) >= 0 )
    {
      v9 = Src;
      v10 = -1LL;
      do
        ++v10;
      while ( Src[v10] );
      if ( snwscanf_s(Src, v10 + 1, L"multi(%d)disk(%d)rdisk(%d)", &v18, &v17, &v15) == 3
        && !v18
        && !v17
        && !v15
        && SiTranslateSymbolicLink(L"\\ArcName\\multi(0)disk(0)rdisk(0)", &Src) >= 0 )
      {
        ExFreePoolWithTag(v9, 0);
        *(_QWORD *)&v19[1] = 0LL;
        memset(v20, 0, sizeof(v20));
        v19[0] = 0;
        v13 = SiIssueSynchronousIoctl(Src, v11, v19, v12, v20);
        if ( v13 >= 0 )
          v14 = v20[7] == 7;
        else
          v14 = v13 == -1073741766;
        if ( v14 )
          return 1;
      }
    }
    return v8;
  }
  return result;
}
