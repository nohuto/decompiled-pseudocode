/*
 * XREFs of RootHub_ForceU0AndWait @ 0x1C0026A6C
 * Callers:
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00061E0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_ForceU3 @ 0x1C0026D9C (RootHub_ForceU3.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RootHub_ForceU0AndWait(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v5; // rsi
  __int64 v6; // r12
  unsigned int v7; // ebp
  KIRQL v8; // di
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  int v20; // esi
  unsigned int v21; // ebx
  __int64 v22; // rcx
  int v23; // edx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v27; // rcx
  signed __int32 v28[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v29; // [rsp+28h] [rbp-50h]
  __int64 v30; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+80h] [rbp+8h]
  int v32; // [rsp+88h] [rbp+10h]

  v2 = a1[5];
  v3 = (unsigned int)(a2 - 1);
  v5 = a1[6] + 56 * v3;
  v6 = 2 * v3;
  v31 = v2;
  if ( *(_BYTE *)(v5 + 1) == 2 )
  {
    v7 = 0;
    if ( !*(_BYTE *)(v5 + 11) )
      return v7;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 16));
    v9 = *(_DWORD *)(v2 + 8 * v6 + 4);
    v10 = a1[1];
    LODWORD(v29) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v10 + 64),
      4u,
      0xAu,
      0xEBu,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v29);
    v9 &= ~0x10000u;
    v11 = a1[1];
    LODWORD(v29) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v11 + 64),
      4u,
      0xAu,
      0xECu,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v29);
    *(_DWORD *)(v31 + 8 * v6 + 4) = v9;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 16));
    WPP_RECORDER_SF_(
      *(_QWORD *)(a1[1] + 64LL),
      4u,
      0xAu,
      0xEDu,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
    v12 = *(_DWORD *)(v2 + 8 * v6 + 4);
    v13 = a1[1];
    LODWORD(v29) = v12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v13 + 64),
      4u,
      0xAu,
      0xEEu,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v29);
    v12 &= 0xFFFF0000;
    v14 = a1[1];
    LODWORD(v29) = v12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v14 + 64),
      4u,
      0xAu,
      0xEFu,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v29);
    v7 = 0;
    *(_DWORD *)(v31 + 8 * v6 + 4) = v12;
    _InterlockedOr(v28, 0);
    v15 = a1[1];
    LODWORD(v29) = *(_DWORD *)(v31 + 8 * v6 + 4);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v15 + 64),
      4u,
      0xAu,
      0xF0u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v29);
    v17 = a1[1];
    LODWORD(v29) = *(_DWORD *)(v31 + 8 * v6);
    v16 = v29;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v17 + 64),
      4u,
      0xAu,
      0xF1u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v29);
    v18 = v16 & 0xE00C200 | 0x10000;
    v19 = a1[1];
    LODWORD(v29) = v18;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v19 + 64),
      4u,
      0xAu,
      0xF2u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v29);
    *(_DWORD *)(v31 + 8 * v6) = v18;
  }
  _InterlockedOr(v28, 0);
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 16), v8);
  v20 = 1200;
  v22 = a1[1];
  LODWORD(v30) = *(_DWORD *)(v31 + 8 * v6);
  v21 = v30;
  LODWORD(v29) = 0;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(v22 + 64),
    4u,
    0xAu,
    0xF3u,
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
    v29,
    v30);
  if ( v21 == -1 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v23 = 0;
    while ( 1 )
    {
      v24 = (v21 >> 5) & 0xF;
      if ( !v24 )
        break;
      if ( (unsigned int)(v24 - 5) <= 1 || v24 == 10 || (v21 & 0x20203) != 0x203 || v24 == 4 )
        return (unsigned int)-1073741823;
      if ( v24 == 9 || v24 == 11 )
      {
        v7 = -1073741823;
        v27 = a1[1];
        LODWORD(v29) = (v21 >> 5) & 0xF;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v27 + 64),
          2u,
          0xAu,
          0xF4u,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v29);
        return v7;
      }
      if ( (v21 & 0x10) == 0 )
      {
        if ( v20 )
        {
          --v20;
          v32 = v23 + 10;
          KeStallExecutionProcessor(0xAu);
          v25 = a1[1];
          LODWORD(v30) = *(_DWORD *)(v31 + 8 * v6);
          v21 = v30;
          LODWORD(v29) = v32;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(v25 + 64),
            4u,
            0xAu,
            0xF3u,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            v29,
            v30);
          v23 = v32;
          if ( v21 != -1 )
            continue;
        }
      }
      return (unsigned int)-1073741823;
    }
  }
  return v7;
}
