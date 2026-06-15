/*
 * XREFs of ?GetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18006BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioSessionStore::GetValue(
        CAudioSessionStore *this,
        const struct _tagpropertykey *a2,
        PROPVARIANT *a3)
{
  HRESULT v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // rax
  LPCRITICAL_SECTION v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v6 = 0;
  if ( !a3 )
    return 2147500035LL;
  *(_OWORD *)a3 = 0uLL;
  a3[2] = 0LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v8 + 16) == a2->pid )
      {
        v9 = *(_QWORD *)v8 - *(_QWORD *)&a2->fmtid.Data1;
        if ( *(_QWORD *)v8 == *(_QWORD *)&a2->fmtid.Data1 )
          v9 = *(_QWORD *)(v8 + 8) - *(_QWORD *)a2->fmtid.Data4;
        if ( !v9 )
          break;
      }
      v8 = *(_QWORD *)(v8 + 48);
      if ( !v8 )
        goto LABEL_12;
    }
    v6 = PropVariantCopy(a3, (const PROPVARIANT *)(v8 + 24));
    if ( v6 >= 0 )
      v6 = 0;
  }
LABEL_12:
  if ( v11 )
    ATL::CCritSecLock::Unlock(&v10);
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::GetValue", 4954, v6);
  return (unsigned int)v6;
}
