/*
 * XREFs of RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C0027C40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C00073DC (Controller_IsControllerAccessible.c)
 */

void __fastcall RootHub_WdfEvtTimer20PortResumeComplete(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // rsi
  int v3; // ebx
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD **)a2;
  v3 = a2[2];
  if ( Controller_IsControllerAccessible(*(_QWORD *)(*(_QWORD *)a2 + 8LL)) )
  {
    v4 = (unsigned int)(v3 - 1);
    v5 = 56 * v4;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(56 * v4 + v2[6] + 16LL));
    v6 = v2[5];
    v7 = 2 * v4;
    v8 = v2[1];
    LODWORD(v20) = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 64),
      4u,
      0xAu,
      0xD0u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v20);
    v10 = v2[1];
    LODWORD(v20) = *(_DWORD *)(v6 + 8 * v7);
    v9 = v20;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v10 + 64),
      4u,
      0xAu,
      0xD1u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v20);
    v11 = v9 & 0xE00C200 | 0x410000;
    v12 = v2[1];
    LODWORD(v20) = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v12 + 64),
      4u,
      0xAu,
      0xD2u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v20);
    *(_DWORD *)(v6 + 8 * v7) = v11;
    _InterlockedOr(v19, 0);
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v5 + v2[6] + 16LL));
    v13 = v2[1];
    LODWORD(v20) = *(_DWORD *)(v6 + 8 * v7);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v13 + 64),
      4u,
      0xAu,
      0xD3u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
      v20);
    if ( (*(_QWORD *)(v2[1] + 232LL) & 0x8000000LL) != 0 )
    {
      v14 = v2[6];
      if ( *(_BYTE *)(v14 + v5 + 11) )
      {
        v15 = v2[5];
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + v14 + 16));
        v17 = v2[1];
        LODWORD(v20) = *(_DWORD *)(v15 + 8 * v7 + 4);
        v16 = v20;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v17 + 64),
          4u,
          0xAu,
          0xD4u,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v20);
        v16 |= 0x10000u;
        v18 = v2[1];
        LODWORD(v20) = v16;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v18 + 64),
          4u,
          0xAu,
          0xD5u,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v20);
        *(_DWORD *)(v15 + 8 * v7 + 4) = v16;
        _InterlockedOr(v19, 0);
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v5 + v2[6] + 16LL));
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(v2[1] + 64LL),
      4u,
      0xAu,
      0xCFu,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
  }
}
