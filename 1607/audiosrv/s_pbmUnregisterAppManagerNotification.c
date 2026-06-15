/*
 * XREFs of s_pbmUnregisterAppManagerNotification @ 0x18007A8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmUnregisterAppManagerNotification(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned int)IsPbmUnregisterAppManagerNotificationSupported() )
  {
    return (unsigned int)PbmUnregisterAppManagerNotification(a1);
  }
  else if ( g_PolicyManager )
  {
    v3 = *(_QWORD *)g_PolicyManager;
    v5 = 0LL;
    v2 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v3 + 32))(
           g_PolicyManager,
           a1,
           &v5);
    if ( v2 >= 0 )
      v2 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)g_PolicyManager + 192LL))(
             g_PolicyManager,
             v5);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v2;
}
