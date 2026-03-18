/*
 * XREFs of ?Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800AA4D8
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVCCompositionSurfaceBitmap@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x1800AA1C0 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVCCompos.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x1800AA8C0 (-GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CPrimitiveBuffer::Initialize(CPrimitiveBuffer *this, struct ID2D1PrivateCompositorBuffer *a2)
{
  unsigned int v4; // esi
  unsigned int v5; // eax
  LPVOID (__fastcall *v6)(WPF::ProcessHeapImpl *, SIZE_T); // r15
  LPVOID v7; // rax
  void *(__fastcall *v8)(CD2DSharedBuffer *__hidden); // rbx
  void *BufferPointer; // rax
  const void *v10; // rbp
  unsigned int v11; // eax

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_DWORD *)this + 2) = v5;
  v6 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v6 == WPF::ProcessHeapImpl::Alloc )
    v7 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v5);
  else
    v7 = v6(WPF::g_pProcessHeap, v5);
  *(_QWORD *)this = v7;
  if ( v7 )
  {
    v8 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden))(*(_QWORD *)a2 + 24LL);
    if ( v8 == CD2DSharedBuffer::GetBufferPointer )
      BufferPointer = CD2DSharedBuffer::GetBufferPointer(a2);
    else
      BufferPointer = v8(a2);
    v10 = BufferPointer;
    v11 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
    memcpy_0(*(void **)this, v10, v11);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x6Du);
  }
  return v4;
}
