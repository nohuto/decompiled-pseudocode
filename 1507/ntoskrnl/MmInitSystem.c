/*
 * XREFs of MmInitSystem @ 0x1407C8B48
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 *     MiComputeNumaCosts @ 0x1407E8E94 (MiComputeNumaCosts.c)
 */

char __fastcall MmInitSystem(__int64 a1, ULONG_PTR a2)
{
  if ( !(_DWORD)a1 )
  {
    if ( (unsigned __int8)MmInitNucleus(a2) )
      return MiInitSystem(0LL, a2);
    return 0;
  }
  if ( (_DWORD)a1 == 1 )
  {
    MiComputeNumaCosts();
    MiFlags = MiFlags & 0xFFFFFFCF | 0x10;
    if ( (unsigned __int8)MiInitSystem(1LL, a2) )
    {
      byte_14034FB98 = 1;
      return 1;
    }
    return 0;
  }
  if ( (_DWORD)a1 != 2 )
    return 0;
  MiFlags = MiFlags & 0xFFFFFFCF | 0x20;
  return MiInitSystem(a1, a2);
}
