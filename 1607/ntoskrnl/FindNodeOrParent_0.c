/*
 * XREFs of FindNodeOrParent_0 @ 0x1400C3BFC
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x1400C35A4 (RtlDeleteElementGenericTable.c)
 *     RtlInsertElementGenericTable @ 0x1400C3620 (RtlInsertElementGenericTable.c)
 *     RtlLookupElementGenericTableFull @ 0x140213B60 (RtlLookupElementGenericTableFull.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindNodeOrParent_0(__int64 *a1, __int64 a2, _QWORD *a3)
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
