/*
 * XREFs of ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x180041524
 * Callers:
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x1800416E8 (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ??0CApplicationManager@@IEAA@XZ @ 0x18003F9DC (--0CApplicationManager@@IEAA@XZ.c)
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
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xAu,
      (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
      v2);
  }
LABEL_7:
  if ( v6 )
    ATL::CCritSecLock::Unlock(&v5);
  return v2;
}
