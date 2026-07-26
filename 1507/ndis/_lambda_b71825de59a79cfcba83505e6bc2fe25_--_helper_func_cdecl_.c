/*
 * XREFs of _lambda_b71825de59a79cfcba83505e6bc2fe25_::_helper_func_cdecl_ @ 0x1C00A6CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A6AFC (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00D00EC (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

void __fastcall lambda_b71825de59a79cfcba83505e6bc2fe25_::_helper_func_cdecl_(__int64 a1, volatile signed __int32 **a2)
{
  volatile signed __int32 *v3; // rcx

  if ( *((_BYTE *)*a2 + 17) )
  {
    *((_BYTE *)*a2 + 17) = 0;
    ndisDeliverBindCompleteEvent((struct NDIS_BIND_PROTOCOL_DRIVER *)(*a2 + 2));
  }
  v3 = *a2;
  if ( *a2 && _InterlockedExchangeAdd(v3 + 16, 0xFFFFFFFF) == 1 )
  {
    if ( v3 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v3);
  }
}
