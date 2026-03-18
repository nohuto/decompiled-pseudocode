/*
 * XREFs of RootHub_DetectAndAcknowledgePortResume @ 0x1C001E158
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001E914 (RootHub_HandlePortStatusChangeEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C001EAC4 (RootHub_RestoreU1U2Timeouts.c)
 *     WPP_RECORDER_SF_dDd @ 0x1C001FD2C (WPP_RECORDER_SF_dDd.c)
 */

char __fastcall RootHub_DetectAndAcknowledgePortResume(_QWORD *a1, unsigned int a2, char a3)
{
  __int64 v3; // rsi
  char v5; // r14
  __int64 v6; // rdi
  int *v8; // rsi
  KIRQL v9; // r12
  int v10; // ebx
  char v11; // al
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  unsigned __int16 v15; // si
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  signed __int32 v21[10]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+30h] [rbp-38h]

  v3 = a2 - 1;
  v5 = 0;
  v6 = a1[6] + 56 * v3;
  v8 = (int *)(a1[5] + 16 * v3);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 16));
  v10 = *v8;
  if ( *(_BYTE *)(v6 + 1) == 3
    && (v10 & 0x400000) != 0
    && (v10 & 0x1E0) == 0
    && (*(_QWORD *)(a1[1] + 232LL) & 0x80000LL) != 0 )
  {
    RootHub_RestoreU1U2Timeouts(a1, a2);
  }
  if ( (v10 & 0x1E0) != 0x1E0 || !a3 && (v10 & 0x400000) == 0 )
    goto LABEL_17;
  v5 = 1;
  if ( *(_BYTE *)(v6 + 6) == 1 )
    goto LABEL_17;
  v11 = *(_BYTE *)(v6 + 1);
  *(_BYTE *)(v6 + 6) = 1;
  if ( v11 != 2 )
  {
    if ( v11 == 3 )
    {
      v16 = a1[1];
      LODWORD(v23) = v10;
      LODWORD(v22) = a2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v16 + 64),
        3u,
        0xAu,
        0xC8u,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        v22,
        v23);
      v17 = v10 & 0xE40C200 | 0x10000;
      v18 = a1[1];
      LODWORD(v22) = v17;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v18 + 64),
        4u,
        0xAu,
        0xC9u,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        v22);
      *v8 = v17;
      _InterlockedOr(v21, 0);
      v19 = a1[1];
      LODWORD(v22) = *v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v19 + 64),
        4u,
        0xAu,
        0xCAu,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        v22);
    }
LABEL_17:
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 16), v9);
    return v5;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 16), v9);
  if ( *(int *)(v6 + 40) <= 0 )
    v15 = 50;
  else
    v15 = *(_WORD *)(v6 + 44);
  WPP_RECORDER_SF_dDd(*(_QWORD *)(a1[1] + 64LL), v12, v13, v14, v21[8], a2, v10, v15);
  ExSetTimer(*(_QWORD *)(v6 + 32), -10000LL * v15, 0LL, 0LL);
  return v5;
}
