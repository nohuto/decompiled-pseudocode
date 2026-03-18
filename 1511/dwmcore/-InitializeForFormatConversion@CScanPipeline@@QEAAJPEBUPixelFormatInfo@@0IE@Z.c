/*
 * XREFs of ?InitializeForFormatConversion@CScanPipeline@@QEAAJPEBUPixelFormatInfo@@0IE@Z @ 0x180154EE0
 * Callers:
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z @ 0x180154BF0 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?ResetPipeline@CScanPipeline@@MEAAXXZ @ 0x180154E90 (-ResetPipeline@CScanPipeline@@MEAAXXZ.c)
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1801552FC (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?Append_Convert@ScanPipelineBuilder@@QEAAJPEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x18015542C (-Append_Convert@ScanPipelineBuilder@@QEAAJPEBUPixelFormatInfo@@0W4Subpipe@1@@Z.c)
 *     ?ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ @ 0x180155820 (-ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ.c)
 */

__int64 __fastcall CScanPipeline::InitializeForFormatConversion(
        CScanPipeline *this,
        const struct PixelFormatInfo *a2,
        const struct PixelFormatInfo *a3,
        unsigned int a4)
{
  WPF *v8; // rcx
  int v9; // eax
  int v10; // ebx
  _QWORD *v11; // rdx
  __int64 *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  int appended; // eax
  int v16; // r9d
  int v17; // eax
  void (__fastcall *v18)(const struct PipelineParams *, const struct ScanOpParams *); // rdx
  int v19; // eax
  unsigned int v21; // [rsp+20h] [rbp-78h]
  _QWORD v22[2]; // [rsp+30h] [rbp-68h] BYREF
  __int16 v23; // [rsp+40h] [rbp-58h]
  char v24; // [rsp+42h] [rbp-56h]
  int v25; // [rsp+44h] [rbp-54h]
  __m128i si128; // [rsp+48h] [rbp-50h]

  CScanPipeline::ResetPipeline(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 80));
  *((_QWORD *)this + 80) = 0LL;
  v9 = WPF::HrMalloc(v8, 0x30uLL, a4, (_QWORD *)this + 80);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (_QWORD *)((char *)this + 648);
    v12 = (__int64 *)((char *)this + 640);
    v13 = 2LL;
    do
    {
      v14 = *v12++;
      *v11++ = 16LL * a4 + v14;
      --v13;
    }
    while ( v13 );
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x35u);
  }
  if ( v10 < 0 )
  {
    v21 = 70;
LABEL_27:
    v16 = v10;
    goto LABEL_28;
  }
  v25 = 0;
  v23 = 257;
  v24 = 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v22[0] = this;
  v22[1] = (char *)this + 640;
  appended = ScanPipelineBuilder::Append_Convert(v22, a2, a3);
  v10 = appended;
  if ( appended < 0 )
  {
    v21 = 85;
LABEL_9:
    v16 = appended;
LABEL_28:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v21);
    return (unsigned int)v10;
  }
  if ( !*(_DWORD *)(v22[0] + 32LL) )
  {
    v17 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 2 )
    {
      v18 = Copy_128;
    }
    else
    {
      if ( v17 > 9 )
      {
        if ( v17 <= 11 )
        {
          v18 = Copy_64;
          goto LABEL_21;
        }
        if ( v17 == 24 || v17 == 28 || (unsigned int)(v17 - 87) <= 1 )
        {
          v18 = Copy_32;
          goto LABEL_21;
        }
      }
      v18 = 0LL;
    }
LABEL_21:
    appended = ScanPipelineBuilder::AddOp_Binary(v22, v18);
    v10 = appended;
    if ( appended < 0 )
    {
      v21 = 97;
      goto LABEL_9;
    }
  }
  v19 = ScanPipelineBuilder::ConvertDestBufferReferences((ScanPipelineBuilder *)v22);
  v10 = v19;
  if ( v19 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x95u);
  if ( v10 < 0 )
  {
    v21 = 100;
    goto LABEL_27;
  }
  return (unsigned int)v10;
}
