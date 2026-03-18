/*
 * XREFs of RootHub_DisableLPMForSlot @ 0x1C0026F24
 * Callers:
 *     UsbDevice_UcxEvtDisable @ 0x1C0031D10 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 */

void __fastcall RootHub_DisableLPMForSlot(_QWORD *a1, int a2, int a3)
{
  __int64 v3; // r14
  __int64 v6; // rbp
  __int64 v7; // rsi
  KIRQL v8; // r12
  int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h]

  v3 = a1[5];
  v6 = 56LL * (unsigned int)(a2 - 1);
  v7 = 2LL * (unsigned int)(a2 - 1);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + a1[6] + 16LL));
  if ( *(_BYTE *)(a1[6] + v6 + 8) )
  {
    v9 = *(_DWORD *)(v3 + 8 * v7 + 4);
    if ( BYTE1(v9) == a3 )
    {
      v10 = a1[1];
      LODWORD(v17) = *(_DWORD *)(v3 + 8 * v7 + 4);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v10 + 64),
        4u,
        0xAu,
        0xF9u,
        (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
        v17);
      v11 = v9 & 0xFFFE0007;
      v12 = a1[1];
      LODWORD(v17) = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v12 + 64),
        4u,
        0xAu,
        0xFAu,
        (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
        v17);
      *(_DWORD *)(v3 + 8 * v7 + 4) = v11;
      _InterlockedOr(v16, 0);
      v14 = a1[1];
      LODWORD(v17) = *(_DWORD *)(v3 + 8 * v7 + 12);
      v13 = v17;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v14 + 64),
        4u,
        0xAu,
        0xFBu,
        (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
        v17);
      v13 &= 0xFFFFC000;
      v15 = a1[1];
      LODWORD(v17) = v13;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v15 + 64),
        4u,
        0xAu,
        0xFCu,
        (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
        v17);
      *(_DWORD *)(v3 + 8 * v7 + 12) = v13;
      _InterlockedOr(v16, 0);
      *(_BYTE *)(a1[6] + v6 + 8) = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + a1[6] + 16LL), v8);
}
