/*
 * XREFs of ??1CAnimationMarshaler@DirectComposition@@UEAA@XZ @ 0x1C002C2A8
 * Callers:
 *     ??_GCAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C002C900 (--_GCAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C00121E0 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CAnimationMarshaler::~CAnimationMarshaler(
        DirectComposition::CAnimationMarshaler *this)
{
  __int64 v2; // rcx
  DirectComposition::CAnimationMarshaler **v3; // rdx
  DirectComposition::CAnimationMarshaler **v4; // rcx
  DirectComposition::CAnimationTimeList *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx

  *(_QWORD *)this = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  *((_QWORD *)this + 2) = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CNotifiedDeletionResource'};
  v2 = *((_QWORD *)this + 19);
  if ( v2 )
    Win32FreePool(v2);
  v3 = (DirectComposition::CAnimationMarshaler **)*((_QWORD *)this + 16);
  v4 = (DirectComposition::CAnimationMarshaler **)*((_QWORD *)this + 17);
  if ( v3[1] != (DirectComposition::CAnimationMarshaler *)((char *)this + 128)
    || *v4 != (DirectComposition::CAnimationMarshaler *)((char *)this + 128) )
  {
    __fastfail(3u);
  }
  *v4 = (DirectComposition::CAnimationMarshaler *)v3;
  v3[1] = (DirectComposition::CAnimationMarshaler *)v4;
  if ( *((_QWORD *)this + 9) )
  {
    do
    {
      v5 = (DirectComposition::CAnimationTimeList *)*((_QWORD *)this + 9);
      v6 = *((_QWORD *)v5 + 2);
      DirectComposition::CAnimationTimeList::Release(v5);
      *((_QWORD *)this + 9) = v6;
    }
    while ( v6 );
  }
  v7 = *((_QWORD *)this + 30);
  if ( v7 )
    Win32FreePool(v7);
  *((_QWORD *)this + 2) = &DirectComposition::CResourceMarshaler::`vftable';
}
