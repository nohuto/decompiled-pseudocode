/*
 * XREFs of HvlInitializeProcessor @ 0x14059A970
 * Callers:
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     HvlpFreeOverlayPages @ 0x14013A308 (HvlpFreeOverlayPages.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpAllocateOverlayPages @ 0x1401E57AC (HvlpAllocateOverlayPages.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401E7698 (HvlpSetupCachedHypercallPages.c)
 *     MmAllocateIndependentPages @ 0x1405610B8 (MmAllocateIndependentPages.c)
 *     sub_14067088C @ 0x14067088C (sub_14067088C.c)
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
  if ( (HvlpFlags & 4) == 0 || (result = sub_14067088C(), result >= 0) )
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
