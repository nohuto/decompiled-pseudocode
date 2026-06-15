/*
 * XREFs of ?ResetEndpoint@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180075790
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMMDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180028E54 (-InternalRelease@-$ComPtr@UIMMDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ResetEndpoint(CBaseStreamGroupProxy *this)
{
  __int64 v1; // rbx
  int v2; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = *((_QWORD *)this + 9);
  if ( !v1 )
  {
    v2 = -2005139437;
LABEL_7:
    AudSrvTraceLoggingErrorHelper("CBaseStreamGroupProxy::ResetEndpoint", 513, v2);
    goto LABEL_8;
  }
  Microsoft::WRL::ComPtr<IMMDevice>::InternalRelease(&v4);
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 56LL))(v1, &v4);
  if ( v2 < 0 )
    goto LABEL_7;
  if ( v4 )
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4);
  if ( v2 < 0 )
    goto LABEL_7;
LABEL_8:
  Microsoft::WRL::ComPtr<IMMDevice>::InternalRelease(&v4);
  return (unsigned int)v2;
}
