/*
 * XREFs of MiCheckVirtualAddress @ 0x14001D4E0
 * Callers:
 *     MiSystemFault @ 0x1400097D0 (MiSystemFault.c)
 *     MiIsFaultPteIntact @ 0x14001D2B8 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14001D360 (MiFindActualFaultingPte.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiResolvePageTablePage @ 0x14004CC60 (MiResolvePageTablePage.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiTranslatePageForCopy @ 0x1401D4068 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiCheckUserVirtualAddress @ 0x14001D660 (MiCheckUserVirtualAddress.c)
 */

__int64 __fastcall MiCheckVirtualAddress(unsigned __int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  _KPROCESS *Process; // r9
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  *a3 = 0LL;
  if ( a1 > (unsigned __int64)MmHighestUserAddress )
  {
    if ( a1 + 0x98000000000LL > 0x7FFFFFFFFFLL )
      *a2 = 24;
    else
      *a2 = 4;
    return 0LL;
  }
  else if ( (a1 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000
         || (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next) & 1) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v6 = Process[2].Affinity.Bitmap[3];
    if ( v6 )
    {
      v7 = a1 >> 12;
      if ( a1 >> 12 >= (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32))
        && v7 <= (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) )
      {
LABEL_6:
        *a3 = v6;
        return MiCheckUserVirtualAddress(a1, a2, v6);
      }
      v6 = Process[2].Affinity.Bitmap[1];
      while ( v6 )
      {
        if ( v7 > (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) )
        {
          v6 = *(_QWORD *)(v6 + 8);
        }
        else
        {
          if ( v7 >= (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) )
          {
            Process[2].Affinity.Bitmap[3] = v6;
            goto LABEL_6;
          }
          v6 = *(_QWORD *)v6;
        }
      }
    }
    *a3 = 0LL;
    *a2 = 24;
    return 0LL;
  }
  else
  {
    result = qword_1402FE6A8;
    *a2 = 1;
  }
  return result;
}
