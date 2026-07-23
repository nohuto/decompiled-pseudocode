/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x14040B548
 * Callers:
 *     AlpcpPrepareViewForDelivery @ 0x14040A858 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpReceiveView @ 0x14040BC48 (AlpcpReceiveView.c)
 * Callees:
 *     MiSetReadOnlyOnSectionView @ 0x14000C9C0 (MiSetReadOnlyOnSectionView.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiVadMapsLargeImage @ 0x14002BF90 (MiVadMapsLargeImage.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiCheckSecuredVad @ 0x14040B2AC (MiCheckSecuredVad.c)
 *     MiIsRangeFullyCommitted @ 0x14040B41C (MiIsRangeFullyCommitted.c)
 *     MiAddSecureEntry @ 0x140429A00 (MiAddSecureEntry.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1404B47AC (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

__int64 __fastcall MmSecureVirtualMemoryAgainstWrites(_KPROCESS *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // r12
  unsigned __int64 v7; // rsi
  _KPROCESS *Process; // r13
  ULONG_PTR v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // r8
  int v12; // edx
  __int64 v14; // rcx
  int v15; // [rsp+30h] [rbp-88h] BYREF
  _KPROCESS *v16; // [rsp+38h] [rbp-80h]
  _BYTE v17[48]; // [rsp+40h] [rbp-78h] BYREF

  v16 = a1;
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
  v9 = MiObtainReferencedVad(v3, &v15);
  v10 = v9;
  if ( v9 )
  {
    if ( v7 >> 12 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
      && ((1 << (*(_BYTE *)(v9 + 48) & 7)) & 0x55) != 0
      && ((*(_DWORD *)(v9 + 48) & 0x4000) == 0 || (int)MiCheckSecuredVad(v9, a2, a3, 1u) >= 0) )
    {
      v11 = *(unsigned int *)(v10 + 48);
      if ( (v11 & 0x8000) == 0 && (*(_DWORD *)(v10 + 64) & 0x4000000) == 0 )
      {
        v12 = *(_DWORD *)(**(_QWORD **)(v10 + 72) + 56LL);
        if ( ((v12 & 0x20) != 0
           || (MmCompatibleProtectionMask[(v11 >> 3) & 7] | 0x702) == (MmCompatibleProtectionMask[(v11 >> 3) & 7] | 0x700))
          && ((v12 & 0xA0) == 0x80 || !MiVadMapsLargeImage(v10) && (unsigned int)MiIsRangeFullyCommitted(v14, v3, v7))
          && (int)MiSetReadOnlyOnSectionView((__int64)v16, v10) >= 0 )
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
