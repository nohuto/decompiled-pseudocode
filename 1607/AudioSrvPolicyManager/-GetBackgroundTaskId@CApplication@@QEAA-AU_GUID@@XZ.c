/*
 * XREFs of ?GetBackgroundTaskId@CApplication@@QEAA?AU_GUID@@XZ @ 0x18000D818
 * Callers:
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18001662C (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

struct _GUID *__fastcall CApplication::GetBackgroundTaskId(CApplication *this, struct _GUID *__return_ptr retstr)
{
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  struct _GUID v6; // xmm0
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+28h] [rbp-30h]
  struct _GUID v10; // [rsp+30h] [rbp-28h]

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  *retstr = GUID_00000000_0000_0000_0000_000000000000;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      if ( !*(_DWORD *)(v5 + 416) )
      {
        v6 = *(struct _GUID *)(v5 + 484);
        v10 = v6;
        if ( *(_OWORD *)&GUID_00000000_0000_0000_0000_000000000000 != *(_OWORD *)&v6 )
          break;
      }
      if ( !v4 )
        goto LABEL_5;
    }
    *retstr = v6;
  }
LABEL_5:
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return retstr;
}
