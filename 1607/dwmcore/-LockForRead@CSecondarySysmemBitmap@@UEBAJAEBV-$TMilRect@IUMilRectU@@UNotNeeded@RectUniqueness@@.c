/*
 * XREFs of ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18001F4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x180011F60 (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180081744 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18009E488 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18009E518 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::LockForRead(__int64 a1, __int128 *a2, _QWORD *a3)
{
  CBitmapLock *v6; // rbx
  unsigned int PixelFormatSize; // r12d
  int v8; // eax
  int v9; // r12d
  int v10; // edx
  __int64 v11; // r12
  int v12; // eax
  CBitmapLock *v13; // rax
  struct IBitmapUnlock *v14; // r14
  int v15; // eax
  unsigned int v16; // edi
  __int128 v18; // [rsp+60h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp-28h]

  v18 = *a2;
  v6 = 0LL;
  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds((CSecondaryBitmap *)(a1 - 80))
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD6u);
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 28));
    v8 = *((_DWORD *)a2 + 1) * *(_DWORD *)(a1 + 24);
    v9 = *(_DWORD *)a2 * (PixelFormatSize >> 3);
    LODWORD(v18) = v10;
    v11 = (unsigned int)(v8 + v9);
    v12 = *(_DWORD *)(a1 + 32);
    v19 = 0LL;
    DWORD1(v18) = v12;
    DWORD2(v18) = *(_DWORD *)(a1 + 36);
    v13 = (CBitmapLock *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           176LL);
    if ( v13 )
      v6 = CBitmapLock::CBitmapLock(v13);
    if ( !v6 )
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xE6u);
      return v16;
    }
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v6 + 8LL))(v6);
    if ( a1 == 96 )
      v14 = 0LL;
    else
      v14 = (struct IBitmapUnlock *)(a1 + 8);
    (*(void (__fastcall **)(struct IBitmapUnlock *))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = CBitmapLock::HrInit(
            v6,
            v14,
            *((_DWORD *)a2 + 2) - *(_DWORD *)a2,
            *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1),
            (const struct PixelFormatInfo *)&v18,
            *(_DWORD *)(a1 + 24),
            *(_DWORD *)(a1 + 48) - (int)v11,
            (void *)(v11 + *(_QWORD *)(a1 + 40)),
            WICBitmapLockRead,
            0,
            (struct IUnknown *)v14);
    v16 = v15;
    if ( v15 >= 0 )
    {
      *a3 = (char *)v6 + 72;
      return v16;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xFBu);
  }
  if ( v6 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v6 + 16LL))(v6);
  return v16;
}
