/*
 * XREFs of ?GetCount@CAudioSessionStore@@UEAAJPEAK@Z @ 0x18006B700
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CAudioSessionStore::GetCount(CAudioSessionStore *this, unsigned int *a2)
{
  unsigned int v4; // ebx
  __int64 i; // rax
  LPCRITICAL_SECTION v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v4 = 0;
  if ( !a2 )
    return 2147500035LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v7, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  for ( i = *((_QWORD *)this + 3); i; i = *(_QWORD *)(i + 48) )
  {
    if ( *(_WORD *)(i + 24) )
      ++v4;
  }
  if ( v8 )
    ATL::CCritSecLock::Unlock(&v7);
  *a2 = v4;
  return 0LL;
}
