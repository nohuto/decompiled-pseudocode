/*
 * XREFs of DpiFdoInvalidateChildWorkItem @ 0x1C01681A0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C0005A88 (DpiDisableD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00C4A50 (DpiFdoInvalidateChildRelations.c)
 */

void __fastcall DpiFdoInvalidateChildWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rbx
  int v5; // ecx

  v3 = IoObject[8];
  IoFreeWorkItem(IoWorkItem);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v3 + 451) )
    DpiDisableD3Requests(v3);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
  v5 = *(_DWORD *)(v3 + 236);
  if ( (v5 == 2 || *(_DWORD *)(v3 + 240) == 2 && ((v5 - 3) & 0xFFFFFFFC) == 0 && v5 != 4)
    && *(_DWORD *)(v3 + 2584) != 1
    && *(_DWORD *)(v3 + 248) == 1 )
  {
    DpiFdoInvalidateChildRelations((__int64)IoObject, 0x18u);
  }
  if ( *(_BYTE *)(v3 + 451) )
    DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
  KeLeaveCriticalRegion();
}
