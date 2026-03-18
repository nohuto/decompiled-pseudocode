/*
 * XREFs of zzzDwmStartRedirection @ 0x1C00D24EC
 * Callers:
 *     NtUserDwmKernelStartup @ 0x1C00D5860 (NtUserDwmKernelStartup.c)
 * Callees:
 *     _GetProcessWindowStation @ 0x1C00699F0 (_GetProcessWindowStation.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C007C3E0 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C007F730 (DeleteOrSetRedirectionBitmap.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0096CD8 (zzzEnableDwmPointerSupport.c)
 *     zzzComposeDesktop @ 0x1C00D1AFC (zzzComposeDesktop.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C00D2698 (DwmNotifyChildrenAddRemove.c)
 *     DwmAsyncDesktopCreate @ 0x1C00D2D38 (DwmAsyncDesktopCreate.c)
 *     zzzDecomposeDesktop @ 0x1C00D33EC (zzzDecomposeDesktop.c)
 *     DwmAsyncDesktopFree @ 0x1C00D4088 (DwmAsyncDesktopFree.c)
 *     GreDwmStartup @ 0x1C00D4D7C (GreDwmStartup.c)
 *     bSetDevDragRect @ 0x1C00D56E0 (bSetDevDragRect.c)
 *     GreDwmShutdown @ 0x1C00D5BA8 (GreDwmShutdown.c)
 *     StopFade @ 0x1C0139AF0 (StopFade.c)
 *     memset @ 0x1C0152CC0 (memset.c)
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
  __int64 v24; // rdx
  _DWORD v25[12]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF

  v26 = 0LL;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  if ( !(unsigned int)IsDwmApiPortRegistered() || (*(_DWORD *)(ProcessWindowStation + 32) & 4) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    RedirectionBitmap = CreateOrGetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL), 1, 0, &v26);
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
      if ( gfade[2] )
        StopFade();
      bSetDevDragRect((HDEV)*gpDispInfo);
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
                  zzzDecomposeDesktop((struct tagDESKTOP *)v16);
                  DwmNotifyChildrenAddRemove((struct tagDESKTOP *)v16);
                  v21 = (void *)ReferenceDwmApiPort(v18, v17, v19, v20);
                  DwmAsyncDesktopFree(v21);
                  v16 = *(_QWORD *)(v16 + 16);
                }
                while ( v16 );
                v15 = grpdeskRitInput;
              }
              if ( *(_QWORD *)(ProcessWindowStation + 88) )
                DeleteOrSetRedirectionBitmap(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8LL) + 16LL),
                  *(_QWORD *)(ProcessWindowStation + 88),
                  1);
              GreDwmShutdown(*gpDispInfo);
              bSetDevDragRect((HDEV)*gpDispInfo);
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
        bSetDevDragRect((HDEV)*gpDispInfo);
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
        v24 = *(_QWORD *)(ProcessWindowStation + 88);
        if ( v24 )
          DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 8LL) + 16LL), v24, 1);
      }
    }
  }
  return (unsigned int)RedirectionBitmap;
}
