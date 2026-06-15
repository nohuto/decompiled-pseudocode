/*
 * XREFs of ?IsUsingResource@CAudioSession@@UEAAH_K@Z @ 0x18005CD40
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioSession::IsUsingResource(CAudioSession *this, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  LPCRITICAL_SECTION v11; // [rsp+20h] [rbp-10h] BYREF
  char v12; // [rsp+28h] [rbp-8h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  v4 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v4);
      if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, a2) )
        break;
      if ( (unsigned __int64)++v4 >= *((_QWORD *)this + 13) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( v12 )
      ATL::CCritSecLock::Unlock(&v11);
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
    v6 = 0LL;
    if ( *((_QWORD *)this + 22) )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v6);
        if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 56LL))(v7, a2) )
          break;
        if ( (unsigned __int64)++v6 >= *((_QWORD *)this + 22) )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( v12 )
        ATL::CCritSecLock::Unlock(&v11);
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)this + 5);
      v8 = 0LL;
      if ( !*((_QWORD *)this + 31) )
      {
LABEL_14:
        if ( v12 )
          ATL::CCritSecLock::Unlock(&v11);
        return 0LL;
      }
      while ( 1 )
      {
        v9 = *(_QWORD *)(*((_QWORD *)this + 30) + 8 * v8);
        if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 56LL))(v9, a2) )
          break;
        if ( (unsigned __int64)++v8 >= *((_QWORD *)this + 31) )
          goto LABEL_14;
      }
    }
  }
  if ( v12 )
    ATL::CCritSecLock::Unlock(&v11);
  return 1LL;
}
