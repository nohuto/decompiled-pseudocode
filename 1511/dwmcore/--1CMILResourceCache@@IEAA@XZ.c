/*
 * XREFs of ??1CMILResourceCache@@IEAA@XZ @ 0x18008A754
 * Callers:
 *     ??1CMILBrushGradient@@MEAA@XZ @ 0x180014CB8 (--1CMILBrushGradient@@MEAA@XZ.c)
 *     ??1CBitmap@@UEAA@XZ @ 0x180089124 (--1CBitmap@@UEAA@XZ.c)
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x180089B08 (--1CMILBrushBitmap@@MEAA@XZ.c)
 * Callees:
 *     ?CacheRelease@CMILCacheableResource@@UEAAXXZ @ 0x180014EF0 (-CacheRelease@CMILCacheableResource@@UEAAXXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CMILResourceCache::~CMILResourceCache(CMILResourceCache *this)
{
  bool v1; // zf
  CMILCacheableResource *v3; // rdi
  void (__fastcall *v4)(CMILCacheableResource *); // rsi

  v1 = *((_DWORD *)this + 8) == 0;
  *(_QWORD *)this = &CMILResourceCache::`vftable';
  if ( !v1 )
  {
    do
    {
      v3 = *(CMILCacheableResource **)(*((_QWORD *)this + 1) + 8LL * (unsigned int)--*((_DWORD *)this + 8));
      if ( v3 )
      {
        v4 = *(void (__fastcall **)(CMILCacheableResource *))(*(_QWORD *)v3 + 24LL);
        if ( v4 == CMILCacheableResource::CacheRelease )
          CMILCacheableResource::CacheRelease(v3);
        else
          v4(v3);
      }
    }
    while ( *((_DWORD *)this + 8) );
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 1);
}
