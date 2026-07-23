/*
 * XREFs of ArbRetestAllocation @ 0x1406E53F4
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ArbpBuildAlternative @ 0x140559F84 (ArbpBuildAlternative.c)
 *     RtlCopyRangeList @ 0x14055AA1C (RtlCopyRangeList.c)
 *     RtlDeleteOwnersRanges @ 0x14055AD44 (RtlDeleteOwnersRanges.c)
 *     RtlFreeRangeList @ 0x14055AE14 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbRetestAllocation(__int64 a1, __int64 ***a2)
{
  __int64 **v4; // r8
  int v5; // edi
  __int64 **i; // rsi
  __int64 *j; // rsi
  __int64 v9; // [rsp+20h] [rbp-69h] BYREF
  _QWORD v10[10]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v11[8]; // [rsp+80h] [rbp-9h] BYREF

  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  v4 = a2[2];
  v10[7] = v11;
  LODWORD(v10[6]) = 1;
  v10[5] = v11;
  LOWORD(v10[8]) = 1;
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **, _QWORD))(a1 + 280))(
           a1,
           *((unsigned int *)a2 + 2),
           v4,
           *(_QWORD *)(a1 + 48));
    if ( v5 >= 0 )
      goto LABEL_8;
LABEL_17:
    RtlFreeRangeList(*(PRTL_RANGE_LIST *)(a1 + 48));
    return (unsigned int)v5;
  }
  v5 = RtlCopyRangeList(*(PRTL_RANGE_LIST *)(a1 + 48), *(PRTL_RANGE_LIST *)(a1 + 40));
  if ( v5 < 0 )
    goto LABEL_17;
  for ( i = (__int64 **)**a2; *a2 != i; i = (__int64 **)*i )
  {
    v5 = RtlDeleteOwnersRanges(*(PRTL_RANGE_LIST *)(a1 + 48), i[4]);
    if ( v5 < 0 )
      goto LABEL_17;
  }
LABEL_8:
  for ( j = **a2; *a2 != (__int64 **)j; j = (__int64 *)*j )
  {
    v10[9] = 0LL;
    v10[4] = j;
    v5 = ArbpBuildAlternative(a1, j[10], v11);
    if ( *((_DWORD *)j + 22) != 2 )
    {
      (*(void (__fastcall **)(__int64, _QWORD *, __int64 *))(a1 + 136))(j[9], v10, &v9);
      v10[1] = v10[0] - 1LL + v9;
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 224))(a1, v10);
      if ( v5 < 0 )
        goto LABEL_17;
      if ( v9 )
        (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 256))(a1, v10);
      if ( (v10[8] & 0x10) != 0 )
      {
        ExFreePoolWithTag((PVOID)v10[9], 0);
        LOWORD(v10[8]) &= ~0x10u;
      }
    }
  }
  return (unsigned int)v5;
}
