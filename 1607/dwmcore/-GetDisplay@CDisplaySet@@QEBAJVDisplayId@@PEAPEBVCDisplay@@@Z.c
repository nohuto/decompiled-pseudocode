/*
 * XREFs of ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x180110D50
 * Callers:
 *     ?EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ @ 0x180166170 (-EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ.c)
 *     ?EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ @ 0x180166F3C (-EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z @ 0x180110E28 (-GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z.c)
 */

__int64 __fastcall CDisplaySet::GetDisplay(__int64 a1, __int64 a2, _QWORD *a3)
{
  int DisplayIndexFromDisplayId; // eax
  unsigned int v6; // ebx
  void (__fastcall ***v7)(_QWORD); // rcx
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  DisplayIndexFromDisplayId = CDisplaySet::GetDisplayIndexFromDisplayId(a1, a2, &v9);
  v6 = DisplayIndexFromDisplayId;
  if ( DisplayIndexFromDisplayId < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayIndexFromDisplayId, 0x196u);
  }
  else
  {
    v7 = *(void (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 48) + 8LL * v9);
    *a3 = v7;
    (**v7)(v7);
  }
  return v6;
}
