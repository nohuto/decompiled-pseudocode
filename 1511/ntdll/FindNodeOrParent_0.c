/*
 * XREFs of FindNodeOrParent_0 @ 0x18006D698
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x18006D420 (RtlDeleteElementGenericTable.c)
 *     RtlInsertElementGenericTable @ 0x18006D4C0 (RtlInsertElementGenericTable.c)
 *     RtlLookupElementGenericTable @ 0x18006D650 (RtlLookupElementGenericTable.c)
 *     RtlLookupElementGenericTableFull @ 0x1800E3CB0 (RtlLookupElementGenericTableFull.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall FindNodeOrParent_0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rsi
  unsigned int v7; // ebp
  int v8; // eax
  __int64 v10; // rax

  v3 = *a1;
  if ( !*a1 )
    return 0LL;
  v7 = 1;
  while ( 1 )
  {
    v8 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))a1[5])(a1, a2, v3 + 40);
    if ( !v8 )
      break;
    if ( v8 != 1 )
      goto LABEL_5;
    v10 = *(_QWORD *)(v3 + 16);
    if ( !v10 )
    {
      v7 = 3;
      goto LABEL_5;
    }
LABEL_7:
    v3 = v10;
  }
  v10 = *(_QWORD *)(v3 + 8);
  if ( v10 )
    goto LABEL_7;
  v7 = 2;
LABEL_5:
  *a3 = v3;
  return v7;
}
