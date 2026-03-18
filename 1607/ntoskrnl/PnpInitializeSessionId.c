/*
 * XREFs of PnpInitializeSessionId @ 0x1404EC988
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x140488D1C (_PnpSetObjectProperty.c)
 *     IopGetSessionIdFromPDO @ 0x1404ED078 (IopGetSessionIdFromPDO.c)
 */

void __fastcall PnpInitializeSessionId(__int64 a1, __int64 a2, char a3)
{
  int SessionIdFromPDO; // r10d
  __int64 v5; // rcx
  __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // eax
  int *v11; // rcx
  int v12; // edx
  int v13; // [rsp+70h] [rbp+18h] BYREF

  SessionIdFromPDO = -1;
  v5 = *(_QWORD *)(a1 + 16);
  v13 = -1;
  if ( v5 )
  {
    v8 = *(_QWORD *)(v5 + 32);
    if ( (*(_DWORD *)(*(_QWORD *)(v8 + 312) + 32LL) & 0x400) != 0 )
    {
      SessionIdFromPDO = IopGetSessionIdFromPDO(v8);
      v13 = SessionIdFromPDO;
    }
  }
  if ( a3 )
  {
    if ( SessionIdFromPDO == -1 )
      return;
    v9 = 0x20000;
  }
  else
  {
    v9 = 0;
  }
  if ( SessionIdFromPDO == -1 )
  {
    v10 = 0;
    v11 = 0LL;
    v12 = 0;
  }
  else
  {
    v10 = 4;
    v11 = &v13;
    v12 = 7;
  }
  PnpSetObjectProperty(
    *(__int64 *)&PiPnpRtlCtx,
    *(_QWORD *)(a1 + 48),
    1u,
    a2,
    0LL,
    (__int64)&DEVPKEY_Device_SessionId,
    v12,
    (__int64)v11,
    v10,
    v9);
}
