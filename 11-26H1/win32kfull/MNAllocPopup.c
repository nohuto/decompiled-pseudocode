/*
 * XREFs of MNAllocPopup @ 0x140244270
 * Callers:
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNStartMenuState @ 0x1402D09E8 (xxxMNStartMenuState.c)
 * Callees:
 *     ??$InitLookAsideRef@UtagPOPUPMENU@@@@YAEPEAUtagPOPUPMENU@@@Z @ 0x14024431C (--$InitLookAsideRef@UtagPOPUPMENU@@@@YAEPEAUtagPOPUPMENU@@@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14028ECFC (-Allocate@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ??$UserFreeIsolatedType@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1402D054C (--$UserFreeIsolatedType@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void *__fastcall MNAllocPopup(__int64 a1, __int64 a2)
{
  void *v2; // rbx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( (_DWORD)a1 || (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 66792) & 0x800000) != 0 )
  {
    if ( **(_QWORD **)(W32GetUserSessionState(a1, a2) + 19832) )
      v2 = (void *)NSInstrumentation::CTypeIsolation<24576,96>::Allocate();
    else
      v2 = 0LL;
  }
  else
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    *(_DWORD *)(UserSessionState + 66792) |= 0x800000u;
    v2 = (void *)(W32GetUserSessionState(v6, v5) + 65784);
  }
  if ( v2 )
  {
    memset_0(v2, 0, 0x60uLL);
    if ( !(unsigned __int8)InitLookAsideRef<tagPOPUPMENU>(v2) )
    {
      UserFreeIsolatedType<tagPOPUPMENU>(v2);
      return 0LL;
    }
  }
  return v2;
}
