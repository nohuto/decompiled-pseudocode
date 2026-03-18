/*
 * XREFs of ??1CPrimitiveColor@@MEAA@XZ @ 0x180107CA4
 * Callers:
 *     ??_GCPrimitiveColor@@MEAAPEAXI@Z @ 0x1800F94C0 (--_GCPrimitiveColor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CPrimitiveColor::~CPrimitiveColor(CPrimitiveColor *this)
{
  __int64 v1; // rsi
  __int64 v3; // r14

  v1 = 0LL;
  for ( *(_QWORD *)this = &CPrimitiveColor::`vftable';
        (unsigned int)v1 < *((_DWORD *)this + 16);
        v1 = (unsigned int)(v1 + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 24 * v1 + 8);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *(_QWORD *)(*((_QWORD *)this + 5) + 24 * v1 + 8) = 0LL;
    }
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 5);
  CResource::~CResource(this);
}
