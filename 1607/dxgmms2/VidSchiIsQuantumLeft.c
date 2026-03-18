/*
 * XREFs of VidSchiIsQuantumLeft @ 0x1C000C920
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C00098B0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSelectContextFromThisPriority @ 0x1C00256C0 (VidSchiSelectContextFromThisPriority.c)
 * Callees:
 *     ?VidSchiSelectContextFromThisProcess@@YAXPEAU_VIDSCH_CONTEXT@@PEAPEAU1@@Z @ 0x1C000CBB0 (-VidSchiSelectContextFromThisProcess@@YAXPEAU_VIDSCH_CONTEXT@@PEAPEAU1@@Z.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C000E530 (VidSchiSetTransferContextRunningTime.c)
 */

__int64 __fastcall VidSchiIsQuantumLeft(struct _VIDSCH_CONTEXT *a1, struct _VIDSCH_CONTEXT **a2)
{
  __int64 v3; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // r8
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  char v16; // [rsp+60h] [rbp+8h] BYREF
  char v17; // [rsp+70h] [rbp+18h] BYREF

  v3 = *((_QWORD *)a1 + 12);
  if ( (*((_DWORD *)a1 + 44) & 2) != 0 )
  {
    v5 = *((_QWORD *)a1 + 12);
    v16 = 0;
    v6 = *(_QWORD *)(v5 + 24);
    v15[1] = a1;
    DpSynchronizeExecution(
      *(_QWORD *)(v6 + 24),
      VidSchiUpdateContextRunningTimeAtISR,
      v15,
      *(unsigned int *)(v6 + 32),
      &v16);
  }
  if ( _InterlockedCompareExchange(
         (volatile signed __int32 *)a1 + 112,
         ((unsigned __int8)*((_DWORD *)a1 + 44) >> 1) & 1,
         3) == 2 )
  {
    v9 = *((_QWORD *)a1 + 12);
    v17 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v9 + 24) + 24LL),
      VidSchiResetContextQuantumAtISR,
      a1,
      *(unsigned int *)(*(_QWORD *)(v9 + 24) + 32LL),
      &v17);
    v10 = (_QWORD *)((char *)a1 + 8);
    v11 = *((_QWORD *)a1 + 1);
    v12 = (_QWORD *)*((_QWORD *)a1 + 2);
    if ( *(struct _VIDSCH_CONTEXT **)(v11 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 8) || (_QWORD *)*v12 != v10 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v13 = v3 + 16 * (*((unsigned int *)a1 + 99) + 122LL);
    v14 = *(_QWORD **)(v13 + 8);
    if ( *v14 != v13 )
      __fastfail(3u);
    *v10 = v13;
    *((_QWORD *)a1 + 2) = v14;
    *v14 = v10;
    *(_QWORD *)(v13 + 8) = v10;
    return 0LL;
  }
  else
  {
    VidSchiSelectContextFromThisProcess(a1, a2);
    if ( *a2 != a1 )
    {
      LOBYTE(v7) = 1;
      VidSchiSetTransferContextRunningTime(*a2, a1, v7);
    }
    return 1LL;
  }
}
