/*
 * XREFs of ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180018A80
 * Callers:
 *     <none>
 * Callees:
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x180018FF0 (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002D40C (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800A1878 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800A2308 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x1800A239C (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::LockForRead(__int64 a1, __int128 *a2, _QWORD *a3)
{
  unsigned int PixelFormatSize; // r12d
  int v7; // eax
  int v8; // r12d
  int v9; // edx
  __int64 v10; // r12
  int v11; // eax
  CBitmapLock *v12; // rax
  CBitmapLock *v13; // rdi
  struct IBitmapUnlock *v14; // r14
  int v15; // eax
  unsigned int v16; // esi
  char *v17; // rax
  __int128 v19; // [rsp+60h] [rbp-38h] BYREF
  __int64 v20; // [rsp+70h] [rbp-28h]

  v19 = *a2;
  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds(a1 - 80, &v19)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD6u);
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 28));
    v7 = *((_DWORD *)a2 + 1) * *(_DWORD *)(a1 + 24);
    v8 = *(_DWORD *)a2 * (PixelFormatSize >> 3);
    LODWORD(v19) = v9;
    v10 = (unsigned int)(v7 + v8);
    v11 = *(_DWORD *)(a1 + 32);
    v20 = 0LL;
    DWORD1(v19) = v11;
    DWORD2(v19) = *(_DWORD *)(a1 + 36);
    v12 = (CBitmapLock *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           176LL);
    if ( v12 )
      v13 = CBitmapLock::CBitmapLock(v12);
    else
      v13 = 0LL;
    if ( v13 )
    {
      (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v13 + 8LL))(v13);
      if ( a1 == 96 )
        v14 = 0LL;
      else
        v14 = (struct IBitmapUnlock *)(a1 + 8);
      (*(void (__fastcall **)(struct IBitmapUnlock *))(*(_QWORD *)v14 + 8LL))(v14);
      v15 = CBitmapLock::HrInit(
              v13,
              v14,
              *((_DWORD *)a2 + 2) - *(_DWORD *)a2,
              *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1),
              (const struct PixelFormatInfo *)&v19,
              *(_DWORD *)(a1 + 24),
              *(_DWORD *)(a1 + 48) - (int)v10,
              (void *)(v10 + *(_QWORD *)(a1 + 40)),
              WICBitmapLockRead,
              0,
              (struct IUnknown *)v14);
      v16 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xFBu);
      }
      else
      {
        v17 = (char *)v13 + 72;
        v13 = 0LL;
        *a3 = v17;
      }
      if ( v13 )
        (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    else
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xE6u);
    }
  }
  return v16;
}
