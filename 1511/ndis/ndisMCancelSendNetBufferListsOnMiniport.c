/*
 * XREFs of ndisMCancelSendNetBufferListsOnMiniport @ 0x1C004F3D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetBusyAsync @ 0x1C0025818 (ndisSetBusyAsync.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ndisClearBusy @ 0x1C00665D8 (ndisClearBusy.c)
 */

char __fastcall ndisMCancelSendNetBufferListsOnMiniport(_QWORD *a1, __int64 a2)
{
  char result; // al

  if ( !a1[564] || (result = ndisSetBusyAsync((__int64)a1, 1, 0x35u, a2, 0)) != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1[477] + 200LL))(a1[3], a2);
    if ( a1[564] )
      return ndisClearBusy(a1, 1LL, 53LL);
  }
  return result;
}
