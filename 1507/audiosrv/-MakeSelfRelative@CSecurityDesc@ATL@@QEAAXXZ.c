/*
 * XREFs of ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18000740C
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18000794C (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800365AC (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180007340 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z @ 0x1800074D8 (-GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18006B358 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18006B37C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::MakeSelfRelative(PSECURITY_DESCRIPTOR *this)
{
  PSECURITY_DESCRIPTOR v2; // rcx
  void *v3; // rax
  void *v4; // rdi
  void (__fastcall *v5)(PSECURITY_DESCRIPTOR *); // rsi
  int Error; // ebx
  unsigned __int16 v7; // [rsp+30h] [rbp+8h] BYREF
  DWORD dwBufferLength; // [rsp+38h] [rbp+10h] BYREF

  if ( this[1] )
  {
    if ( !ATL::CSecurityDesc::GetControl((ATL::CSecurityDesc *)this, &v7) )
      ATL::AtlThrowImpl(-2147467259);
    if ( (v7 & 0x8000u) == 0 )
    {
      v2 = this[1];
      dwBufferLength = 0;
      MakeSelfRelativeSD(v2, 0LL, &dwBufferLength);
      if ( GetLastError() != 122 )
        ATL::AtlThrowLastWin32();
      v3 = malloc(dwBufferLength);
      v4 = v3;
      if ( !v3 )
        ATL::AtlThrowImpl(-2147024882);
      if ( !MakeSelfRelativeSD(this[1], v3, &dwBufferLength) )
      {
        Error = ATL::AtlHresultFromLastError();
        free(v4);
        ATL::AtlThrowImpl(Error);
      }
      v5 = (void (__fastcall *)(PSECURITY_DESCRIPTOR *))*((_QWORD *)*this + 1);
      if ( v5 == ATL::CSecurityDesc::Clear )
        ATL::CSecurityDesc::Clear(this);
      else
        v5(this);
      this[1] = v4;
    }
  }
}
