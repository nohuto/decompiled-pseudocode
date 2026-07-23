/*
 * XREFs of ObInitProcess @ 0x14045E3D4
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExEnumHandleTable @ 0x14045D3A0 (ExEnumHandleTable.c)
 *     ExDupHandleTable @ 0x14045D6B0 (ExDupHandleTable.c)
 *     ExDestroyHandleTable @ 0x14045DFCC (ExDestroyHandleTable.c)
 *     ExSweepHandleTable @ 0x14045E200 (ExSweepHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14045F3F4 (SeAuditingWithTokenForSubcategory.c)
 *     ExCreateHandleTable @ 0x1404ACEEC (ExCreateHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x1404F00E0 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, _KPROCESS *a2, unsigned int a3, _BYTE *a4)
{
  unsigned int *v8; // rsi
  int v9; // ebp
  unsigned int *HandleTable; // rbp
  unsigned int *v12; // rbx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int *v14; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = (unsigned int *)ExCreateHandleTable(a2, 1LL);
LABEL_5:
    if ( HandleTable )
    {
      a2[1].ActiveProcessors.Bitmap[5] = (unsigned __int64)HandleTable;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(124LL) )
      {
        v13[0] = a2;
        v13[1] = a1;
        ExEnumHandleTable(
          HandleTable,
          (__int64 (__fastcall *)(unsigned int *, signed __int64 *, __int64, __int64))ObAuditInheritedHandleProcedure,
          (__int64)v13,
          0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection(a1 + 92);
      return 0LL;
    }
    else
    {
      a2[1].ActiveProcessors.Bitmap[5] = 0LL;
      if ( v8 )
        ExReleaseRundownProtection(a1 + 92);
      return 3221225626LL;
    }
  }
  v8 = (unsigned int *)ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v9 = ExDupHandleTable((__int64)a2, v8, a3, a4, &v14);
  if ( v9 >= 0 )
  {
    HandleTable = v14;
    goto LABEL_5;
  }
  ExReleaseRundownProtection(a1 + 92);
  v12 = v14;
  if ( v14 )
  {
    ExSweepHandleTable(a2, (__int64)v14, 0);
    ExDestroyHandleTable(v12);
  }
  return (unsigned int)v9;
}
