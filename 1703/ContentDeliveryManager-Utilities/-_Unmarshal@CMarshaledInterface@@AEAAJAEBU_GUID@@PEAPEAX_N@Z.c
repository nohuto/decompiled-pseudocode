/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1800467BC
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x18004BA14 (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVTargetedContentTriggerInternal@Internal@Targ.c)
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800041D4 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMarshaledInterface::_Unmarshal(CMarshaledInterface *this, const struct _GUID *a2, void **a3)
{
  unsigned int v5; // edi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  HRESULT InterfaceAndReleaseStream; // eax
  IStream *v9; // rcx

  *a3 = 0LL;
  v5 = -2147467259;
  v6 = *(_DWORD **)this;
  if ( *(_QWORD *)this )
  {
    v7 = 0LL;
    if ( v6[6] == 2 )
    {
      if ( v6 )
      {
        v7 = *(_DWORD **)this;
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
    else
    {
      v7 = *(_DWORD **)this;
      *(_QWORD *)this = 0LL;
    }
    *a3 = 0LL;
    if ( v7[6] == 2 )
    {
      InterfaceAndReleaseStream = AgileGitPtr::CopyLocal((AgileGitPtr *)(v7 + 8), a2, a3);
    }
    else
    {
      v9 = (IStream *)*((_QWORD *)v7 + 2);
      *((_QWORD *)v7 + 2) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v9, a2, a3);
    }
    v5 = InterfaceAndReleaseStream;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
