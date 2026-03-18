/*
 * XREFs of ACPIRangeValidatePciResources @ 0x1C000A9AC
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C0085200 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C00857B0 (ACPIBusIrpQueryResourceRequirements.c)
 * Callees:
 *     ACPIRangeValidatePciMemoryResource @ 0x1C000AB00 (ACPIRangeValidatePciMemoryResource.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dDDL @ 0x1C00555D0 (WPP_RECORDER_SF_dDDL.c)
 *     WPP_RECORDER_SF_dxxxx @ 0x1C0055AC4 (WPP_RECORDER_SF_dxxxx.c)
 */

void __fastcall ACPIRangeValidatePciResources(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned __int64 a3,
        int a4)
{
  ULONG_PTR v4; // r15
  int v6; // edi
  ULONG_PTR v7; // rbx
  unsigned int i; // esi
  __int64 v9; // r14
  char v10; // cl
  ULONGLONG v11; // rax
  int v12; // edx
  ULONGLONG v13; // r13
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r12
  int v16; // ecx
  int BugCheckParameter4; // [rsp+20h] [rbp-48h]
  unsigned __int64 MinimumAddress; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 Alignment; // [rsp+58h] [rbp-10h] BYREF
  int v21; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v22; // [rsp+C0h] [rbp+58h]
  unsigned __int64 MaximumAddress; // [rsp+C8h] [rbp+60h] BYREF

  v4 = BugCheckParameter3;
  v21 = 0;
  v6 = 0;
  if ( !BugCheckParameter3 )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      13,
      14,
      (__int64)&WPP_f03c5da326113bd9ca6ac78acf399cb9_Traceguids);
    KeBugCheckEx(0xA5u, 2uLL, BugCheckParameter2, 2uLL, 0LL);
  }
  v7 = BugCheckParameter3 + 32;
  v22 = 0;
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
          a3 = MaximumAddress;
          v13 = v11;
          v14 = MinimumAddress;
          v15 = MaximumAddress - MinimumAddress + 1;
          if ( v15 > 0xFFFFFFFF && *(_BYTE *)(v9 + v7 + 9) != 7 )
          {
            WPP_RECORDER_SF_dxxxx(
              WPP_GLOBAL_Control->DeviceExtension,
              v12,
              MaximumAddress,
              15,
              BugCheckParameter4,
              i,
              MinimumAddress,
              MaximumAddress,
              MaximumAddress - MinimumAddress + 1,
              *(_DWORD *)(v9 + v7 + 20));
            a3 = MaximumAddress;
            ++v6;
            v14 = MinimumAddress;
            v21 = v6;
          }
          if ( v15 != v13 )
          {
            WPP_RECORDER_SF_dxxxx(
              WPP_GLOBAL_Control->DeviceExtension,
              v12,
              a3,
              16,
              BugCheckParameter4,
              i,
              v14,
              a3,
              v13,
              Alignment);
            a3 = MaximumAddress;
            ++v6;
            v14 = MinimumAddress;
            v21 = v6;
          }
          BugCheckParameter3 = Alignment;
          if ( !Alignment )
          {
            WPP_RECORDER_SF_dxxxx(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              a3,
              17,
              BugCheckParameter4,
              i,
              v14,
              a3,
              v13,
              0);
            a3 = MaximumAddress;
            ++v6;
            v14 = MinimumAddress;
            BugCheckParameter3 = Alignment;
            v21 = v6;
          }
          if ( ((BugCheckParameter3 - 1) & v14) != 0 )
          {
            WPP_RECORDER_SF_dxxxx(
              WPP_GLOBAL_Control->DeviceExtension,
              BugCheckParameter3,
              a3,
              18,
              BugCheckParameter4,
              i,
              v14,
              a3,
              v13,
              BugCheckParameter3);
            v21 = ++v6;
          }
        }
        if ( *(_BYTE *)(v9 + v7 + 9) == 6 )
        {
          v16 = *(_DWORD *)(v9 + v7 + 24);
          LODWORD(BugCheckParameter3) = *(_DWORD *)(v9 + v7 + 20);
          a3 = *(unsigned int *)(v9 + v7 + 16);
          if ( v16 - (_DWORD)BugCheckParameter3 + 1 != (_DWORD)a3 )
          {
            WPP_RECORDER_SF_dDDL(
              WPP_GLOBAL_Control->DeviceExtension,
              BugCheckParameter3,
              a3,
              a4,
              BugCheckParameter4,
              i,
              BugCheckParameter3,
              v16,
              *(_DWORD *)(v9 + v7 + 16));
            v21 = ++v6;
          }
        }
        if ( ((*(_BYTE *)(v9 + v7 + 9) - 3) & 0xFB) == 0 )
        {
          ACPIRangeValidatePciMemoryResource(v7, i, a3, &v21);
          v6 = v21;
        }
      }
      v7 += (unsigned int)(32 * (*(_DWORD *)(v7 + 4) - 1) + 40);
      ++v22;
    }
    while ( v22 < *(_DWORD *)(v4 + 28) );
    if ( v6 )
    {
      LOBYTE(BugCheckParameter3) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        BugCheckParameter3,
        13,
        20,
        (__int64)&WPP_f03c5da326113bd9ca6ac78acf399cb9_Traceguids);
      KeBugCheckEx(0xA5u, 2uLL, BugCheckParameter2, v4, E820Info);
    }
  }
}
