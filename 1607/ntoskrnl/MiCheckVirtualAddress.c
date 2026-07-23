/*
 * XREFs of MiCheckVirtualAddress @ 0x14001E978
 * Callers:
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     MiIsFaultPteIntact @ 0x1400257E0 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1400259F0 (MiFindActualFaultingPte.c)
 *     MiResolveDemandZeroFault @ 0x14003A610 (MiResolveDemandZeroFault.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiTranslatePageForCopy @ 0x1401E4A80 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 */

__int64 __fastcall MiCheckVirtualAddress(unsigned __int64 a1, _DWORD *a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 Address; // rax
  _DWORD *v7; // r10
  __int64 v8; // r11

  *a3 = 0LL;
  if ( a1 > 0x7FFFFFFEFFFFLL )
  {
    if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
      *a2 = 24;
    else
      *a2 = 4;
  }
  else
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
    {
      v4 = a1 & 0x7FFFFFFFF000LL;
      if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
      {
        result = qword_1403269C8;
LABEL_8:
        *a2 = 1;
        return result;
      }
      if ( v4 == qword_1403269D8 && v4 )
      {
        result = qword_1403269D0;
        goto LABEL_8;
      }
    }
    Address = MiLocateAddress(a1, a2);
    *a3 = Address;
    if ( Address )
      return MiCheckUserVirtualAddress(v8, v7, Address, 0LL);
    *v7 = 24;
  }
  return 0LL;
}
