/*
 * XREFs of ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800AA5CC
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVCCompositionSurfaceBitmap@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x1800AA1C0 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVCCompos.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x1800AA8C0 (-GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CCommandBuffer::Initialize(CCommandBuffer *this, struct ID2D1PrivateCompositorBuffer *a2)
{
  unsigned int v4; // esi
  unsigned int v5; // eax
  SIZE_T v6; // rbx
  LPVOID (__fastcall *v7)(WPF::ProcessHeapImpl *, SIZE_T); // rbp
  LPVOID v8; // rax
  void *(__fastcall *v9)(CD2DSharedBuffer *__hidden); // rbx
  void *BufferPointer; // rax
  const void *v11; // rbp
  unsigned int v12; // eax

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_DWORD *)this + 2) = v5 / 0x90;
  v6 = 144LL * (v5 / 0x90);
  if ( !is_mul_ok(v5 / 0x90, 0x90uLL) )
    v6 = -1LL;
  v7 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v7 == WPF::ProcessHeapImpl::Alloc )
    v8 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v6);
  else
    v8 = v7(WPF::g_pProcessHeap, v6);
  *(_QWORD *)this = v8;
  if ( v8 )
  {
    v9 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden))(*(_QWORD *)a2 + 24LL);
    if ( v9 == CD2DSharedBuffer::GetBufferPointer )
      BufferPointer = CD2DSharedBuffer::GetBufferPointer(a2);
    else
      BufferPointer = v9(a2);
    v11 = BufferPointer;
    v12 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
    memcpy_0(*(void **)this, v11, v12);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Fu);
  }
  return v4;
}
