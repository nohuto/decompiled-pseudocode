/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@@Z @ 0x180014480
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180008E40 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@QEAAJPEAURmResourceSetInfo@@@Z @ 0x1800143B4 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@QEAAJPEAURmResourceSetInfo@@@Z.c)
 */

CLIENT_CALL_RETURN __fastcall ResourceSetClientProxy::NotifyPendingResourceSetTransition(
        ResourceSetClientProxy *a1,
        unsigned int a2)
{
  _BYTE v4[2144]; // [rsp+20h] [rbp-888h] BYREF

  (*(void (__fastcall **)(_QWORD *, _QWORD, _BYTE *))(**((_QWORD **)a1 + 6) + 120LL))(*((_QWORD **)a1 + 6), a2, v4);
  return ResourceSetClientProxy::NotifyPendingResourceSetTransition(a1, (struct RmResourceSetInfo *)v4);
}
