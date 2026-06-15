/*
 * XREFs of ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x180036BBC
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800365AC (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x180008810 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x1800328E0 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

char __fastcall ATL::CSecurityDesc::GetDacl(ATL::CSecurityDesc *this, struct ATL::CDacl *a2, bool *a3, bool *a4)
{
  void *v4; // rcx
  struct _ACL *v6; // rbx
  __int64 v7; // rax
  void (__fastcall *v8)(ATL::CDacl *); // rsi
  struct _ACL *v10; // [rsp+40h] [rbp+8h] BYREF
  bool *v11; // [rsp+50h] [rbp+18h] BYREF
  bool *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a3;
  v4 = (void *)*((_QWORD *)this + 1);
  if ( !v4 || !GetSecurityDescriptorDacl(v4, (LPBOOL)&v12, &v10, (LPBOOL)&v11) )
    return 0;
  if ( a2 )
  {
    if ( (_DWORD)v12 )
    {
      v6 = v10;
      v7 = *(_QWORD *)a2;
      if ( v10 )
      {
        v8 = *(void (__fastcall **)(ATL::CDacl *))(v7 + 16);
        if ( v8 == ATL::CDacl::RemoveAllAces )
          ATL::CDacl::RemoveAllAces(a2);
        else
          v8(a2);
        ATL::CDacl::Copy(a2, v6);
      }
      else
      {
        (*(void (__fastcall **)(struct ATL::CDacl *))(v7 + 16))(a2);
        *((_BYTE *)a2 + 16) = 1;
      }
    }
    else
    {
      (*(void (__fastcall **)(struct ATL::CDacl *))(*(_QWORD *)a2 + 16LL))(a2);
      *((_BYTE *)a2 + 16) = 0;
    }
  }
  return 1;
}
