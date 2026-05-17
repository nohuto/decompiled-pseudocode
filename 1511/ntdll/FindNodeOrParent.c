/*
 * XREFs of FindNodeOrParent @ 0x1800688E4
 * Callers:
 *     RtlLookupElementGenericTableFullAvl @ 0x1800686B0 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1800686F0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x180068730 (RtlInsertElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1800E3D00 (RtlEnumerateGenericTableLikeADirectory.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall FindNodeOrParent(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rsi
  unsigned int v7; // ebp
  int v8; // eax
  __int64 v9; // rax

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 1;
  while ( 1 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, v6 + 32);
    if ( !v8 )
      break;
    if ( v8 != 1 )
      goto LABEL_9;
    v9 = *(_QWORD *)(v6 + 16);
    if ( !v9 )
    {
      v7 = 3;
      goto LABEL_9;
    }
LABEL_5:
    v6 = v9;
  }
  v9 = *(_QWORD *)(v6 + 8);
  if ( v9 )
    goto LABEL_5;
  v7 = 2;
LABEL_9:
  *a3 = v6;
  return v7;
}
