/*
 * XREFs of GreSetRedirectionSurfaceSignaling @ 0x14009FBB8
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x14009F480 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x14007347C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x1400A4288 (--0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A8980 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreSetRedirectionSurfaceSignaling(__int64 a1, HLSURF a2, __int64 a3, __int64 a4, int a5)
{
  Gre::Base *v9; // rcx
  unsigned int v10; // esi
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  Gre::Base *v12; // rcx
  Gre::Base *v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // r14
  HSEMAPHORE v17; // [rsp+30h] [rbp-68h]
  __int64 v18; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v19[32]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]

  v10 = 0;
  if ( IsDwmActive((Gre::Base *)a1) )
  {
    v11 = Gre::Base::Globals(v9);
    SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v18, v11);
    v17 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v12) + 520LL);
    GreAcquireSemaphoreSharedInternal(v17);
    GrepAcquireLockValidate<7>();
    if ( IsDwmActive(v13) )
    {
      if ( (unsigned int)UserIsCurrentProcessDwm() )
      {
        if ( *(_QWORD *)(a1 + 3448) )
        {
          SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v19, a2);
          v14 = v20;
          if ( v20 )
          {
            if ( v20 != -256 )
              GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v20 + 256));
            v15 = *(_QWORD *)(v14 + 184);
            if ( !v15 || (*(_DWORD *)(v15 + 92) & 1) == 0 )
            {
              *(_QWORD *)(v14 + 192) = a3;
              *(_QWORD *)(v14 + 200) = a4;
LABEL_15:
              if ( v14 != -256 )
                GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v14 + 256));
              SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v19);
              goto LABEL_18;
            }
            if ( *(_QWORD *)(v15 + 16) == *(_QWORD *)(a1 + 1784) )
            {
              if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, HLSURF, _QWORD))(a1 + 3448))(
                     *(_QWORD *)(v14 + 184),
                     a3,
                     a2,
                     *(_QWORD *)(v15 + 32)) )
              {
                *(_DWORD *)(v14 + 244) = (2 * a5) ^ (*(_DWORD *)(v14 + 244) ^ (2 * a5)) & 0xFFFFFFFD;
                EtwLogicalSurfEnableDirtyNotificationEvent(a2, a3);
              }
              *(_QWORD *)(v14 + 192) = *(_QWORD *)(v15 + 544);
              *(_QWORD *)(v14 + 200) = *(_QWORD *)(v15 + 552);
              *(_DWORD *)(v14 + 208) = *(_DWORD *)(v15 + 100);
              if ( (*(_DWORD *)(v15 + 92) & 0x400) != 0 )
                *(_DWORD *)(v14 + 244) |= 0x100u;
              goto LABEL_15;
            }
            if ( v14 != -256 )
              GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v14 + 256));
          }
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v19);
          v10 = -1073741811;
        }
        else
        {
          v10 = -1073741822;
        }
      }
      else
      {
        v10 = -1073741790;
      }
    }
    else
    {
      v10 = -1071775733;
    }
LABEL_18:
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v17);
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v18);
    return v10;
  }
  return 3223191563LL;
}
