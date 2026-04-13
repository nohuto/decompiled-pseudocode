/*
 * XREFs of ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180048730
 * Callers:
 *     ?Get@?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@Internal@Windows@@QEAAJPEAPEAUITargetedContentSubscription@TargetedContent@ContentManagement@@@Z @ 0x18004734C (-Get@-$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement.c)
 *     ?Get@?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@Windows@@QEAAJPEAPEAUITargetedContentCollection@TargetedContent@ContentManagement@@@Z @ 0x180047528 (-Get@-$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@.c)
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180003F60 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
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
