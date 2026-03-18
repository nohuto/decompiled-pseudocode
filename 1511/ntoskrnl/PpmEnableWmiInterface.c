/*
 * XREFs of PpmEnableWmiInterface @ 0x140530A5C
 * Callers:
 *     PopNewProcessorCallback @ 0x1406323A4 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     KeQueryGroupAffinity @ 0x14009B2D4 (KeQueryGroupAffinity.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     IoWMIRegistrationControl @ 0x1404B3074 (IoWMIRegistrationControl.c)
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
