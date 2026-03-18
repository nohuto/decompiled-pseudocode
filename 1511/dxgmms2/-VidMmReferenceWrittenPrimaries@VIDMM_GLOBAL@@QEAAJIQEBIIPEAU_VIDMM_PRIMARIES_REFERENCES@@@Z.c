/*
 * XREFs of ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJIQEBIIPEAU_VIDMM_PRIMARIES_REFERENCES@@@Z @ 0x1C00505A0
 * Callers:
 *     VidMmReferenceWrittenPrimaries @ 0x1C00117E0 (VidMmReferenceWrittenPrimaries.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00117CC (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReferenceWrittenPrimaries(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        const unsigned int *const a3,
        unsigned int a4,
        struct _VIDMM_PRIMARIES_REFERENCES *a5)
{
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  struct DXGPROCESS *v14; // r15
  unsigned int v15; // r14d
  char *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v21; // rcx
  __int64 v22; // r11
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // r9
  volatile signed __int32 *v26; // r9
  __int64 v27; // r11
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // r13d

  Current = DXGPROCESS::GetCurrent();
  v13 = 0LL;
  v14 = Current;
  v15 = 0;
  v16 = (char *)Current + 192;
  if ( Current != (struct DXGPROCESS *)-192LL && *((struct _KTHREAD **)Current + 25) == KeGetCurrentThread() )
  {
    v30 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v30 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v30);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v16, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v31 = *((_DWORD *)v16 + 4);
      if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v17, &EventBlockThread, v18, v31);
    }
    ExAcquirePushLockSharedEx(v16, 0LL);
  }
  v19 = 0LL;
  *(_QWORD *)a5 = 0LL;
  if ( !a2 )
    goto LABEL_6;
  while ( 1 )
  {
    v21 = (*a3 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v21 >= *((_DWORD *)v14 + 58) )
      break;
    v22 = *((_QWORD *)v14 + 27);
    v23 = *(_DWORD *)(v22 + 16LL * (unsigned int)v21 + 8);
    if ( ((*a3 >> 26) & 0x30) != (*(_BYTE *)(v22 + 16LL * (unsigned int)v21 + 8) & 0x30) )
      break;
    if ( (v23 & 0x1000) != 0 )
      break;
    if ( (v23 & 0xF) == 0 )
      break;
    v24 = 2 * v21;
    if ( (*(_BYTE *)(v22 + 8 * v24 + 8) & 0xF) != 5 )
      break;
    v25 = *(_QWORD *)(v22 + 8 * v24);
    if ( !v25 )
      break;
    v26 = *(volatile signed __int32 **)(v25 + 24);
    v27 = **(_QWORD **)v26;
    v29 = **(unsigned int **)(v27 + 472);
    v28 = ((unsigned int)v29 >> 6) & 0x80000 | ((unsigned int)v29 | (((unsigned int)v29 | (**(_DWORD **)(v27 + 472) >> 1)) >> 11)) & 0x80000;
    LOBYTE(v28) = (((unsigned int)v29 >> 6) & 0x80000 | ((unsigned int)v29 | (((unsigned int)v29 | (**(_DWORD **)(v27 + 472) >> 1)) >> 11)) & 0x80000) != 0;
    LOBYTE(v29) = (v29 & 0x100000) != 0;
    if ( (**(_DWORD **)(v27 + 472) & 0x200000) != 0 )
    {
      *((_DWORD *)a5 + 34) |= 1u;
      if ( !(_BYTE)v28 )
        goto LABEL_19;
LABEL_15:
      if ( *(_BYTE *)(v27 + 93) )
      {
        v33 = WdLogNewEntry5_WdWarning(v28);
        WdLogEvent5_WdWarning(v33);
        v15 = -1071775482;
        goto LABEL_33;
      }
      _InterlockedExchangeAdd(v26 + 26, a4);
      *((_QWORD *)a5 + *(unsigned int *)a5 + 1) = v26;
      if ( *(_DWORD *)a5 >= 0x10u )
        ++*((_DWORD *)this + 1794);
      ++*(_DWORD *)a5;
      *((_DWORD *)a5 + 1) |= 1 << ((*(_DWORD *)(*(_QWORD *)(v27 + 40) + 4LL) >> 6) & 0xF);
      goto LABEL_19;
    }
    if ( (_BYTE)v28 )
      goto LABEL_15;
    if ( !(_BYTE)v29 )
    {
      v32 = WdLogNewEntry5_WdError(v28, v29, v19);
      *(_QWORD *)(v32 + 24) = 19537LL;
      goto LABEL_32;
    }
LABEL_19:
    v19 = (unsigned int)(v19 + 1);
    ++a3;
    if ( (unsigned int)v19 >= a2 )
      goto LABEL_6;
  }
  v32 = ((__int64 (*)(void))WdLogNewEntry5_WdError)();
  *(_QWORD *)(v32 + 24) = 19513LL;
LABEL_32:
  WdLogEvent5_WdError(v32);
  v15 = -1073741811;
LABEL_33:
  if ( *(_DWORD *)a5 )
  {
    v34 = -a4;
    do
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a5 + v13 + 1) + 104LL), v34);
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < *(_DWORD *)a5 );
  }
LABEL_6:
  ExReleasePushLockSharedEx(v16, 0LL);
  KeLeaveCriticalRegion();
  return v15;
}
