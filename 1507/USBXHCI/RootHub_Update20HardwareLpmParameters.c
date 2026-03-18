/*
 * XREFs of RootHub_Update20HardwareLpmParameters @ 0x1C001F1F0
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x1C0031A1C (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 */

void __fastcall RootHub_Update20HardwareLpmParameters(_QWORD *a1, int a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v4; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  KIRQL v9; // bp
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h]

  v4 = a1[5];
  v7 = 56LL * (unsigned int)(a2 - 1);
  v8 = 2LL * (unsigned int)(a2 - 1);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + a1[6] + 16LL));
  v11 = a1[1];
  LODWORD(v17) = *(_DWORD *)(v4 + 8 * v8 + 12);
  v10 = v17;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v11 + 64),
    4u,
    0xAu,
    0xF5u,
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
    v17);
  v12 = a1[1];
  LODWORD(v17) = v10 & 0xFFFFC000 | (8 * (a3 & 0x780)) | ((a3 & 4 | (a3 >> 7) & 0xFF0) >> 2);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v12 + 64),
    4u,
    0xAu,
    0xF6u,
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
    v17);
  *(_DWORD *)(v4 + 8 * v8 + 12) = v10 & 0xFFFFC000 | (8 * (a3 & 0x780)) | ((a3 & 4 | (a3 >> 7) & 0xFF0) >> 2);
  _InterlockedOr(v16, 0);
  v14 = a1[1];
  LODWORD(v17) = *(_DWORD *)(v4 + 8 * v8 + 4);
  v13 = v17;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v14 + 64),
    4u,
    0xAu,
    0xF7u,
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
    v17);
  v13 &= 0xFFFE0007;
  *(_BYTE *)(a1[6] + v7 + 11) = (a3 & 1) != 0;
  v15 = a1[1];
  LODWORD(v17) = v13 | (2 * (a3 & 0x78 | (2 * (a3 & 2 | ((a4 | ((a3 & 1) << 8)) << 6)))));
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v15 + 64),
    4u,
    0xAu,
    0xF8u,
    (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
    v17);
  *(_DWORD *)(v4 + 8 * v8 + 4) = v13 | (2 * (a3 & 0x78 | (2 * (a3 & 2 | ((a4 | ((a3 & 1) << 8)) << 6)))));
  _InterlockedOr(v16, 0);
  *(_BYTE *)(a1[6] + v7 + 8) = 1;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1[6] + v7 + 16), v9);
}
