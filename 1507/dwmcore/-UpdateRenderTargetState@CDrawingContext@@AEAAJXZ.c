/*
 * XREFs of ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180022F20
 * Callers:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180011654 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18002F420 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x180054A68 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x180055400 (--1CDisplaySet@@AEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z @ 0x180096D50 (-Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::UpdateRenderTargetState(CDrawingContext *this)
{
  int (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rsi
  int v3; // edi
  __int64 v4; // r12
  CDisplaySet *v5; // r15
  __int64 v6; // rsi
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned int v13; // r9d
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  struct IBitmapSource *v17; // rdx
  struct CMILFactory *v18; // rcx
  unsigned int (__fastcall *v19)(CBitmapOfDeviceBitmaps *__hidden); // r13
  __int64 v21; // r13
  __int64 v22; // rsi
  int v23; // eax
  __int64 v24; // rcx
  int CurrentDisplaySetInternal; // eax
  __int64 v26; // r8
  unsigned int v27; // r9d
  int v28; // eax
  void (__fastcall ***v29)(_QWORD, __int64); // r13
  _BYTE v30[16]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v31; // [rsp+98h] [rbp+10h] BYREF
  struct CDisplaySet *v32; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+20h] BYREF

  v1 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 44);
  v3 = 0;
  v4 = 0LL;
  v33 = 0LL;
  v5 = 0LL;
  v31 = 0LL;
  if ( (**v1)(v1, &GUID_0784e14c_5fb4_422c_9f18_6109bbc92771, &v33) >= 0 )
  {
    v6 = *((_QWORD *)this + 415);
    *((_BYTE *)this + 2616) = 1;
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      *((_QWORD *)this + 415) = 0LL;
    }
    goto LABEL_4;
  }
  *((_BYTE *)this + 2616) = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, char *))(**((_QWORD **)this + 44) + 104LL))(
         *((_QWORD *)this + 44),
         v30,
         (char *)this + 392);
  v3 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2540u);
    goto LABEL_4;
  }
  v9 = *((_QWORD *)this + 48);
  v10 = *((_QWORD *)this + 3);
  v11 = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  EnterCriticalSection(&CriticalSection);
  v3 = 0;
  v12 = *(_QWORD *)(v10 + 252) - xmmword_180195E0C;
  if ( !v12 )
    v12 = *(_QWORD *)(v10 + 260) - *((_QWORD *)&xmmword_180195E0C + 1);
  if ( !v12 )
    v3 = -2003304307;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v3, 0x70Eu);
  }
  else
  {
    v3 = -2003304307;
    if ( qword_180195DD0 )
    {
      v13 = 0;
      if ( dword_180195E08 )
      {
        while ( 1 )
        {
          v14 = (_QWORD *)(qword_180195DE8 + 32LL * v13);
          if ( v9 == v14[1] )
          {
            v15 = *(_QWORD *)(v10 + 252) - v14[2];
            if ( !v15 )
              v15 = *(_QWORD *)(v10 + 260) - v14[3];
            if ( !v15 )
              break;
          }
          if ( ++v13 >= dword_180195E08 )
            goto LABEL_22;
        }
        v11 = *v14;
        _InterlockedIncrement((volatile signed __int32 *)(*v14 + 400LL));
        v3 = 0;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, -2003304307, 0x71Bu);
    }
  }
LABEL_22:
  LeaveCriticalSection(&CriticalSection);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2471u);
  }
  else
  {
    ++*(_DWORD *)(v11 + 512);
    v3 = 0;
    v16 = 0LL;
    *(_DWORD *)(v11 + 516) = GetCurrentThreadId();
    if ( *(_QWORD *)(v11 + 824)
      || (v28 = CMILBrushBitmap::Create(v18, v17, (struct CMILBrushBitmap **)(v11 + 824)), v3 = v28, v28 >= 0) )
    {
      v19 = *(unsigned int (__fastcall **)(CBitmapOfDeviceBitmaps *__hidden))(**(_QWORD **)(v11 + 824) + 8LL);
      if ( v19 == CBitmapOfDeviceBitmaps::AddRef )
        CBitmapOfDeviceBitmaps::AddRef(*(CBitmapOfDeviceBitmaps **)(v11 + 824));
      else
        v19(*(CBitmapOfDeviceBitmaps **)(v11 + 824));
      v16 = *(_QWORD *)(v11 + 824);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x1F2u);
    }
    if ( (*(_DWORD *)(v11 + 512))-- == 1 )
      *(_DWORD *)(v11 + 516) = 0;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2473u);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    else
    {
      v21 = *((_QWORD *)this + 415);
      if ( v21 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 16LL))(*((_QWORD *)this + 415));
        *((_QWORD *)this + 415) = 0LL;
      }
      *((_QWORD *)this + 415) = v16;
    }
  }
  if ( v11 )
  {
    v22 = v11 + 392;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 8), 0xFFFFFFFF) == 1 )
    {
      v29 = *(void (__fastcall ****)(_QWORD, __int64))(v22 + 16);
      if ( v29 )
        (**v29)(*(_QWORD *)(v22 + 16), v22);
      else
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 16LL))(v22, 1LL);
    }
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x254Fu);
    goto LABEL_4;
  }
  v23 = *((_DWORD *)this + 98);
  v24 = *((_QWORD *)this + 48);
  *((_QWORD *)this + 379) = v24;
  *((_QWORD *)this + 412) = v24;
  *((_DWORD *)this + 760) = v23;
  *((_DWORD *)this + 826) = v23;
  if ( v23 == DisplayId::None || v23 == DisplayId::All )
    goto LABEL_45;
  v32 = 0LL;
  CurrentDisplaySetInternal = CDisplayManager::GetCurrentDisplaySetInternal((CDisplayManager *)&g_DisplayManager, &v32);
  v3 = CurrentDisplaySetInternal;
  if ( CurrentDisplaySetInternal < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySetInternal, 0xC4u);
  v5 = v32;
  v26 = 0LL;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2561u);
  }
  else
  {
    v27 = *((_DWORD *)v32 + 18);
    if ( v27 )
    {
      while ( *((_DWORD *)this + 98) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 6) + 8 * v26) + 152LL)
                                                  + 852LL) )
      {
        v26 = (unsigned int)(v26 + 1);
        if ( (unsigned int)v26 >= v27 )
          goto LABEL_70;
      }
    }
    else
    {
LABEL_70:
      LODWORD(v26) = v9;
    }
    if ( (unsigned int)v26 < v27 )
    {
      v4 = *(_QWORD *)(*((_QWORD *)v32 + 6) + 8LL * (unsigned int)v26);
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v3 = 0;
      *((_QWORD *)this + 50) = *(_QWORD *)(*(_QWORD *)(v4 + 152) + 32LL);
LABEL_45:
      if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 44))(
             *((_QWORD *)this + 44),
             &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
             &v31) >= 0 )
        *((_DWORD *)this + 1440) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 40LL))(v31);
      else
        *((_DWORD *)this + 1440) = 0;
      if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, 1LL);
      goto LABEL_50;
    }
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x248u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1B8u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x2563u);
  }
LABEL_50:
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
  {
    CDisplaySet::~CDisplaySet(v5);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDisplaySet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v5);
  }
LABEL_4:
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  return (unsigned int)v3;
}
