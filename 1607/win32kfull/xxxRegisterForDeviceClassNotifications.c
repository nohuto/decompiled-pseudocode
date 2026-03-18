/*
 * XREFs of xxxRegisterForDeviceClassNotifications @ 0x1C012CBF4
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 * Callees:
 *     OpenMultiplePortDevice @ 0x1C012CE1C (OpenMultiplePortDevice.c)
 *     RegisterCDROMNotify @ 0x1C012CF70 (RegisterCDROMNotify.c)
 */

__int64 __fastcall xxxRegisterForDeviceClassNotifications(__int64 a1)
{
  int v1; // ebx
  unsigned int v2; // esi
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+30h] [rbp-48h]
  int v13; // [rsp+48h] [rbp-30h]

  v1 = -1073741811;
  v2 = 0;
  v3 = 0LL;
  do
  {
    if ( gpWin32kDriverObject )
    {
      if ( gdwInAtomicOperation )
      {
        a1 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
      if ( v2 )
      {
        v4 = 70LL * v2;
        v5 = DeviceTypeToRimInputType(v2);
        LOBYTE(v13) = 0;
        LODWORD(v12) = 0;
        v1 = RIMRegisterForInput(
               v5,
               0LL,
               gpWin32kDriverObject,
               *(_QWORD *)(aDeviceTemplate[0] + v3 + 112),
               *(_QWORD *)(aDeviceTemplate[0] + v3 + 192),
               0LL,
               v12,
               0LL,
               Win32kRIMDevChangeCallback,
               v13,
               &aDeviceTemplate[v4 + 12]);
        if ( v1 >= 0 )
        {
          LOBYTE(v6) = 1;
          RawInputManagerObjectResolveHandle(
            *(_QWORD *)(aDeviceTemplate[0] + v3 + 96),
            3LL,
            v6,
            &aDeviceTemplate[v4 + 13]);
          EnterCrit(0LL, 1LL);
          OpenMultiplePortDevice(*(_QWORD *)(aDeviceTemplate[0] + v3 + 96), v2);
          UserSessionSwitchLeaveCrit(v8, v7);
          *(_DWORD *)(aDeviceTemplate[0] + v3 + 444) = 64;
          LOBYTE(BugCheckParameter4) = 0;
          v1 = RIMReadInput(
                 *(_QWORD *)(aDeviceTemplate[0] + v3 + 96),
                 &aDeviceTemplate[v4 + 61],
                 *(unsigned int *)(aDeviceTemplate[0] + v3 + 444),
                 *(_QWORD *)(aDeviceTemplate[0] + v3 + 152),
                 BugCheckParameter4,
                 &aDeviceTemplate[v4 + 58],
                 &aDeviceTemplate[v4 + 55],
                 &aDeviceTemplate[v4 + 56]);
        }
      }
      else
      {
        v1 = 0;
      }
      EnterCrit(0LL, 1LL);
    }
    ++v2;
    v3 += 560LL;
  }
  while ( v2 <= 2 );
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
  v9 = (_DWORD *)gbFirstConnectionDone;
  if ( !gbFirstConnectionDone && gpWin32kDriverObject )
  {
    if ( !gProtocolType )
    {
      RegisterCDROMNotify();
      v9 = (_DWORD *)gbFirstConnectionDone;
    }
    *v9 = 1;
  }
  EnterCrit(0LL, 1LL);
  return (unsigned int)v1;
}
