/*
 * XREFs of SepInitializeCodeIntegrity @ 0x140553E34
 * Callers:
 *     SepInitializationPhase1 @ 0x140553520 (SepInitializationPhase1.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     SepIsOptionPresent @ 0x140553EE4 (SepIsOptionPresent.c)
 */

__int64 SepInitializeCodeIntegrity()
{
  unsigned int v0; // edi
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned int *v4; // rdx
  bool v5; // zf

  v0 = 6;
  memset(&SeCiCallbacks, 0, 0xB0uLL);
  v1 = KeLoaderBlock_0;
  SeCiCallbacks = 176;
  v2 = 0LL;
  qword_1403011C8 = 167772162LL;
  if ( KeLoaderBlock_0 )
  {
    v3 = *(_QWORD *)(KeLoaderBlock_0 + 240);
    if ( v3 )
    {
      v4 = *(unsigned int **)(v3 + 2520);
      if ( v4 )
        v0 = *v4;
    }
    if ( *(_QWORD *)(KeLoaderBlock_0 + 216) )
    {
      v5 = (unsigned int)SepIsOptionPresent() == 0;
      v1 = KeLoaderBlock_0;
      if ( !v5 )
        SeCiDebugOptions |= 1u;
    }
    if ( v1 )
      v2 = v1 + 48;
  }
  return CiInitialize(v0, v2, &SeCiCallbacks, SeCiPrivateApis);
}
