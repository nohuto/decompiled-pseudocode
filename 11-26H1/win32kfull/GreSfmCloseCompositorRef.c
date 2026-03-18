/*
 * XREFs of GreSfmCloseCompositorRef @ 0x14009F798
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x14009F480 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x14006BD7C (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140072EE8 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1400745F4 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ?DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z @ 0x14009EEE8 (-DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x14009F3DC (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FA80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FAB8 (--0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB18 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB84 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x1400A8A5C (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 */

__int64 __fastcall GreSfmCloseCompositorRef(Gre::Base *a1, __int64 a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rbx
  Gre::Base *v5; // rcx
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  Gre::Base *v10; // rcx
  __int64 v11; // rsi
  struct W32_PUSH_LOCK *v12; // rbx
  int v13; // eax
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  unsigned int v16; // edi
  Gre::Base *v17; // rcx
  _OWORD v19[2]; // [rsp+20h] [rbp-29h] BYREF
  volatile signed __int16 *v20; // [rsp+40h] [rbp-9h]
  int v21; // [rsp+48h] [rbp-1h]
  _BYTE v22[16]; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v23[8]; // [rsp+60h] [rbp+17h] BYREF
  _BYTE v24[8]; // [rsp+68h] [rbp+1Fh] BYREF
  HSEMAPHORE v25; // [rsp+70h] [rbp+27h]
  HSEMAPHORE v26; // [rsp+78h] [rbp+2Fh] BYREF
  _BYTE v27[8]; // [rsp+80h] [rbp+37h] BYREF
  HSEMAPHORE v28; // [rsp+88h] [rbp+3Fh]

  if ( !a1 )
    return 3221225480LL;
  v4 = Gre::Base::Globals(a1);
  GreAcquireUnownedDMCLockShared::GreAcquireUnownedDMCLockShared((GreAcquireUnownedDMCLockShared *)v22, v4);
  SEMOBJ<2>::SEMOBJ<2>(v23, v4);
  SEMOBJ<3>::SEMOBJ<3>(v24, v4);
  v25 = (HSEMAPHORE)*((_QWORD *)a1 + 7);
  GreAcquireSemaphoreInternal(v25);
  GrepAcquireLockValidate<4>();
  SEMOBJ<6>::SEMOBJ<6>(&v26, v4);
  SEMOBJ<7>::SEMOBJ<7>(v27, v4);
  v28 = (HSEMAPHORE)*((_QWORD *)a1 + 6);
  GreAcquireSemaphoreInternal(v28);
  GrepAcquireLockValidate<8>();
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( IsDwmActive(v5) )
    {
      memset(v19, 0, sizeof(v19));
      PushThreadGuardedObject(
        v19,
        v19,
        UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
      v20 = 0LL;
      v21 = 0;
      if ( a2
        && (v7 = Gre::Base::Globals(v6),
            LOBYTE(v8) = 18,
            v9 = HmgLock(v7, a2, v8, 0LL),
            v20 = (volatile signed __int16 *)v9,
            (v11 = v9) != 0) )
      {
        v12 = (struct W32_PUSH_LOCK *)(v9 + 256);
        if ( v9 != -256 )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v9 + 256));
        v13 = *(_DWORD *)(v11 + 244);
        if ( (v13 & 8) == 0 || (v13 & 0x10) != 0 )
        {
          v16 = -2147020579;
        }
        else if ( (*(_DWORD *)(v11 + 248))-- == 1 )
        {
          v15 = Gre::Base::Globals(v10);
          SFMLOGICALSURFACE::StopSfmStateTracking((SFMLOGICALSURFACE *)v11, (HDEV)a1, *((struct SfmState **)v15 + 543));
          v16 = 0;
          if ( *(_WORD *)(v11 + 12) == 1 && !*(_DWORD *)(v11 + 8) )
          {
            if ( v12 )
            {
              GreReleasePushLockExclusive(v12);
              v12 = 0LL;
            }
            v17 = (Gre::Base *)v20;
            if ( v20 )
              _InterlockedDecrement16(v20 + 6);
            v20 = 0LL;
            if ( !DestroyLogicalSurface(v17, 1) )
              v16 = -1073741823;
          }
        }
        else
        {
          v16 = 0;
        }
        if ( v12 )
          GreReleasePushLockExclusive(v12);
      }
      else
      {
        v16 = -1073741816;
      }
      SFMLOGICALSURFACEREF_vDestructor((__int64)v19);
      PopThreadGuardedObject(v19);
    }
    else
    {
      v16 = -1071775733;
    }
  }
  else
  {
    v16 = -1073741790;
  }
  ENTER_GRE_DWM_CRIT::~ENTER_GRE_DWM_CRIT((ENTER_GRE_DWM_CRIT *)v22);
  return v16;
}
