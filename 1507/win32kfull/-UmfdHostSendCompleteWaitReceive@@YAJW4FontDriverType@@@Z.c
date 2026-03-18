/*
 * XREFs of ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1C02A44A8
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A4300 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C02D4A8C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C02D5688 (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C02D56E8 (-UmfdCreateRequestContext@@YAPEAXXZ.c)
 *     ?UmfdServerSendCompleteAndWaitReceive@@YAJPEAX0K0PEAK0@Z @ 0x1C02D5710 (-UmfdServerSendCompleteAndWaitReceive@@YAJPEAX0K0PEAK0@Z.c)
 */

__int64 __fastcall UmfdHostSendCompleteWaitReceive(unsigned int a1)
{
  struct UmfdTls *v2; // rax
  struct UmfdTls *v3; // rbx
  int v5; // eax
  void *ServerPort; // rsi
  unsigned int v7; // r8d
  void *v8; // rdi
  void *RequestContext; // rbp
  int v10; // esi
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v2 = UmfdTls::EnsureTls();
  v3 = v2;
  if ( !v2 )
    return 3221225495LL;
  if ( a1 > 3 )
    return 3221225485LL;
  v5 = *((_DWORD *)v2 + 2);
  if ( v5 == -1 )
  {
    *((_DWORD *)v3 + 2) = a1;
  }
  else if ( v5 != a1 )
  {
    return 3221225485LL;
  }
  ServerPort = (void *)UmfdGetServerPort(a1);
  if ( !ServerPort )
    return 3221227264LL;
  v8 = (void *)*((_QWORD *)v3 + 2);
  if ( v8 )
  {
    RequestContext = (void *)*((_QWORD *)v3 + 2);
  }
  else
  {
    RequestContext = UmfdCreateRequestContext();
    if ( !RequestContext )
      return 3221225495LL;
  }
  v10 = UmfdServerSendCompleteAndWaitReceive(ServerPort, v8, v7, &v12, &v11, RequestContext);
  if ( v10 < 0 )
    goto LABEL_20;
  if ( v11 != 8 )
    v10 = -1073741823;
  if ( v10 < 0 )
  {
LABEL_20:
    if ( !v8 )
      EngFreeMem(RequestContext);
  }
  else
  {
    if ( !v8 )
      *((_QWORD *)v3 + 2) = RequestContext;
    *((_QWORD *)v3 + 3) = v12;
  }
  return (unsigned int)v10;
}
