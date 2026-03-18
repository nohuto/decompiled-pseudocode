/*
 * XREFs of ?Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18009DF84
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageSource@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x18009DCF4 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x18009E350 (-GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveBuffer::Initialize(CPrimitiveBuffer *this, struct ID2D1PrivateCompositorBuffer *a2)
{
  unsigned int v3; // edi
  unsigned int v5; // eax
  SIZE_T v6; // rdx
  __int64 (*v7)(void); // rax
  LPVOID v8; // rax
  void *(__fastcall *v9)(CD2DSharedBuffer *__hidden); // rax
  void *BufferPointer; // rax
  const void *v11; // rsi
  unsigned int v12; // eax

  v3 = 0;
  v5 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
  v6 = v5;
  *((_DWORD *)this + 2) = v5;
  v7 = *(__int64 (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( (char *)v7 == (char *)WPF::ProcessHeapImpl::Alloc )
    v8 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v6);
  else
    v8 = (LPVOID)v7();
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
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x64u);
  }
  return v3;
}
