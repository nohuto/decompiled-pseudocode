/*
 * XREFs of ExpCreateSystemThreadForNode @ 0x1404FA334
 * Callers:
 *     ExpWorkerHotAddProcessor @ 0x1404045E4 (ExpWorkerHotAddProcessor.c)
 *     ExpCreateWorkerThread @ 0x1404FAE8C (ExpCreateWorkerThread.c)
 *     ExpWorkerInitialization @ 0x1407E01DC (ExpWorkerInitialization.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x14002B7F8 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     PsCreateSystemThreadEx @ 0x1404F927C (PsCreateSystemThreadEx.c)
 */

NTSTATUS __fastcall ExpCreateSystemThreadForNode(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _GROUP_AFFINITY v9; // [rsp+50h] [rbp-48h] BYREF
  __m128i v10; // [rsp+60h] [rbp-38h] BYREF
  __int64 v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  __int128 v13; // [rsp+80h] [rbp-18h]
  int v14; // [rsp+A8h] [rbp+10h] BYREF

  KeQueryNodeActiveAffinity(*(_WORD *)(a2 + 146), &v9, 0LL);
  v14 = KeSelectIdealProcessor(a2, (__int64)&v9, (int *)(a2 + 1304));
  v10.m128i_i64[1] = 0LL;
  v12 = 0;
  v11 = 0LL;
  v10.m128i_i32[0] = 48;
  v13 = 0LL;
  return PsCreateSystemThreadEx(a1, 0x1FFFFF, &v10, 0LL, 0LL, a3, a4, &v9, &v14);
}
