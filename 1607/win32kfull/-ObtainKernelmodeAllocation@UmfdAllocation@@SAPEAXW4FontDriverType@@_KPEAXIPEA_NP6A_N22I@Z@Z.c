/*
 * XREFs of ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C02D9D0C
 * Callers:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C02DA484 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1C02DA604 (-CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C02DAC80 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D7F90 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D7FB0 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C02D80DC (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ??1?$unique_ptr@VUmfdAllocation@@V_lambda_e063d8fab83c87fda3b4c41002095086_@@@@QEAA@XZ @ 0x1C02D9CE8 (--1-$unique_ptr@VUmfdAllocation@@V_lambda_e063d8fab83c87fda3b4c41002095086_@@@@QEAA@XZ.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C02D9EE8 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x1C02D9F98 (-TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z.c)
 *     ?TryProbeForRead@@YA_NPEAXII@Z @ 0x1C02D9FB0 (-TryProbeForRead@@YA_NPEAXII@Z.c)
 *     ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z @ 0x1C02D9FE4 (-_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z.c)
 *     ?_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z @ 0x1C02DA050 (-_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z.c)
 */

char *__fastcall UmfdAllocation::ObtainKernelmodeAllocation(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _BYTE *a5,
        __int64 a6)
{
  PVOID v6; // rbx
  struct UmfdAllocation *v11; // rsi
  unsigned int v12; // r8d
  _DWORD *v13; // rdi
  _DWORD *v15; // rax
  _DWORD *v16; // rsi
  PVOID v17; // rbx
  struct UmfdAllocation *v18; // rax
  struct UmfdAllocation *v19; // r15
  void *v20; // [rsp+30h] [rbp-48h] BYREF

  v6 = UmfdAllocation::s_allocationLookupLock;
  NSInstrumentation::CPlatformReaderWriterLock::AcquireShared((NSInstrumentation::CPlatformReaderWriterLock *)UmfdAllocation::s_allocationLookupLock);
  v11 = UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(a3);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  v13 = 0LL;
  if ( a5 )
    *a5 = 0;
  if ( v11 )
  {
    if ( (unsigned __int8)UmfdAllocation::_ValidateAllocationPair(a1, a2, v11, a3, a4, a6, v20) )
      return (char *)v11 + 28;
    UmfdAllocation::ReleaseKernelmodeAllocation((char *)v11 + 28);
    return 0LL;
  }
  if ( !TryProbeForRead(a3, a4, v12) || a4 + 28 < a4 )
    return 0LL;
  v15 = EngAllocMem(0, a4 + 28, 0x61646647u);
  v20 = v15;
  v16 = v15;
  if ( v15 )
  {
    v15[1] = a1;
    *((_QWORD *)v15 + 1) = a2;
    v15[6] = a4;
    *v15 = 1;
    *((_QWORD *)v15 + 2) = a3;
    if ( TryCopyMemoryFromProbedPointer(v15 + 7, a3, a4) )
    {
      v17 = UmfdAllocation::s_allocationLookupLock;
      NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive((NSInstrumentation::CPlatformReaderWriterLock *)UmfdAllocation::s_allocationLookupLock);
      v18 = UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(a3);
      v19 = v18;
      if ( v18 )
      {
        if ( (unsigned __int8)UmfdAllocation::_ValidateAllocationPair(a1, a2, v18, a3, a4, a6, v20) )
          v13 = (_DWORD *)((char *)v19 + 28);
        else
          UmfdAllocation::ReleaseKernelmodeAllocation((char *)v19 + 28);
      }
      else if ( NSInstrumentation::CPointerHashTable::Insert(UmfdAllocation::s_allocationLookup, a3, v16 + 7) )
      {
        ExReleasePushLockExclusiveEx(v17, 0LL);
        KeLeaveCriticalRegion();
        v20 = 0LL;
        if ( a5 )
          *a5 = 1;
        v13 = v16 + 7;
        goto LABEL_21;
      }
      ExReleasePushLockExclusiveEx(v17, 0LL);
      KeLeaveCriticalRegion();
    }
  }
LABEL_21:
  unique_ptr<UmfdAllocation,_lambda_e063d8fab83c87fda3b4c41002095086_>::~unique_ptr<UmfdAllocation,_lambda_e063d8fab83c87fda3b4c41002095086_>(&v20);
  return (char *)v13;
}
