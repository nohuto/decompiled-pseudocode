/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x14047B7F8
 * Callers:
 *     AlpcpPrepareViewForDelivery @ 0x14047BDF0 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpReceiveView @ 0x14047C0A8 (AlpcpReceiveView.c)
 * Callees:
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiVadMapsLargeImage @ 0x1400627D0 (MiVadMapsLargeImage.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400BB050 (MiSetReadOnlyOnSectionView.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiAddSecureEntry @ 0x14047B4A0 (MiAddSecureEntry.c)
 *     MiIsRangeFullyCommitted @ 0x14047B9EC (MiIsRangeFullyCommitted.c)
 *     MiCheckSecuredVad @ 0x14047BB18 (MiCheckSecuredVad.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1404ABF3C (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

_DWORD *__fastcall MmSecureVirtualMemoryAgainstWrites(_KPROCESS *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  _DWORD *v6; // r12
  unsigned __int64 v7; // rsi
  _KPROCESS *Process; // r13
  unsigned int *v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // r8
  int v12; // edx
  __int64 v14; // rcx
  int v16; // [rsp+38h] [rbp-80h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v17; // [rsp+40h] [rbp-78h] BYREF

  v3 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v6 = 0LL;
  v7 = (a3 + a2 - 1) | 0xFFF;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == a1 )
    Process = 0LL;
  else
    KiStackAttachProcess(a1, 0LL, (__int64)&v17);
  v9 = MiObtainReferencedVad(v3, &v16);
  v10 = (__int64)v9;
  if ( v9 )
  {
    if ( v7 >> 12 <= (v9[7] | ((unsigned __int64)*((unsigned __int8 *)v9 + 33) << 32))
      && ((1 << (v9[12] & 7)) & 0x55) != 0
      && ((v9[12] & 0x4000) == 0 || (int)MiCheckSecuredVad(v9, a2, a3, 1LL) >= 0) )
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
    MiUnlockAndDereferenceVad((PVOID)v10);
  }
  if ( Process )
    KiUnstackDetachProcess(&v17, 0LL);
  return v6;
}
