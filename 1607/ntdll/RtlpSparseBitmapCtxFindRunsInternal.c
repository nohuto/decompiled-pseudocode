/*
 * XREFs of RtlpSparseBitmapCtxFindRunsInternal @ 0x18010117C
 * Callers:
 *     RtlSparseBitmapCtxFindSetRuns @ 0x1801004F0 (RtlSparseBitmapCtxFindSetRuns.c)
 *     RtlpSparseBitmapCtxFindNextBitInternal @ 0x180100C0C (RtlpSparseBitmapCtxFindNextBitInternal.c)
 * Callees:
 *     RtlpSparseBitmapCtxUnlockShared @ 0x18004FE04 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x18004FE24 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE48 (RtlpSparseBitmapCheckRangeArrayPage.c)
 *     RtlpSparseBitmapCtxAppendNextRangeToRun @ 0x180100B34 (RtlpSparseBitmapCtxAppendNextRangeToRun.c)
 *     RtlpSparseBitmapCtxFindRunsFromNullRange @ 0x180100CAC (RtlpSparseBitmapCtxFindRunsFromNullRange.c)
 *     RtlpSparseBitmapCtxFindRunsFromRange @ 0x180100DD4 (RtlpSparseBitmapCtxFindRunsFromRange.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxFindRunsInternal(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        char *a8)
{
  char *v8; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r10
  unsigned int v12; // r8d
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  _RTL_SRWLOCK *v20; // rsi
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned int v23; // r8d
  int appended; // eax
  unsigned int v25; // r14d
  unsigned int RunsFromRange; // eax
  __int64 v28; // [rsp+28h] [rbp-80h]
  __int64 v30; // [rsp+B8h] [rbp+10h]
  int v32; // [rsp+C8h] [rbp+20h]
  unsigned int v33; // [rsp+E0h] [rbp+38h]

  v8 = (char *)a7;
  v32 = 0;
  v10 = *(unsigned int *)(a1 + 56);
  v11 = a3;
  v12 = *(_DWORD *)(a1 + 52);
  v13 = a2 % v10;
  v33 = v12;
  v14 = a2 / v10;
  v15 = v11 / v10;
  v16 = v11 % v10;
  if ( v12 > (unsigned int)(v11 / v10) )
  {
    v12 = v15 + 1;
    v33 = v15 + 1;
  }
  v17 = v10 * (unsigned int)v14;
  if ( (unsigned int)v14 < v12 )
  {
    v30 = 8LL * (unsigned int)v14;
    while ( 1 )
    {
      v20 = 0LL;
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( RtlpSparseBitmapCheckRangeArrayPage(a1, v14) )
        {
          v22 = *(_QWORD *)(a1 + 8);
          v20 = *(_RTL_SRWLOCK **)(v21 + v22);
          if ( v20 )
          {
            v32 = 1;
            RtlpSparseBitmapCtxLockShared(a1, *(_RTL_SRWLOCK **)(v21 + v22));
            v11 = a3;
          }
        }
      }
      if ( a8 )
        goto LABEL_16;
      v23 = a5;
      if ( v8 == (char *)a7 )
        goto LABEL_17;
      v16 = (__int64)(v8 - 24);
      if ( *((_DWORD *)v8 - 4) >= a5 || *(unsigned int *)(v16 + 8) + *(_QWORD *)v16 != v17 )
        goto LABEL_17;
      appended = RtlpSparseBitmapCtxAppendNextRangeToRun(
                   a1,
                   (__int64)v20,
                   v14,
                   v11,
                   (__int64)(v8 - 24),
                   v28,
                   a5 - *(_DWORD *)(v16 + 8));
      if ( appended != *(_DWORD *)(a1 + 56) )
        break;
      v25 = 0;
LABEL_22:
      if ( v32 )
      {
        RtlpSparseBitmapCtxUnlockShared(a1, v20);
        v32 = 0;
      }
      a6 -= v25;
      v8 += 24 * v25;
      if ( a8 )
        a8 += v25 * *(_DWORD *)(a1 + 68);
      LODWORD(v13) = 0;
      v11 = a3;
      v17 += *(unsigned int *)(a1 + 56);
      LODWORD(v14) = v14 + 1;
      v30 += 8LL;
      if ( (unsigned int)v14 >= v33 )
      {
LABEL_27:
        if ( v32 )
          RtlpSparseBitmapCtxUnlockShared(a1, v20);
        return (__int64)&v8[-a7] / 24;
      }
    }
    LODWORD(v13) = appended;
LABEL_16:
    v23 = a5;
LABEL_17:
    if ( !a6 )
      goto LABEL_27;
    if ( v20 )
      RunsFromRange = RtlpSparseBitmapCtxFindRunsFromRange(
                        (unsigned int *)a1,
                        v16,
                        v23,
                        a6,
                        (__int64)v8,
                        v14,
                        v13,
                        a3,
                        (__int64)v20,
                        a8);
    else
      RunsFromRange = RtlpSparseBitmapCtxFindRunsFromNullRange(a1, v16, v23, a6, v8, v14, v13, a3, a8);
    v25 = RunsFromRange;
    goto LABEL_22;
  }
  return (__int64)&v8[-a7] / 24;
}
