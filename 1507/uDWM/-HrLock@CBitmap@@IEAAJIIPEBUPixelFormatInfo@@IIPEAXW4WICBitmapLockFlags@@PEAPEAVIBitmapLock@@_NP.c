/*
 * XREFs of ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18003E8E4
 * Callers:
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18003F110 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18003DE4C (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18003DEE0 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
  int v13; // ebx
  signed __int32 v14; // eax
  unsigned int v15; // edi
  CBitmapLock *v16; // rax
  CBitmapLock *v17; // r14
  struct IBitmapUnlock *v18; // rdx
  int v19; // eax
  int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-68h]

  if ( (a8 & 2) != 0 )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 56, 0x80000000, 0) )
      goto LABEL_7;
    v15 = -2003292403;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003292403, 0x5Au);
    v22 = 705;
LABEL_34:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, v22);
    return v15;
  }
  if ( (a8 & 1) == 0 )
  {
    v15 = -2147024809;
    v22 = 713;
    goto LABEL_34;
  }
  v13 = 0;
  while ( 1 )
  {
    v14 = *((_DWORD *)this + 56) & 0x7FFFFFFF;
    if ( v14 + 1 < 0 )
      break;
    if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)this + 56, v14 + 1, v14) )
      goto LABEL_6;
  }
  v13 = -2003292403;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003292403, 0x3Bu);
LABEL_6:
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x2C5u);
    return v15;
  }
LABEL_7:
  v16 = (CBitmapLock *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         176LL);
  if ( v16 )
    v17 = CBitmapLock::CBitmapLock(v16);
  else
    v17 = 0LL;
  if ( v17 )
  {
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v17 + 8LL))(v17);
    if ( this )
      v18 = (CBitmap *)((char *)this + 32);
    else
      v18 = 0LL;
    v19 = CBitmapLock::HrInit(v17, v18, a2, a3, a4, a5, a6, a7, a8, a10, a11);
    v15 = v19;
    if ( v19 >= 0 )
    {
      if ( (a8 & 2) != 0 )
      {
        v21 = ++*((_DWORD *)this + 42);
        if ( !v21 )
          v21 = 1;
        *((_DWORD *)this + 42) = v21;
      }
      *a9 = (CBitmapLock *)((char *)v17 + 72);
      return v15;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x2DBu);
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x2CFu);
  }
  if ( (a8 & 2) != 0 )
  {
    *((_DWORD *)this + 56) = 0;
  }
  else if ( (a8 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 56);
  }
  if ( v17 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v17 + 16LL))(v17);
  return v15;
}
