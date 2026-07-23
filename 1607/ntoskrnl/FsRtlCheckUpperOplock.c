/*
 * XREFs of FsRtlCheckUpperOplock @ 0x14054ABA8
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpComputeShareableOplockState @ 0x140078270 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140078674 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x14007B80C (FsRtlpOplockBreakToII.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400AAFF4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x1400B3464 (FsRtlpOplockBreakToNone.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140469CE8 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlCheckUpperOplock(__int64 *a1, char a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  int v7; // r14d
  char v8; // r15
  int v9; // edi
  unsigned int v10; // ebx
  int v12; // r10d
  __int64 *i; // rdi
  __int16 v14; // r10
  char v15; // r11
  char v16; // r14
  int v17; // r10d
  bool v18; // zf
  __int64 v19; // r15
  unsigned int v20; // eax
  __int64 v21; // r14
  char v22; // [rsp+50h] [rbp-88h]
  __int64 v23; // [rsp+58h] [rbp-80h]
  _BYTE v24[120]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+10h] BYREF
  __int64 v26; // [rsp+F0h] [rbp+18h]

  v26 = a3;
  v7 = ((a2 & 1) << 12) | ((a2 & 4) << 12) | ((a2 & 2) << 12);
  v23 = *a1;
  LOBYTE(v25) = 0;
  v8 = 0;
  v9 = 0;
  v22 = 0;
  v10 = 0;
  if ( !v23 )
    return v10;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v23 + 152));
  LOBYTE(v25) = 1;
  v12 = *(_DWORD *)(v23 + 144);
  if ( v12 != 1 )
  {
    if ( (a6 & 0x20000) != 0 )
    {
      if ( ((v12 - 4096) & 0xFFFFFFEF) != 0 )
      {
        v10 = -1073739511;
      }
      else
      {
        for ( i = *(__int64 **)(v23 + 40); i != (__int64 *)(v23 + 40); i = (__int64 *)*i )
        {
          if ( *(_DWORD *)(i[2] + 24) == 590400 )
          {
            i = (__int64 *)i[1];
            FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, 0, 0x1000u);
          }
        }
        FsRtlpComputeShareableOplockState(v23);
      }
      goto LABEL_39;
    }
    if ( !FsRtlpOplockUpperLowerCompatible(v12, v7) )
    {
      if ( v7 )
      {
        if ( v7 != 4096 )
        {
          if ( v7 != 12288 )
          {
            if ( v7 != 20480 )
            {
              v10 = -1073741597;
              goto LABEL_39;
            }
            v8 = 0;
            if ( (v14 & 4) != 0 )
              v8 = v15;
            v9 = 0x2000;
            goto LABEL_24;
          }
          v8 = v15;
LABEL_23:
          v9 = 0x4000;
LABEL_24:
          v16 = 0;
          goto LABEL_30;
        }
        v8 = v15;
        v17 = v14 & 0x5000;
        if ( v17 == 20480 )
        {
          v22 = v15;
          goto LABEL_23;
        }
        v16 = 0;
        if ( v17 )
          v9 = v17;
      }
      else
      {
        v16 = v15;
        v9 = 28672;
      }
LABEL_30:
      memset(v24, 0, 0x48uLL);
      v24[0] = 3;
      v18 = v8 == 0;
      v19 = v26;
      if ( v18 )
      {
        if ( !v16 )
        {
LABEL_35:
          if ( !v10 && (*(_DWORD *)(v23 + 144) & v9) != 0 )
          {
            v21 = a5;
            v10 = FsRtlpOplockBreakByCacheFlags(v23, (__int64)v24, 0LL, a6 | (v22 != 0), v9, v19, a4, a5, &v25, 0LL);
            if ( v22 )
              v10 = FsRtlpOplockBreakByCacheFlags(v23, (__int64)v24, 0LL, a6, 0x2000, v19, a4, v21, &v25, 0LL);
          }
          goto LABEL_39;
        }
        v20 = FsRtlpOplockBreakToNone(
                v23,
                (__int64)v24,
                0LL,
                a6,
                v26,
                a4,
                (void (__fastcall *)(__int64, __int64))a5,
                &v25,
                0LL);
      }
      else
      {
        v20 = FsRtlpOplockBreakToII(v23, (__int64)v24, 0LL, a6, v26, a4, a5, &v25, 0LL);
      }
      v10 = v20;
      goto LABEL_35;
    }
  }
LABEL_39:
  if ( (_BYTE)v25 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v23 + 152));
  return v10;
}
