/*
 * XREFs of ComputeNameLength @ 0x140687E1C
 * Callers:
 *     PfxFindPrefix @ 0x140687E98 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x140687F70 (PfxInsertPrefix.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeNameLength(unsigned __int16 *a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // edx
  unsigned int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // rcx
  _BYTE *v6; // rax
  __int64 v7; // rcx

  v1 = *a1 - 1;
  v2 = 1;
  if ( (_BYTE)NlsMbCodePageTag )
  {
    v3 = 0;
    if ( *a1 != 1 )
    {
      v4 = *((_QWORD *)a1 + 1);
      do
      {
        v5 = *(unsigned __int8 *)(v3 + v4);
        if ( NlsLeadByteInfoTable[v5] )
        {
          v3 += 2;
        }
        else
        {
          if ( (_BYTE)v5 == 92 )
            ++v2;
          ++v3;
        }
      }
      while ( v3 < v1 );
    }
  }
  else if ( *a1 != 1 )
  {
    v6 = (_BYTE *)*((_QWORD *)a1 + 1);
    v7 = v1;
    do
    {
      if ( *v6 == 92 )
        ++v2;
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  return v2;
}
