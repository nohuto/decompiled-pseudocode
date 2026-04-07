/*
 * XREFs of ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18003F968
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180009FA8 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800424A0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CAnimationEngine@@QEAAJXZ @ 0x180042C04 (-Initialize@CAnimationEngine@@QEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x18006B828 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CDesktopManager::InitializeComObjects(LPVOID *this)
{
  unsigned int v2; // ebx
  HRESULT Instance; // eax
  HRESULT v4; // eax
  CAnimationEngine *v5; // rcx
  unsigned int ppv; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(this, &UdwmAnimationInitialization_Start);
  v2 = 0;
  if ( !this[32] )
  {
    Instance = CoCreateInstance(
                 &CLSID_UIAnimationTransitionLibrary,
                 0LL,
                 1u,
                 &GUID_ca5a14b1_d24f_48b8_8fe4_c78169ba954e,
                 this + 33);
    v2 = Instance;
    if ( Instance < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Instance, 0x47Cu);
      goto LABEL_8;
    }
    v4 = CoCreateInstance(&CLSID_UIAnimationManager, 0LL, 1u, &GUID_9169896c_ac8d_4e7d_94e5_67fa4dc2f2e8, this + 32);
    v2 = v4;
    if ( v4 < 0 )
    {
      ppv = 1154;
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, ppv);
      goto LABEL_8;
    }
  }
  v5 = (CAnimationEngine *)this[22];
  if ( !*((_BYTE *)v5 + 120) )
  {
    v4 = CAnimationEngine::Initialize(v5);
    v2 = v4;
    if ( v4 < 0 )
    {
      ppv = 1159;
      goto LABEL_14;
    }
  }
LABEL_8:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v5, &UdwmAnimationInitialization_Stop);
  return v2;
}
