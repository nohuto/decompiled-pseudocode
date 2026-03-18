/*
 * XREFs of ACPIRangeValidatePciResources @ 0x1C001DD6C
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C006F490 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C006F800 (ACPIBusIrpQueryResourceRequirements.c)
 * Callees:
 *     ACPIRangeValidatePciMemoryResource @ 0x1C001DEA8 (ACPIRangeValidatePciMemoryResource.c)
 */

void __fastcall ACPIRangeValidatePciResources(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3)
{
  int v3; // ebx
  unsigned int v6; // r12d
  ULONG_PTR v7; // rdi
  unsigned int i; // r15d
  __int64 v9; // rsi
  char v10; // cl
  ULONGLONG v11; // rax
  unsigned __int64 v12; // rcx
  char v13; // dl
  unsigned __int64 Alignment; // [rsp+30h] [rbp-10h] BYREF
  int v15; // [rsp+88h] [rbp+48h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0;
  v15 = 0;
  if ( !BugCheckParameter3 )
    KeBugCheckEx(0xA5u, 2uLL, BugCheckParameter2, 2uLL, 0LL);
  v6 = 0;
  v7 = BugCheckParameter3 + 32;
  if ( *(_DWORD *)(BugCheckParameter3 + 28) )
  {
    do
    {
      for ( i = 0; i < *(_DWORD *)(v7 + 4); ++i )
      {
        v9 = 32LL * i;
        v10 = *(_BYTE *)(v9 + v7 + 9);
        if ( ((v10 - 1) & 0xF9) == 0 && v10 != 5 )
        {
          v11 = RtlIoDecodeMemIoResource(
                  (PIO_RESOURCE_DESCRIPTOR)(v9 + v7 + 8),
                  &Alignment,
                  &MinimumAddress,
                  &MaximumAddress);
          a3 = 0xFFFFFFFFLL;
          v12 = MaximumAddress - MinimumAddress + 1;
          if ( v12 > 0xFFFFFFFF && *(_BYTE *)(v9 + v7 + 9) != 7 )
            v15 = ++v3;
          if ( v12 != v11 )
            v15 = ++v3;
          if ( !Alignment )
            v15 = ++v3;
          if ( ((Alignment - 1) & MinimumAddress) != 0 )
            v15 = ++v3;
        }
        v13 = *(_BYTE *)(v9 + v7 + 9);
        if ( v13 == 6 && *(_DWORD *)(v9 + v7 + 24) - *(_DWORD *)(v9 + v7 + 20) + 1 != *(_DWORD *)(v9 + v7 + 16) )
          v15 = ++v3;
        if ( ((v13 - 3) & 0xFB) == 0 )
        {
          ACPIRangeValidatePciMemoryResource(v7, i, a3, &v15);
          v3 = v15;
        }
      }
      ++v6;
      v7 += (unsigned int)(32 * (*(_DWORD *)(v7 + 4) - 1) + 40);
    }
    while ( v6 < *(_DWORD *)(BugCheckParameter3 + 28) );
    if ( v3 )
      KeBugCheckEx(0xA5u, 2uLL, BugCheckParameter2, BugCheckParameter3, E820Info);
  }
}
