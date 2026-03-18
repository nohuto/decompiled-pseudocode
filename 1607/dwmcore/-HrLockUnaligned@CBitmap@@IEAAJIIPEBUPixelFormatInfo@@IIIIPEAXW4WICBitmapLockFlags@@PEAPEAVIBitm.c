/*
 * XREFs of ?HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180182AF4
 * Callers:
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800A15D0 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x1800212BC (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x1800B2798 (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CBitmapLockUnaligned@@QEAA@XZ @ 0x180183164 (--0CBitmapLockUnaligned@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x180183244 (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
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
  volatile signed __int32 *v14; // r14
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // r9d
  CBitmapLockUnaligned *v18; // rax
  CBitmapLockUnaligned *v19; // rdi
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  unsigned int v24; // [rsp+20h] [rbp-68h]

  if ( (a10 & 2) != 0 )
  {
    v14 = (volatile signed __int32 *)((char *)this + 224);
    v15 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 224));
    v16 = v15;
    if ( v15 < 0 )
    {
      v24 = 788;
LABEL_4:
      v17 = v15;
LABEL_27:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v24);
      return v16;
    }
  }
  else
  {
    if ( (a10 & 1) == 0 )
    {
      v16 = -2147024809;
      v24 = 796;
      v17 = -2147024809;
      goto LABEL_27;
    }
    v14 = (volatile signed __int32 *)((char *)this + 224);
    v15 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 224));
    v16 = v15;
    if ( v15 < 0 )
    {
      v24 = 792;
      goto LABEL_4;
    }
  }
  v18 = (CBitmapLockUnaligned *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 16LL))(
                                  WPF::g_pProcessHeap,
                                  200LL);
  if ( v18 )
    v19 = CBitmapLockUnaligned::CBitmapLockUnaligned(v18);
  else
    v19 = 0LL;
  if ( !v19 )
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x322u);
LABEL_20:
    if ( (a10 & 2) != 0 )
    {
      *v14 = 0;
    }
    else if ( (a10 & 1) != 0 )
    {
      _InterlockedDecrement(v14);
    }
    if ( v19 )
      (*(void (__fastcall **)(CBitmapLockUnaligned *))(*(_QWORD *)v19 + 16LL))(v19);
    return v16;
  }
  (*(void (__fastcall **)(CBitmapLockUnaligned *))(*(_QWORD *)v19 + 8LL))(v19);
  v20 = CBitmapLockUnaligned::HrInit(v19, this, a2, a3, a4, a7, a8, a9, a10, a5, a6);
  v16 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x32Eu);
    goto LABEL_20;
  }
  if ( (a10 & 2) != 0 )
  {
    v21 = (*((_DWORD *)this + 42))++ == -1;
    v22 = *((_DWORD *)this + 42);
    if ( v21 )
      v22 = 1;
    *((_DWORD *)this + 42) = v22;
  }
  *a11 = (CBitmapLockUnaligned *)((char *)v19 + 72);
  return v16;
}
