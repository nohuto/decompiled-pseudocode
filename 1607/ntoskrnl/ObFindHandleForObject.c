/*
 * XREFs of ObFindHandleForObject @ 0x14045D2F4
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExEnumHandleTable @ 0x14045D3A0 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x1404F00E0 (ObReferenceProcessHandleTable.c)
 */

bool __fastcall ObFindHandleForObject(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v9; // bl
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v9 = 0;
  v10 = ObReferenceProcessHandleTable(a1);
  if ( v10 )
  {
    if ( a2 )
      v12[0] = a2 - 48;
    else
      v12[0] = 0LL;
    v12[1] = a3;
    v12[2] = a4;
    v9 = (unsigned __int8)ExEnumHandleTable(v10, ObpEnumFindHandleProcedure, v12, a5) != 0;
    ExReleaseRundownProtection(a1 + 92);
  }
  return v9;
}
