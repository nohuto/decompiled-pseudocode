/*
 * XREFs of s_pbmRegisterPlaybackManagerNotifications @ 0x1800047C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmRegisterPlaybackManagerNotifications(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  if ( (unsigned int)IsPbmRegisterPlaybackManagerNotificationsSupported() )
  {
    return (unsigned int)PbmRegisterPlaybackManagerNotifications(a1, a2, a3);
  }
  else if ( !a2 && g_PolicyManager )
  {
    v8 = *(_QWORD *)g_PolicyManager;
    v12 = 0LL;
    v9 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v8 + 32))(
           g_PolicyManager,
           a1,
           &v12);
    v10 = v12;
    v6 = v9;
    if ( v9 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 320LL))(v12);
      v10 = v12;
      v6 = v11;
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v6;
}
