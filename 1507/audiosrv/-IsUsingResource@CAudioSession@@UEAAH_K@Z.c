/*
 * XREFs of ?IsUsingResource@CAudioSession@@UEAAH_K@Z @ 0x180079980
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioSession::IsUsingResource(CAudioSession *this, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // r14d
  LPCRITICAL_SECTION v7; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+28h] [rbp-20h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v7, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  v4 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    v5 = 1;
    while ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 12) + 8 * v4) + 56LL))(
               *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v4),
               a2) )
    {
      if ( (unsigned __int64)++v4 >= *((_QWORD *)this + 13) )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v5 = 0;
  }
  if ( v8 )
    ATL::CCritSecLock::Unlock(&v7);
  return v5;
}
