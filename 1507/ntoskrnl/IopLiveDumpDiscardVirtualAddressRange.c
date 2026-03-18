/*
 * XREFs of IopLiveDumpDiscardVirtualAddressRange @ 0x140677C2C
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140677378 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140677924 (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14003ED80 (RtlClearBitsEx.c)
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     MmIsAddressValid @ 0x1402175B0 (MmIsAddressValid.c)
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
