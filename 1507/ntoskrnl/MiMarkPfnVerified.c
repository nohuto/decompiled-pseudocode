/*
 * XREFs of MiMarkPfnVerified @ 0x1400796B8
 * Callers:
 *     MiSectionCreated @ 0x14002E3D0 (MiSectionCreated.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 *     MiValidateInPage @ 0x140087A20 (MiValidateInPage.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiWriteCompletePfn @ 0x1400B51B0 (MiWriteCompletePfn.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiInitializeImageProtos @ 0x1400E3274 (MiInitializeImageProtos.c)
 *     MiGatherMappedPages @ 0x1400E37E8 (MiGatherMappedPages.c)
 *     MiSetProtectionOnTransitionPte @ 0x140129CD0 (MiSetProtectionOnTransitionPte.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 *     MiCompleteSecureProcessFault @ 0x140223B8C (MiCompleteSecureProcessFault.c)
 *     MmChangeImageProtection @ 0x140452054 (MmChangeImageProtection.c)
 *     MiValidateImagePfn @ 0x1404B13C4 (MiValidateImagePfn.c)
 *     MiPerformFixups @ 0x1404B1810 (MiPerformFixups.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x1407CCEC0 (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1400597B0 (MiGetPagePrivilege.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x1401FF2DC (KeSetPagePrivilege.c)
 */

unsigned __int8 __fastcall MiMarkPfnVerified(__int64 a1, char a2)
{
  ULONG_PTR v4; // rbp
  unsigned __int8 CurrentIrql; // si
  unsigned int v6; // edi
  unsigned __int8 result; // al
  unsigned __int64 v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = (a1 + 0x58000000000LL) / 48;
  if ( (a2 & 4) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v6 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v6);
      }
      while ( *(__int64 *)(a1 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    }
  }
  if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) != 3 && (a2 & 2) != 0 && (MiFlags & 0x30000) != 0 )
  {
    v8[1] = 0LL;
    if ( (BYTE2(MiFlags) & 3) == 1 )
      v8[0] = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
    if ( (int)KeSetPagePrivilege(v4, 0LL, 2LL) < 0 )
      KeBugCheckEx(0x1Au, 0x5150CuLL, v4, 0LL, 0LL);
  }
  result = (*(_QWORD *)(a1 + 40) >> 54) & 7;
  if ( result != 3 )
  {
    result = 0;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
  }
  if ( (a2 & 1) != 0 && (MiFlags & 0x30000) != 0 )
  {
    MiGetPagePrivilege(a1, 1, v8);
    result = KeSetPagePrivilege(v4, v8, 4LL);
  }
  if ( CurrentIrql != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
