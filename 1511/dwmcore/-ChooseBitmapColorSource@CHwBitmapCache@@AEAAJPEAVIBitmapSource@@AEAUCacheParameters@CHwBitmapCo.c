/*
 * XREFs of ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x18008B380
 * Callers:
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x18008C2E0 (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z @ 0x18008BB0C (--_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z.c)
 *     ?GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x18008BB48 (-GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColo.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18008BC0C (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameters@1@_NPEAPEAV1@@Z @ 0x1800B0760 (-Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameter.c)
 *     ?AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x18014B7F4 (-AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z.c)
 */

__int64 __fastcall CHwBitmapCache::ChooseBitmapColorSource(
        CHwBitmapCache *this,
        struct IBitmapSource *a2,
        struct CHwBitmapColorSource::CacheParameters *a3,
        const struct CHwBitmapColorSource::CacheContextParameters *a4,
        struct CHwBitmapColorSource **a5,
        struct CHwBitmapColorSource **a6)
{
  unsigned int v6; // ebp
  struct IBitmapSource *v11; // rax
  __int64 v12; // rdx
  CMILRefCountBase *v13; // rcx
  bool v15; // cl
  int v16; // eax
  struct CHwBitmapColorSource *v17; // rdi
  CHwBitmapCache::FormatCacheEntry *v18; // r15

  v6 = 0;
  *a6 = 0LL;
  v11 = (struct IBitmapSource *)*((_QWORD *)this + 19);
  *a5 = 0LL;
  if ( v11 != a2 )
  {
    if ( v11 )
    {
      v18 = (CHwBitmapCache *)((char *)this + 160);
      CHwBitmapCache::FormatCacheEntry::`scalar deleting destructor'((CHwBitmapCache *)((char *)this + 160), 0);
      if ( v18 )
        CHwBitmapCache::FormatCacheEntry::FormatCacheEntry(v18);
    }
    *((_QWORD *)this + 19) = a2;
  }
  CHwBitmapCache::FormatCacheEntry::GetSetBitmapColorSource((CHwBitmapCache *)((char *)this + 160), a3, a5, a6);
  if ( *((_QWORD *)this + 62) )
    CHwBitmapCache::AddDeviceBitmapColorSourcesToReusableList(this, a6);
  v12 = 1LL;
  if ( !*a5 )
  {
    v15 = 0;
    if ( *a6 )
      v15 = (*((_BYTE *)*a6 + 248) & 0x20) != 0;
    v16 = CHwBitmapColorSource::Create(
            *((struct CD3DDeviceLevel1 **)this + 17),
            *((struct IMILResourceCache **)this + 18),
            a3,
            v15,
            a5);
    v6 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x3AEu);
      return v6;
    }
    CHwBitmapCache::FormatCacheEntry::GetSetBitmapColorSource((CHwBitmapCache *)((char *)this + 160), a3, a5, 0LL);
  }
  v13 = (CMILRefCountBase *)*((_QWORD *)this + 63);
  if ( v13 == *a5 )
  {
    *((_DWORD *)this + 138) = *((_DWORD *)a4 + 10);
  }
  else
  {
    if ( v13 )
      CMILRefCountBase::Release(v13);
    if ( *((_BYTE *)a4 + 12) && (unsigned int)(*((_DWORD *)a4 + 2) - 4) > 1 )
    {
      *((_QWORD *)this + 63) = 0LL;
    }
    else
    {
      v17 = *a5;
      *((_QWORD *)this + 63) = *a5;
      *((_OWORD *)this + 32) = *(_OWORD *)a4;
      *((_OWORD *)this + 33) = *((_OWORD *)a4 + 1);
      *((_OWORD *)this + 34) = *((_OWORD *)a4 + 2);
      *((_OWORD *)this + 35) = *((_OWORD *)a4 + 3);
      *((_OWORD *)this + 36) = *((_OWORD *)a4 + 4);
      *((_QWORD *)this + 74) = *((_QWORD *)a4 + 10);
      (**(void (__fastcall ***)(struct CHwBitmapColorSource *, __int64))v17)(v17, v12);
    }
  }
  return v6;
}
