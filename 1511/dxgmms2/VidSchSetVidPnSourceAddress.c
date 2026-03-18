/*
 * XREFs of VidSchSetVidPnSourceAddress @ 0x1C0062200
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014DD4 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchSetVidPnSourceAddress(_QWORD *a1, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  void (__fastcall *v7)(_QWORD); // rax
  void (__fastcall *v8)(_QWORD); // rax

  v4 = a1[a2->VidPnSourceId + 324];
  if ( *(_DWORD *)(v4 + 14768) != -1 )
  {
    v7 = (void (__fastcall *)(_QWORD))a1[309];
    if ( v7 )
      v7(a1[315]);
  }
  v5 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(*(ADAPTER_DISPLAY **)(a1[2] + 1984LL), a2);
  if ( *(_DWORD *)(v4 + 14768) != -1 )
  {
    v8 = (void (__fastcall *)(_QWORD))a1[311];
    if ( v8 )
      v8(a1[315]);
  }
  return v5;
}
