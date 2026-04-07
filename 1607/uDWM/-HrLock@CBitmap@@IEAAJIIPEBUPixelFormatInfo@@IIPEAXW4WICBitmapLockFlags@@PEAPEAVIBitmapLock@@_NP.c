/*
 * XREFs of ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180043D70
 * Callers:
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180044370 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ??0CBitmapLock@@QEAA@XZ @ 0x180043240 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x1800432D0 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v13; // edi
  int v15; // esi
  signed __int32 v16; // eax
  unsigned int v17; // edi
  CBitmapLock *v18; // rax
  CBitmapLock *v19; // rsi
  struct IBitmapUnlock *v20; // rdx
  int v21; // eax
  bool v23; // zf
  int v24; // eax
  unsigned int v25; // [rsp+20h] [rbp-68h]

  v13 = a2;
  if ( (a8 & 2) != 0 )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 56, 0x80000000, 0) )
      goto LABEL_8;
    v17 = -2003292403;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292403, 0x5Au);
    v25 = 705;
LABEL_35:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v25);
    return v17;
  }
  if ( (a8 & 1) == 0 )
  {
    v17 = -2147024809;
    v25 = 713;
    goto LABEL_35;
  }
  v15 = 0;
  while ( 1 )
  {
    v16 = *((_DWORD *)this + 56) & 0x7FFFFFFF;
    if ( v16 + 1 < 0 )
      break;
    if ( v16 == _InterlockedCompareExchange((volatile signed __int32 *)this + 56, v16 + 1, v16) )
      goto LABEL_6;
  }
  v15 = -2003292403;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292403, 0x3Bu);
LABEL_6:
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x2C5u);
    return v17;
  }
  v13 = a2;
LABEL_8:
  v18 = (CBitmapLock *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         176LL);
  if ( v18 )
    v19 = CBitmapLock::CBitmapLock(v18);
  else
    v19 = 0LL;
  if ( v19 )
  {
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v19 + 8LL))(v19);
    if ( this )
      v20 = (CBitmap *)((char *)this + 32);
    else
      v20 = 0LL;
    v21 = CBitmapLock::HrInit(v19, v20, v13, a3, a4, a5, a6, a7, a8, a10, a11);
    v17 = v21;
    if ( v21 >= 0 )
    {
      if ( (a8 & 2) != 0 )
      {
        v23 = (*((_DWORD *)this + 42))++ == -1;
        v24 = *((_DWORD *)this + 42);
        if ( v23 )
          v24 = 1;
        *((_DWORD *)this + 42) = v24;
      }
      *a9 = (CBitmapLock *)((char *)v19 + 72);
      return v17;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x2DBu);
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2CFu);
  }
  if ( (a8 & 2) != 0 )
  {
    *((_DWORD *)this + 56) = 0;
  }
  else if ( (a8 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 56);
  }
  if ( v19 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v19 + 16LL))(v19);
  return v17;
}
