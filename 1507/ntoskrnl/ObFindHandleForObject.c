/*
 * XREFs of ObFindHandleForObject @ 0x140521C74
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x140521D30 (ExEnumHandleTable.c)
 */

bool __fastcall ObFindHandleForObject(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v9; // bl
  unsigned __int64 v10; // rcx
  char v11; // al
  struct _EX_RUNDOWN_REF *v12; // rcx
  unsigned __int64 v13; // rtt
  _QWORD v15[4]; // [rsp+28h] [rbp-20h] BYREF

  v9 = 0;
  v10 = ObReferenceProcessHandleTable(a1);
  if ( v10 )
  {
    if ( a2 )
      v15[0] = a2 - 48;
    else
      v15[0] = 0LL;
    v15[1] = a3;
    v15[2] = a4;
    v11 = ExEnumHandleTable(v10, ObpEnumFindHandleProcedure, v15, a5);
    v12 = a1 + 92;
    v9 = v11 != 0;
    _m_prefetchw(&a1[92]);
    v13 = a1[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v13 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)v12,
                  (v12->Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  v12->Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(v12);
  }
  return v9;
}
