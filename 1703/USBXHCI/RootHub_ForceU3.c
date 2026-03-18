/*
 * XREFs of RootHub_ForceU3 @ 0x1C002392C
 * Callers:
 *     RootHub_HandleResumedPorts @ 0x1C0004260 (RootHub_HandleResumedPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     RootHub_ForceU0AndWait @ 0x1C00235B0 (RootHub_ForceU0AndWait.c)
 */

__int64 __fastcall RootHub_ForceU3(_QWORD *a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int *v5; // rsi
  bool v6; // zf
  __int64 result; // rax
  KSPIN_LOCK *v8; // rbp
  KIRQL v9; // r14
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]
  __int128 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-28h]

  v3 = *(_QWORD *)(a1[1] + 232LL);
  v4 = a1[6] + 56LL * (unsigned int)(a2 - 1);
  v5 = (int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  if ( *(_BYTE *)(v4 + 1) == 2 )
  {
    v17 = *(_OWORD *)(a1[1] + 232LL);
    v6 = (v3 & 0x8000000) == 0;
  }
  else
  {
    v18 = *(_OWORD *)(a1[1] + 232LL);
    v6 = (v3 & 0x80000) == 0;
  }
  if ( v6 || (result = RootHub_ForceU0AndWait(a1, a2), (int)result >= 0) )
  {
    v8 = (KSPIN_LOCK *)(v4 + 16);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 16));
    *(_BYTE *)(v4 + 6) = 0;
    v11 = a1[1];
    LODWORD(v16) = *v5;
    v10 = v16;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v11 + 64),
      4u,
      0xAu,
      0xDEu,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v16);
    if ( (v10 & 2) == 0 || (v10 & 0x1E0u) >= 0x60 )
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[1] + 64LL),
        3u,
        0xAu,
        0xDFu,
        (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids);
    v12 = v10 & 0xE00C200 | 0x10060;
    v13 = a1[1];
    LODWORD(v16) = v12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v13 + 64),
      4u,
      0xAu,
      0xE0u,
      (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
      v16,
      v17,
      v18);
    *v5 = v12;
    _InterlockedOr(v15, 0);
    KeReleaseSpinLock(v8, v9);
    v14 = a1[1];
    LODWORD(v16) = *v5;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v14 + 64),
             4u,
             0xAu,
             0xE1u,
             (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
             v16);
  }
  return result;
}
