/*
 * XREFs of VidSchiIsQuantumLeft @ 0x1C000DBC0
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C000ADA0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSelectContextFromThisPriority @ 0x1C0021D30 (VidSchiSelectContextFromThisPriority.c)
 * Callees:
 *     VidSchiSetTransferContextRunningTime @ 0x1C000F790 (VidSchiSetTransferContextRunningTime.c)
 */

__int64 __fastcall VidSchiIsQuantumLeft(__int64 a1, volatile signed __int32 **a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  bool v8; // zf
  __int64 v9; // rax
  _QWORD **v10; // rdi
  int v11; // ebx
  _QWORD *v12; // r14
  __int64 result; // rax
  __int64 *v14; // r8
  __int64 *v15; // rdx
  __int64 **v16; // rax
  __int64 v17; // r8
  __int64 **v18; // rax
  volatile signed __int32 *v19; // r10
  __int64 v20; // rax
  _QWORD v21[4]; // [rsp+30h] [rbp-48h] BYREF
  char v22; // [rsp+80h] [rbp+8h] BYREF
  char v23; // [rsp+90h] [rbp+18h] BYREF
  char v24; // [rsp+98h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 96);
  if ( (*(_DWORD *)(a1 + 176) & 2) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 96);
    v22 = 0;
    v7 = *(_QWORD *)(v6 + 24);
    v21[1] = a1;
    DpSynchronizeExecution(
      *(_QWORD *)(v7 + 24),
      VidSchiUpdateContextRunningTimeAtISR,
      v21,
      *(unsigned int *)(v7 + 32),
      &v22);
  }
  v8 = _InterlockedCompareExchange(
         (volatile signed __int32 *)(a1 + 448),
         ((unsigned __int8)*(_DWORD *)(a1 + 176) >> 1) & 1,
         3) == 2;
  v9 = *(_QWORD *)(a1 + 96);
  if ( v8 )
  {
    v23 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v9 + 24) + 24LL),
      VidSchiResetContextQuantumAtISR,
      a1,
      *(unsigned int *)(*(_QWORD *)(v9 + 24) + 32LL),
      &v23);
    v14 = *(__int64 **)(a1 + 8);
    v15 = (__int64 *)(a1 + 8);
    v16 = *(__int64 ***)(a1 + 16);
    if ( v14[1] != a1 + 8 || *v16 != v15 )
      __fastfail(3u);
    *v16 = v14;
    v14[1] = (__int64)v16;
    v17 = 16LL * *(unsigned int *)(a1 + 396) + v4 + 1912;
    v18 = *(__int64 ***)(v17 + 8);
    *v15 = v17;
    *(_QWORD *)(a1 + 16) = v18;
    if ( *v18 != (__int64 *)v17 )
      __fastfail(3u);
    *v18 = v15;
    result = 0LL;
    *(_QWORD *)(v17 + 8) = v15;
    return result;
  }
  v10 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 24LL)
                              + 8LL * *(unsigned int *)(*(_QWORD *)(v9 + 24) + 4LL))
                  + 648LL);
  v11 = 0;
  while ( 1 )
  {
    v12 = *v10;
    if ( *v10 != v10 )
      break;
LABEL_6:
    if ( (unsigned int)++v11 >= 2 )
    {
      *a2 = (volatile signed __int32 *)a1;
      return 1LL;
    }
  }
  while ( 1 )
  {
    v19 = (volatile signed __int32 *)(v12 - 51);
    if ( *(v12 - 39) == *(_QWORD *)(a1 + 96) )
      break;
LABEL_17:
    v12 = (_QWORD *)*v12;
    if ( v12 == v10 )
      goto LABEL_6;
  }
  if ( _InterlockedCompareExchange(v19 + 112, ((unsigned __int8)*((_DWORD *)v19 + 44) >> 1) & 1, 3) == 2 )
  {
    v20 = *((_QWORD *)v19 + 12);
    v24 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v20 + 24) + 24LL),
      VidSchiResetContextQuantumAtISR,
      v12 - 51,
      *(unsigned int *)(*(_QWORD *)(v20 + 24) + 32LL),
      &v24);
    goto LABEL_17;
  }
  *a2 = v19;
  if ( v19 != (volatile signed __int32 *)a1 )
  {
    LOBYTE(a3) = 1;
    VidSchiSetTransferContextRunningTime(v12 - 51, a1, a3);
  }
  return 1LL;
}
