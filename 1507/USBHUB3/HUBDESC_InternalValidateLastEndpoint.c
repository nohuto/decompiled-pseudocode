/*
 * XREFs of HUBDESC_InternalValidateLastEndpoint @ 0x1C002845C
 * Callers:
 *     HUBDESC_InternalValidateLastInterface @ 0x1C0028550 (HUBDESC_InternalValidateLastInterface.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C0028658 (HUBDESC_InternalValidateEndpointDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall HUBDESC_InternalValidateLastEndpoint(__int64 a1, int *a2, __int64 a3)
{
  int *v4; // rdi
  int v6; // eax
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 48) )
      *a2 = 0;
  }
  else
  {
    v9 = 0;
    v4 = &v9;
  }
  v6 = *(_DWORD *)(a1 + 256);
  if ( (v6 & 2) != 0 )
  {
    if ( *(_DWORD *)(a1 + 4) == 3 )
    {
      if ( (v6 & 0x10) == 0 )
      {
        *v4 = 2;
        WPP_RECORDER_SF_(a3, 2u, 5u, 0x1Bu, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 59LL);
      }
      v7 = *(_DWORD *)(a1 + 256);
      if ( (v7 & 8) != 0 && (v7 & 0x20) == 0 )
      {
        *v4 = 2;
        WPP_RECORDER_SF_(a3, 2u, 5u, 0x1Cu, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 212LL);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 256) = v6 | 2;
  }
  *(_DWORD *)(a1 + 256) &= 0xFFFFFFC3;
  return *v4 == 0;
}
