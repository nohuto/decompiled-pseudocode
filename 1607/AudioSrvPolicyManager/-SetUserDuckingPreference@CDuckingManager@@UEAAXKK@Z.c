/*
 * XREFs of ?SetUserDuckingPreference@CDuckingManager@@UEAAXKK@Z @ 0x180005C90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDuckingManager::SetUserDuckingPreference(CDuckingManager *this, int a2, unsigned int a3)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, a2);
  }
  *((_DWORD *)this + 71) = a2;
  (*(void (__fastcall **)(struct CWindowsPolicyManager *, _QWORD, const wchar_t *))(*(_QWORD *)g_PolicyManager + 216LL))(
    g_PolicyManager,
    a3,
    L"Comm");
}
