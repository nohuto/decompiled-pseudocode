/*
 * XREFs of ?ApplyState@CStereoContextLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012E760
 * Callers:
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x180107730 (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18006D260 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStereoContextLayer::ApplyState(CStereoContextLayer *this, struct CDrawingContext *a2)
{
  char v2; // al
  unsigned int v3; // ebx
  struct IRenderTarget *v6; // r14
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_BYTE *)this + 12);
  v3 = 0;
  v11 = 0LL;
  *((_BYTE *)a2 + 6533) = v2;
  *((_DWORD *)a2 + 1626) = 0;
  *((_DWORD *)a2 + 1625) = 0;
  *((_DWORD *)a2 + 1624) = 0;
  *((_DWORD *)a2 + 1623) = 0;
  if ( *((_DWORD *)this + 2) != *((_DWORD *)a2 + 1622) )
  {
    v6 = (struct IRenderTarget *)*((_QWORD *)a2 + 54);
    v7 = (**(__int64 (__fastcall ***)(struct IRenderTarget *, GUID *, __int64 *))v6)(
           v6,
           &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
           &v11);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2Au);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, *((unsigned int *)this + 2));
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2Cu);
      }
      else
      {
        v9 = CDrawingContext::PushRenderTarget(a2, v6);
        v3 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x33u);
        else
          *((_BYTE *)this + 13) = 1;
      }
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v3;
}
