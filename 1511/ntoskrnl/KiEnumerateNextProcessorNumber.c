/*
 * XREFs of KiEnumerateNextProcessorNumber @ 0x140076C5C
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140074F40 (PpmParkSteerInterrupts.c)
 *     KeGenericProcessorCallback @ 0x1400FF2DC (KeGenericProcessorCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnumerateNextProcessorNumber(__int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r9
  unsigned int v5; // edx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rax
  unsigned __int16 *v10; // rcx

  v2 = *a2;
  if ( *a2 )
    v5 = *v2;
  else
    v5 = *((unsigned __int16 *)a2 + 8) + 1;
  if ( a2[1] )
  {
LABEL_4:
    v6 = (unsigned __int64)a2[1];
    _BitScanForward64(&v7, v6);
    *(_BYTE *)(a1 + 2) = v7;
    *(_WORD *)a1 = *((_WORD *)a2 + 8);
    result = 0LL;
    a2[1] = (unsigned __int16 *)(v6 & ~(1LL << v7));
  }
  else
  {
    while ( 1 )
    {
      v9 = (unsigned __int16)++*((_WORD *)a2 + 8);
      if ( (unsigned int)v9 >= v5 )
        return 3221226021LL;
      v10 = *(unsigned __int16 **)&v2[4 * v9 + 4];
      a2[1] = v10;
      if ( v10 )
        goto LABEL_4;
    }
  }
  return result;
}
