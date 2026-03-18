/*
 * XREFs of ??1CAnimationMarshaler@DirectComposition@@UEAA@XZ @ 0x1C004D494
 * Callers:
 *     ??_GCAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C004DCAC (--_GCAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C004DCEC (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CAnimationMarshaler::~CAnimationMarshaler(
        DirectComposition::CAnimationMarshaler *this)
{
  DirectComposition::CAnimationMarshaler **v2; // rdx
  DirectComposition::CAnimationMarshaler **v3; // rcx
  DirectComposition::CAnimationTimeList *v4; // rcx
  __int64 v5; // rbx

  *(_QWORD *)this = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  *((_QWORD *)this + 2) = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CNotifiedDeletionResource'};
  if ( *((_QWORD *)this + 19) )
    Win32FreePool();
  v2 = (DirectComposition::CAnimationMarshaler **)*((_QWORD *)this + 16);
  v3 = (DirectComposition::CAnimationMarshaler **)*((_QWORD *)this + 17);
  if ( v2[1] != (DirectComposition::CAnimationMarshaler *)((char *)this + 128)
    || *v3 != (DirectComposition::CAnimationMarshaler *)((char *)this + 128) )
  {
    __fastfail(3u);
  }
  *v3 = (DirectComposition::CAnimationMarshaler *)v2;
  v2[1] = (DirectComposition::CAnimationMarshaler *)v3;
  if ( *((_QWORD *)this + 9) )
  {
    do
    {
      v4 = (DirectComposition::CAnimationTimeList *)*((_QWORD *)this + 9);
      v5 = *((_QWORD *)v4 + 2);
      DirectComposition::CAnimationTimeList::Release(v4);
      *((_QWORD *)this + 9) = v5;
    }
    while ( v5 );
  }
  if ( *((_QWORD *)this + 30) )
    Win32FreePool();
}
