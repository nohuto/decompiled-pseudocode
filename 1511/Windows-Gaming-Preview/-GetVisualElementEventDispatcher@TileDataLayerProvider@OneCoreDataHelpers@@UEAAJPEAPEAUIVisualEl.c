/*
 * XREFs of ?GetVisualElementEventDispatcher@TileDataLayerProvider@OneCoreDataHelpers@@UEAAJPEAPEAUIVisualElementEventDispatcher@@@Z @ 0x180025130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000A77C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV-$C.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?IsInvalidPointer@TileDataLayerProvider@OneCoreDataHelpers@@AEAA_NPEAUIUnknown@@@Z @ 0x1800252FC (-IsInvalidPointer@TileDataLayerProvider@OneCoreDataHelpers@@AEAA_NPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall OneCoreDataHelpers::TileDataLayerProvider::GetVisualElementEventDispatcher(
        RTL_SRWLOCK *this,
        struct IUnknown **a2)
{
  RTL_SRWLOCK *v2; // r14
  struct IUnknown *Ptr; // rdi
  struct IUnknown *v6; // rbx
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v9; // r15d
  struct IUnknown *v10; // rdi
  struct IUnknown *v11; // r15
  PVOID v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IUnknown *v15; // [rsp+60h] [rbp+30h] BYREF

  *a2 = 0LL;
  v2 = this + 2;
  v15 = 0LL;
  AcquireSRWLockShared(this + 2);
  Ptr = (struct IUnknown *)this[3].Ptr;
  if ( v15 != Ptr )
  {
    if ( Ptr )
      ((void (__fastcall *)(PVOID))Ptr->lpVtbl->AddRef)(this[3].Ptr);
    v6 = v15;
    v15 = Ptr;
    if ( v6 )
      ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  if ( ((__int64)this[6].Ptr & 1) != 0
    || OneCoreDataHelpers::TileDataLayerProvider::IsInvalidPointer(
         (OneCoreDataHelpers::TileDataLayerProvider *)this,
         v15) )
  {
    ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IVisualElementEventDispatcher>>((__int64 *)&v15);
    Instance = CoCreateInstance(
                 &GUID_a6358b41_04b3_477f_b8e5_7edb1a5d7acd,
                 0LL,
                 1u,
                 &GUID_8200309e_b0a8_4269_bd55_e0442725d348,
                 (LPVOID *)ppv);
    v9 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        115LL,
        (__int64)"shell\\lib\\onecoretdlhelpers\\onecoredatahelpers.cpp",
        (const char *)(unsigned int)Instance);
      v10 = v15;
      goto LABEL_24;
    }
    if ( ((__int64)this[6].Ptr & 1) == 0 )
    {
      AcquireSRWLockExclusive(v2);
      v10 = v15;
      if ( this[3].Ptr != v15 )
      {
        v11 = v15;
        if ( v15 )
        {
          ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->AddRef)(v15);
          v10 = v15;
        }
        v12 = this[3].Ptr;
        this[3].Ptr = v11;
        if ( v12 )
        {
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 16LL))(v12);
          v10 = v15;
        }
      }
      if ( !v2 )
        goto LABEL_21;
      ReleaseSRWLockExclusive(v2);
    }
  }
  v10 = v15;
LABEL_21:
  if ( v10 )
  {
    ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->AddRef)(v10);
    v10 = v15;
  }
  *a2 = v10;
  v9 = 0;
LABEL_24:
  if ( v10 )
  {
    v15 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
  }
  return v9;
}
