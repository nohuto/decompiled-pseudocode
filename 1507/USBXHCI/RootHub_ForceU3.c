/*
 * XREFs of RootHub_ForceU3 @ 0x1C001E7BC
 * Callers:
 *     RootHub_HandleResumedPorts @ 0x1C0001950 (RootHub_HandleResumedPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     RootHub_ForceU0AndWait @ 0x1C001E48C (RootHub_ForceU0AndWait.c)
 */

__int64 __fastcall RootHub_ForceU3(_QWORD *a1, int a2)
{
  __int64 v3; // rbx
  int *v4; // rsi
  bool v5; // zf
  __int64 result; // rax
  KSPIN_LOCK *v7; // rbp
  KIRQL v8; // r14
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  signed __int32 v14[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]

  v3 = a1[6] + 56LL * (unsigned int)(a2 - 1);
  v4 = (int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  if ( *(_BYTE *)(v3 + 1) == 2 )
    v5 = (*(_QWORD *)(a1[1] + 232LL) & 0x8000000LL) == 0;
  else
    v5 = (*(_QWORD *)(a1[1] + 232LL) & 0x80000LL) == 0;
  if ( v5 || (result = RootHub_ForceU0AndWait(a1, a2), (int)result >= 0) )
  {
    v7 = (KSPIN_LOCK *)(v3 + 16);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 16));
    *(_BYTE *)(v3 + 6) = 0;
    v10 = a1[1];
    LODWORD(v15) = *v4;
    v9 = v15;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v10 + 64),
      4u,
      0xAu,
      0xDEu,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v15);
    if ( (v9 & 2) == 0 || (v9 & 0x1E0u) >= 0x60 )
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[1] + 64LL),
        3u,
        0xAu,
        0xDFu,
        (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
    v11 = v9 & 0xE00C200 | 0x10060;
    v12 = a1[1];
    LODWORD(v15) = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v12 + 64),
      4u,
      0xAu,
      0xE0u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v15);
    *v4 = v11;
    _InterlockedOr(v14, 0);
    KeReleaseSpinLock(v7, v8);
    v13 = a1[1];
    LODWORD(v15) = *v4;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v13 + 64),
             4u,
             0xAu,
             0xE1u,
             (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
             v15);
  }
  return result;
}
