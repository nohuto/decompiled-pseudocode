/*
 * XREFs of AUDIOSESSIONMANAGER_rundown @ 0x1800292F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x18000FA40 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

void *__fastcall AUDIOSESSIONMANAGER_rundown(CAudioSessionManager **this)
{
  __int64 (*v2)(void); // rax
  unsigned int v3; // eax
  unsigned int v4; // edx
  __int64 v5; // rbx
  unsigned int v6; // eax

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x43u,
      (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
      this,
      *this);
  }
  v2 = *(__int64 (**)(void))(*(_QWORD *)*this + 16LL);
  if ( (char *)v2 == (char *)CAudioSessionManager::Release )
    v3 = CAudioSessionManager::Release(*this);
  else
    v3 = v2();
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 68LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, v3);
  }
  if ( g_DuckingManager )
  {
    v5 = *(_QWORD *)g_DuckingManager;
    v6 = (*(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)this[1] + 40LL))(this[1]);
    (*(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD, _QWORD))(v5 + 40))(g_DuckingManager, v6, 0LL);
  }
  return CAudioSessionManagerProxy::`scalar deleting destructor'((CAudioSessionManagerProxy *)this, v4);
}
