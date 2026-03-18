/*
 * XREFs of ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x1800AC748
 * Callers:
 *     ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x1800396D4 (-ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedSectionAnimationPrimitiveBuffer::Create(
        struct CSharedSection *this,
        int a2,
        int a3,
        struct CSharedSectionAnimationPrimitiveBuffer **a4)
{
  unsigned int v8; // edi
  LPVOID (__fastcall *v9)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  void (__fastcall **v12)(_DWORD *); // rcx

  v8 = 0;
  v9 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v9 == WPF::ProcessHeapImpl::Alloc )
    v10 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x20uLL);
  else
    v10 = (_DWORD *)v9(WPF::g_pProcessHeap, 32LL);
  v11 = v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v10 = &CSharedSectionAnimationPrimitiveBuffer::`vftable';
    v10[2] = 0;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    *((_QWORD *)v11 + 2) = this;
    if ( this )
      CBitmapOfDeviceBitmaps::AddRef(this);
    v12 = *(void (__fastcall ***)(_DWORD *))v11;
    v11[6] = a2;
    v11[7] = a3;
    (*v12)(v11);
    *a4 = (struct CSharedSectionAnimationPrimitiveBuffer *)v11;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xDu);
  }
  return v8;
}
