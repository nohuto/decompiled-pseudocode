/*
 * XREFs of s_pbmLaunchBackgroundTask @ 0x18007A640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmLaunchBackgroundTask(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  __int64 v7; // rax
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  if ( (unsigned int)IsPbmLaunchBackgroundTaskSupported() )
  {
    return (unsigned int)PbmLaunchBackgroundTask(a1, a2, a3);
  }
  else if ( g_PolicyManager )
  {
    v7 = *(_QWORD *)g_PolicyManager;
    v9 = 0LL;
    v6 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v7 + 32))(
           g_PolicyManager,
           a1,
           &v9);
    if ( v6 >= 0 )
      v6 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64, __int64))(*(_QWORD *)g_PolicyManager
                                                                                              + 208LL))(
             g_PolicyManager,
             v9,
             a2,
             a3);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v6;
}
