/*
 * XREFs of DDCCICleanUpWrap @ 0x1C01320D0
 * Callers:
 *     <none>
 * Callees:
 *     operator_delete @ 0x1C0132128 (operator_delete.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 DDCCICleanUpWrap()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  v0 = qword_1C03234C0;
  if ( qword_1C03234C0 )
  {
    v1 = 0LL;
    if ( *(_DWORD *)(qword_1C03234C0 + 20) )
    {
      do
      {
        v3 = *(void (__fastcall ****)(_QWORD, __int64))(*(_QWORD *)(v0 + 8) + 8 * v1);
        if ( v3 )
          (**v3)(v3, 1LL);
        *(_QWORD *)(*(_QWORD *)(v0 + 8) + 8 * v1) = 0LL;
        v1 = (unsigned int)(v1 + 1);
      }
      while ( (unsigned int)v1 < *(_DWORD *)(v0 + 20) );
    }
    operator_delete(*(_QWORD *)(v0 + 8));
    CMutex::~CMutex((CMutex *)v0);
    result = operator_delete(v0);
  }
  qword_1C03234C0 = 0LL;
  return result;
}
