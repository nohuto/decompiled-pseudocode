/*
 * XREFs of PiUEventBroadcastPortsChangedEvent @ 0x14062E598
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140528570 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 */

int __fastcall PiUEventBroadcastPortsChangedEvent(unsigned int a1, _OWORD *a2, __int64 a3)
{
  __int64 SessionById; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  void *v9; // rbx
  unsigned int ExplicitScope; // [rsp+40h] [rbp-9h] BYREF
  WNF_CHANGE_STAMP v12; // [rsp+48h] [rbp-1h] BYREF
  int v13; // [rsp+4Ch] [rbp+3h] BYREF
  LOGICAL v14[2]; // [rsp+50h] [rbp+7h] BYREF
  _OWORD Buffer[3]; // [rsp+58h] [rbp+Fh] BYREF

  ExplicitScope = a1;
  memset(Buffer, 0, sizeof(Buffer));
  *(_QWORD *)v14 = 0LL;
  v13 = 0;
  LODWORD(SessionById) = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a3, 0x11u, 0, 131097, 0, (__int64)v14, 0LL);
  if ( (int)SessionById >= 0 )
  {
    v12 = 32;
    LODWORD(SessionById) = PnpCtxRegQueryValue(v6, *(void **)v14, L"PortName", &v13, &Buffer[1], &v12);
    if ( (int)SessionById >= 0 )
    {
      Buffer[0] = *a2;
      if ( ExplicitScope == -1 )
      {
        LODWORD(SessionById) = ZwUpdateWnfStateData(&WNF_PNPA_PORTS_CHANGED, Buffer, 0x30u, 0LL, 0LL, 0, 0);
      }
      else
      {
        SessionById = MmGetSessionById(ExplicitScope, v7, v8);
        v9 = (void *)SessionById;
        if ( SessionById )
        {
          ZwUpdateWnfStateData(&WNF_PNPA_PORTS_CHANGED_SESSION, Buffer, 0x30u, 0LL, &ExplicitScope, 0, 0);
          LODWORD(SessionById) = ObfDereferenceObject(v9);
        }
      }
    }
  }
  if ( *(_QWORD *)v14 )
    LODWORD(SessionById) = ZwClose(*(HANDLE *)v14);
  return SessionById;
}
