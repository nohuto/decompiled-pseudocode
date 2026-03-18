/*
 * XREFs of FsRtlCheckUpperOplock @ 0x14055C49C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400718FC (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1400726F0 (FsRtlpOplockBreakToII.c)
 *     FsRtlpComputeShareableOplockState @ 0x140073B18 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140073E88 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlpOplockBreakToNone @ 0x1401313A8 (FsRtlpOplockBreakToNone.c)
 *     memset @ 0x140195A80 (memset.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1404A60B8 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlCheckUpperOplock(__int64 *a1, char a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v8; // ebx
  ULONG_PTR v10; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 v12; // rax
  __int64 v13; // rsi
  signed __int32 v14; // r11d
  int v15; // r10d
  int v16; // esi
  __int64 *i; // rbx
  __int16 v18; // r10
  char v19; // bl
  int v20; // r10d
  unsigned int v21; // eax
  __int64 v22; // r14
  ULONG_PTR v23; // rbx
  signed __int32 v24; // eax
  char v25; // [rsp+50h] [rbp-88h]
  char v26; // [rsp+51h] [rbp-87h]
  unsigned int v27; // [rsp+54h] [rbp-84h]
  int v28; // [rsp+58h] [rbp-80h]
  __int64 v29; // [rsp+60h] [rbp-78h]
  _BYTE v30[72]; // [rsp+68h] [rbp-70h] BYREF
  __int64 v31; // [rsp+E8h] [rbp+10h] BYREF

  v8 = ((a2 & 1) << 12) | ((a2 & 4) << 12) | ((a2 & 2) << 12);
  v29 = *a1;
  LOBYTE(v31) = 0;
  v25 = 0;
  v28 = 0;
  v26 = 0;
  v27 = 0;
  if ( !v29 )
    return v27;
  v10 = *(_QWORD *)(v29 + 152);
  CurrentThread = KeGetCurrentThread();
  v12 = KeAbPreAcquire(v10, 0LL, 0LL, a4);
  v13 = v12;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v10, 0) )
    ExpAcquireFastMutexContended(v10, v12);
  v14 = 1;
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  *(_QWORD *)(v10 + 8) = CurrentThread;
  LOBYTE(v31) = 1;
  v15 = *(_DWORD *)(v29 + 144);
  if ( v15 != 1 )
  {
    v16 = a6;
    if ( (a6 & 0x20000) != 0 )
    {
      if ( ((v15 - 4096) & 0xFFFFFFEF) != 0 )
      {
        v27 = -1073739511;
        goto LABEL_43;
      }
      for ( i = *(__int64 **)(v29 + 40); i != (__int64 *)(v29 + 40); i = (__int64 *)*i )
      {
        if ( *(_DWORD *)(i[2] + 24) == 590400 )
        {
          i = (__int64 *)i[1];
          FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, 0, 0x1000u);
        }
      }
      FsRtlpComputeShareableOplockState(v29);
      goto LABEL_42;
    }
    if ( FsRtlpOplockUpperLowerCompatible(v15, v8) )
      goto LABEL_43;
    switch ( v8 )
    {
      case 0:
        v25 = v14;
        v28 = 28672;
        v19 = 0;
        goto LABEL_33;
      case 4096:
        v19 = v14;
        v20 = v18 & 0x5000;
        if ( v20 != 20480 )
        {
          if ( v20 )
            v28 = v20;
          goto LABEL_33;
        }
        v26 = v14;
        break;
      case 12288:
        v19 = v14;
        break;
      case 20480:
        v19 = 0;
        if ( (v18 & 4) != 0 )
          v19 = v14;
        v28 = 0x2000;
LABEL_33:
        memset(v30, 0, sizeof(v30));
        v30[0] = 3;
        if ( v19 )
        {
          v21 = FsRtlpOplockBreakToII(v29, (__int64)v30, 0LL, v16, a3, a4, a5, &v31, 0LL);
        }
        else
        {
          if ( !v25 )
          {
LABEL_38:
            if ( !v27 && (v28 & *(_DWORD *)(v29 + 144)) != 0 )
            {
              v22 = a5;
              v27 = FsRtlpOplockBreakByCacheFlags(
                      v29,
                      (__int64)v30,
                      0LL,
                      v16 | (unsigned int)(v26 != 0),
                      v28,
                      a3,
                      a4,
                      a5,
                      &v31,
                      0LL);
              if ( v26 )
                v27 = FsRtlpOplockBreakByCacheFlags(v29, (__int64)v30, 0LL, v16, 0x2000, a3, a4, v22, &v31, 0LL);
            }
LABEL_42:
            v14 = 1;
            goto LABEL_43;
          }
          v21 = FsRtlpOplockBreakToNone(v29, (__int64)v30, 0LL, v16, a3, a4, a5, &v31, 0LL);
        }
        v27 = v21;
        goto LABEL_38;
      default:
        v27 = -1073741597;
        goto LABEL_43;
    }
    v28 = 0x4000;
    goto LABEL_33;
  }
LABEL_43:
  if ( (_BYTE)v31 )
  {
    v23 = *(_QWORD *)(v29 + 152);
    *(_QWORD *)(v23 + 8) = 0LL;
    v24 = _InterlockedCompareExchange((volatile signed __int32 *)v23, v14, 0);
    if ( v24 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v23, v24);
    KeAbPostRelease(v23);
  }
  return v27;
}
