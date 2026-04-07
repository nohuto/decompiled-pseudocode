/*
 * XREFs of ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x1800389A4
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180005BB8 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18004055C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180091ABC (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180091ECC (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x18009935C (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x18009B94C (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CAnimationEngine::RegisterForAnimationCompleteNotification(
        CAnimationEngine *this,
        struct IAnimationListener *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned int v5; // ecx
  __int64 v6; // r8
  char *v8; // r10
  __int64 v9; // rax
  unsigned int v10; // edx
  int v11; // edi
  int v12; // eax
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp+8h] BYREF
  struct IAnimationListener *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = 0;
  if ( *((_BYTE *)this + 120) )
  {
    v4 = 0xFFFFFFFFLL;
    v5 = 0;
    if ( *((_DWORD *)this + 24) )
    {
      v6 = *((_QWORD *)this + 9);
      while ( *(struct IAnimationListener **)(v6 + 8LL * v5) != v14 )
      {
        if ( (int)v4 < 0 && !*(_QWORD *)(v6 + 8LL * v5) )
          v4 = v5;
        if ( ++v5 >= *((_DWORD *)this + 24) )
        {
          if ( (int)v4 < 0 )
            goto LABEL_12;
          *(_QWORD *)(v6 + 8 * v4) = v14;
          break;
        }
      }
    }
    else
    {
LABEL_12:
      v8 = (char *)this + 72;
      v9 = *((unsigned int *)this + 24);
      v10 = v9 + 1;
      if ( (int)v9 + 1 < (unsigned int)v9 )
      {
        v11 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else
      {
        v11 = 0;
        if ( v10 <= *((_DWORD *)v8 + 5) )
        {
          *(_QWORD *)(*(_QWORD *)v8 + 8 * v9) = v14;
          *((_DWORD *)v8 + 6) = v10;
        }
        else
        {
          v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v8, 8u, 1, &v14);
          v11 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xC0u);
        }
      }
      v3 = v11;
    }
  }
  else
  {
    v3 = -2147221008;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147221008, 0x21Eu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v3;
}
