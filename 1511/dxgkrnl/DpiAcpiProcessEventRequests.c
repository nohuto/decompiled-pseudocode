/*
 * XREFs of DpiAcpiProcessEventRequests @ 0x1C0172080
 * Callers:
 *     DpiAcpiHandleAcpiEvent @ 0x1C0171CF0 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C00A9F00 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA040 (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00AA5F0 (DpiFdoInvalidateChildRelations.c)
 *     DmmInvalidateActiveVidPn @ 0x1C017B064 (DmmInvalidateActiveVidPn.c)
 */

int __fastcall DpiAcpiProcessEventRequests(__int64 a1, char a2, _DWORD *a3)
{
  __int64 v3; // rbx
  int result; // eax
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 64);
  result = ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v3 + 168));
  if ( (a2 & 1) != 0 || *a3 == 3 )
    result = DpiFdoInvalidateChildRelations(a1, 0x18u);
  if ( (a2 & 6) != 0 )
  {
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 2544), 1);
    DmmInvalidateActiveVidPn(*(DXGADAPTER **)(v3 + 2544), DXGK_AVIR_HOTKEY, 0LL, 0, v8);
    return DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 2544), 1);
  }
  return result;
}
