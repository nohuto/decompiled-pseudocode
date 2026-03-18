/*
 * XREFs of ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180080174
 * Callers:
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18006FC90 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180083910 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180138110 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?AddRef@CBoundsBitmap@@UEAAKXZ @ 0x180015F10 (-AddRef@CBoundsBitmap@@UEAAKXZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800524C8 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18005255C (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x18005EB64 (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x18005EB94 (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  unsigned int v16; // edi
  LPVOID (__fastcall *v17)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  CBitmapLock *v18; // rax
  CBitmapLock *v19; // rsi
  unsigned int (__fastcall *v20)(CBoundsBitmap *); // rdi
  struct IBitmapUnlock *v21; // rdx
  int v22; // eax
  int v24; // eax
  int v25; // r9d
  unsigned int v26; // [rsp+20h] [rbp-68h]

  if ( (a8 & 2) == 0 )
  {
    if ( (a8 & 1) == 0 )
    {
      v16 = -2147024809;
      v26 = 713;
      v25 = -2147024809;
      goto LABEL_37;
    }
    v14 = (volatile signed __int32 *)((char *)this + 224);
    v15 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 224));
    v16 = v15;
    if ( v15 >= 0 )
      goto LABEL_4;
    v26 = 709;
LABEL_23:
    v25 = v15;
LABEL_37:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, v26);
    return v16;
  }
  v14 = (volatile signed __int32 *)((char *)this + 224);
  v15 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 224));
  v16 = v15;
  if ( v15 < 0 )
  {
    v26 = 705;
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
        v24 = ++*((_DWORD *)this + 42);
        if ( !v24 )
          v24 = 1;
        *((_DWORD *)this + 42) = v24;
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
