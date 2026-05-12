/*
 * XREFs of RaidStallDeviceQueue @ 0x1C001099C
 * Callers:
 *     RaidUnitProcessBusyRequest @ 0x1C0010838 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidSetUnitPauseTimer @ 0x1C0010A8C (RaidSetUnitPauseTimer.c)
 *     WPP_SF_D @ 0x1C00256F0 (WPP_SF_D.c)
 *     WPP_SF_DD @ 0x1C0026910 (WPP_SF_DD.c)
 */

void __fastcall RaidStallDeviceQueue(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  KIRQL v8; // al
  KIRQL v9; // r14
  int v10; // ecx
  __int64 v11; // r9

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_DD(WPP_GLOBAL_Control->AttachedDevice, 11LL, &WPP_901c9e74f511597a569e0a3e17ec49fa_Traceguids, a2, a3);
  }
  if ( a2 && a3 )
  {
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    v9 = v8;
    if ( *(int *)(a1 + 28) > 0 || *(_DWORD *)(a1 + 32) || (v10 = *(_DWORD *)(a1 + 76), v10 >= *(_DWORD *)(a1 + 4)) )
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v8);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_DD(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_901c9e74f511597a569e0a3e17ec49fa_Traceguids, a2, a3);
      }
    }
    else
    {
      if ( a2 == 1 )
      {
        _InterlockedAdd((volatile signed __int32 *)(a1 + 28), 1u);
      }
      else if ( a2 == 2 && v10 > 0 )
      {
        v11 = a3 * v10 / 0x64;
        if ( !(_DWORD)v11 )
          v11 = 1LL;
        *(_DWORD *)(a1 + 32) = v11;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 13LL, &WPP_901c9e74f511597a569e0a3e17ec49fa_Traceguids, v11);
        }
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v9);
      if ( a2 == 1 )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_901c9e74f511597a569e0a3e17ec49fa_Traceguids, a3);
        }
        RaidSetUnitPauseTimer(a4, a3);
      }
    }
  }
}
