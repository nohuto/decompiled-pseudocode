/*
 * XREFs of GreSfmRegisterLogicalSurfaceForSignaling @ 0x14009FE38
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x14009F480 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1400745F4 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ?SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z @ 0x1400A191C (-SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreSfmRegisterLogicalSurfaceForSignaling(Gre::Base *a1, int a2)
{
  HSEMAPHORE v4; // rdi
  Gre::Base *v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  __int64 v7; // r8
  SFMLOGICALSURFACE *v8; // rax
  unsigned int v9; // ebx
  _OWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  SFMLOGICALSURFACE *v12; // [rsp+40h] [rbp-18h]
  int v13; // [rsp+48h] [rbp-10h]

  v4 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(a1) + 520LL);
  GreAcquireSemaphoreInternal(v4);
  GrepAcquireLockValidate<7>();
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    memset(v11, 0, sizeof(v11));
    PushThreadGuardedObject(
      v11,
      v11,
      UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
    v12 = 0LL;
    v13 = 0;
    if ( a1
      && (v6 = Gre::Base::Globals(v5),
          LOBYTE(v7) = 18,
          v8 = (SFMLOGICALSURFACE *)HmgLock(v6, a1, v7, 0LL),
          (v12 = v8) != 0LL) )
    {
      v9 = SFMLOGICALSURFACE::SignalOnDirty(v8, a2);
    }
    else
    {
      v9 = -1073741816;
    }
    SFMLOGICALSURFACEREF_vDestructor((__int64)v11);
    PopThreadGuardedObject(v11);
  }
  else
  {
    v9 = -1073741790;
  }
  if ( v4 )
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v4);
  return v9;
}
