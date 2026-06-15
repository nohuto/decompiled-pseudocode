/*
 * XREFs of ??1CAudioSessionStore@@AEAA@XZ @ 0x180035C34
 * Callers:
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180035BC0 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180035A50 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 */

void __fastcall CAudioSessionStore::~CAudioSessionStore(CAudioSessionStore *this)
{
  _QWORD *v2; // rcx

  *(_QWORD *)this = &CAudioSessionStore::`vftable';
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      77LL,
      &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      this);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  CAudioSessionStore::Commit(this);
  while ( *((_QWORD *)this + 3) )
  {
    PropVariantClear((PROPVARIANT *)(*((_QWORD *)this + 3) + 24LL));
    v2 = (_QWORD *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v2[6];
    operator delete(v2);
  }
  operator delete(*((void **)this + 2));
  if ( *((_QWORD *)this + 4) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        78LL,
        &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        this,
        *((_QWORD *)this + 4));
    }
    RegCloseKey(*((HKEY *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
}
