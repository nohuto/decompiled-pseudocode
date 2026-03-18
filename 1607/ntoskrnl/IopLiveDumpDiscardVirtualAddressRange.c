/*
 * XREFs of IopLiveDumpDiscardVirtualAddressRange @ 0x140626F48
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1406266AC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140626C5C (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140013C68 (RtlClearBitsEx.c)
 *     MmGetPhysicalAddress @ 0x14002500C (MmGetPhysicalAddress.c)
 *     MmIsAddressValid @ 0x1401E6948 (MmIsAddressValid.c)
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
          v6.QuadPart = (unsigned __int64)MmGetPhysicalAddress(v3).QuadPart >> 12;
          if ( v6.QuadPart < *(_QWORD *)(a1 + 400) )
            RtlClearBitsEx(a1 + 400, v6.QuadPart, 1uLL);
        }
        v3 += 4096;
      }
    }
  }
}
