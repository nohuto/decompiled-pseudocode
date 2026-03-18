/*
 * XREFs of ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00544D4
 * Callers:
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0053060 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C005F6BC (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_PROCESS::RemoveCommitment(
        VIDMM_PROCESS *this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        char a5,
        struct _VIDMM_GLOBAL_ALLOC *a6)
{
  __int64 v8; // rsi
  __int64 v9; // r11
  __int64 v10; // r8
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdx
  char v15; // cl
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  signed __int64 v19; // rdx
  int PriorityClass; // eax
  __int64 v21; // r8
  __int64 v22; // r11

  v8 = a3;
  v9 = *((_QWORD *)a6 + 2);
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a3);
  if ( v10 )
    v11 = *(_QWORD *)(v10 + 16) + 184LL * *((unsigned int *)a4 + 5);
  else
    v11 = 0LL;
  *(_QWORD *)(v11 + 16) -= v9;
  --*(_DWORD *)(v11 + 56);
  if ( !a5 )
    goto LABEL_10;
  --*(_DWORD *)(v11 + 8);
  v12 = (_QWORD *)((char *)a2 + 16);
  v13 = *((_QWORD *)a2 + 2);
  v14 = (_QWORD *)*((_QWORD *)a2 + 3);
  if ( *(_QWORD **)(v13 + 8) != v12 || (_QWORD *)*v14 != v12 )
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *v12 = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  if ( *(_DWORD *)(v11 + 8) )
LABEL_10:
    v15 = 0;
  else
    v15 = 1;
  v16 = (_QWORD *)(v11 + 24);
  if ( v15 )
  {
    v17 = *v16;
    v18 = (_QWORD *)v16[1];
    if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v18 != v16 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    *v16 = 0LL;
    v16[1] = 0LL;
  }
  v19 = _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * v8) + 48LL)
                                    + 240LL * (*((_DWORD *)a6 + 19) & 0x3F)
                                    + 8LL * *((int *)a4 + 108)
                                    + 176),
          -v9);
  if ( (*((_DWORD *)a4 + 14) & 0x1001) != 0 && (*((_DWORD *)a6 + 19) & 0x400) == 0 )
  {
    PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a6 + 94), v19);
    *(_QWORD *)(v21 + 8LL * PriorityClass + 200) -= v22;
  }
}
