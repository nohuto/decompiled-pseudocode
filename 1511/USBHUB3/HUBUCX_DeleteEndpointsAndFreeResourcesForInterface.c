/*
 * XREFs of HUBUCX_DeleteEndpointsAndFreeResourcesForInterface @ 0x1C001E82C
 * Callers:
 *     HUBDSM_DeletingEndpointsForNewInterfaceOnFailure @ 0x1C001B1C0 (HUBDSM_DeletingEndpointsForNewInterfaceOnFailure.c)
 *     HUBDSM_DeletingEndpointsForOldInterface @ 0x1C001B220 (HUBDSM_DeletingEndpointsForOldInterface.c)
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration @ 0x1C001E8C8 (HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_DeleteEndpointsAndFreeResourcesForInterface(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int i; // ebx
  unsigned __int64 v6; // rsi

  v2 = *a1;
  for ( i = 0; i < *(_DWORD *)(a2 + 24); ++i )
  {
    v6 = (unsigned __int64)i << 6;
    if ( *(_DWORD *)(v6 + a2 + 48) == 6 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v2 + 432))(
        *(_QWORD *)(v2 + 224),
        a1[3],
        *(_QWORD *)(v6 + a2 + 40));
      *(_DWORD *)(v6 + a2 + 48) = 7;
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(
           WdfDriverGlobals,
           *(_QWORD *)a2);
}
