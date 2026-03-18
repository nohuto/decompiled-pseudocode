/*
 * XREFs of ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x180018670
 * Callers:
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x180018318 (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 * Callees:
 *     ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x180018BE4 (-GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorS.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z @ 0x180051EE8 (--_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z.c)
 *     ?GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x180051F24 (-GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColo.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x180051FE0 (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ?Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameters@1@_NPEAPEAV1@@Z @ 0x18005EA58 (-Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameter.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x18013B680 (-AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z.c)
 */

__int64 __fastcall CHwBitmapCache::ChooseBitmapColorSource(
        CHwBitmapCache *this,
        struct IBitmapSource *a2,
        struct CHwBitmapColorSource::CacheParameters *a3,
        const struct CHwBitmapColorSource::CacheContextParameters *a4,
        struct CHwBitmapColorSource **a5,
        struct CHwBitmapColorSource **a6)
{
  struct IBitmapSource *v10; // rax
  _DWORD *v11; // r14
  unsigned int v12; // r12d
  CMILRefCountBase *v13; // rcx
  bool v15; // cl
  int v16; // eax
  struct CHwBitmapColorSource *v17; // rdi
  CHwBitmapCache::FormatCacheEntry *v18; // rbx
  CHwBitmapCache::FormatCacheEntry *v19; // rax
  __int64 v20; // rax

  *a6 = 0LL;
  v10 = (struct IBitmapSource *)*((_QWORD *)this + 19);
  *a5 = 0LL;
  if ( v10 != a2 )
  {
    if ( v10 )
    {
      v18 = (CHwBitmapCache *)((char *)this + 160);
      CHwBitmapCache::FormatCacheEntry::`scalar deleting destructor'((CHwBitmapCache *)((char *)this + 160), 0);
      if ( v18 )
        CHwBitmapCache::FormatCacheEntry::FormatCacheEntry(v18);
    }
    *((_QWORD *)this + 19) = a2;
  }
  v11 = (_DWORD *)((char *)this + 160);
  if ( *((_DWORD *)this + 40) == *(_DWORD *)a3 )
    goto LABEL_3;
  if ( !*v11 )
  {
    *v11 = *(_DWORD *)a3;
LABEL_3:
    CHwBitmapCache::CacheEntryList::GetSetBitmapColorSource((CHwBitmapCache *)((char *)this + 176), a3, a5, a6);
    goto LABEL_4;
  }
  if ( *((_QWORD *)this + 21)
    || ((v19 = (CHwBitmapCache::FormatCacheEntry *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                     WPF::g_pProcessHeap,
                                                     336LL)) == 0LL
      ? (v20 = 0LL)
      : (v20 = CHwBitmapCache::FormatCacheEntry::FormatCacheEntry(v19)),
        (*((_QWORD *)this + 21) = v20) != 0LL) )
  {
    CHwBitmapCache::FormatCacheEntry::GetSetBitmapColorSource(
      *((CHwBitmapCache::FormatCacheEntry **)this + 21),
      a3,
      a5,
      a6);
  }
LABEL_4:
  if ( *((_QWORD *)this + 62) )
    CHwBitmapCache::AddDeviceBitmapColorSourcesToReusableList(this, a6);
  if ( *a5 )
  {
    v12 = 0;
  }
  else
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
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x3AEu);
      return v12;
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
      (**(void (__fastcall ***)(struct CHwBitmapColorSource *))v17)(v17);
    }
  }
  return v12;
}
