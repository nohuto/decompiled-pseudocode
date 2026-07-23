/*
 * XREFs of MdlInvariantFindMdlInfo @ 0x140222C2C
 * Callers:
 *     MdlInvariantPostDriverCompletion @ 0x140222D20 (MdlInvariantPostDriverCompletion.c)
 *     MdlInvariantPostProcessing1 @ 0x140222DAC (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140222FA8 (MdlInvariantPreProcessing1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MdlInvariantFindMdlInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = *(_QWORD *)(a1 + 224);
  if ( !v2 )
    return 0LL;
  v3 = 0;
  if ( !*(_DWORD *)v2 )
    return 0LL;
  v4 = *(_QWORD *)(v2 + 8);
  while ( 1 )
  {
    v5 = *(_QWORD *)(32LL * v3 + v4);
    if ( v5 )
    {
      if ( v5 == a2 )
        break;
    }
    if ( ++v3 >= *(_DWORD *)v2 )
      return 0LL;
  }
  return v4 + 32LL * v3;
}
