/*
 * XREFs of CmpAssignSecurityDescriptorWrapper @ 0x140449A94
 * Callers:
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 * Callees:
 *     CmpAssignSecurityToKcb @ 0x140449C5C (CmpAssignSecurityToKcb.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140449D7C (ObAssignObjectSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorNode @ 0x1406597E0 (CmpGetSecurityDescriptorNode.c)
 */

__int64 __fastcall CmpAssignSecurityDescriptorWrapper(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  __int64 v5; // rbp
  __int64 v7; // rcx
  int SecurityDescriptorNode; // edi
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v9 = -1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(v2 + 32) + 8LL))(
         *(_QWORD *)(v2 + 32),
         *(unsigned int *)(v2 + 40),
         &v9);
  if ( !v5 )
    return 3221225626LL;
  ObAssignObjectSecurityDescriptor(a1, 0LL);
  if ( !KeGetCurrentThread()->PreviousMode )
  {
    v7 = *(_QWORD *)(v2 + 32);
    if ( (*(_DWORD *)(v7 + 5360) & 0x20) != 0 )
    {
      if ( *(_DWORD *)(v7 + 3040) )
        a2 = *(_QWORD *)(*(_QWORD *)(v7 + 3056) + 8LL) + 32LL;
    }
  }
  SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                             *(_QWORD *)(v2 + 32),
                             *(unsigned int *)(v2 + 40),
                             v5,
                             a2,
                             0,
                             v5 + 44);
  if ( SecurityDescriptorNode >= 0 )
    CmpAssignSecurityToKcb(v2, *(unsigned int *)(v5 + 44), 0);
  (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v2 + 32) + 16LL))(*(_QWORD *)(v2 + 32), &v9);
  return (unsigned int)SecurityDescriptorNode;
}
