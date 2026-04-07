/*
 * XREFs of ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x1800461C4
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x1800464F4 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180074CFC (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002CCCC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x18003BE9C (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18003C544 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18003F124 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 */

void __fastcall CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(CWindowList *this, char a2)
{
  struct _RTL_GENERIC_TABLE *i; // rcx
  __int64 *v5; // rax
  __int64 *v6; // rbx
  unsigned __int64 v7; // rcx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8); ; i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8) )
  {
    v5 = (__int64 *)RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    v6 = v5;
    if ( !v5 )
      break;
    if ( *((_BYTE *)v5 + 56) )
    {
      v7 = *v5;
      if ( a2 )
      {
        CDesktopManager::CreateDesktopWindowForLogonDesktop(v7);
        if ( !*((_QWORD *)this + 67) && CDesktopManager::IsLogonDesktop(*v6) )
        {
          *((_QWORD *)this + 67) = CWindowList::GetRootVisualForDesktop(this, *v6);
          if ( CWindowList::GetRootVisualForDesktop(this, *v6) )
            _InterlockedIncrement((volatile signed __int32 *)CWindowList::GetRootVisualForDesktop(this, *v6) + 2);
        }
      }
      else
      {
        CDesktopManager::DestroyDesktopWindowReplacement(v7);
      }
    }
  }
}
