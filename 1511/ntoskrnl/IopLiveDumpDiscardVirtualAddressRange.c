/*
 * XREFs of IopLiveDumpDiscardVirtualAddressRange @ 0x1405FD2D4
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1405FCA38 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1405FCFE8 (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1400A6650 (RtlClearBitsEx.c)
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     MmIsAddressValid @ 0x1401D5648 (MmIsAddressValid.c)
 */

void __fastcall IopLiveDumpDiscardVirtualAddressRange(__int64 a1, char *a2, unsigned __int64 a3)
{
  char *v3; // rdi
  unsigned __int64 i; // rbx
  PHYSICAL_ADDRESS v6; // rax

  if ( a3 )
  {
    v3 = a2;
    if ( a2 )
    {
      for ( i = ((a3 & 0xFFF) != 0) + (a3 >> 12); i; --i )
      {
        if ( MmIsAddressValid(v3) )
        {
          v6.QuadPart = MmGetPhysicalAddress(v3).QuadPart >> 12;
          if ( v6.QuadPart < *(_QWORD *)(a1 + 400) )
            RtlClearBitsEx(a1 + 400, v6.QuadPart, 1uLL);
        }
        v3 += 4096;
      }
    }
  }
}
