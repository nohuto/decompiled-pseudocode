/*
 * XREFs of ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180008860
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18000794C (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800365AC (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x180007F30 (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 *     ?IsValid@CSid@ATL@@QEBA_NXZ @ 0x18000A5D4 (-IsValid@CSid@ATL@@QEBA_NXZ.c)
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x18000A660 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180032158 (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall ATL::CDacl::AddAllowedAce(ATL::CDacl *this, const struct ATL::CSid *a2, int a3)
{
  ATL::CDacl *v5; // rsi
  HANDLE ProcessHeap; // rax
  _DWORD *v7; // rbx
  void (__fastcall *v9)(ATL::CDacl *); // rbx
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v10[1] = -2LL;
  v5 = this;
  if ( !ATL::CSid::IsValid(a2) )
    return 0;
  if ( *((_BYTE *)v5 + 16) )
  {
    v9 = *(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)v5 + 16LL);
    v9(v5);
    *((_BYTE *)v5 + 16) = 0;
  }
  v10[0] = 0LL;
  try
  {
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
    v10[2] = (__int64)v7;
    if ( v7 )
    {
      *(_QWORD *)v7 = &ATL::CAcl::CAce::`vftable';
      ATL::CSid::CSid((ATL::CSid *)(v7 + 2), a2);
      v7[32] = a3;
      *((_BYTE *)v7 + 132) = 0;
      *((_QWORD *)v7 + 17) = 0LL;
      *(_QWORD *)v7 = &ATL::CDacl::CAccessAce::`vftable';
      *((_BYTE *)v7 + 144) = 1;
    }
    else
    {
      v7 = 0LL;
    }
    v10[0] = (__int64)v7;
  }
  catch ( ... )
  {
    v5 = this;
    v7 = (_DWORD *)v10[0];
  }
  if ( !v7 )
    ATL::AtlThrowImpl(-2147024882);
  ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::Add(
    (_QWORD *)v5 + 3,
    v10);
  free(*((void **)v5 + 1));
  *((_QWORD *)v5 + 1) = 0LL;
  ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(v10);
  return 1;
}
