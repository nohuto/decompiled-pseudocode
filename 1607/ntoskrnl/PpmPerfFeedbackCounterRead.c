/*
 * XREFs of PpmPerfFeedbackCounterRead @ 0x140143D2C
 * Callers:
 *     PpmInstallFeedbackCounters @ 0x140143BEC (PpmInstallFeedbackCounters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfFeedbackCounterRead(__int64 a1, __int64 a2, _DWORD *a3)
{
  bool v3; // zf
  __int64 v5; // rcx
  __int64 v7; // r10
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_BYTE *)(a1 + 33) == 0;
  v5 = *(_QWORD *)(a1 + 40);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, _DWORD *))a1)(v5, a3);
  (*(void (__fastcall **)(__int64, __int64, __int64 *, __int64 *))a1)(v5, a2, &v12, &v13);
  v7 = *(_QWORD *)(a1 + 16);
  if ( v12 != v7 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = v12 - v7;
    v11 = v13 - v9;
    *(_DWORD *)(a1 + 24) = (v13 - v9) * (unsigned __int64)*(unsigned __int8 *)(a1 + 34) / (v12 - v7);
    *(_QWORD *)(a1 + 16) = v7 + v10;
    *(_QWORD *)(a1 + 8) = v9 + v11;
  }
  result = *(unsigned int *)(a1 + 24);
  *a3 = result;
  return result;
}
