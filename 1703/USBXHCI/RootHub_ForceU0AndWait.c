/*
 * XREFs of RootHub_ForceU0AndWait @ 0x1C00235B0
 * Callers:
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0007010 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_ForceU3 @ 0x1C002392C (RootHub_ForceU3.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RootHub_ForceU0AndWait(_QWORD *a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned int v6; // ebp
  KSPIN_LOCK *v7; // rsi
  KIRQL v8; // di
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  KSPIN_LOCK *v12; // rsi
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  int v21; // ebx
  __int64 v22; // rcx
  int v23; // esi
  unsigned int v24; // ebx
  __int64 v25; // rcx
  int v26; // edx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v30; // rcx
  signed __int32 v31[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v32; // [rsp+28h] [rbp-60h]
  __int64 v33; // [rsp+30h] [rbp-58h]
  __m128i v34; // [rsp+40h] [rbp-48h]
  __int64 v35; // [rsp+90h] [rbp+8h]
  KIRQL NewIrql; // [rsp+98h] [rbp+10h]
  int NewIrqla; // [rsp+98h] [rbp+10h]

  v2 = a1[5];
  v4 = 2LL * (unsigned int)(a2 - 1);
  v35 = v2;
  v5 = a1[6] + 56LL * (unsigned int)(a2 - 1);
  if ( *(_BYTE *)(v5 + 1) == 2 )
  {
    v6 = 0;
    if ( !*(_BYTE *)(v5 + 11) )
      return v6;
    v7 = (KSPIN_LOCK *)(v5 + 16);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 16));
    v10 = a1[1];
    LODWORD(v32) = *(_DWORD *)(v35 + 8 * v4 + 4);
    v9 = v32;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v10 + 64),
      4u,
      0xAu,
      0xEBu,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v32);
    v9 &= ~0x10000u;
    v11 = a1[1];
    LODWORD(v32) = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v11 + 64),
      4u,
      0xAu,
      0xECu,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v32);
    *(_DWORD *)(v35 + 8 * v4 + 4) = v9;
    _InterlockedOr(v31, 0);
    KeReleaseSpinLock(v7, v8);
    v2 = v35;
  }
  else
  {
    v12 = (KSPIN_LOCK *)(v5 + 16);
    NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 16));
    WPP_RECORDER_SF_(
      *(_QWORD *)(a1[1] + 64LL),
      4u,
      0xAu,
      0xEDu,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids);
    v14 = a1[1];
    LODWORD(v32) = *(_DWORD *)(v2 + 8 * v4 + 4);
    v13 = v32;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v14 + 64),
      4u,
      0xAu,
      0xEEu,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v32);
    v13 &= 0xFFFF0000;
    v15 = a1[1];
    LODWORD(v32) = v13;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v15 + 64),
      4u,
      0xAu,
      0xEFu,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v32);
    v6 = 0;
    *(_DWORD *)(v2 + 8 * v4 + 4) = v13;
    _InterlockedOr(v31, 0);
    v16 = a1[1];
    LODWORD(v32) = *(_DWORD *)(v2 + 8 * v4 + 4);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v16 + 64),
      4u,
      0xAu,
      0xF0u,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v32);
    v17 = *(_DWORD *)(v2 + 8 * v4);
    v18 = a1[1];
    LODWORD(v32) = v17;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v18 + 64),
      4u,
      0xAu,
      0xF1u,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v32);
    v19 = a1[1];
    v34 = *(__m128i *)(v19 + 232);
    if ( (_mm_srli_si128(v34, 8).m128i_u8[0] & 8) != 0 )
      v20 = v17 & 0xE40C200;
    else
      v20 = v17 & 0xE00C200;
    v21 = v20 | 0x10000;
    v22 = *(_QWORD *)(v19 + 64);
    LODWORD(v32) = v21;
    WPP_RECORDER_SF_d(v22, 4u, 0xAu, 0xF2u, (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids, v32);
    *(_DWORD *)(v2 + 8 * v4) = v21;
    _InterlockedOr(v31, 0);
    KeReleaseSpinLock(v12, NewIrql);
  }
  v23 = 1200;
  v25 = a1[1];
  LODWORD(v33) = *(_DWORD *)(v2 + 8 * v4);
  v24 = v33;
  LODWORD(v32) = 0;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(v25 + 64),
    4u,
    0xAu,
    0xF3u,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v32,
    v33);
  if ( v24 == -1 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v26 = 0;
    while ( 1 )
    {
      v27 = (v24 >> 5) & 0xF;
      if ( !v27 )
        break;
      if ( (unsigned int)(v27 - 5) <= 1 || v27 == 10 || (v24 & 0x203) != 0x203 || (v24 & 0x20000) != 0 || v27 == 4 )
        return (unsigned int)-1073741823;
      if ( v27 == 9 || (v24 & 0x1E0) == 0x160 )
      {
        v6 = -1073741823;
        v30 = a1[1];
        LODWORD(v32) = (v24 >> 5) & 0xF;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v30 + 64),
          2u,
          0xAu,
          0xF4u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v32);
        return v6;
      }
      if ( (v24 & 0x10) == 0 )
      {
        if ( v23 )
        {
          --v23;
          NewIrqla = v26 + 10;
          KeStallExecutionProcessor(0xAu);
          v28 = a1[1];
          LODWORD(v33) = *(_DWORD *)(v2 + 8 * v4);
          v24 = v33;
          LODWORD(v32) = NewIrqla;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(v28 + 64),
            4u,
            0xAu,
            0xF3u,
            (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
            v32,
            v33);
          v26 = NewIrqla;
          if ( v24 != -1 )
            continue;
        }
      }
      return (unsigned int)-1073741823;
    }
  }
  return v6;
}
