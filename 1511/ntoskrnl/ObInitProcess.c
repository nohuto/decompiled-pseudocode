/*
 * XREFs of ObInitProcess @ 0x1403E3544
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExDupHandleTable @ 0x1403E2B60 (ExDupHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1403E3928 (SeAuditingWithTokenForSubcategory.c)
 *     ExCreateHandleTable @ 0x140460B44 (ExCreateHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x14047D304 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x140480DE0 (ExEnumHandleTable.c)
 *     ExSweepHandleTable @ 0x140488230 (ExSweepHandleTable.c)
 *     ExDestroyHandleTable @ 0x1404AE2B0 (ExDestroyHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, struct _KPROCESS *a2, unsigned int a3, _BYTE *a4)
{
  unsigned int *v8; // rsi
  int v9; // ebp
  __int64 HandleTable; // rbp
  PVOID v12; // rbx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID v14; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = ExCreateHandleTable(a2, 1LL);
LABEL_5:
    if ( HandleTable )
    {
      a2[1].ActiveProcessors.Bitmap[5] = HandleTable;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL) )
      {
        v13[0] = a2;
        v13[1] = a1;
        ExEnumHandleTable(HandleTable, ObAuditInheritedHandleProcedure, v13, 0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 92);
      return 0LL;
    }
    else
    {
      a2[1].ActiveProcessors.Bitmap[5] = 0LL;
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 92);
      return 3221225626LL;
    }
  }
  v8 = (unsigned int *)ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v9 = ExDupHandleTable((__int64)a2, v8, a3, a4, &v14);
  if ( v9 >= 0 )
  {
    HandleTable = (__int64)v14;
    goto LABEL_5;
  }
  ExReleaseRundownProtection_0(a1 + 92);
  v12 = v14;
  if ( v14 )
  {
    ExSweepHandleTable(a2);
    ExDestroyHandleTable(v12);
  }
  return (unsigned int)v9;
}
