/*
 * XREFs of ?GetPresentStatistics@CAnalogTextureTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1801663C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnalogTextureTarget::GetPresentStatistics(
        CAnalogTextureTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx

  v5 = *((_QWORD *)this + 19);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)(v5 + 176) + 320LL))(
           v5 + 176,
           a2);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x10Du);
    v8 = *((_QWORD *)this + 5);
    a3->uiNumerator = *(_DWORD *)(v8 + 272);
    a3->uiDenominator = *(_DWORD *)(v8 + 276);
  }
  else
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x112u);
  }
  return v7;
}
