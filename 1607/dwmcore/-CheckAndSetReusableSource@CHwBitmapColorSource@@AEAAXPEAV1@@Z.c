/*
 * XREFs of ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x18017E274
 * Callers:
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180082AC0 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800838A0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     ?IsValid@CHwBitmapColorSource@@QEBA_NXZ @ 0x180020C20 (-IsValid@CHwBitmapColorSource@@QEBA_NXZ.c)
 *     ?GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x1800824B4 (-GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwBitmapColorSource::CheckAndSetReusableSource(
        CHwBitmapColorSource *this,
        struct CHwBitmapColorSource *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // r9d
  unsigned int v10; // r11d
  unsigned int v11; // r10d
  struct tagRECT *v12; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+20h] BYREF

  if ( CHwBitmapColorSource::IsValid(a2)
    && (*((_BYTE *)this + 248) & 0x20) != 0
    && (*(_BYTE *)(v4 + 248) & 0x20) != 0
    && *((_DWORD *)this + 36) == *(_DWORD *)(v4 + 144)
    && *((_DWORD *)this + 37) == *(_DWORD *)(v4 + 148) )
  {
    v5 = *((_DWORD *)this + 49);
    v6 = *((_DWORD *)this + 47);
    if ( v5 > v6 )
    {
      v7 = *((_DWORD *)this + 50);
      v8 = *((_DWORD *)this + 48);
      if ( v7 > v8 )
      {
        v9 = *((_DWORD *)a2 + 49);
        v10 = *((_DWORD *)a2 + 47);
        if ( v9 > v10 )
        {
          v11 = *((_DWORD *)a2 + 50);
          if ( v11 > *((_DWORD *)a2 + 48) && v5 > v10 && v9 > v6 && v7 > *((_DWORD *)a2 + 48) && v11 > v8 )
          {
            if ( !*((_QWORD *)a2 + 26)
              || *((_DWORD *)this + 42) != *((_DWORD *)a2 + 42)
              && (v13 = 0, v14 = -1, CHwBitmapColorSource::GetDirtyRects(a2, (const struct tagRECT **)&v12, &v13, &v14))
              && (v13 != 1
               || v12->left > 0
               || v12->top > 0
               || v12->right < *((_DWORD *)this + 34)
               || v12->bottom < *((_DWORD *)this + 35)) )
            {
              *((_QWORD *)a2 + 33) = *((_QWORD *)this + 33);
              *((_QWORD *)this + 33) = a2;
              (**(void (__fastcall ***)(struct CHwBitmapColorSource *))a2)(a2);
            }
          }
        }
      }
    }
  }
}
