/*
 * XREFs of ??1ModernResourceManagerProxy@@MEAA@XZ @ 0x18000F3AC
 * Callers:
 *     ??_GModernResourceManagerProxy@@MEAAPEAXI@Z @ 0x18000F410 (--_GModernResourceManagerProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ModernResourceManagerProxy::~ModernResourceManagerProxy(ModernResourceManagerProxy *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &ModernResourceManagerProxy::`vftable';
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v3);
    *((_QWORD *)this + 9) = 0LL;
  }
  RpcBindingFree((RPC_BINDING_HANDLE *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
}
