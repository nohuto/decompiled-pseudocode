/*
 * XREFs of HvlInitializeProcessor @ 0x14054E878
 * Callers:
 *     KiStartDynamicProcessor @ 0x14064F124 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     HvlpFreeOverlayPages @ 0x1401126F8 (HvlpFreeOverlayPages.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpGetVpIndexFromApicId @ 0x1401BB89C (HvlpGetVpIndexFromApicId.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401BC4F8 (HvlpSetupCachedHypercallPages.c)
 *     HvlpAllocateOverlayPages @ 0x1401BFE1C (HvlpAllocateOverlayPages.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 *     HvlpEnableRootVirtualProcessor @ 0x140620620 (HvlpEnableRootVirtualProcessor.c)
 */

int __fastcall HvlInitializeProcessor(__int64 a1, int a2)
{
  __int64 v4; // rbp
  int result; // eax
  unsigned int v6; // ecx
  unsigned __int64 v7; // r8
  void *v8; // rdi
  __int64 OverlayPages; // rax
  __int64 IndependentPages; // rax
  SIZE_T v11; // rdx
  MEMORY_CACHING_TYPE v12; // r8d
  PHYSICAL_ADDRESS *v13; // rsi
  _DWORD v14[4]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v15[8]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v16; // [rsp+38h] [rbp-90h]
  __int64 v17; // [rsp+40h] [rbp-88h]

  if ( !HvlHypervisorConnected )
    return 0;
  v4 = 2LL;
  if ( (HvlpFlags & 2) == 0 || (result = HvlpEnableRootVirtualProcessor(), result >= 0) )
  {
    v6 = *(_DWORD *)(a1 + 36);
    v14[0] = v6;
    if ( (HvlEnlightenments & 0x8000) != 0 )
    {
      result = HvlpGetVpIndexFromApicId(a2, v14);
      if ( result < 0 )
        return result;
      v6 = v14[0];
    }
    v16 = v6;
    v17 = *(unsigned int *)(a1 + 36);
    result = VslpEnterIumSecureMode(1, 2LL, 0LL, (__int64)v15);
    if ( (int)(result + 0x80000000) < 0 || result == -1073741667 )
    {
      v8 = 0LL;
      if ( (HvlpFlags & 1) != 0 && (HvlpFlags & 2) == 0 )
      {
        OverlayPages = HvlpAllocateOverlayPages();
        v8 = (void *)OverlayPages;
        if ( !OverlayPages )
          return -1073741670;
        *(_QWORD *)(a1 + 24584) = OverlayPages;
      }
      IndependentPages = MmAllocateIndependentPages(
                           0x6000uLL,
                           *(unsigned __int16 *)(*(_QWORD *)(a1 + 1600) + 146LL),
                           v7);
      v13 = (PHYSICAL_ADDRESS *)IndependentPages;
      if ( !IndependentPages )
      {
        if ( v8 )
        {
          HvlpFreeOverlayPages(v8, v11, v12);
          *(_QWORD *)(a1 + 24584) = 0LL;
        }
        return -1073741670;
      }
      *(_QWORD *)(a1 + 24576) = IndependentPages;
      do
      {
        v13[2] = MmGetPhysicalAddress(v13);
        v13 += 512;
        --v4;
      }
      while ( v4 );
      HvlpSetupCachedHypercallPages((_SLIST_HEADER *)a1);
      return 0;
    }
  }
  return result;
}
