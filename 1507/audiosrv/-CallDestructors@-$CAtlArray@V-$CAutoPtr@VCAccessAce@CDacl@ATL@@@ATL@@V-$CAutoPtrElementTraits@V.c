/*
 * XREFs of ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x180008148
 * Callers:
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x180008810 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18000896C (--1CDacl@ATL@@UEAA@XZ.c)
 *     ??1?$CAutoPtrArray@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ @ 0x180067A34 (--1-$CAutoPtrArray@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAt@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x18006B674 (-RemoveAt@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccess.c)
 * Callees:
 *     ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180008460 (--_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

_UNKNOWN **__fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
        __int64 a1,
        unsigned __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned __int64 i; // rbx
  void *(__fastcall ***v6)(ATL::CDacl::CAccessAce *__hidden, unsigned int); // rdi
  void *(__fastcall *v7)(ATL::CDacl::CAccessAce *__hidden, unsigned int); // rbp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a2 )
  {
    result = &retaddr;
    for ( i = 0LL; i < a2; ++i )
    {
      v6 = *(void *(__fastcall ****)(ATL::CDacl::CAccessAce *__hidden, unsigned int))(a1 + 8 * i);
      if ( v6 )
      {
        v7 = **v6;
        if ( v7 == ATL::CDacl::CAccessAce::`vector deleting destructor' )
          result = (_UNKNOWN **)ATL::CDacl::CAccessAce::`vector deleting destructor'(
                                  *(ATL::CDacl::CAccessAce **)(a1 + 8 * i),
                                  1u);
        else
          result = (_UNKNOWN **)v7(*(ATL::CDacl::CAccessAce **)(a1 + 8 * i), 1u);
      }
      *(_QWORD *)(a1 + 8 * i) = 0LL;
    }
  }
  return result;
}
