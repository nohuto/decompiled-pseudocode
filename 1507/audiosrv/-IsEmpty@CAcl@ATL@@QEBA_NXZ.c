/*
 * XREFs of ?IsEmpty@CAcl@ATL@@QEBA_NXZ @ 0x1800081C8
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180007514 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?GetAceCount@CDacl@ATL@@UEBAIXZ @ 0x180008660 (-GetAceCount@CDacl@ATL@@UEBAIXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

char __fastcall ATL::CAcl::IsEmpty(ATL::CAcl *this)
{
  char v1; // bl
  unsigned int (__fastcall *v2)(ATL::CDacl *__hidden); // rsi
  unsigned int AceCount; // eax

  v1 = 0;
  if ( !*((_BYTE *)this + 16) )
  {
    v2 = *(unsigned int (__fastcall **)(ATL::CDacl *__hidden))(*(_QWORD *)this + 8LL);
    if ( v2 == ATL::CDacl::GetAceCount )
      AceCount = ATL::CDacl::GetAceCount(this);
    else
      AceCount = v2(this);
    if ( !AceCount )
      return 1;
  }
  return v1;
}
