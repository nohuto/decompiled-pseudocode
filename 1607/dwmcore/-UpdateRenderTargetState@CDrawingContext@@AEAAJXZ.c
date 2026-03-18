/*
 * XREFs of ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180064170
 * Callers:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180005658 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18006D260 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x180036280 (--1CDisplaySet@@AEAA@XZ.c)
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x1800384B8 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CMILBrushBitmap@@UEAAKXZ @ 0x1800845A0 (-Release@CMILBrushBitmap@@UEAAKXZ.c)
 *     ?Create@CMILBrushBitmap@@SAJPEAPEAV1@@Z @ 0x1800B76C8 (-Create@CMILBrushBitmap@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::UpdateRenderTargetState(CDrawingContext *this)
{
  int (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v3; // r15
  int v4; // edi
  CDisplaySet *v5; // rbp
  CMILRefCountBase *v6; // r14
  __int64 v7; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r10
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r12
  CBitmapOfDeviceBitmaps *v18; // rcx
  void (*v19)(void); // rax
  CMILBrushBitmap *v20; // rcx
  int v21; // eax
  CDisplayManager *v22; // rcx
  int CurrentDisplaySetInternal; // eax
  __int64 v24; // r8
  unsigned int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int (__fastcall *v28)(CMILRefCountBase *__hidden); // rax
  void (*v29)(void); // rax
  int v30; // eax
  void (__fastcall ***v31)(_QWORD, __int64); // r8
  _BYTE v32[16]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v33; // [rsp+98h] [rbp+10h] BYREF
  struct CDisplaySet *v34; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+20h] BYREF

  v2 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 54);
  v3 = 0LL;
  v35 = 0LL;
  v4 = 0;
  v33 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (**v2)(v2, &GUID_0784e14c_5fb4_422c_9f18_6109bbc92771, &v35) >= 0 )
  {
    v7 = *((_QWORD *)this + 477);
    *((_BYTE *)this + 3048) = 1;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      *((_QWORD *)this + 477) = 0LL;
    }
    goto LABEL_4;
  }
  v9 = *((_QWORD *)this + 54);
  *((_BYTE *)this + 3048) = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *, char *, _QWORD))(*(_QWORD *)v9 + 104LL))(
          v9,
          v32,
          (char *)this + 472,
          0LL);
  v4 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x250Au);
    goto LABEL_4;
  }
  v11 = *((_QWORD *)this + 58);
  v12 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 60) = 0LL;
  EnterCriticalSection(&stru_1801F0028);
  v4 = 0;
  v13 = *(_QWORD *)(v12 + 252) - xmmword_1801F0114;
  if ( !v13 )
    v13 = *(_QWORD *)(v12 + 260) - *((_QWORD *)&xmmword_1801F0114 + 1);
  if ( !v13 )
    v4 = -2003304307;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v4, 0x6ACu);
  }
  else
  {
    v14 = 0LL;
    v4 = -2003304307;
    if ( dword_1801F0110 )
    {
      while ( 1 )
      {
        v15 = (_QWORD *)(qword_1801F00A0 + 40 * v14);
        if ( v11 == v15[1] )
        {
          v16 = *(_QWORD *)(v12 + 252) - v15[2];
          if ( !v16 )
            v16 = *(_QWORD *)(v12 + 260) - v15[3];
          if ( !v16 )
            break;
        }
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= dword_1801F0110 )
          goto LABEL_21;
      }
      v3 = *v15;
      _InterlockedIncrement((volatile signed __int32 *)(*v15 + 416LL));
      v4 = 0;
    }
  }
LABEL_21:
  LeaveCriticalSection(&stru_1801F0028);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2448u);
  }
  else
  {
    v4 = 0;
    v17 = 0LL;
    if ( *(_QWORD *)(v3 + 768)
      || (v30 = CMILBrushBitmap::Create((struct CMILBrushBitmap **)(v3 + 768)), v4 = v30, v30 >= 0) )
    {
      v18 = *(CBitmapOfDeviceBitmaps **)(v3 + 768);
      v19 = *(void (**)(void))(*(_QWORD *)v18 + 8LL);
      if ( (char *)v19 == (char *)CBitmapOfDeviceBitmaps::AddRef )
        CBitmapOfDeviceBitmaps::AddRef(v18);
      else
        v19();
      v17 = *(_QWORD *)(v3 + 768);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x185u);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x244Au);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    else
    {
      v20 = (CMILBrushBitmap *)*((_QWORD *)this + 477);
      if ( v20 )
      {
        v29 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
        if ( (char *)v29 == (char *)CMILBrushBitmap::Release )
          CMILBrushBitmap::Release(v20);
        else
          v29();
        *((_QWORD *)this + 477) = 0LL;
      }
      *((_QWORD *)this + 477) = v17;
    }
  }
  if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 416), 0xFFFFFFFF) == 1 )
  {
    v31 = *(void (__fastcall ****)(_QWORD, __int64))(v3 + 424);
    if ( v31 )
      (**v31)(*(_QWORD *)(v3 + 424), v3 + 408);
    else
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 408) + 16LL))(v3 + 408, 1LL);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2519u);
    goto LABEL_4;
  }
  v21 = *((_DWORD *)this + 118);
  v22 = (CDisplayManager *)*((_QWORD *)this + 58);
  *((_QWORD *)this + 440) = v22;
  *((_QWORD *)this + 474) = v22;
  *((_DWORD *)this + 882) = v21;
  *((_DWORD *)this + 950) = v21;
  if ( v21 == DisplayId::None || v21 == DisplayId::All )
    goto LABEL_41;
  v34 = 0LL;
  CurrentDisplaySetInternal = CDisplayManager::GetCurrentDisplaySetInternal(v22, &v34);
  v4 = CurrentDisplaySetInternal;
  if ( CurrentDisplaySetInternal < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySetInternal, 0x13Eu);
  v5 = v34;
  v24 = 0LL;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x252Bu);
  }
  else
  {
    v25 = *((_DWORD *)v34 + 18);
    v4 = 0;
    if ( v25 )
    {
      while ( *((_DWORD *)this + 118) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 6) + 8 * v24) + 136LL)
                                                   + 244LL) )
      {
        v24 = (unsigned int)(v24 + 1);
        if ( (unsigned int)v24 >= v25 )
          goto LABEL_67;
      }
    }
    else
    {
LABEL_67:
      LODWORD(v24) = v11;
    }
    if ( (unsigned int)v24 < v25 )
    {
      v6 = *(CMILRefCountBase **)(*((_QWORD *)v34 + 6) + 8LL * (unsigned int)v24);
      (**(void (__fastcall ***)(CMILRefCountBase *))v6)(v6);
      *((_QWORD *)this + 60) = *(_QWORD *)(*((_QWORD *)v6 + 17) + 24LL);
LABEL_41:
      if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 54))(
             *((_QWORD *)this + 54),
             &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
             &v33) >= 0 )
        *((_DWORD *)this + 1622) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 40LL))(v33);
      else
        *((_DWORD *)this + 1622) = 0;
      if ( v6 )
      {
        v28 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v6 + 8LL);
        if ( v28 == CMILRefCountBase::Release )
          CMILRefCountBase::Release(v6);
        else
          v28(v6);
      }
      goto LABEL_46;
    }
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x226u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x196u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x252Du);
  }
LABEL_46:
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
  {
    CDisplaySet::~CDisplaySet(v5, v26, v27);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDisplaySet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v5);
  }
LABEL_4:
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  return (unsigned int)v4;
}
