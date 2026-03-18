/*
 * XREFs of KeEnumerateNextProcessor @ 0x140101880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextProcessor(_DWORD *a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r8
  unsigned int v4; // r9d
  __int64 v5; // rax
  unsigned __int16 *v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8

  v2 = *a2;
  if ( *a2 )
    v4 = *v2;
  else
    v4 = *((unsigned __int16 *)a2 + 8) + 1;
  if ( a2[1] )
  {
LABEL_6:
    v7 = (unsigned __int64)a2[1];
    _BitScanForward64(&v8, v7);
    a2[1] = (unsigned __int16 *)(v7 & ~(1LL << v8));
    *a1 = KiProcessorNumberToIndexMappingTable[64 * *((unsigned __int16 *)a2 + 8) + (unsigned __int8)v8];
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v5 = (unsigned __int16)++*((_WORD *)a2 + 8);
      if ( (unsigned int)v5 >= v4 )
        return 3221226021LL;
      v6 = *(unsigned __int16 **)&v2[4 * v5 + 4];
      a2[1] = v6;
      if ( v6 )
        goto LABEL_6;
    }
  }
}
