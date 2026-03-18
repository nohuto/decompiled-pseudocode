/*
 * XREFs of PiUEventBroadcastPortsChangedEvent @ 0x14062E4E4
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140528030 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1400765C0 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x1404FCD30 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegQueryValue @ 0x140504098 (_PnpCtxRegQueryValue.c)
 */

int __fastcall PiUEventBroadcastPortsChangedEvent(unsigned int a1, _OWORD *a2, __int64 a3)
{
  __int64 SessionById; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  void *v9; // rbx
  unsigned int v12; // [rsp+48h] [rbp-1h] BYREF
  int v13; // [rsp+4Ch] [rbp+3h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+7h] BYREF
  _OWORD v15[3]; // [rsp+58h] [rbp+Fh] BYREF

  memset(v15, 0, sizeof(v15));
  Handle = 0LL;
  v13 = 0;
  LODWORD(SessionById) = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a3, 0x11u, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( (int)SessionById >= 0 )
  {
    v12 = 32;
    LODWORD(SessionById) = PnpCtxRegQueryValue(v6, Handle, L"PortName", &v13, &v15[1], &v12);
    if ( (int)SessionById >= 0 )
    {
      v15[0] = *a2;
      if ( a1 == -1 )
      {
        LODWORD(SessionById) = ZwUpdateWnfStateData((__int64)&WNF_PNPA_PORTS_CHANGED, (__int64)v15, 48LL);
      }
      else
      {
        SessionById = MmGetSessionById(a1, v7, v8);
        v9 = (void *)SessionById;
        if ( SessionById )
        {
          ZwUpdateWnfStateData((__int64)&WNF_PNPA_PORTS_CHANGED_SESSION, (__int64)v15, 48LL);
          LODWORD(SessionById) = ObfDereferenceObject(v9);
        }
      }
    }
  }
  if ( Handle )
    LODWORD(SessionById) = ZwClose(Handle);
  return SessionById;
}
