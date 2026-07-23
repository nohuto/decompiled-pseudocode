/*
 * XREFs of HvlInitializeProcessor @ 0x14052F954
 * Callers:
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     HvlpFreeOverlayPages @ 0x14010760C (HvlpFreeOverlayPages.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlpAllocateOverlayPages @ 0x1401AE844 (HvlpAllocateOverlayPages.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401AFDE4 (HvlpSetupCachedHypercallPages.c)
 *     MmAllocateIndependentPages @ 0x1403CBDCC (MmAllocateIndependentPages.c)
 *     sub_1405F69BC @ 0x1405F69BC (sub_1405F69BC.c)
 */

NTSTATUS __fastcall HvlInitializeProcessor(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rbp
  unsigned __int64 v4; // r8
  void *v5; // rdi
  __int64 OverlayPages; // rax
  __int64 IndependentPages; // rax
  SIZE_T v8; // rdx
  MEMORY_CACHING_TYPE v9; // r8d
  PHYSICAL_ADDRESS *v10; // rsi
  unsigned __int8 v11[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v12; // [rsp+28h] [rbp-90h]

  if ( (HvlpFlags & 1) == 0 )
    return 0;
  if ( (HvlpFlags & 4) == 0 || (result = sub_1405F69BC(), result >= 0) )
  {
    v3 = 2LL;
    v12 = *(unsigned int *)(a1 + 36);
    result = HvlpEnterIumSecureMode(1u, 2, 0, v11);
    if ( (int)(result + 0x80000000) < 0 || result == -1073741667 )
    {
      v5 = 0LL;
      if ( (HvlpFlags & 2) != 0 && (HvlpFlags & 4) == 0 )
      {
        OverlayPages = HvlpAllocateOverlayPages();
        v5 = (void *)OverlayPages;
        if ( !OverlayPages )
          return -1073741670;
        *(_QWORD *)(a1 + 24584) = OverlayPages;
      }
      IndependentPages = MmAllocateIndependentPages(
                           0x6000uLL,
                           *(unsigned __int16 *)(*(_QWORD *)(a1 + 1600) + 146LL),
                           v4);
      v10 = (PHYSICAL_ADDRESS *)IndependentPages;
      if ( IndependentPages )
      {
        *(_QWORD *)(a1 + 24576) = IndependentPages;
        do
        {
          v10[2] = MmGetPhysicalAddress(v10);
          v10 += 512;
          --v3;
        }
        while ( v3 );
        HvlpSetupCachedHypercallPages((_SLIST_HEADER *)a1);
        return 0;
      }
      if ( v5 )
      {
        HvlpFreeOverlayPages(v5, v8, v9);
        *(_QWORD *)(a1 + 24584) = 0LL;
      }
      return -1073741670;
    }
  }
  return result;
}
