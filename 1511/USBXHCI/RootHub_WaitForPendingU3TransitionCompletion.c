/*
 * XREFs of RootHub_WaitForPendingU3TransitionCompletion @ 0x1C002798C
 * Callers:
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0005F20 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00061E0 (RootHub_UcxEvtSetPortFeature.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C0028228 (WPP_RECORDER_SF_dDD.c)
 */

__int64 __fastcall RootHub_WaitForPendingU3TransitionCompletion(_QWORD *a1, int a2, char a3)
{
  unsigned int v3; // r14d
  char v4; // r9
  int *v6; // r12
  __int64 v8; // r8
  int v9; // edi
  __int64 v10; // rbp
  KIRQL v11; // si
  int v12; // ebx
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // ebx
  __int64 v17; // rsi
  char v18; // cl
  unsigned __int16 v19; // r9
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // rcx
  signed __int32 v28[10]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v29; // [rsp+28h] [rbp-50h]
  __int64 v30; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+80h] [rbp+8h]

  v3 = 0;
  v4 = a3;
  v6 = (int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  v8 = (unsigned int)(a2 - 1);
  v9 = -1;
  v31 = v8;
  while ( 1 )
  {
    if ( v4 && v3 && v3 == 3 * (v3 / 3) )
    {
      v10 = 56 * v8;
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(56 * v8 + a1[6] + 16LL));
      v12 = *v6 & 0xE00C200 | 0x10060;
      WPP_RECORDER_SF_dDD(*(_QWORD *)(a1[1] + 64LL), v13, v14, v15, v28[8], a2, *v6, 96);
      *v6 = v12;
      _InterlockedOr(v28, 0);
      KeReleaseSpinLock((PKSPIN_LOCK)(v10 + a1[6] + 16LL), v11);
      v8 = v31;
    }
    v16 = *v6;
    if ( *v6 != v9 )
    {
      v9 = *v6;
      v17 = 56 * v8;
      v18 = *(_BYTE *)(a1[6] + 56 * v8 + 1);
      if ( v18 == 2 )
      {
        v19 = 229;
      }
      else
      {
        if ( v18 != 3 )
        {
          v23 = a1[1];
          LODWORD(v30) = *v6;
          LODWORD(v29) = a2;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(v23 + 64),
            2u,
            0xAu,
            0xE7u,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v29,
            v30);
LABEL_23:
          v24 = 0;
          goto LABEL_25;
        }
        v19 = 230;
      }
      v20 = a1[1];
      LODWORD(v30) = *v6;
      LODWORD(v29) = a2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v20 + 64),
        4u,
        0xAu,
        v19,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
        v29,
        v30);
      v21 = (v16 >> 5) & 0xF;
      if ( v21 == 3
        || (v16 & 0x20203) != 0x203
        || v21 == 4
        || v21 == 15
        || v21 == 6
        || (unsigned int)(v21 - 9) <= 2
        || (v16 & 0x10) != 0
        || *(_BYTE *)(a1[6] + v17 + 6) )
      {
        goto LABEL_23;
      }
      v22 = a1[1];
      LODWORD(v30) = v3;
      LODWORD(v29) = a2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v22 + 64),
        4u,
        0xAu,
        0xE8u,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
    }
    KeStallExecutionProcessor(0xAu);
    if ( ++v3 >= 0x960 )
      break;
    v8 = v31;
    v4 = a3;
  }
  v24 = -1073741823;
LABEL_25:
  if ( v3 == 2400 )
  {
    v25 = a1[1];
    LODWORD(v30) = v16;
    LODWORD(v29) = a2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v25 + 64),
      2u,
      0xAu,
      0xE9u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v29,
      v30);
  }
  else if ( v3 )
  {
    v26 = a1[1];
    LODWORD(v30) = a2;
    LODWORD(v29) = v3;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v26 + 64),
      4u,
      0xAu,
      0xEAu,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v29,
      v30);
  }
  return v24;
}
