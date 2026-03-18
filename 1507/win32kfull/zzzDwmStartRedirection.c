/*
 * XREFs of zzzDwmStartRedirection @ 0x1C0149B0C
 * Callers:
 *     NtUserDwmKernelStartup @ 0x1C0149770 (NtUserDwmKernelStartup.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C000BF8C (DeleteOrSetRedirectionBitmap.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C000DDF8 (CreateOrGetRedirectionBitmap.c)
 *     zzzEnableDwmPointerSupport @ 0x1C003E1F8 (zzzEnableDwmPointerSupport.c)
 *     _GetProcessWindowStation @ 0x1C00DD080 (_GetProcessWindowStation.c)
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     StopFade @ 0x1C010E080 (StopFade.c)
 *     DwmAsyncDesktopFree @ 0x1C012B8C4 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C012B95C (zzzDecomposeDesktop.c)
 *     GreDwmShutdown @ 0x1C012C414 (GreDwmShutdown.c)
 *     zzzComposeDesktop @ 0x1C0149CB8 (zzzComposeDesktop.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C014A8B4 (DwmNotifyChildrenAddRemove.c)
 *     DwmAsyncDesktopCreate @ 0x1C014ACB8 (DwmAsyncDesktopCreate.c)
 *     GreDwmStartup @ 0x1C014AE34 (GreDwmStartup.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 zzzDwmStartRedirection()
{
  __int64 ProcessWindowStation; // rdi
  __int64 v1; // rdx
  int RedirectionBitmap; // esi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 i; // rbx
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 j; // rbx
  void *v13; // rbx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  HSURF v24; // rdx
  _DWORD v25[12]; // [rsp+20h] [rbp-48h] BYREF
  HSURF v26; // [rsp+70h] [rbp+8h] BYREF

  v26 = 0LL;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  if ( !(unsigned int)IsDwmApiPortRegistered() || (*(_DWORD *)(ProcessWindowStation + 32) & 4) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    RedirectionBitmap = CreateOrGetRedirectionBitmap(
                          *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL),
                          1,
                          0LL,
                          &v26);
    if ( RedirectionBitmap >= 0 )
    {
      *(_QWORD *)(ProcessWindowStation + 88) = v26;
      if ( grpdeskRitInput )
      {
        v5 = *(_QWORD *)(grpdeskRitInput + 24LL);
        for ( i = *(_QWORD *)(v5 + 16); i; i = *(_QWORD *)(i + 16) )
        {
          v7 = (void *)ReferenceDwmApiPort(v5, v1, v3, v4);
          DwmAsyncDesktopCreate(v7);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i);
        }
      }
      if ( *(_QWORD *)&gfade[4] )
        StopFade();
      bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
      if ( (unsigned int)GreDwmStartup(*gpDispInfo) )
      {
        zzzEnableDwmPointerSupport(1u, 0);
        if ( grpdeskRitInput )
        {
          for ( j = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 16LL); j; j = *(_QWORD *)(j + 16) )
          {
            RedirectionBitmap = zzzComposeDesktop((struct tagDESKTOP *)j);
            if ( RedirectionBitmap < 0 )
            {
              UnlockUpdatesForDwm();
              v15 = grpdeskRitInput;
              v16 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 16LL);
              if ( v16 )
              {
                do
                {
                  zzzDecomposeDesktop((struct tagDESKTOP *)v16, 0);
                  DwmNotifyChildrenAddRemove((struct tagDESKTOP *)v16);
                  v21 = (void *)ReferenceDwmApiPort(v18, v17, v19, v20);
                  DwmAsyncDesktopFree(v21, *(_QWORD *)(v16 + 40));
                  v16 = *(_QWORD *)(v16 + 16);
                }
                while ( v16 );
                v15 = grpdeskRitInput;
              }
              if ( *(_QWORD *)(ProcessWindowStation + 88) )
                DeleteOrSetRedirectionBitmap(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8LL) + 16LL),
                  *(HSURF *)(ProcessWindowStation + 88),
                  1);
              GreDwmShutdown(*gpDispInfo);
              bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
              break;
            }
          }
        }
        v13 = (void *)ReferenceDwmApiPort(v9, v8, v10, v11);
        if ( v13 )
        {
          memset((char *)v25 + 2, 0, 0x2AuLL);
          v25[0] = 2883588;
          LOWORD(v25[1]) = 0x8000;
          v25[10] = 1073741894;
          LpcRequestPort(v13, v25);
          ObfDereferenceObject(v13);
        }
        UnlockUpdatesForDwm();
        *(_DWORD *)(ProcessWindowStation + 32) |= 0x200u;
      }
      else
      {
        bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
        v22 = grpdeskRitInput;
        if ( grpdeskRitInput )
        {
          v23 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 16LL);
          if ( v23 )
          {
            do
            {
              DwmNotifyChildrenAddRemove((struct tagDESKTOP *)v23);
              v23 = *(_QWORD *)(v23 + 16);
            }
            while ( v23 );
            v22 = grpdeskRitInput;
          }
        }
        v24 = *(HSURF *)(ProcessWindowStation + 88);
        if ( v24 )
          DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 8LL) + 16LL), v24, 1);
      }
    }
  }
  return (unsigned int)RedirectionBitmap;
}
