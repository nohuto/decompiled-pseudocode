/*
 * XREFs of CmpAssignSecurityDescriptorWrapper @ 0x1403DFD88
 * Callers:
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 * Callees:
 *     CmpAssignSecurityToKcb @ 0x1403DFE54 (CmpAssignSecurityToKcb.c)
 *     CmpAssignSecurityDescriptor @ 0x1403DFF74 (CmpAssignSecurityDescriptor.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1403E01D8 (ObAssignObjectSecurityDescriptor.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptorWrapper(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v3; // rsi
  int v4; // edi
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v6 = -1;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v1 + 32) + 8LL))(
         *(_QWORD *)(v1 + 32),
         *(unsigned int *)(v1 + 40),
         &v6);
  if ( !v3 )
    return 3221225626LL;
  ObAssignObjectSecurityDescriptor(a1, 0LL);
  v4 = CmpAssignSecurityDescriptor(*(_QWORD *)(v1 + 32), 0);
  if ( v4 >= 0 )
    CmpAssignSecurityToKcb(v1, *(unsigned int *)(v3 + 44), 0);
  (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v1 + 32) + 16LL))(*(_QWORD *)(v1 + 32), &v6);
  return (unsigned int)v4;
}
