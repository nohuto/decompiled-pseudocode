/*
 * XREFs of ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180037290
 * Callers:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18000F0F0 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180044C40 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetScratchBitmapBrush@CDrawingContext@@AEAAJXZ @ 0x180037504 (-GetScratchBitmapBrush@CDrawingContext@@AEAAJXZ.c)
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18006F600 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x180070000 (--1CDisplaySet@@AEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::UpdateRenderTargetState(CDrawingContext *this)
{
  int (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  int v3; // ebp
  CDisplaySet *v4; // r14
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v8; // rsi
  int v9; // eax
  int ScratchBitmapBrush; // eax
  int v11; // eax
  __int64 v12; // rcx
  int CurrentDisplaySetInternal; // eax
  __int64 v14; // r8
  unsigned int v15; // r9d
  _BYTE v16[24]; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+90h] [rbp+8h]
  __int64 v18; // [rsp+98h] [rbp+10h] BYREF
  struct CDisplaySet *v19; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+20h] BYREF

  v2 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 44);
  v20 = 0LL;
  v3 = 0;
  v18 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( (**v2)(v2, &GUID_0784e14c_5fb4_422c_9f18_6109bbc92771, &v20) >= 0 )
  {
    v6 = *((_QWORD *)this + 419);
    *((_BYTE *)this + 2616) = 1;
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      *((_QWORD *)this + 419) = 0LL;
    }
    goto LABEL_4;
  }
  v8 = *((_QWORD *)this + 44);
  *((_BYTE *)this + 2616) = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *, char *))(*(_QWORD *)v8 + 104LL))(v8, v16, (char *)this + 392);
  v3 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2473u);
    goto LABEL_4;
  }
  *((_QWORD *)this + 50) = 0LL;
  ScratchBitmapBrush = CDrawingContext::GetScratchBitmapBrush(this);
  v3 = ScratchBitmapBrush;
  if ( ScratchBitmapBrush < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ScratchBitmapBrush, 0x2482u);
    goto LABEL_4;
  }
  v11 = *((_DWORD *)this + 98);
  v12 = *((_QWORD *)this + 48);
  *((_QWORD *)this + 383) = v12;
  *((_QWORD *)this + 416) = v12;
  *((_DWORD *)this + 768) = v11;
  *((_DWORD *)this + 834) = v11;
  if ( v11 == DisplayId::None || v11 == DisplayId::All )
    goto LABEL_20;
  v19 = 0LL;
  CurrentDisplaySetInternal = CDisplayManager::GetCurrentDisplaySetInternal((CDisplayManager *)&g_DisplayManager, &v19);
  v3 = CurrentDisplaySetInternal;
  if ( CurrentDisplaySetInternal < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySetInternal, 0xC4u);
  v4 = v19;
  v14 = 0LL;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2494u);
  }
  else
  {
    v15 = *((_DWORD *)v19 + 18);
    if ( v15 )
    {
      while ( *((_DWORD *)this + 98) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 6) + 8 * v14) + 136LL)
                                                  + 244LL) )
      {
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= v15 )
          goto LABEL_32;
      }
    }
    else
    {
LABEL_32:
      LODWORD(v14) = v17;
    }
    if ( (unsigned int)v14 < v15 )
    {
      v5 = *(_QWORD *)(*((_QWORD *)v19 + 6) + 8LL * (unsigned int)v14);
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v3 = 0;
      *((_QWORD *)this + 50) = *(_QWORD *)(*(_QWORD *)(v5 + 136) + 24LL);
LABEL_20:
      if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 44))(
             *((_QWORD *)this + 44),
             &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
             &v18) >= 0 )
        *((_DWORD *)this + 1448) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 40LL))(v18);
      else
        *((_DWORD *)this + 1448) = 0;
      if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, 1LL);
      goto LABEL_25;
    }
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x249u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1B9u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x2496u);
  }
LABEL_25:
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
  {
    CDisplaySet::~CDisplaySet(v4);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDisplaySet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v4);
  }
LABEL_4:
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v3;
}
