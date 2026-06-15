/*
 * XREFs of ??1CAudioSessionStore@@AEAA@XZ @ 0x180036CE4
 * Callers:
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180036C70 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180036A90 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 */

void __fastcall CAudioSessionStore::~CAudioSessionStore(CAudioSessionStore *this)
{
  _QWORD *v2; // rcx

  *(_QWORD *)this = &CAudioSessionStore::`vftable';
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 76LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, this);
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
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        77LL,
        &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
        this,
        *((_QWORD *)this + 4));
    }
    RegCloseKey(*((HKEY *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
}
