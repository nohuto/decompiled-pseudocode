/*
 * XREFs of HvlEnlightenProcessor @ 0x140136D9C
 * Callers:
 *     HvlpInitializeBootProcessor @ 0x1401AF350 (HvlpInitializeBootProcessor.c)
 *     KiInitializeKernel @ 0x1403A9234 (KiInitializeKernel.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1400C0C7C (MmMapIoSpaceEx.c)
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     HvlpGetLpIndexFromProcessorIndex @ 0x1401AF204 (HvlpGetLpIndexFromProcessorIndex.c)
 *     sub_1401AF268 @ 0x1401AF268 (sub_1401AF268.c)
 *     HvlpGetRegister64 @ 0x1401B522C (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1401B52D0 (HvlpSetRegister64.c)
 *     HvlpDiscoverTopologyLocal @ 0x1405F6988 (HvlpDiscoverTopologyLocal.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF
  PHYSICAL_ADDRESS v16; // [rsp+38h] [rbp+10h] BYREF

  result = (unsigned int)HvlpFlags;
  if ( (HvlpFlags & 1) != 0 )
  {
    HvlpGetRegister64(589827LL, &v15);
    CurrentPrcb = KeGetCurrentPrcb();
    v2 = v15 & 0x3F;
    v3 = (unsigned int)v15 >> 6;
    *((_BYTE *)&HvlpVirtualProcessorMapping + 2 * CurrentPrcb->Number) = (unsigned int)v15 >> 6;
    *((_BYTE *)&HvlpVirtualProcessorMapping + 2 * CurrentPrcb->Number + 1) = v2;
    if ( (_DWORD)v15 != CurrentPrcb->Number )
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
      v16.QuadPart = 0LL;
      if ( (result & 4) != 0 )
      {
        HvlpGetRegister64(589843LL, &v16);
        v4 = v16;
        v5 = v16.QuadPart & 0xFFFFFFFFFFFFF000uLL;
        if ( CurrentPrcb->Number )
          v6 = MmMapIoSpaceEx(v5, 4096LL, 4u);
        else
          v6 = qword_1402D2790(v5, 1LL, 4LL);
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
        v13 = sub_1401AF268(LpIndexFromProcessorIndex, v10, v11, v12);
        return HvlpDiscoverTopologyLocal(v14, *(unsigned int *)(v13 + 8), v13 + 16, v13 + 20);
      }
    }
  }
  return result;
}
