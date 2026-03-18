/*
 * XREFs of DpiAcpiProcessEventRequests @ 0x1C019BD20
 * Callers:
 *     DpiAcpiHandleAcpiEvent @ 0x1C019B8E0 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C00C1F3C (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00C2074 (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00C2FD0 (DpiFdoInvalidateChildRelations.c)
 *     DmmInvalidateActiveVidPn @ 0x1C01A46EC (DmmInvalidateActiveVidPn.c)
 */

int __fastcall DpiAcpiProcessEventRequests(__int64 a1, char a2, _DWORD *a3, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rbx
  int result; // eax
  unsigned int v10; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 64);
  result = ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 168));
  if ( (a2 & 1) != 0 || *a3 == 3 )
    result = DpiFdoInvalidateChildRelations(a1, 0x18u, (__int64)a4);
  if ( (a2 & 6) != 0 )
  {
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3688), 1);
    DmmInvalidateActiveVidPn(*(DXGADAPTER **)(v4 + 3688), DXGK_AVIR_HOTKEY, 0LL, 0, a4, v10);
    return DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3688), 1);
  }
  return result;
}
