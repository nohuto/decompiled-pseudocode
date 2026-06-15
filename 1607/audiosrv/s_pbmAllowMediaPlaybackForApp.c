/*
 * XREFs of s_pbmAllowMediaPlaybackForApp @ 0x18007A4A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmAllowMediaPlaybackForApp(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( (unsigned int)IsPbmAllowMediaPlaybackForAppSupported() )
    return (unsigned int)PbmAllowMediaPlaybackForApp(a1, a2);
  if ( g_PolicyManager )
    return (unsigned int)(*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)g_PolicyManager
                                                                                          + 248LL))(
                           g_PolicyManager,
                           a2);
  return v4;
}
