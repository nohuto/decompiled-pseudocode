/*
 * XREFs of ?RegisterGlobalTimer@CRippleEffect@@AEAAJXZ @ 0x18007C668
 * Callers:
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x18007C6C0 (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000831C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CRippleEffect::RegisterGlobalTimer(CRippleEffect *this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( !*((_BYTE *)this + 296) )
  {
    v3 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
    v1 = v3;
    if ( v3 >= 0 )
      *((_BYTE *)this + 296) = 1;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0xA7u);
  }
  return v1;
}
