/*
 * XREFs of RootHub_DetectAndAcknowledgePortResume @ 0x1C0023264
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0023A98 (RootHub_HandlePortStatusChangeEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C0023C58 (RootHub_RestoreU1U2Timeouts.c)
 *     WPP_RECORDER_SF_dDd @ 0x1C0024F1C (WPP_RECORDER_SF_dDd.c)
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
  signed __int32 v21[10]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int128 v24; // [rsp+40h] [rbp-38h]

  v3 = a2 - 1;
  v5 = 0;
  v6 = a1[6] + 56 * v3;
  v8 = (int *)(a1[5] + 16 * v3);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 16));
  v10 = *v8;
  if ( *(_BYTE *)(v6 + 1) == 3 && (v10 & 0x400000) != 0 && (v10 & 0x1E0) == 0 )
  {
    v24 = *(_OWORD *)(a1[1] + 232LL);
    if ( (v24 & 0x80000) != 0 )
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
        (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
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
        (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
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
        (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
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
