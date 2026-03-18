/*
 * XREFs of MarkNativeObjectsDefunct @ 0x1C005A794
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C005A6BC (AMLIRemoveNativeObjectsFromNamespace.c)
 *     NotifyObjectDestruction @ 0x1C005C30C (NotifyObjectDestruction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MarkNativeObjectsDefunct(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  __int64 *v4; // rdx
  __int64 *i; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx

  if ( a1 )
  {
    v3 = *(_WORD *)(a1 + 66);
    if ( v3 == 6 || (unsigned __int16)(v3 - 11) <= 2u )
    {
      v4 = (__int64 *)(a1 + 24);
      for ( i = *(__int64 **)(a1 + 24); v4 != i; i = (__int64 *)*i )
      {
        if ( i[6] == gpNativeNameSpaceOwner )
          *((_WORD *)i + 32) |= 4u;
      }
    }
  }
  if ( a2 )
    v6 = *(_QWORD *)(a2 + 24);
  else
    v6 = 0LL;
  while ( v6 )
  {
    if ( (*(_BYTE *)(v6 + 64) & 4) != 0 )
    {
      v7 = *(_QWORD *)(v6 + 136);
      if ( v7 )
      {
        *(_WORD *)(v7 + 64) |= 4u;
        *(_QWORD *)(v6 + 136) = 0LL;
        *(_WORD *)(v6 + 64) &= ~0x400u;
      }
    }
    v6 = *(_QWORD *)(v6 + 56);
  }
  result = gpNativeNameSpaceOwner;
  v9 = *(_QWORD *)(gpNativeNameSpaceOwner + 24);
  if ( v9 )
  {
    do
    {
      v10 = *(_QWORD *)(v9 + 56);
      v11 = v9;
      while ( (*(_BYTE *)(v11 + 64) & 4) == 0 )
      {
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v11 )
          goto LABEL_23;
      }
      *(_WORD *)(v9 + 64) |= 4u;
LABEL_23:
      v9 = v10;
    }
    while ( v10 );
  }
  return result;
}
