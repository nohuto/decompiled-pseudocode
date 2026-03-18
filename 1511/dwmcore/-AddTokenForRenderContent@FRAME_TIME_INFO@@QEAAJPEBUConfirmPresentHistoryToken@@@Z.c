/*
 * XREFs of ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x180104318
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180061320 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z @ 0x1800AB220 (-HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z.c)
 */

__int64 __fastcall FRAME_TIME_INFO::AddTokenForRenderContent(
        FRAME_TIME_INFO *this,
        const struct ConfirmPresentHistoryToken *a2,
        __int64 a3,
        void **a4)
{
  int v6; // eax
  unsigned int v7; // esi
  _OWORD *v8; // rax
  unsigned int v9; // edx
  int v10; // ebx
  _OWORD *v11; // rbp
  int v13; // eax
  _OWORD *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  v6 = WPF::HrAlloc(this, 0x20uLL, &v14, a4);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = v14;
    *v14 = *(_OWORD *)a2;
    v8[1] = *((_OWORD *)a2 + 1);
    LODWORD(v8) = *((_DWORD *)this + 14);
    v9 = (_DWORD)v8 + 1;
    if ( (int)v8 + 1 < (unsigned int)v8 )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v7 = -2147024362;
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2Eu);
      goto LABEL_15;
    }
    v7 = 0;
    if ( v9 > *((_DWORD *)this + 13) )
    {
      v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 32, 8, 1, &v14);
      v10 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
      v7 = v10;
      if ( v10 < 0 )
        goto LABEL_14;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * *((unsigned int *)this + 14)) = v14;
      *((_DWORD *)this + 14) = v9;
    }
    v11 = 0LL;
    v14 = 0LL;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x26u);
LABEL_15:
  v11 = v14;
LABEL_8:
  if ( v11 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _OWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v11);
  return v7;
}
