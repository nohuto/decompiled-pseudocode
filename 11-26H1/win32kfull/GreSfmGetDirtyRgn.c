/*
 * XREFs of GreSfmGetDirtyRgn @ 0x14001D1F8
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x14001BE10 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$06@@YAXXZ @ 0x14001D800 (--$GrepReleaseLockValidate@$06@@YAXXZ.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x14001DB54 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 */

__int64 __fastcall GreSfmGetDirtyRgn(
        Gre::Base *a1,
        unsigned __int64 a2,
        HRGN *a3,
        HRGN *a4,
        HRGN *a5,
        HRGN *a6,
        struct _POINTL *a7,
        int *a8,
        int *a9)
{
  HSEMAPHORE v13; // rdi
  Gre::Base *v14; // rcx
  Gre::Base *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rax
  __int64 v17; // r8
  unsigned int DirtyRgn; // eax
  unsigned int v19; // ebx
  struct Gre::Base::SESSION_GLOBALS *v20; // rax
  _OWORD v22[2]; // [rsp+50h] [rbp-38h] BYREF
  struct SFMLOGICALSURFACE *v23; // [rsp+70h] [rbp-18h]

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v13 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(a1) + 520LL);
  GreAcquireSemaphoreSharedInternal(v13);
  GrepAcquireLockValidate<7>();
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( *((_QWORD *)Gre::Base::Globals(v14) + 28) )
    {
      memset(v22, 0, sizeof(v22));
      PushThreadGuardedObject(
        v22,
        v22,
        UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
      v15 = 0LL;
      v23 = 0LL;
      if ( a1
        && (v16 = Gre::Base::Globals(0LL),
            LOBYTE(v17) = 18,
            v23 = (struct SFMLOGICALSURFACE *)HmgShareLock(v16, a1, v17, 0LL),
            (v15 = v23) != 0LL) )
      {
        DirtyRgn = GrepSfmGetDirtyRgn(v23, a2, a3, a4, a5, a6, a7, a8, a9);
        v15 = v23;
        v19 = DirtyRgn;
      }
      else
      {
        v19 = -1073741816;
      }
      if ( v15 )
      {
        v20 = Gre::Base::Globals(v15);
        DEC_SHARE_REF_CNT(v20, v23);
      }
      PopThreadGuardedObject(v22);
    }
    else
    {
      v19 = -1071775733;
    }
  }
  else
  {
    v19 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"DwmState", v13);
  GrepReleaseLockValidate<7>();
  GreReleaseSemaphoreSharedInternal(v13);
  return v19;
}
