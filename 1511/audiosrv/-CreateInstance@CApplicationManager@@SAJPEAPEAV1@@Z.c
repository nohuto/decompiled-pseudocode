/*
 * XREFs of ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x18003E620
 * Callers:
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x18003E330 (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ??0CApplicationManager@@IEAA@XZ @ 0x18003F3EC (--0CApplicationManager@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::CreateInstance(struct CApplicationManager **a1)
{
  unsigned int v2; // ebx
  CApplicationManager *v3; // rax
  LPCRITICAL_SECTION v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  v2 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v5, &g_csApplicationManager);
  if ( a1 )
  {
    if ( g_ApplicationManager )
      goto LABEL_7;
    v3 = (CApplicationManager *)operator new(0xA0uLL);
    if ( v3 )
      v3 = CApplicationManager::CApplicationManager(v3);
    if ( v3 )
    {
      v2 = 0;
      *a1 = v3;
      goto LABEL_7;
    }
    v2 = -2147024882;
  }
  else
  {
    v2 = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids, v2);
  }
LABEL_7:
  if ( v6 )
    ATL::CCritSecLock::Unlock(&v5);
  return v2;
}
