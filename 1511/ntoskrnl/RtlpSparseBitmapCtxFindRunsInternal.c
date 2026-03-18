/*
 * XREFs of RtlpSparseBitmapCtxFindRunsInternal @ 0x140223900
 * Callers:
 *     RtlpSparseBitmapCtxFindNextBitInternal @ 0x14022345C (RtlpSparseBitmapCtxFindNextBitInternal.c)
 * Callees:
 *     RtlpSparseBitmapCtxAppendNextRangeToRun @ 0x1402232C4 (RtlpSparseBitmapCtxAppendNextRangeToRun.c)
 *     RtlpSparseBitmapCtxFindRunsFromNullRange @ 0x1402234F0 (RtlpSparseBitmapCtxFindRunsFromNullRange.c)
 *     RtlpSparseBitmapCtxFindRunsFromRange @ 0x1402235DC (RtlpSparseBitmapCtxFindRunsFromRange.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x140223B2C (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCtxUnlockShared @ 0x140223C08 (RtlpSparseBitmapCtxUnlockShared.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxFindRunsInternal(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  char *v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  int v9; // r13d
  __int64 v10; // r8
  unsigned int v12; // ebp
  unsigned int v13; // r14d
  unsigned int v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  char *v18; // r9
  unsigned int appended; // eax
  unsigned int v20; // ebp
  unsigned int RunsFromRange; // eax
  __int64 v23; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+90h] [rbp+8h]
  __int64 v25; // [rsp+98h] [rbp+10h]

  v6 = (char *)a6;
  v7 = a2 / *(unsigned int *)(a1 + 56);
  v8 = a2 % *(unsigned int *)(a1 + 56);
  v25 = 0LL;
  v9 = 0;
  v10 = (unsigned int)(v7 * *(_DWORD *)(a1 + 56));
  v12 = v8;
  v13 = v7;
  v14 = 1;
  v24 = v10;
  if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 52) )
    return (__int64)&v6[-a6] / 24;
  do
  {
    v15 = *(_QWORD *)(a1 + 8);
    v16 = 0LL;
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 8LL * v13);
      if ( v16 )
      {
        v9 = 1;
        v17 = RtlpSparseBitmapCtxLockShared(a1, *(_QWORD *)(v15 + 8LL * v13));
        v10 = v24;
        v25 = v17;
      }
    }
    if ( v6 != (char *)a6 )
    {
      v18 = v6 - 24;
      v8 = *((unsigned int *)v6 - 4);
      if ( !(_DWORD)v8 && v8 + *(_QWORD *)v18 == v10 )
      {
        appended = RtlpSparseBitmapCtxAppendNextRangeToRun(a1, v16, v13, (__int64)v18, v23, 1);
        if ( appended == *(_DWORD *)(a1 + 56) )
        {
          v20 = 0;
          goto LABEL_16;
        }
        v12 = appended;
      }
    }
    if ( !v14 )
      break;
    if ( v16 )
      RunsFromRange = RtlpSparseBitmapCtxFindRunsFromRange((_DWORD *)a1, v8, 1u, v14, (__int64)v6, v13, v12, v16, 0LL);
    else
      RunsFromRange = RtlpSparseBitmapCtxFindRunsFromNullRange(a1, v8, 1u, v14, v6, v13, v12, 0LL);
    v20 = RunsFromRange;
LABEL_16:
    if ( v9 )
    {
      RtlpSparseBitmapCtxUnlockShared(a1, v16, v25);
      v9 = 0;
    }
    v14 -= v20;
    v6 += 24 * v20;
    v12 = 0;
    ++v13;
    v10 = *(unsigned int *)(a1 + 56) + v24;
    v24 = v10;
  }
  while ( v13 < *(_DWORD *)(a1 + 52) );
  if ( v9 )
    RtlpSparseBitmapCtxUnlockShared(a1, v16, v25);
  return (__int64)&v6[-a6] / 24;
}
