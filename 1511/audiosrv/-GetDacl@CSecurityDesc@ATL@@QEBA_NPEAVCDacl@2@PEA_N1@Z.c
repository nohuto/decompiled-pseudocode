/*
 * XREFs of ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x180033058
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180033EF0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x18002DCA0 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18002DE40 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

char __fastcall ATL::CSecurityDesc::GetDacl(ATL::CSecurityDesc *this, void **a2, bool *a3, bool *a4)
{
  void *v4; // rcx
  struct _ACL *v6; // rbx
  _QWORD *v7; // rax
  void (__fastcall *v8)(void **); // rsi
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
      v7 = *a2;
      if ( v10 )
      {
        v8 = (void (__fastcall *)(void **))v7[2];
        if ( v8 == ATL::CDacl::RemoveAllAces )
          ATL::CDacl::RemoveAllAces(a2);
        else
          v8(a2);
        ATL::CDacl::Copy((ATL::CDacl *)a2, v6);
      }
      else
      {
        ((void (__fastcall *)(void **))v7[2])(a2);
        *((_BYTE *)a2 + 16) = 1;
      }
    }
    else
    {
      (*((void (__fastcall **)(void **))*a2 + 2))(a2);
      *((_BYTE *)a2 + 16) = 0;
    }
  }
  return 1;
}
