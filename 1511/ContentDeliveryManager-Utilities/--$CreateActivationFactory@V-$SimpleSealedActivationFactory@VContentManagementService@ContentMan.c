/*
 * XREFs of ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VContentManagementService@ContentManagement@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800073F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180007790 (-Release@-$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027FA8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Microsoft::WRL::SimpleSealedActivationFactory<ContentManagement::ContentManagementService,0>>(
        _BYTE *a1,
        __int64 a2,
        _DWORD *a3,
        volatile signed __int32 **a4)
{
  volatile signed __int32 *v4; // rdi
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rbx
  bool v11; // zf
  signed __int32 v12; // eax
  unsigned int v13; // ebx

  v4 = 0LL;
  v9 = (volatile signed __int32 *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    *((_QWORD *)v9 + 3) = 0LL;
    v11 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *((_DWORD *)v9 + 3) = 1;
    *(_QWORD *)v9 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
    *((_DWORD *)v9 + 8) = 4;
    if ( !v11 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v9 = &Microsoft::WRL::SimpleSealedActivationFactory<ContentManagement::ContentManagementService,0>::`vftable';
    v12 = _InterlockedIncrement(v9 + 3);
    if ( (v10[8] & 4) == 0 && v12 == 2 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4 = v10;
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v10);
    if ( *a3 == 53
      && a3[1] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
      && a3[2] == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
      && a3[3] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
    {
      *a4 = v10;
      if ( (*a1 & 4) == 0 )
        _InterlockedIncrement(v10 + 3);
      v4 = 0LL;
      *((_DWORD *)v10 + 8) = *(_DWORD *)a1;
      *((_QWORD *)v10 + 3) = a2;
      v13 = 0;
    }
    else
    {
      v13 = -2147467262;
    }
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v4 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v4);
  return v13;
}
