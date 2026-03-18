/*
 * XREFs of ?GetScratchBitmapBrush@CDrawingContext@@AEAAJXZ @ 0x180037504
 * Callers:
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180037290 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Release@CMILBrushBitmap@@UEAAKXZ @ 0x180089650 (-Release@CMILBrushBitmap@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z @ 0x1800B3C2C (-Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::GetScratchBitmapBrush(CDrawingContext *this)
{
  __int64 v1; // rbx
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // edx
  int v7; // esi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  CBitmapOfDeviceBitmaps *v10; // r14
  CBitmapOfDeviceBitmaps **v11; // rbx
  struct IBitmapSource *v12; // rdx
  struct CMILFactory *v13; // rcx
  __int64 (__fastcall *v14)(CBitmapOfDeviceBitmaps *); // rbp
  __int64 v16; // rbx
  __int64 v17; // rdi
  unsigned int (__fastcall *v19)(CMILBrushBitmap *__hidden); // rbp
  int v20; // eax
  void (__fastcall ***v21)(_QWORD, __int64); // r14
  unsigned int v22; // [rsp+20h] [rbp-38h]

  v1 = *((_QWORD *)this + 48);
  v3 = *((_QWORD *)this + 3);
  v4 = 0LL;
  EnterCriticalSection(&stru_1801A3D88);
  v5 = *(_QWORD *)(v3 + 252) - xmmword_1801A3DF4;
  if ( !v5 )
    v5 = *(_QWORD *)(v3 + 260) - *((_QWORD *)&xmmword_1801A3DF4 + 1);
  if ( !v5 )
  {
    v22 = 1818;
LABEL_36:
    v7 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, -2003304307, v22);
    goto LABEL_11;
  }
  if ( !qword_1801A3DB8 )
  {
    v22 = 1831;
    goto LABEL_36;
  }
  v6 = 0;
  v7 = -2003304307;
  if ( dword_1801A3DF0 )
  {
    while ( 1 )
    {
      v8 = (_QWORD *)(xmmword_1801A3DD0 + 32LL * v6);
      if ( v1 == v8[1] )
      {
        v9 = *(_QWORD *)(v3 + 252) - v8[2];
        if ( !v9 )
          v9 = *(_QWORD *)(v3 + 260) - v8[3];
        if ( !v9 )
          break;
      }
      if ( ++v6 >= dword_1801A3DF0 )
        goto LABEL_11;
    }
    v4 = *v8;
    _InterlockedIncrement((volatile signed __int32 *)(*v8 + 392LL));
    v7 = 0;
  }
LABEL_11:
  LeaveCriticalSection(&stru_1801A3D88);
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x23A5u);
  }
  else
  {
    ++*(_DWORD *)(v4 + 504);
    v7 = 0;
    v10 = 0LL;
    v11 = (CBitmapOfDeviceBitmaps **)(v4 + 792);
    *(_DWORD *)(v4 + 508) = GetCurrentThreadId();
    if ( *(_QWORD *)(v4 + 792)
      || (v20 = CMILBrushBitmap::Create(v13, v12, (struct CMILBrushBitmap **)(v4 + 792)), v7 = v20, v20 >= 0) )
    {
      v14 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)*v11 + 8LL);
      if ( v14 == CBitmapOfDeviceBitmaps::AddRef )
        CBitmapOfDeviceBitmaps::AddRef(*v11);
      else
        v14(*v11);
      v10 = *v11;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x201u);
    }
    if ( (*(_DWORD *)(v4 + 504))-- == 1 )
      *(_DWORD *)(v4 + 508) = 0;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x23A7u);
    }
    else
    {
      v16 = *((_QWORD *)this + 419);
      if ( v16 )
      {
        v19 = *(unsigned int (__fastcall **)(CMILBrushBitmap *__hidden))(*(_QWORD *)v16 + 16LL);
        if ( v19 == CMILBrushBitmap::Release )
          CMILBrushBitmap::Release(*((CMILBrushBitmap **)this + 419));
        else
          v19(*((CMILBrushBitmap **)this + 419));
        *((_QWORD *)this + 419) = 0LL;
      }
      *((_QWORD *)this + 419) = v10;
      v10 = 0LL;
    }
    if ( v10 )
      (*(void (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v4 )
  {
    v17 = v4 + 384;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 8), 0xFFFFFFFF) == 1 )
    {
      v21 = *(void (__fastcall ****)(_QWORD, __int64))(v17 + 16);
      if ( v21 )
        (**v21)(*(_QWORD *)(v17 + 16), v17);
      else
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 16LL))(v17, 1LL);
    }
  }
  return (unsigned int)v7;
}
