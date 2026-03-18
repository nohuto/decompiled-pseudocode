/*
 * XREFs of ??1CBaseAnimation@@UEAA@XZ @ 0x1800AB870
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x180084F44 (--1CAnimation@@UEAA@XZ.c)
 *     ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x1801131A0 (--_GCBaseAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScalar@@MEAA@XZ @ 0x180124D64 (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CBaseAnimation::~CBaseAnimation(CBaseAnimation *this)
{
  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &IBitmapUnlock::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 6);
  CResource::~CResource(this);
}
