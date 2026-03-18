/*
 * XREFs of MmInitSystem @ 0x14074C514
 * Callers:
 *     Phase1InitializationIoReady @ 0x140763CC8 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 *     MiComputeNumaCosts @ 0x140772310 (MiComputeNumaCosts.c)
 */

char __fastcall MmInitSystem(__int64 a1, __int64 a2)
{
  if ( !(_DWORD)a1 )
  {
    if ( MmInitNucleus(a2) )
      return MiInitSystem(0LL, a2);
    return 0;
  }
  if ( (_DWORD)a1 == 1 )
  {
    MiComputeNumaCosts();
    MiFlags = MiFlags & 0xFFFFFFCF | 0x10;
    if ( (unsigned __int8)MiInitSystem(1LL, a2) )
    {
      byte_1402FF6D8 = 1;
      return 1;
    }
    return 0;
  }
  if ( (_DWORD)a1 != 2 )
    return 0;
  MiFlags = MiFlags & 0xFFFFFFCF | 0x20;
  return MiInitSystem(a1, a2);
}
