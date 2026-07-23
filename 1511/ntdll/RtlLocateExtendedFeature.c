/*
 * XREFs of RtlLocateExtendedFeature @ 0x1800E2290
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800845EC (RtlpLocateXStateChunk.c)
 */

PVOID __cdecl RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, ULONG FeatureId, PULONG Length)
{
  char *XStateChunk; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  char *v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx

  if ( FeatureId - 2 <= 0x3D && ((1LL << FeatureId) & MEMORY[0x7FFE03D8]) != 0 )
  {
    XStateChunk = RtlpLocateXStateChunk(ContextEx);
    v7 = XStateChunk;
    if ( Length )
      *Length = *(_DWORD *)(8 * v5 + 0x7FFE03F4);
    v8 = 2;
    if ( (MEMORY[0x7FFE03EC] & 2) == 0 )
    {
      v10 = *(unsigned int *)(8 * v5 + 0x7FFE03F0);
      return &v7[v10 - 512];
    }
    v9 = *((_QWORD *)XStateChunk + 1);
    if ( (v6 & v9) != 0 )
    {
      v10 = 576LL;
      if ( (unsigned int)v5 > 2 )
      {
        v11 = 2147353604LL;
        do
        {
          if ( ((1LL << v8) & v9) != 0 )
          {
            if ( ((1LL << v8) & MEMORY[0x7FFE05F8]) != 0 )
              LODWORD(v10) = (v10 + 63) & 0xFFFFFFC0;
            v10 = (unsigned int)(*(_DWORD *)v11 + v10);
          }
          ++v8;
          v11 += 8LL;
        }
        while ( v8 < (unsigned int)v5 );
      }
      if ( (v6 & MEMORY[0x7FFE05F8]) != 0 )
        v10 = ((_DWORD)v10 + 63) & 0xFFFFFFC0;
      return &v7[v10 - 512];
    }
  }
  return 0LL;
}
