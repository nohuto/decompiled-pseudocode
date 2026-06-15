/*
 * XREFs of ??1CAudioSessionStore@@AEAA@XZ @ 0x180066E4C
 * Callers:
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x18006D9F0 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x1800677A0 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 */

void __fastcall CAudioSessionStore::~CAudioSessionStore(CAudioSessionStore *this)
{
  _QWORD *v2; // rcx
  LPCRITICAL_SECTION v3; // [rsp+30h] [rbp-18h] BYREF
  char v4; // [rsp+38h] [rbp-10h]

  *(_QWORD *)this = &CAudioSessionStore::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Au,
      (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
      (__int64)this);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v3, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  CAudioSessionStore::Commit(this);
  while ( *((_QWORD *)this + 3) )
  {
    PropVariantClear((PROPVARIANT *)(*((_QWORD *)this + 3) + 24LL));
    v2 = (_QWORD *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v2[6];
    operator delete(v2, 0LL);
  }
  operator delete(*((void **)this + 2));
  if ( *((_QWORD *)this + 4) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
        this,
        *((_QWORD *)this + 4));
    }
    RegCloseKey(*((HKEY *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( v4 )
    ATL::CCritSecLock::Unlock(&v3);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
}
