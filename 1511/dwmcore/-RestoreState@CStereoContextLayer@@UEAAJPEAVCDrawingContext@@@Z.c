/*
 * XREFs of ?RestoreState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180114DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18000F0F0 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CStereoContextLayer::RestoreState(CStereoContextLayer *this, struct CDrawingContext *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0LL;
  *((_BYTE *)a2 + 5969) = 0;
  *((_DWORD *)a2 + 1452) = 0;
  *((_DWORD *)a2 + 1451) = 0;
  *((_DWORD *)a2 + 1450) = 0;
  *((_DWORD *)a2 + 1449) = 0;
  if ( *((_BYTE *)this + 13) )
  {
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 44))(
           *((_QWORD *)a2 + 44),
           &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
           &v9);
    v2 = v5;
    if ( v5 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, 0LL);
      v2 = v6;
      if ( v6 >= 0 )
      {
        v7 = CDrawingContext::PopRenderTargetInternal(a2, 0);
        v2 = v7;
        if ( v7 >= 0 )
          *((_BYTE *)this + 13) = 0;
        else
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x5Cu);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x57u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x55u);
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v2;
}
