/*
 * XREFs of PiUEventBroadcastPortsChangedEvent @ 0x14067EE2C
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x14051CD24 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1400FD644 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 */

int __fastcall PiUEventBroadcastPortsChangedEvent(int a1, _OWORD *a2, __int64 a3)
{
  __int64 SessionById; // rax
  __int64 v5; // rcx
  void *v6; // rbx
  int v9; // [rsp+48h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-9h] BYREF
  int v11; // [rsp+58h] [rbp-1h] BYREF
  _OWORD v12[3]; // [rsp+60h] [rbp+7h] BYREF

  memset(v12, 0, sizeof(v12));
  Handle = 0LL;
  v9 = 0;
  LODWORD(SessionById) = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a3, 0x11u, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( (int)SessionById >= 0 )
  {
    v11 = 32;
    LODWORD(SessionById) = PnpCtxRegQueryValue(
                             v5,
                             Handle,
                             (__int64)L"PortName",
                             (__int64)&v9,
                             (__int64)&v12[1],
                             (__int64)&v11);
    if ( (int)SessionById >= 0 )
    {
      v12[0] = *a2;
      if ( a1 == -1 )
      {
        LODWORD(SessionById) = ZwUpdateWnfStateData((__int64)&WNF_PNPA_PORTS_CHANGED, (__int64)v12, 48LL);
      }
      else
      {
        SessionById = MmGetSessionById(a1);
        v6 = (void *)SessionById;
        if ( SessionById )
        {
          ZwUpdateWnfStateData((__int64)&WNF_PNPA_PORTS_CHANGED_SESSION, (__int64)v12, 48LL);
          LODWORD(SessionById) = ObfDereferenceObject(v6);
        }
      }
    }
  }
  if ( Handle )
    LODWORD(SessionById) = ZwClose(Handle);
  return SessionById;
}
