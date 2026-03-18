/*
 * XREFs of ?HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180144354
 * Callers:
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180083910 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x18005EB64 (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x18005EB94 (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??0CBitmapLockUnaligned@@QEAA@XZ @ 0x1801456CC (--0CBitmapLockUnaligned@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x1801457C8 (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 */

__int64 __fastcall CBitmap::HrLockUnaligned(
        CBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int8 *a9,
        enum WICBitmapLockFlags a10,
        struct IBitmapLock **a11)
{
  volatile signed __int32 *v13; // r14
  int v14; // eax
  unsigned int v15; // edi
  int v16; // r9d
  CBitmapLockUnaligned *v17; // rax
  CBitmapLockUnaligned *v18; // rsi
  int v19; // eax
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-78h]

  if ( (a10 & 2) != 0 )
  {
    v13 = (volatile signed __int32 *)((char *)this + 224);
    v14 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 224));
    v15 = v14;
    if ( v14 < 0 )
    {
      v22 = 788;
LABEL_4:
      v16 = v14;
LABEL_27:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v22);
      return v15;
    }
  }
  else
  {
    if ( (a10 & 1) == 0 )
    {
      v15 = -2147024809;
      v22 = 796;
      v16 = -2147024809;
      goto LABEL_27;
    }
    v13 = (volatile signed __int32 *)((char *)this + 224);
    v14 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 224));
    v15 = v14;
    if ( v14 < 0 )
    {
      v22 = 792;
      goto LABEL_4;
    }
  }
  v17 = (CBitmapLockUnaligned *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 16LL))(
                                  WPF::g_pProcessHeap,
                                  200LL);
  if ( v17 )
    v18 = CBitmapLockUnaligned::CBitmapLockUnaligned(v17);
  else
    v18 = 0LL;
  if ( !v18 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x322u);
LABEL_15:
    if ( (a10 & 2) != 0 )
    {
      *v13 = 0;
    }
    else if ( (a10 & 1) != 0 )
    {
      _InterlockedDecrement(v13);
    }
    if ( v18 )
      (*(void (__fastcall **)(CBitmapLockUnaligned *))(*(_QWORD *)v18 + 16LL))(v18);
    return v15;
  }
  (*(void (__fastcall **)(CBitmapLockUnaligned *))(*(_QWORD *)v18 + 8LL))(v18);
  v19 = CBitmapLockUnaligned::HrInit(v18, this, a2, a3, a4, a7, a8, a9, a10, a5, a6);
  v15 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x32Eu);
    goto LABEL_15;
  }
  if ( (a10 & 2) != 0 )
  {
    v20 = ++*((_DWORD *)this + 42);
    if ( !v20 )
      v20 = 1;
    *((_DWORD *)this + 42) = v20;
  }
  *a11 = (CBitmapLockUnaligned *)((char *)v18 + 72);
  return v15;
}
