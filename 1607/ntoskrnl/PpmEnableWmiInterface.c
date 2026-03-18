/*
 * XREFs of PpmEnableWmiInterface @ 0x1405769E8
 * Callers:
 *     PopNewProcessorCallback @ 0x14066A134 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     KeGetPrcb @ 0x1400D3FF8 (KeGetPrcb.c)
 *     KeQueryGroupAffinity @ 0x1400FAF88 (KeQueryGroupAffinity.c)
 *     IoWMIRegistrationControl @ 0x14053A454 (IoWMIRegistrationControl.c)
 */

int PpmEnableWmiInterface()
{
  ULONG i; // ebx
  KAFFINITY GroupAffinity; // rax
  KAFFINITY v2; // rcx

  for ( i = 0; i < 0x40; ++i )
  {
    GroupAffinity = KeQueryGroupAffinity(0);
    if ( _bittest64((const __int64 *)&GroupAffinity, i) )
    {
      GroupAffinity = KeGetPrcb(i);
      v2 = GroupAffinity;
      if ( GroupAffinity )
      {
        LODWORD(GroupAffinity) = _InterlockedCompareExchange((volatile signed __int32 *)(GroupAffinity + 24040), 1, 0);
        if ( !(_DWORD)GroupAffinity )
          LODWORD(GroupAffinity) = IoWMIRegistrationControl((PDEVICE_OBJECT)(v2 + 24032), 0x80000001);
      }
    }
  }
  return GroupAffinity;
}
