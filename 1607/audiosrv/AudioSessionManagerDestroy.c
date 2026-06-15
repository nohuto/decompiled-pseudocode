/*
 * XREFs of AudioSessionManagerDestroy @ 0x1800293B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x18000FA40 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ??_GCAudioSessionManagerProxy@@QEAAPEAXI@Z @ 0x180029444 (--_GCAudioSessionManagerProxy@@QEAAPEAXI@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerDestroy(CAudioSessionManager ***a1)
{
  CAudioSessionManager **v1; // rbx
  CAudioSession *v3; // rcx
  void (*v4)(void); // rax
  unsigned int v5; // edx

  v1 = *a1;
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 64LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, *v1);
      v3 = WPP_GLOBAL_Control;
    }
    if ( v3 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v3 + 28) & 0x40) != 0 && *((_BYTE *)v3 + 25) >= 4u )
      WPP_SF_q(*((_QWORD *)v3 + 2), 65LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, *v1);
  }
  v4 = *(void (**)(void))(*(_QWORD *)*v1 + 16LL);
  if ( (char *)v4 == (char *)CAudioSessionManager::Release )
    CAudioSessionManager::Release(*v1);
  else
    v4();
  CAudioSessionManagerProxy::`scalar deleting destructor'((CAudioSessionManagerProxy *)v1, v5);
  *a1 = 0LL;
  return 0LL;
}
