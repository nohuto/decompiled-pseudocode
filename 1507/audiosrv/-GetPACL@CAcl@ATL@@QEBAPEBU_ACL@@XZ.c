/*
 * XREFs of ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180008288
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180007514 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x180008220 (-GetLength@CAcl@ATL@@QEBAIXZ.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800365AC (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?GetLength@CAccessAce@CDacl@ATL@@UEBAIXZ @ 0x180008550 (-GetLength@CAccessAce@CDacl@ATL@@UEBAIXZ.c)
 *     ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180008570 (-GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ.c)
 *     ?GetAceCount@CDacl@ATL@@UEBAIXZ @ 0x180008660 (-GetAceCount@CDacl@ATL@@UEBAIXZ.c)
 *     ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x180008670 (-PrepareAcesForACL@CDacl@ATL@@EEBAXXZ.c)
 *     ?GetAce@CDacl@ATL@@EEBAPEBVCAce@CAcl@2@I@Z @ 0x1800087E0 (-GetAce@CDacl@ATL@@EEBAPEBVCAce@CAcl@2@I@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18006B358 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

const struct _ACL *__fastcall ATL::CAcl::GetPACL(ATL::CAcl *this)
{
  DWORD v2; // ebp
  unsigned int (__fastcall *v3)(ATL::CDacl *__hidden); // rbx
  unsigned int AceCount; // eax
  unsigned int v5; // ebx
  unsigned int i; // r14d
  const struct ATL::CAcl::CAce *(__fastcall *v7)(ATL::CDacl *__hidden, unsigned int); // rsi
  ATL::CDacl::CAccessAce *Ace; // rax
  unsigned int (__fastcall *v9)(ATL::CDacl::CAccessAce *__hidden); // r15
  unsigned int Length; // eax
  struct _ACL *v11; // rax
  void (__fastcall *v12)(ATL::CDacl *__hidden); // rbx
  unsigned int j; // esi
  const struct ATL::CAcl::CAce *(__fastcall *v14)(ATL::CDacl *__hidden, unsigned int); // rbx
  ATL::CDacl::CAccessAce *v15; // rax
  ATL::CDacl::CAccessAce *v16; // rbx
  unsigned int (__fastcall *v17)(ATL::CDacl::CAccessAce *__hidden); // rbp
  DWORD v18; // eax
  DWORD nAceListLength; // r15d
  void *(__fastcall *v20)(ATL::CDacl::CAccessAce *__hidden); // rbp
  void *v21; // rax
  int Error; // ebx
  int v24; // ebx

  if ( !*((_QWORD *)this + 1) && !*((_BYTE *)this + 16) )
  {
    v2 = 8;
    v3 = *(unsigned int (__fastcall **)(ATL::CDacl *__hidden))(*(_QWORD *)this + 8LL);
    if ( v3 == ATL::CDacl::GetAceCount )
      AceCount = ATL::CDacl::GetAceCount(this);
    else
      AceCount = v3(this);
    v5 = 0;
    for ( i = AceCount; v5 < i; ++v5 )
    {
      v7 = *(const struct ATL::CAcl::CAce *(__fastcall **)(ATL::CDacl *__hidden, unsigned int))(*(_QWORD *)this + 32LL);
      if ( v7 == ATL::CDacl::GetAce )
        Ace = ATL::CDacl::GetAce(this, v5);
      else
        Ace = v7(this, v5);
      if ( Ace )
      {
        v9 = *(unsigned int (__fastcall **)(ATL::CDacl::CAccessAce *__hidden))(*(_QWORD *)Ace + 16LL);
        if ( v9 == ATL::CDacl::CAccessAce::GetLength )
          Length = ATL::CDacl::CAccessAce::GetLength(Ace);
        else
          Length = v9(Ace);
        v2 += Length;
      }
    }
    v11 = (struct _ACL *)malloc(v2);
    *((_QWORD *)this + 1) = v11;
    if ( !v11 )
      ATL::AtlThrowImpl(-2147024882);
    if ( !InitializeAcl(v11, v2, *((_DWORD *)this + 5)) )
    {
      Error = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(Error);
    }
    v12 = *(void (__fastcall **)(ATL::CDacl *__hidden))(*(_QWORD *)this + 40LL);
    if ( v12 == ATL::CDacl::PrepareAcesForACL )
      ATL::CDacl::PrepareAcesForACL(this);
    else
      v12(this);
    for ( j = 0; j < i; ++j )
    {
      v14 = *(const struct ATL::CAcl::CAce *(__fastcall **)(ATL::CDacl *__hidden, unsigned int))(*(_QWORD *)this + 32LL);
      if ( v14 == ATL::CDacl::GetAce )
        v15 = ATL::CDacl::GetAce(this, j);
      else
        v15 = v14(this, j);
      v16 = v15;
      if ( v15 )
      {
        v17 = *(unsigned int (__fastcall **)(ATL::CDacl::CAccessAce *__hidden))(*(_QWORD *)v15 + 16LL);
        v18 = v17 == ATL::CDacl::CAccessAce::GetLength ? ATL::CDacl::CAccessAce::GetLength(v15) : v17(v15);
        nAceListLength = v18;
        v20 = *(void *(__fastcall **)(ATL::CDacl::CAccessAce *__hidden))(*(_QWORD *)v16 + 8LL);
        v21 = v20 == ATL::CDacl::CAccessAce::GetACE ? ATL::CDacl::CAccessAce::GetACE(v16) : v20(v16);
        if ( AddAce(*((PACL *)this + 1), *((_DWORD *)this + 5), 0xFFFFFFFF, v21, nAceListLength) )
          continue;
      }
      v24 = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(v24);
    }
  }
  return (const struct _ACL *)*((_QWORD *)this + 1);
}
