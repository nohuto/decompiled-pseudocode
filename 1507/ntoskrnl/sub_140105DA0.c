/*
 * XREFs of sub_140105DA0 @ 0x140105DA0
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x14010589C (RtlDeleteElementGenericTable.c)
 *     RtlInsertElementGenericTable @ 0x1401059A8 (RtlInsertElementGenericTable.c)
 *     RtlLookupElementGenericTableFull @ 0x14015DB48 (RtlLookupElementGenericTableFull.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140105DA0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v10; // rax

  v3 = *a1;
  if ( !*a1 )
    return 0LL;
  v7 = 1;
  while ( 1 )
  {
    v8 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))a1[5])(a1, a2, v3 + 40);
    if ( v8 )
      break;
    v10 = *(_QWORD *)(v3 + 8);
    if ( !v10 )
    {
      v7 = 2;
      goto LABEL_5;
    }
LABEL_7:
    v3 = v10;
  }
  if ( v8 != 1 )
    goto LABEL_5;
  v10 = *(_QWORD *)(v3 + 16);
  if ( v10 )
    goto LABEL_7;
  v7 = 3;
LABEL_5:
  *a3 = v3;
  return v7;
}
