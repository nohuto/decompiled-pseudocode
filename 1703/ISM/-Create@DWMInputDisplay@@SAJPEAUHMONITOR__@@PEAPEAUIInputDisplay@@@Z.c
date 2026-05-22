/*
 * XREFs of ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x18001B2DC
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001248C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x1800136A0 (-BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z.c)
 *     ?GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z @ 0x180015110 (-GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z.c)
 *     ?DoConvergedTargeting@DWMInputRouter@@UEAAHPEAUtagINPUTDEST@@PEAUInputInfo@@@Z @ 0x180015660 (-DoConvergedTargeting@DWMInputRouter@@UEAAHPEAUtagINPUTDEST@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     memset @ 0x18009D814 (memset.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DWMInputDisplay::Create(__int64 a1, struct IInputDisplay **a2)
{
  __int64 v3; // rbp
  unsigned int v4; // edi
  char v5; // al
  int v6; // r9d
  _QWORD *v7; // rax
  _QWORD *v8; // rbx

  v3 = a1;
  v4 = 0;
  if ( a2 )
  {
    v7 = malloc(0x50uLL);
    v8 = v7;
    if ( v7 )
      memset(v7, 0, 0x50uLL);
    if ( v8 )
    {
      v8[1] = &RefCountedObject::`vftable';
      a1 = 1LL;
      *((_DWORD *)v8 + 4) = 1;
      *v8 = &DWMInputDisplay::`vftable'{for `IInputDisplay'};
      v8[1] = &DWMInputDisplay::`vftable'{for `RefCountedObject'};
      v8[3] = v3;
      v8[4] = 0LL;
      *((_BYTE *)v8 + 48) = 0;
      v8[7] = 0LL;
      *((_DWORD *)v8 + 16) = 1;
      v8[9] = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      *a2 = (struct IInputDisplay *)v8;
      return v4;
    }
    v5 = 14;
    v4 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 101;
      goto LABEL_4;
    }
  }
  else
  {
    v5 = 87;
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 93;
LABEL_4:
      Template_qqq(a1, &MinInput_Warning_CheckResult, 0, v6, v5);
    }
  }
  return v4;
}
