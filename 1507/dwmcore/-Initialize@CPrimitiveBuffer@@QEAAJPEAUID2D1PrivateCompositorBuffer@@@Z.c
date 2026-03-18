/*
 * XREFs of ?Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18007307C
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVCCompositionSurfaceBitmap@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x180073154 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVCCompos.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x180070EA0 (-GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CPrimitiveBuffer::Initialize(CPrimitiveBuffer *this, struct ID2D1PrivateCompositorBuffer *a2)
{
  unsigned int v4; // esi
  unsigned int v5; // eax
  LPVOID (__fastcall *v6)(WPF::ProcessHeapImpl *, SIZE_T); // r15
  LPVOID v7; // rax
  void *(__fastcall *v8)(CD2DSharedBuffer *); // rbx
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
    v8 = *(void *(__fastcall **)(CD2DSharedBuffer *))(*(_QWORD *)a2 + 24LL);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x83u);
  }
  return v4;
}
