/*
 * XREFs of HUBPDO_D3ColdSupportInterfaceGetD3ColdCapability @ 0x1C00674A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_D3ColdSupportInterfaceGetD3ColdCapability(_QWORD *a1, _BYTE *a2)
{
  __int64 (__fastcall *v2)(_QWORD); // rax
  int v5; // esi

  v2 = (__int64 (__fastcall *)(_QWORD))a1[45];
  if ( v2 )
  {
    v5 = v2(a1[40]);
    if ( v5 >= 0 && *a2 && (*(_DWORD *)(*(_QWORD *)(a1[3] + 8LL) + 204LL) & 1) != 0 )
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[2] + 2464LL),
        2u,
        6u,
        0x55u,
        (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids);
  }
  else
  {
    *a2 = 0;
    return 0;
  }
  return (unsigned int)v5;
}
