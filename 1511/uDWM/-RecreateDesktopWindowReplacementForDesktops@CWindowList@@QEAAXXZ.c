/*
 * XREFs of ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18002C58C
 * Callers:
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x1800142AC (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180021020 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180021C48 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x18003BE9C (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18003F124 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 */

void __fastcall CWindowList::RecreateDesktopWindowReplacementForDesktops(CWindowList *this)
{
  struct _RTL_GENERIC_TABLE *v1; // rdi
  unsigned __int64 *v2; // rax
  unsigned __int64 *v3; // rbx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  v1 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  while ( 1 )
  {
    v2 = (unsigned __int64 *)RtlEnumerateGenericTableWithoutSplaying(v1, &RestartKey);
    v3 = v2;
    if ( !v2 )
      break;
    if ( *((_BYTE *)v2 + 56) )
    {
      CDesktopManager::DestroyDesktopWindowReplacement(*v2);
      CDesktopManager::CreateDesktopWindowForLogonDesktop(*v3);
    }
  }
}
