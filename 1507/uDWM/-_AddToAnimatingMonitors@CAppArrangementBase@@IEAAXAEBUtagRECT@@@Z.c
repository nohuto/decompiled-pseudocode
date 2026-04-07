/*
 * XREFs of ?_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z @ 0x180092330
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180093FB0 (-_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x180090954 (-Find@-$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z.c)
 */

void __fastcall CAppArrangementBase::_AddToAnimatingMonitors(CAppArrangementBase *this, const struct tagRECT *a2)
{
  __int64 v3; // r11
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  HMONITOR v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = MonitorFromRect(a2, 0);
  if ( v7 && !(unsigned int)DynArray<HMONITOR__ *,0>::Find((__int64)this + 152, &v7) )
  {
    v4 = *(_DWORD *)(v3 + 24);
    v5 = v4 + 1;
    if ( v4 + 1 >= v4 )
    {
      if ( v5 > *(_DWORD *)(v3 + 20) )
      {
        v6 = DynArrayImpl<0>::AddMultipleAndSet(v3, 8u, 1, &v7);
        if ( v6 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 24)) = v7;
        *(_DWORD *)(v3 + 24) = v5;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
  }
}
