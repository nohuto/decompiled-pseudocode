/*
 * XREFs of ?IsUsingResource@CAudioSession@@UEAAH_K@Z @ 0x180074C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioSession::IsUsingResource(CAudioSession *this, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  LPCRITICAL_SECTION v8; // [rsp+20h] [rbp-10h] BYREF
  char v9; // [rsp+28h] [rbp-8h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  v4 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    while ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 12) + 8 * v4) + 56LL))(
               *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v4),
               a2) )
    {
      if ( (unsigned __int64)++v4 >= *((_QWORD *)this + 13) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( v9 )
      ATL::CCritSecLock::Unlock(&v8);
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
    v5 = 0LL;
    if ( *((_QWORD *)this + 22) )
    {
      while ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 21) + 8 * v5) + 56LL))(
                 *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v5),
                 a2) )
      {
        if ( (unsigned __int64)++v5 >= *((_QWORD *)this + 22) )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( v9 )
        ATL::CCritSecLock::Unlock(&v8);
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, (struct _RTL_CRITICAL_SECTION *)this + 5);
      v6 = 0LL;
      if ( !*((_QWORD *)this + 31) )
      {
LABEL_14:
        if ( v9 )
          ATL::CCritSecLock::Unlock(&v8);
        return 0LL;
      }
      while ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 30) + 8 * v6) + 56LL))(
                 *(_QWORD *)(*((_QWORD *)this + 30) + 8 * v6),
                 a2) )
      {
        if ( (unsigned __int64)++v6 >= *((_QWORD *)this + 31) )
          goto LABEL_14;
      }
    }
  }
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
  return 1LL;
}
