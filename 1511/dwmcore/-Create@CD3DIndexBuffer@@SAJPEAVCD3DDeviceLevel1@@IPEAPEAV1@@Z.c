/*
 * XREFs of ?Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x1800A95D0
 * Callers:
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ @ 0x1800209A0 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z @ 0x1800A98D0 (-EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z.c)
 */

__int64 __fastcall CD3DIndexBuffer::Create(struct CD3DDeviceLevel1 *a1, __int64 a2, struct CD3DIndexBuffer **a3)
{
  __int64 v5; // rax
  volatile signed __int32 *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         64LL);
  v6 = (volatile signed __int32 *)v5;
  if ( v5 )
  {
    *(_QWORD *)v5 = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_DWORD *)(v5 + 40) = 0;
    *(_DWORD *)(v5 + 44) = 0;
    *(_DWORD *)(v5 + 48) = -1;
    *(_QWORD *)(v5 + 24) = a1;
    *(_DWORD *)(v5 + 52) = 2;
    *(_BYTE *)(v5 + 56) = 0;
    *(_QWORD *)v5 = &CD3DIndexBuffer::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v7 = CD3DBuffer::EnsureByteSpace((CD3DBuffer *)v6, 0x3E80u, 1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x92u);
    }
    else
    {
      *a3 = (struct CD3DIndexBuffer *)v6;
      v6 = 0LL;
    }
    if ( v6 )
      CMILRefCountBase::Release((CMILRefCountBase *)v6);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Fu);
  }
  return v8;
}
