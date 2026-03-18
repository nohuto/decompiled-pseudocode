/*
 * XREFs of HvlEnlightenProcessor @ 0x14016337C
 * Callers:
 *     HvlpInitializeBootProcessor @ 0x1401E68FC (HvlpInitializeBootProcessor.c)
 *     KiInitializeKernel @ 0x1403F8DE8 (KiInitializeKernel.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     MmMapIoSpaceEx @ 0x140115984 (MmMapIoSpaceEx.c)
 *     HvlpGetLpIndexFromProcessorIndex @ 0x1401E6570 (HvlpGetLpIndexFromProcessorIndex.c)
 *     sub_1401E65D4 @ 0x1401E65D4 (sub_1401E65D4.c)
 *     HvlpGetRegister64 @ 0x1401F03C0 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1401F0464 (HvlpSetRegister64.c)
 *     HvlpDiscoverTopologyLocal @ 0x140670858 (HvlpDiscoverTopologyLocal.c)
 */

__int64 HvlEnlightenProcessor()
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  char v2; // cl
  unsigned int v3; // edx
  PHYSICAL_ADDRESS v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 Number; // rcx
  unsigned int LpIndexFromProcessorIndex; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  PHYSICAL_ADDRESS v13; // [rsp+38h] [rbp+10h] BYREF

  result = (unsigned int)HvlpFlags;
  if ( (HvlpFlags & 1) != 0 )
  {
    HvlpGetRegister64(589827LL, &v12);
    CurrentPrcb = KeGetCurrentPrcb();
    v2 = v12 & 0x3F;
    v3 = (unsigned int)v12 >> 6;
    HvlpVirtualProcessorMapping[2 * CurrentPrcb->Number] = (unsigned int)v12 >> 6;
    HvlpVirtualProcessorMapping[2 * CurrentPrcb->Number + 1] = v2;
    if ( (_DWORD)v12 != CurrentPrcb->Number )
      HvlpVirtualProcessorsIdentityMapped = 0;
    if ( v3 < 0x10 )
    {
      result = (unsigned int)HvlpFlags;
      if ( v3 > (((unsigned int)HvlpFlags >> 9) & 0xF) )
      {
        result = ((unsigned __int16)HvlpFlags ^ (unsigned __int16)((_WORD)v3 << 9)) & 0x1E00 ^ (unsigned int)HvlpFlags;
        HvlpFlags ^= ((unsigned __int16)HvlpFlags ^ (unsigned __int16)((_WORD)v3 << 9)) & 0x1E00;
      }
    }
    else
    {
      HvlEnlightenments &= ~0x80u;
      HvlpEnlightenments &= ~0x80u;
      result = (unsigned int)HvlpFlags;
    }
    if ( (result & 2) != 0 )
    {
      v13.QuadPart = 0LL;
      if ( (result & 4) != 0 )
      {
        HvlpGetRegister64(589843LL, &v13);
        v4 = v13;
        v5 = v13.QuadPart & 0xFFFFFFFFFFFFF000uLL;
        if ( CurrentPrcb->Number )
          v6 = MmMapIoSpaceEx(v5, 4096LL, 4u);
        else
          v6 = qword_1403218E0(v5, 1LL, 4LL);
        CurrentPrcb->VirtualApicAssist = (void *)v6;
      }
      else
      {
        v4.QuadPart = MmGetPhysicalAddress(CurrentPrcb->VirtualApicAssist).QuadPart & 0xFFFFFFFFFFFFF000uLL;
      }
      HvlpSetRegister64(589843LL, v4.QuadPart | 1);
      result = (unsigned int)HvlpFlags;
    }
    if ( (result & 0x40) != 0 )
    {
      v7 = ((unsigned __int64)((result & 0x20) == 0) << 17) | 0x30;
      HvlpSetRegister64(655360LL, v7);
      HvlpSetRegister64(655361LL, v7);
      result = (unsigned int)HvlpFlags;
    }
    if ( (result & 4) != 0 )
    {
      Number = CurrentPrcb->Number;
      if ( (_DWORD)Number )
      {
        LpIndexFromProcessorIndex = HvlpGetLpIndexFromProcessorIndex(Number);
        v10 = sub_1401E65D4(LpIndexFromProcessorIndex);
        return HvlpDiscoverTopologyLocal(v11, *(unsigned int *)(v10 + 8), v10 + 16, v10 + 20);
      }
    }
  }
  return result;
}
