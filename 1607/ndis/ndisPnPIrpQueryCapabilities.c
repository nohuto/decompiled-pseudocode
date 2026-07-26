/*
 * XREFs of ndisPnPIrpQueryCapabilities @ 0x1C009DCD8
 * Callers:
 *     ndisPnPDispatch @ 0x1C009DAC0 (ndisPnPDispatch.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

__int64 __fastcall ndisPnPIrpQueryCapabilities(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  int v9; // esi

  v5 = *(_QWORD *)(a3 + 184);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x2Du, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a2);
  if ( (*(_DWORD *)(a2 + 124) & 0x2000) != 0 || (*(_DWORD *)(a2 + 1816) & 0x80u) != 0 )
    *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4LL) |= 0x200u;
  v8 = *(_QWORD *)(a3 + 184);
  *(_OWORD *)(v8 - 72) = *(_OWORD *)v8;
  *(_OWORD *)(v8 - 56) = *(_OWORD *)(v8 + 16);
  *(_OWORD *)(v8 - 40) = *(_OWORD *)(v8 + 32);
  *(_QWORD *)(v8 - 24) = *(_QWORD *)(v8 + 48);
  *(_BYTE *)(v8 - 69) = 0;
  v9 = IoSynchronousCallDriver(*(_QWORD *)(a2 + 3896), a3);
  if ( v9 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 3768) == 16 && (*(_DWORD *)(a2 + 1816) & 0x80u) != 0 )
    {
      if ( (unsigned __int8)byte_1C00895D4 >= 4u )
        WPP_SF_q(0x2Eu, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a2);
      *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4LL) |= 0x200u;
    }
    if ( (*(_DWORD *)(a2 + 124) & 0x2000) == 0 && (*(_DWORD *)(a2 + 1816) & 0x80u) == 0 )
    {
      if ( (unsigned __int8)byte_1C00895D4 >= 4u )
        WPP_SF_q(0x2Fu, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a2);
      *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4LL) &= ~0x200u;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 3816) + 26LL) & 0x20) != 0 )
    {
      if ( (unsigned __int8)byte_1C00895D4 >= 4u )
        WPP_SF_q(0x30u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a2);
      *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4LL) &= ~0x10u;
      *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4LL) &= ~8u;
    }
  }
  *a5 = 0;
  return (unsigned int)v9;
}
