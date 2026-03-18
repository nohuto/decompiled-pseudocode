/*
 * XREFs of MarkNativeObjectsDefunct @ 0x1C00430C4
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C0042FEC (AMLIRemoveNativeObjectsFromNamespace.c)
 *     NotifyObjectDestruction @ 0x1C0044B70 (NotifyObjectDestruction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MarkNativeObjectsDefunct(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx

  if ( a1 )
  {
    v3 = *(_WORD *)(a1 + 58);
    if ( v3 == 6 || (unsigned __int16)(v3 - 11) <= 2u )
    {
      v4 = *(_QWORD *)(a1 + 24);
      if ( v4 )
      {
        do
        {
          if ( *(_QWORD *)(v4 + 40) == gpNativeNameSpaceOwner )
            *(_WORD *)(v4 + 56) |= 4u;
          v4 = *(_QWORD *)(v4 + 8);
        }
        while ( v4 != *(_QWORD *)(a1 + 24) );
      }
    }
  }
  if ( a2 )
    v5 = *(_QWORD *)(a2 + 24);
  else
    v5 = 0LL;
  while ( v5 )
  {
    if ( (*(_BYTE *)(v5 + 56) & 4) != 0 )
    {
      v6 = *(_QWORD *)(v5 + 128);
      if ( v6 )
      {
        *(_WORD *)(v6 + 56) |= 4u;
        *(_QWORD *)(v5 + 128) = 0LL;
        *(_WORD *)(v5 + 56) &= ~0x400u;
      }
    }
    v5 = *(_QWORD *)(v5 + 48);
  }
  result = gpNativeNameSpaceOwner;
  v8 = *(_QWORD *)(gpNativeNameSpaceOwner + 24);
  if ( v8 )
  {
    do
    {
      v9 = *(_QWORD *)(v8 + 48);
      v10 = v8;
      while ( (*(_BYTE *)(v10 + 56) & 4) == 0 )
      {
        v10 = *(_QWORD *)(v10 + 16);
        if ( !v10 )
          goto LABEL_22;
      }
      *(_WORD *)(v8 + 56) |= 4u;
LABEL_22:
      v8 = v9;
    }
    while ( v9 );
  }
  return result;
}
