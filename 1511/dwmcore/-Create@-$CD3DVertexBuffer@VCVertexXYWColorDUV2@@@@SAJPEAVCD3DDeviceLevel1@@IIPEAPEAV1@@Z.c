/*
 * XREFs of ?Create@?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z @ 0x1800A96B0
 * Callers:
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ @ 0x1800209A0 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z @ 0x1800A98D0 (-EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z.c)
 */

__int64 __fastcall CD3DVertexBuffer<CVertexXYWColorDUV2>::Create(__int64 a1, __int64 a2, __int64 a3, CD3DBuffer **a4)
{
  __int64 v6; // rax
  CD3DBuffer *v7; // rdi
  int v8; // eax
  unsigned int v9; // esi

  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         64LL);
  v7 = (CD3DBuffer *)v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_DWORD *)(v6 + 40) = 0;
    *(_DWORD *)(v6 + 44) = 0;
    *(_QWORD *)(v6 + 24) = a1;
    *(_DWORD *)(v6 + 48) = 2097120;
    *(_DWORD *)(v6 + 52) = 2;
    *(_BYTE *)(v6 + 56) = 0;
    *(_QWORD *)v6 = &CD3DVertexBuffer<CVertexXYWColorDUV2>::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    (**(void (__fastcall ***)(CD3DBuffer *))v7)(v7);
    v8 = CD3DBuffer::EnsureByteSpace(v7, 0x27100u, 1);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xE4u);
    }
    else
    {
      *a4 = v7;
      v7 = 0LL;
    }
    if ( v7 )
      (*(void (__fastcall **)(CD3DBuffer *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xE1u);
  }
  return v9;
}
