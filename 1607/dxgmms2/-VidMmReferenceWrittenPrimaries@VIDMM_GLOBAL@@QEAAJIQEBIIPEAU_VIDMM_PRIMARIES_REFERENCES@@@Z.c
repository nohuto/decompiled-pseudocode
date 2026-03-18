/*
 * XREFs of ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJIQEBIIPEAU_VIDMM_PRIMARIES_REFERENCES@@@Z @ 0x1C0057C50
 * Callers:
 *     VidMmReferenceWrittenPrimaries @ 0x1C000FD50 (VidMmReferenceWrittenPrimaries.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C000FC70 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
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
  __int64 v11; // rdi
  struct DXGPROCESS *v12; // r15
  unsigned int v13; // r14d
  char *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r11
  __int64 v23; // r11
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r13d

  Current = DXGPROCESS::GetCurrent();
  v11 = 0LL;
  v12 = Current;
  v13 = 0;
  v14 = (char *)Current + 184;
  if ( Current != (struct DXGPROCESS *)-184LL && *((struct _KTHREAD **)Current + 24) == KeGetCurrentThread() )
  {
    v26 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v26 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v26);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v27 = *((_DWORD *)v14 + 4);
      if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v15, &EventBlockThread, v16, v27);
    }
    ExAcquirePushLockSharedEx(v14, 0LL);
  }
  v18 = 0LL;
  *(_QWORD *)a5 = 0LL;
  if ( !a2 )
    goto LABEL_6;
  while ( 1 )
  {
    v20 = *a3;
    v21 = (*a3 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v21 >= *((_DWORD *)v12 + 56) )
      break;
    v22 = *((_QWORD *)v12 + 26);
    v20 = ((unsigned int)v20 >> 26) & 0x30;
    v17 = *(unsigned int *)(v22 + 16LL * (unsigned int)v21 + 8);
    if ( (_BYTE)v20 != (*(_BYTE *)(v22 + 16LL * (unsigned int)v21 + 8) & 0x30) )
      break;
    if ( (v17 & 0x1000) != 0 )
      break;
    if ( (v17 & 0xF) == 0 )
      break;
    v21 *= 2LL;
    if ( (*(_BYTE *)(v22 + 8 * v21 + 8) & 0xF) != 5 )
      break;
    v17 = *(_QWORD *)(v22 + 8 * v21);
    if ( !v17 )
      break;
    v17 = *(_QWORD *)(v17 + 24);
    v23 = **(_QWORD **)v17;
    v25 = **(unsigned int **)(v23 + 504);
    v24 = ((unsigned int)v25 >> 6) & 0x80000 | ((unsigned int)v25 | (((unsigned int)v25 | (**(_DWORD **)(v23 + 504) >> 1)) >> 11)) & 0x80000;
    LOBYTE(v24) = (((unsigned int)v25 >> 6) & 0x80000 | ((unsigned int)v25 | (((unsigned int)v25 | (**(_DWORD **)(v23 + 504) >> 1)) >> 11)) & 0x80000) != 0;
    LOBYTE(v25) = (v25 & 0x100000) != 0;
    if ( (**(_DWORD **)(v23 + 504) & 0x200000) != 0 )
    {
      *((_DWORD *)a5 + 34) |= 1u;
      if ( !(_BYTE)v24 )
        goto LABEL_19;
LABEL_15:
      if ( *(_BYTE *)(v23 + 96) )
      {
        v29 = WdLogNewEntry5_WdWarning(v24);
        WdLogEvent5_WdWarning(v29);
        v13 = -1071775482;
        goto LABEL_33;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 104), a4);
      *((_QWORD *)a5 + *(unsigned int *)a5 + 1) = v17;
      if ( *(_DWORD *)a5 >= 0x10u )
        ++*((_DWORD *)this + 1794);
      ++*(_DWORD *)a5;
      *((_DWORD *)a5 + 1) |= 1 << ((*(_DWORD *)(*(_QWORD *)(v23 + 40) + 4LL) >> 6) & 0xF);
      goto LABEL_19;
    }
    if ( (_BYTE)v24 )
      goto LABEL_15;
    if ( !(_BYTE)v25 )
    {
      v28 = WdLogNewEntry5_WdError(v24, v25, v18, v17);
      *(_QWORD *)(v28 + 24) = 20637LL;
      goto LABEL_32;
    }
LABEL_19:
    v18 = (unsigned int)(v18 + 1);
    ++a3;
    if ( (unsigned int)v18 >= a2 )
      goto LABEL_6;
  }
  v28 = WdLogNewEntry5_WdError(v21, v20, v18, v17);
  *(_QWORD *)(v28 + 24) = 20613LL;
LABEL_32:
  WdLogEvent5_WdError(v28);
  v13 = -1073741811;
LABEL_33:
  if ( *(_DWORD *)a5 )
  {
    v30 = -a4;
    do
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a5 + v11 + 1) + 104LL), v30);
      v11 = (unsigned int)(v11 + 1);
    }
    while ( (unsigned int)v11 < *(_DWORD *)a5 );
  }
LABEL_6:
  ExReleasePushLockSharedEx(v14, 0LL);
  KeLeaveCriticalRegion();
  return v13;
}
