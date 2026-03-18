/*
 * XREFs of ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180085658
 * Callers:
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18002F110 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800A15D0 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180179AC0 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?AddRef@CBoundsBitmap@@UEAAKXZ @ 0x180002DA0 (-AddRef@CBoundsBitmap@@UEAAKXZ.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x1800212BC (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18009E488 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18009E518 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x1800B2798 (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::HrLock(
        CBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7,
        enum WICBitmapLockFlags a8,
        struct IBitmapLock **a9,
        bool a10,
        struct IUnknown *a11)
{
  volatile signed __int32 *v14; // r14
  int v15; // eax
  unsigned int v16; // ebx
  LPVOID (__fastcall *v17)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  CBitmapLock *v18; // rax
  CBitmapLock *v19; // rdi
  unsigned int (__fastcall *v20)(CBoundsBitmap *); // rax
  struct IBitmapUnlock *v21; // rdx
  int v22; // eax
  bool v24; // zf
  int v25; // eax
  int v26; // r9d
  unsigned int v27; // [rsp+20h] [rbp-68h]

  if ( (a8 & 2) == 0 )
  {
    if ( (a8 & 1) == 0 )
    {
      v16 = -2147024809;
      v27 = 713;
      v26 = -2147024809;
      goto LABEL_37;
    }
    v14 = (volatile signed __int32 *)((char *)this + 224);
    v15 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 224));
    v16 = v15;
    if ( v15 >= 0 )
      goto LABEL_4;
    v27 = 709;
LABEL_23:
    v26 = v15;
LABEL_37:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, v27);
    return v16;
  }
  v14 = (volatile signed __int32 *)((char *)this + 224);
  v15 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 224));
  v16 = v15;
  if ( v15 < 0 )
  {
    v27 = 705;
    goto LABEL_23;
  }
LABEL_4:
  v17 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v17 == WPF::ProcessHeapImpl::Alloc )
    v18 = (CBitmapLock *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0xB0uLL);
  else
    v18 = (CBitmapLock *)v17(WPF::g_pProcessHeap, 176LL);
  if ( v18 )
    v19 = CBitmapLock::CBitmapLock(v18);
  else
    v19 = 0LL;
  if ( v19 )
  {
    v20 = *(unsigned int (__fastcall **)(CBoundsBitmap *))(*(_QWORD *)v19 + 8LL);
    if ( v20 == CBoundsBitmap::AddRef )
      CBoundsBitmap::AddRef(v19);
    else
      v20(v19);
    if ( this )
      v21 = (CBitmap *)((char *)this + 32);
    else
      v21 = 0LL;
    v22 = CBitmapLock::HrInit(v19, v21, a2, a3, a4, a5, a6, a7, a8, a10, a11);
    v16 = v22;
    if ( v22 >= 0 )
    {
      if ( (a8 & 2) != 0 )
      {
        v24 = (*((_DWORD *)this + 42))++ == -1;
        v25 = *((_DWORD *)this + 42);
        if ( v24 )
          v25 = 1;
        *((_DWORD *)this + 42) = v25;
      }
      *a9 = (CBitmapLock *)((char *)v19 + 72);
      return v16;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x2DBu);
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2CFu);
  }
  if ( (a8 & 2) != 0 )
  {
    *v14 = 0;
  }
  else if ( (a8 & 1) != 0 )
  {
    _InterlockedDecrement(v14);
  }
  if ( v19 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v19 + 16LL))(v19);
  return v16;
}
