/*
 * XREFs of ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x1800FBFE8
 * Callers:
 *     ?EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ @ 0x18013BFE4 (-EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ.c)
 *     ?EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ @ 0x18013CF58 (-EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z @ 0x1800FC054 (-GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z.c)
 */

__int64 __fastcall CDisplaySet::GetDisplay(__int64 a1, __int64 a2, _QWORD *a3)
{
  int DisplayIndexFromDisplayId; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  DisplayIndexFromDisplayId = CDisplaySet::GetDisplayIndexFromDisplayId(a1, a2, &v9);
  v6 = DisplayIndexFromDisplayId;
  if ( DisplayIndexFromDisplayId >= 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v9);
    *a3 = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayIndexFromDisplayId, 0x1B9u);
  }
  return v6;
}
