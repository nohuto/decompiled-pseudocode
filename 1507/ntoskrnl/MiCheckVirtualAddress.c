/*
 * XREFs of MiCheckVirtualAddress @ 0x1400896DC
 * Callers:
 *     MiIsFaultPteIntact @ 0x14007BFC0 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14007C0E0 (MiFindActualFaultingPte.c)
 *     MiSystemFault @ 0x14007DA70 (MiSystemFault.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiTranslatePageForCopy @ 0x14021586C (MiTranslatePageForCopy.c)
 * Callees:
 *     MiCheckUserVirtualAddress @ 0x140089780 (MiCheckUserVirtualAddress.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 */

__int64 __fastcall MiCheckVirtualAddress(unsigned __int64 a1, _DWORD *a2, __int64 *a3)
{
  __int64 Address; // rax
  __int64 result; // rax

  *a3 = 0LL;
  if ( a1 > (unsigned __int64)MmHighestUserAddress )
  {
    if ( a1 + 0x98000000000LL > 0x7FFFFFFFFFLL )
      *a2 = 24;
    else
      *a2 = 4;
  }
  else
  {
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
      && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink) & 1) == 0 )
    {
      result = qword_14034EB58;
      *a2 = 1;
      return result;
    }
    Address = MiLocateAddress(a1);
    *a3 = Address;
    if ( Address )
      return MiCheckUserVirtualAddress(a1, a2, Address, 0LL);
    *a2 = 24;
  }
  return 0LL;
}
