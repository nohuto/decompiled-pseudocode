/*
 * XREFs of ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x180081B80
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800838A0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x180025240 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180034328 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapInterpolationMode@@W43MilBitmapWrapMode@@W43RequiredBoundsCheck@1@@Z @ 0x1800832A4 (-CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV-$CDelayComputedBounds@URealizat.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x18017C0CC (-AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z.c)
 */

void CHwBitmapCache::TryForLastUsedBitmapColorSource(CHwBitmapCache *this, __int64 a2, int a3, ...)
{
  __int64 v3; // r10
  char v7; // al
  int v8; // edx
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // esi
  void (__fastcall ***v13)(_QWORD); // rcx
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  _QWORD *v16; // [rsp+60h] [rbp+28h]
  struct CHwBitmapColorSource **v17; // [rsp+68h] [rbp+30h]
  va_list va1; // [rsp+70h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, _QWORD *);
  v17 = va_arg(va1, struct CHwBitmapColorSource **);
  v3 = *((_QWORD *)this + 63);
  if ( v3 )
  {
    if ( *(_DWORD *)(a2 + 36) == *((_DWORD *)this + 137)
      && *((_BYTE *)this + 524) == *(_BYTE *)(a2 + 12)
      && (unsigned int)(*(_DWORD *)(a2 + 8) - 4) <= 1 == (unsigned int)(*((_DWORD *)this + 130) - 4) <= 1
      && *((_QWORD *)this + 64) == *(_QWORD *)a2
      && *((_DWORD *)this + 132) == *(_DWORD *)(a2 + 16)
      && *((_BYTE *)this + 532) == *(_BYTE *)(a2 + 20)
      && *((_DWORD *)this + 134) == *(_DWORD *)(a2 + 24)
      && *((_DWORD *)this + 138) == *(_DWORD *)(a2 + 40) )
    {
      v7 = *((_BYTE *)this + 556);
      if ( v7 == *(_BYTE *)(a2 + 44) && (v7 != 1 || CColorKey::operator==((CHwBitmapCache *)((char *)this + 560))) )
      {
        LODWORD(v14) = *(_DWORD *)(v3 + 152);
        if ( !DisplayId::IsSpecific((DisplayId *)va) || *(_DWORD *)(a2 + 28) == v8 )
        {
          v9 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 18);
          v14 = 0LL;
          (**v9)(v9, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, (__int64 *)va);
          v10 = v14;
          if ( v14 && (v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 80LL))(v14), v10 = v14, v11 == 3) )
            v12 = 2;
          else
            v12 = 0;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          if ( (unsigned __int8)CHwBitmapColorSource::CheckRequiredRealizationBounds(
                                  *((_QWORD *)this + 63),
                                  a3,
                                  *(_DWORD *)(a2 + 8),
                                  *(_DWORD *)(a2 + 40),
                                  v12) )
          {
            v13 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 63);
            *v16 = v13;
            (**v13)(v13);
            if ( *((_QWORD *)this + 62) )
              CHwBitmapCache::AddDeviceBitmapColorSourcesToReusableList(this, v17);
          }
        }
      }
    }
  }
}
