/*
 * XREFs of ObInitProcess @ 0x140467784
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14046E1A4 (SeAuditingWithTokenForSubcategory.c)
 *     ExSweepHandleTable @ 0x140508B40 (ExSweepHandleTable.c)
 *     ExDestroyHandleTable @ 0x140508CB0 (ExDestroyHandleTable.c)
 *     ExEnumHandleTable @ 0x140521D30 (ExEnumHandleTable.c)
 *     ExCreateHandleTable @ 0x140523600 (ExCreateHandleTable.c)
 *     ExDupHandleTable @ 0x1405237E0 (ExDupHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v8; // rdi
  int v9; // r14d
  __int64 HandleTable; // rbx
  unsigned __int64 v11; // rtt
  unsigned __int64 v13; // rtt
  void *v14; // rbx
  unsigned __int64 v15; // rtt
  _QWORD v16[3]; // [rsp+38h] [rbp-30h] BYREF
  void *v17; // [rsp+70h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = ExCreateHandleTable(a2, 1LL);
    v17 = (void *)HandleTable;
LABEL_5:
    if ( HandleTable )
    {
      *(_QWORD *)(a2 + 1048) = HandleTable;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL, 0LL) )
      {
        v16[0] = a2;
        v16[1] = a1;
        ExEnumHandleTable(HandleTable, ObAuditInheritedHandleProcedure, v16, 0LL);
      }
      if ( v8 )
      {
        _m_prefetchw(&a1[92]);
        v11 = a1[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[92], v11 - 2, v11) )
          ExfReleaseRundownProtection(a1 + 92);
      }
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a2 + 1048) = 0LL;
      if ( v8 )
      {
        _m_prefetchw(&a1[92]);
        v15 = a1[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v15 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[92], v15 - 2, v15) )
          ExfReleaseRundownProtection(a1 + 92);
      }
      return 3221225626LL;
    }
  }
  v8 = ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v9 = ExDupHandleTable(a2, v8, a3, a4, (__int64)&v17);
  if ( v9 >= 0 )
  {
    HandleTable = (__int64)v17;
    goto LABEL_5;
  }
  _m_prefetchw(&a1[92]);
  v13 = a1[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[92], v13 - 2, v13) )
    ExfReleaseRundownProtection(a1 + 92);
  v14 = v17;
  if ( v17 )
  {
    ExSweepHandleTable(v17, 0LL);
    ExDestroyHandleTable(v14);
  }
  return (unsigned int)v9;
}
