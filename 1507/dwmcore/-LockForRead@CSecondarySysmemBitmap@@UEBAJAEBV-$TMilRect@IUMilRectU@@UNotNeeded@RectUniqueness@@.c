/*
 * XREFs of ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180153050
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180019BBC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180051BD0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800524C8 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18005255C (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x1801516DC (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::LockForRead(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int PixelFormatSize; // r12d
  int v7; // eax
  int v8; // r12d
  int v9; // edx
  __int64 v10; // r12
  int v11; // eax
  CBitmapLock *v12; // rax
  CBitmapLock *v13; // rdi
  unsigned int v14; // esi
  struct IBitmapUnlock *v15; // r14
  int v16; // eax
  char *v17; // rax
  __int128 v19; // [rsp+60h] [rbp-38h] BYREF
  __int64 v20; // [rsp+70h] [rbp-28h]

  v19 = *(_OWORD *)a2;
  if ( !CSecondaryBitmap::RectInBounds((CSecondaryBitmap *)(a1 - 80), (unsigned int *)&v19)
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v14 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD6u);
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 28));
    v7 = a2[1] * *(_DWORD *)(a1 + 24);
    v8 = *a2 * (PixelFormatSize >> 3);
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
        v15 = 0LL;
      else
        v15 = (struct IBitmapUnlock *)(a1 + 8);
      (*(void (__fastcall **)(struct IBitmapUnlock *))(*(_QWORD *)v15 + 8LL))(v15);
      v16 = CBitmapLock::HrInit(
              v13,
              v15,
              (unsigned int)(a2[2] - *a2),
              (unsigned int)(a2[3] - a2[1]),
              (const struct PixelFormatInfo *)&v19,
              *(_DWORD *)(a1 + 24),
              *(_DWORD *)(a1 + 48) - (int)v10,
              (void *)(v10 + *(_QWORD *)(a1 + 40)),
              WICBitmapLockRead,
              0,
              (struct IUnknown *)v15);
      v14 = v16;
      if ( v16 >= 0 )
      {
        v17 = (char *)v13 + 72;
        v13 = 0LL;
        *a3 = v17;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xFBu);
      }
      if ( v13 )
        (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    else
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xE6u);
    }
  }
  return v14;
}
