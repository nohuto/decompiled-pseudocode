/*
 * XREFs of ??1CBaseAnimation@@UEAA@XZ @ 0x1800B04AC
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x18003A788 (--1CAnimation@@UEAA@XZ.c)
 *     ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x18012B680 (--_GCBaseAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScalar@@MEAA@XZ @ 0x18014168C (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CBaseAnimation::~CBaseAnimation(CBaseAnimation *this)
{
  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 120);
  CResource::~CResource(this);
}
