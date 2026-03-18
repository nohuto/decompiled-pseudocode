/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x140474640
 * Callers:
 *     AlpcpReceiveView @ 0x140474CA0 (AlpcpReceiveView.c)
 *     AlpcpPrepareViewForDelivery @ 0x140477090 (AlpcpPrepareViewForDelivery.c)
 * Callees:
 *     MiSetReadOnlyOnSectionView @ 0x140031070 (MiSetReadOnlyOnSectionView.c)
 *     MiVadMapsLargeImage @ 0x14008D1A0 (MiVadMapsLargeImage.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiIsRangeFullyCommitted @ 0x140474834 (MiIsRangeFullyCommitted.c)
 *     MiCheckSecuredVad @ 0x1404749C8 (MiCheckSecuredVad.c)
 *     MiAddSecureEntry @ 0x1404B5A90 (MiAddSecureEntry.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x14053D95C (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

__int64 __fastcall MmSecureVirtualMemoryAgainstWrites(_KPROCESS *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // r12
  unsigned __int64 v7; // rsi
  _KPROCESS *Process; // r13
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // r8
  int v12; // edx
  __int64 v14; // rcx
  int v16; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v17[48]; // [rsp+40h] [rbp-78h] BYREF

  v3 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v6 = 0LL;
  v7 = (a3 + a2 - 1) | 0xFFF;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == a1 )
    Process = 0LL;
  else
    KiStackAttachProcess(a1, 0, (__int64)v17);
  v9 = MiObtainReferencedVad(v3, &v16);
  v10 = v9;
  if ( v9 )
  {
    if ( v7 >> 12 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
      && ((1 << (*(_BYTE *)(v9 + 48) & 7)) & 0x55) != 0
      && ((*(_DWORD *)(v9 + 48) & 0x4000) == 0 || (int)MiCheckSecuredVad(v9, a2, a3, 1LL) >= 0) )
    {
      v11 = *(unsigned int *)(v10 + 48);
      if ( (v11 & 0x8000) == 0 && (*(_DWORD *)(v10 + 64) & 0x4000000) == 0 )
      {
        v12 = *(_DWORD *)(**(_QWORD **)(v10 + 72) + 56LL);
        if ( ((v12 & 0x20) != 0
           || (MmCompatibleProtectionMask[(v11 >> 3) & 7] | 0x702) == (MmCompatibleProtectionMask[(v11 >> 3) & 7] | 0x700))
          && ((v12 & 0xA0) == 0x80 || !MiVadMapsLargeImage(v10) && (unsigned int)MiIsRangeFullyCommitted(v14, v3, v7))
          && (int)MiSetReadOnlyOnSectionView((__int64)a1, v10, v3, v7) >= 0 )
        {
          v6 = MiAddSecureEntry(v10, v3, v7, -1073741823, 0);
          if ( !v6 )
            MiUnsecureVirtualMemoryAgainstWrites(v10, v3, v7);
        }
      }
    }
    MiUnlockAndDereferenceVad((char *)v10);
  }
  if ( Process )
    KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
  return v6;
}
