/*
 * XREFs of PpmEnableWmiInterface @ 0x140599EB0
 * Callers:
 *     PopNewProcessorCallback @ 0x1406B09CC (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     KeQueryGroupAffinity @ 0x14002B0B4 (KeQueryGroupAffinity.c)
 *     IoWMIRegistrationControl @ 0x140545FA0 (IoWMIRegistrationControl.c)
 */

int PpmEnableWmiInterface()
{
  unsigned int v0; // ebx
  __int64 *v1; // rdi
  KAFFINITY GroupAffinity; // rax
  __int64 v3; // rcx

  v0 = 0;
  v1 = KiProcessorBlock;
  do
  {
    GroupAffinity = KeQueryGroupAffinity(0);
    if ( _bittest64((const __int64 *)&GroupAffinity, v0) )
    {
      LODWORD(GroupAffinity) = KeNumberProcessors_0;
      if ( v0 >= (unsigned int)KeNumberProcessors_0 )
        v3 = 0LL;
      else
        v3 = *v1;
      if ( v3 )
      {
        LODWORD(GroupAffinity) = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 24040), 1, 0);
        if ( !(_DWORD)GroupAffinity )
          LODWORD(GroupAffinity) = IoWMIRegistrationControl((PDEVICE_OBJECT)(v3 + 24032), 0x80000001);
      }
    }
    ++v0;
    ++v1;
  }
  while ( v0 < 0x40 );
  return GroupAffinity;
}
