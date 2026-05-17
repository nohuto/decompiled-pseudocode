/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x1800ED040
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x1800742CC (FindNodeOrParent_0.c)
 *     RealPredecessor @ 0x18007449C (RealPredecessor.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall RtlLookupFirstMatchingElementGenericTableAvl(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( (unsigned int)FindNodeOrParent_0(a1, a2, &v10) != 1 )
    return 0LL;
  v7 = v10;
  do
  {
    v8 = v7;
    v9 = RealPredecessor(v7);
    v7 = v9;
  }
  while ( v9 && (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD *))(a1 + 72))(a1, a2, v9 + 4) == 2 );
  *a3 = v8;
  return v8 + 4;
}
