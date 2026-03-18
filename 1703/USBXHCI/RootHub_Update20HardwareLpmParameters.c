/*
 * XREFs of RootHub_Update20HardwareLpmParameters @ 0x1C0024398
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x1C002FD34 (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 */

void __fastcall RootHub_Update20HardwareLpmParameters(_QWORD *a1, int a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v4; // r15
  _QWORD *v5; // rbx
  __int64 v7; // r12
  __int64 v8; // r13
  KIRQL v10; // r14
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h]

  v4 = a1[5];
  v5 = a1;
  v7 = 56LL * (unsigned int)(a2 - 1);
  v8 = 2LL * (unsigned int)(a2 - 1);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + a1[6] + 16LL));
  v12 = v5[1];
  LODWORD(v16) = *(_DWORD *)(v4 + 8 * v8 + 12);
  v11 = v16;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v12 + 64),
    4u,
    0xAu,
    0xF5u,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v16);
  LODWORD(v16) = v11 & 0xFFFFC000 | (8 * (a3 & 0x780)) | ((a3 & 4 | (a3 >> 7) & 0xFF0) >> 2);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 64LL),
    4u,
    0xAu,
    0xF6u,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v16);
  *(_DWORD *)(v4 + 8 * v8 + 12) = v11 & 0xFFFFC000 | (8 * (a3 & 0x780)) | ((a3 & 4 | (a3 >> 7) & 0xFF0) >> 2);
  _InterlockedOr(v15, 0);
  v13 = a1[1];
  LODWORD(v16) = *(_DWORD *)(v4 + 8 * v8 + 4);
  LODWORD(v5) = v16;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v13 + 64),
    4u,
    0xAu,
    0xF7u,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v16);
  *(_BYTE *)(a1[6] + v7 + 11) = (a3 & 1) != 0;
  v14 = a1[1];
  LODWORD(v16) = (unsigned int)v5 & 0xFFFE0007 | (2 * (a3 & 0x78 | (2 * (a3 & 2 | ((a4 | ((a3 & 1) << 8)) << 6)))));
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v14 + 64),
    4u,
    0xAu,
    0xF8u,
    (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
    v16);
  *(_DWORD *)(v4 + 8 * v8 + 4) = (unsigned int)v5 & 0xFFFE0007 | (2
                                                                * (a3 & 0x78 | (2
                                                                              * (a3 & 2 | ((a4 | ((a3 & 1) << 8)) << 6)))));
  _InterlockedOr(v15, 0);
  *(_BYTE *)(a1[6] + v7 + 8) = 1;
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + a1[6] + 16LL), v10);
}
