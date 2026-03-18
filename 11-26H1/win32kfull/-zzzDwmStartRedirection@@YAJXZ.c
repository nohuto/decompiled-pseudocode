/*
 * XREFs of ?zzzDwmStartRedirection@@YAJXZ @ 0x1402CF854
 * Callers:
 *     NtUserDwmKernelStartup @ 0x140257770 (NtUserDwmKernelStartup.c)
 * Callees:
 *     StopFade @ 0x14009B510 (StopFade.c)
 *     bSetDevDragRect @ 0x14009C3F0 (bSetDevDragRect.c)
 *     zzzDecomposeDesktop @ 0x1400F7F10 (zzzDecomposeDesktop.c)
 *     zzzEnableDwmPointerSupport @ 0x1400F8118 (zzzEnableDwmPointerSupport.c)
 *     CreateOrGetRedirectionBitmap @ 0x14014D538 (CreateOrGetRedirectionBitmap.c)
 *     _GetProcessWindowStation @ 0x1401BC230 (_GetProcessWindowStation.c)
 *     DwmNotifyChildrenAddRemove @ 0x1401D360C (DwmNotifyChildrenAddRemove.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1401EDA58 (DeleteOrSetRedirectionBitmap.c)
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 *     DwmAsyncDesktopFree @ 0x140248B44 (DwmAsyncDesktopFree.c)
 *     GreDwmShutdown @ 0x140253E18 (GreDwmShutdown.c)
 *     DwmAsyncDesktopCreate @ 0x1402910D8 (DwmAsyncDesktopCreate.c)
 *     GreDwmStartup @ 0x1402931FC (GreDwmStartup.c)
 *     DwmAsyncNotifyForegroundChange @ 0x1402957B0 (DwmAsyncNotifyForegroundChange.c)
 *     DwmAsyncWindowNotificationsStateSynced @ 0x1403477D8 (DwmAsyncWindowNotificationsStateSynced.c)
 */

__int64 zzzDwmStartRedirection(void)
{
  __int64 ProcessWindowStation; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  int RedirectionBitmap; // r14d
  HBITMAP v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 i; // rsi
  __int64 **v10; // rax
  __int64 v11; // rbx
  void *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 j; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 k; // rsi
  __int64 **v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  void *v35; // rax
  HSURF v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  void *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rdx
  void *v53; // rax
  void *v54; // rax
  void *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 m; // rbx
  HSURF v62; // rbx
  __int64 v63; // rax
  __int128 v65; // [rsp+20h] [rbp-30h] BYREF
  __int128 v66; // [rsp+30h] [rbp-20h]
  __int64 v67; // [rsp+40h] [rbp-10h]
  __int64 v68; // [rsp+48h] [rbp-8h]
  HBITMAP v69; // [rsp+80h] [rbp+30h] BYREF

  v69 = 0LL;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  if ( !(unsigned int)IsDwmApiPortRegistered() )
    return (unsigned int)-1073741790;
  v2 = *(unsigned int *)(ProcessWindowStation + 32);
  if ( (v2 & 4) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v2, v1);
    RedirectionBitmap = CreateOrGetRedirectionBitmap(
                          *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 19176) + 8LL) + 24LL),
                          1,
                          0,
                          &v69);
    if ( RedirectionBitmap >= 0 )
    {
      v6 = v69;
      *(_QWORD *)(ProcessWindowStation + 88) = v69;
      if ( *(_QWORD *)(W32GetUserSessionState(v6, v4) + 19176) )
      {
        v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19176);
        for ( i = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 16LL); i; i = *(_QWORD *)(i + 32) )
        {
          v10 = *(__int64 ***)(i + 8);
          v11 = **v10;
          v12 = (void *)ReferenceDwmApiPort(*v10, v7);
          DwmAsyncDesktopCreate(v12, v11, v13);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i, 1);
        }
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 43024) )
        StopFade(v15, v14);
      v16 = W32GetUserSessionState(v15, v14);
      bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v16 + 56968) + 40LL), 0LL, 0LL, 0);
      v19 = W32GetUserSessionState(v18, v17);
      if ( (unsigned int)GreDwmStartup(*(Gre::Base **)(*(_QWORD *)(v19 + 56968) + 40LL)) )
      {
        zzzEnableDwmPointerSupport(1LL, 0LL);
        if ( *(_QWORD *)(W32GetUserSessionState(v23, v22) + 19176) )
        {
          v25 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19176);
          for ( j = *(_QWORD *)(*(_QWORD *)(v25 + 40) + 16LL); j; j = *(_QWORD *)(j + 32) )
          {
            RedirectionBitmap = zzzComposeDesktop((struct tagDESKTOP *)j, v24);
            if ( RedirectionBitmap < 0 )
            {
              UnlockUpdatesForDwm();
              v30 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 19176);
              for ( k = *(_QWORD *)(*(_QWORD *)(v30 + 40) + 16LL); k; k = *(_QWORD *)(k + 32) )
              {
                zzzDecomposeDesktop((struct tagDESKTOP *)k, 0);
                DwmNotifyChildrenAddRemove((struct tagDESKTOP *)k, 0);
                v32 = *(__int64 ***)(k + 8);
                v33 = **v32;
                v35 = (void *)ReferenceDwmApiPort(*v32, v34);
                DwmAsyncDesktopFree(v35, v33);
              }
              v36 = *(HSURF *)(ProcessWindowStation + 88);
              if ( v36 )
              {
                v37 = W32GetUserSessionState(v30, v29);
                DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 19176) + 8LL) + 24LL), v36, 1);
              }
              v38 = W32GetUserSessionState(v30, v29);
              GreDwmShutdown(*(Gre::Base **)(*(_QWORD *)(v38 + 56968) + 40LL));
              v41 = W32GetUserSessionState(v40, v39);
              bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v41 + 56968) + 40LL), 0LL, 0LL, 0);
              break;
            }
          }
        }
        v43 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19176);
        if ( (*(_DWORD *)(v43 + 48) & 0x400) != 0 )
        {
          v44 = ReferenceDwmApiPort(v43, v42);
          v47 = (void *)v44;
          if ( v44 )
          {
            v65 = 0LL;
            LODWORD(v65) = 3145736;
            v67 = 0LL;
            WORD2(v65) = 0x8000;
            v68 = 0x14000005BLL;
            v66 = 0LL;
            LpcRequestPort(v44, &v65);
            ObfDereferenceObject(v47);
          }
          if ( *(_QWORD *)(W32GetUserSessionState(v46, v45) + 18928) )
          {
            v49 = *(_QWORD *)(W32GetUserSessionState(v49, v48) + 18928);
            if ( *(_QWORD *)(v49 + 128) )
            {
              v50 = *(_QWORD *)(W32GetUserSessionState(v49, v48) + 18928);
              v51 = **(_QWORD **)(v50 + 128);
              v53 = (void *)ReferenceDwmApiPort(v50, v52);
              DwmAsyncNotifyForegroundChange(v53, v51);
            }
          }
          v54 = (void *)ReferenceDwmApiPort(v49, v48);
          DwmAsyncWindowNotificationsStateSynced(v54);
        }
        v55 = (void *)ReferenceDwmApiPort(v43, v42);
        if ( v55 )
        {
          LODWORD(v68) = 1073741896;
          v65 = 0LL;
          LODWORD(v65) = 2883588;
          WORD2(v65) = 0x8000;
          v67 = 0LL;
          v66 = 0LL;
          LpcRequestPort(v55, &v65);
          ObfDereferenceObject(v55);
        }
        UnlockUpdatesForDwm();
        *(_DWORD *)(ProcessWindowStation + 32) |= 0x200u;
      }
      else
      {
        v56 = W32GetUserSessionState(v21, v20);
        bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v56 + 56968) + 40LL), 0LL, 0LL, 0);
        if ( *(_QWORD *)(W32GetUserSessionState(v58, v57) + 19176) )
        {
          v60 = *(_QWORD *)(W32GetUserSessionState(v60, v59) + 19176);
          for ( m = *(_QWORD *)(*(_QWORD *)(v60 + 40) + 16LL); m; m = *(_QWORD *)(m + 32) )
            DwmNotifyChildrenAddRemove((struct tagDESKTOP *)m, 0);
        }
        v62 = *(HSURF *)(ProcessWindowStation + 88);
        if ( v62 )
        {
          v63 = W32GetUserSessionState(v60, v59);
          DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v63 + 19176) + 8LL) + 24LL), v62, 1);
        }
      }
    }
  }
  return (unsigned int)RedirectionBitmap;
}
