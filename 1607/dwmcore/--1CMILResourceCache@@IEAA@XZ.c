/*
 * XREFs of ??1CMILResourceCache@@IEAA@XZ @ 0x180083394
 * Callers:
 *     ??1CMILBrushGradient@@MEAA@XZ @ 0x180017FF8 (--1CMILBrushGradient@@MEAA@XZ.c)
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x180084528 (--1CMILBrushBitmap@@MEAA@XZ.c)
 *     ??1CBitmap@@UEAA@XZ @ 0x180085264 (--1CBitmap@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMILResourceCache::~CMILResourceCache(CMILResourceCache *this, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 v5; // rcx

  v3 = *((_DWORD *)this + 8) == 0;
  *(_QWORD *)this = &CMILResourceCache::`vftable';
  if ( !v3 )
  {
    do
    {
      a2 = (unsigned int)--*((_DWORD *)this + 8);
      v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * a2);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    }
    while ( *((_DWORD *)this + 8) );
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 8, a2, a3);
}
