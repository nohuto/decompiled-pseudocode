/*
 * XREFs of ??1CBaseAnimation@@UEAA@XZ @ 0x18005CF84
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x180047C94 (--1CAnimation@@UEAA@XZ.c)
 *     ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x1800F9090 (--_GCBaseAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScalar@@MEAA@XZ @ 0x180107AC8 (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CBaseAnimation::~CBaseAnimation(CBaseAnimation *this)
{
  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &IBitmapUnlock::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 6);
  CResource::~CResource(this);
}
