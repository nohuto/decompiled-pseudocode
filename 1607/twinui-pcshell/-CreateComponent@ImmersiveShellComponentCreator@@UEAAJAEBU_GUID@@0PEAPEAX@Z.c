/*
 * XREFs of ?CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180003A90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x1800016D4 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18002EB20 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ImmersiveShellComponentCreator::CreateComponent(
        ImmersiveShellComponentCreator *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  PVOID Ptr; // rcx
  const struct _GUID **i; // r9
  _QWORD *v9; // rdx
  int CacheEntry; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  PVOID v14; // rcx
  int v16; // [rsp+30h] [rbp-28h] BYREF
  RTL_SRWLOCK SRWLock; // [rsp+38h] [rbp-20h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v18 = -2LL;
  SRWLock.Ptr = 0LL;
  if ( (`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' & 1) == 0 )
  {
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' |= 1u;
    Microsoft::WRL::Details::ModuleBase::module_ = (struct Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::module;
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::module = (__int64)&Microsoft::WRL::Details::DefaultModule<1>::`vftable';
    atexit(`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`dynamic atexit destructor for 'module'');
  }
  Ptr = 0LL;
  SRWLock.Ptr = 0LL;
  for ( i = (const struct _GUID **)_minATLObjMap_PCShellImmersiveComponentCreator_COM; i < &_pobjectentrymid; ++i )
  {
    if ( *i )
    {
      v9 = *(_QWORD **)(*i)->Data4;
      if ( *v9 == *(_QWORD *)&a2->Data1 && v9[1] == *(_QWORD *)a2->Data4 )
      {
        v16 = 1;
        CacheEntry = Microsoft::WRL::Details::GetCacheEntry(
                       0LL,
                       (struct Microsoft::WRL::Details::ModuleBase *)&v16,
                       &GUID_00000001_0000_0000_c000_000000000046.Data1,
                       *i,
                       &SRWLock);
        Ptr = SRWLock.Ptr;
        goto LABEL_11;
      }
    }
  }
  CacheEntry = -2147221231;
LABEL_11:
  if ( CacheEntry < 0 )
  {
    v11 = (unsigned int)CacheEntry;
    v12 = 18LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\immersiveshellcomponentcreator.h",
      (const char *)v11);
    goto LABEL_17;
  }
  v13 = (*(__int64 (__fastcall **)(PVOID, _QWORD, const struct _GUID *, void **))(*(_QWORD *)Ptr + 24LL))(
          Ptr,
          0LL,
          a3,
          a4);
  CacheEntry = v13;
  if ( v13 < 0 )
  {
    v11 = (unsigned int)v13;
    v12 = 19LL;
    goto LABEL_15;
  }
  CacheEntry = 0;
LABEL_17:
  v14 = SRWLock.Ptr;
  if ( SRWLock.Ptr )
  {
    SRWLock.Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)CacheEntry;
}
