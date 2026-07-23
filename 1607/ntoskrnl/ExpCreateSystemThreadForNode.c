/*
 * XREFs of ExpCreateSystemThreadForNode @ 0x1403E5C70
 * Callers:
 *     ExpWorkerHotAddProcessor @ 0x1403DFF80 (ExpWorkerHotAddProcessor.c)
 *     ExpCreateWorkerThread @ 0x1403E5BC4 (ExpCreateWorkerThread.c)
 *     ExpWorkerInitialization @ 0x1407B4A64 (ExpWorkerInitialization.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14000509C (KeQueryNodeActiveAffinity.c)
 *     KeSelectIdealProcessor @ 0x14007D230 (KeSelectIdealProcessor.c)
 *     PsCreateSystemThreadEx @ 0x1403E5D7C (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall ExpCreateSystemThreadForNode(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _GROUP_AFFINITY v9; // [rsp+50h] [rbp-48h] BYREF
  int v10; // [rsp+60h] [rbp-38h] BYREF
  __int64 v11; // [rsp+68h] [rbp-30h]
  __int64 v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  __int128 v14; // [rsp+80h] [rbp-18h]
  int v15; // [rsp+A8h] [rbp+10h] BYREF

  KeQueryNodeActiveAffinity(*(_WORD *)(a2 + 146), &v9, 0LL);
  v15 = KeSelectIdealProcessor(a2, (__int64)&v9, (_DWORD *)(a2 + 2088));
  v11 = 0LL;
  v13 = 0;
  v12 = 0LL;
  v10 = 48;
  v14 = 0LL;
  return PsCreateSystemThreadEx(a1, 0x1FFFFF, (unsigned int)&v10, 0, 0LL, a3, a4, (__int64)&v9, (__int64)&v15);
}
