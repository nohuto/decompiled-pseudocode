/*
 * XREFs of SepInitializeCodeIntegrity @ 0x140527F64
 * Callers:
 *     SepInitializationPhase1 @ 0x1405262AC (SepInitializationPhase1.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     SepIsOptionPresent @ 0x14052805C (SepIsOptionPresent.c)
 */

__int64 SepInitializeCodeIntegrity()
{
  unsigned int v0; // edi
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  bool v4; // zf

  v0 = 6;
  memset(&SeCiCallbacks, 0, 0x98uLL);
  v1 = KeLoaderBlock_0;
  SeCiCallbacks = 152;
  v2 = 0LL;
  if ( KeLoaderBlock_0 )
  {
    v3 = *(_QWORD *)(KeLoaderBlock_0 + 216);
    if ( v3 )
    {
      if ( (unsigned int)SepIsOptionPresent(v3, "DISABLE_INTEGRITY_CHECKS") )
        v0 = 0;
      if ( (unsigned int)SepIsOptionPresent(*(_QWORD *)(KeLoaderBlock_0 + 216), "TESTSIGNING") )
        v0 |= 8u;
      if ( (unsigned int)SepIsOptionPresent(*(_QWORD *)(KeLoaderBlock_0 + 216), "MINTCBIGNOREKD") )
        SeCiDebugOptions |= 1u;
      v4 = (unsigned int)SepIsOptionPresent(*(_QWORD *)(KeLoaderBlock_0 + 216), "FLIGHTSIGNING") == 0;
      v1 = KeLoaderBlock_0;
      if ( !v4 )
        v0 |= 0x2000u;
    }
    if ( v1 )
      v2 = v1 + 48;
  }
  return CiInitialize(v0, v2, &SeCiCallbacks, &SeCiPrivateApis);
}
