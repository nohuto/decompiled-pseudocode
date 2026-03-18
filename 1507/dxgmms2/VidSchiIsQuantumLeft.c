/*
 * XREFs of VidSchiIsQuantumLeft @ 0x1C0017760
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSelectContextFromThisPriority @ 0x1C001A20C (VidSchiSelectContextFromThisPriority.c)
 * Callees:
 *     VidSchiSetTransferContextRunningTime @ 0x1C0004824 (VidSchiSetTransferContextRunningTime.c)
 *     ?VidSchiSelectContextFromThisProcess@@YAXPEAU_VIDSCH_CONTEXT@@PEAPEAU1@@Z @ 0x1C00131D4 (-VidSchiSelectContextFromThisProcess@@YAXPEAU_VIDSCH_CONTEXT@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall VidSchiIsQuantumLeft(__int64 a1, struct _VIDSCH_CONTEXT **a2)
{
  __int64 v3; // rsi
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 *v7; // r8
  __int64 **v8; // rax
  __int64 v9; // r8
  __int64 **v10; // rax
  __int64 result; // rax
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 96);
  if ( _InterlockedCompareExchange(
         (volatile signed __int32 *)(a1 + 448),
         ((unsigned __int8)*(_DWORD *)(a1 + 176) >> 1) & 1,
         3) == 2 )
  {
    v5 = *(_QWORD *)(a1 + 96);
    v12 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v5 + 24) + 24LL),
      VidSchiResetContextQuantumAtISR,
      a1,
      *(unsigned int *)(*(_QWORD *)(v5 + 24) + 32LL),
      &v12);
    v6 = (__int64 *)(a1 + 8);
    v7 = *(__int64 **)(a1 + 8);
    v8 = *(__int64 ***)(a1 + 16);
    if ( v7[1] != a1 + 8 || *v8 != v6 )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (__int64)v8;
    v9 = 16LL * *(unsigned int *)(a1 + 396) + v3 + 2040;
    v10 = *(__int64 ***)(v9 + 8);
    *v6 = v9;
    *(_QWORD *)(a1 + 16) = v10;
    if ( *v10 != (__int64 *)v9 )
      __fastfail(3u);
    *v10 = v6;
    result = 0LL;
    *(_QWORD *)(v9 + 8) = v6;
  }
  else
  {
    VidSchiSelectContextFromThisProcess((struct _VIDSCH_CONTEXT *)a1, a2);
    if ( *a2 != (struct _VIDSCH_CONTEXT *)a1 )
      VidSchiSetTransferContextRunningTime((__int64)*a2, a1, 1);
    return 1LL;
  }
  return result;
}
