/*
 * XREFs of ?GetTileManager@TileDataLayerProvider@OneCoreDataHelpers@@UEAAJPEAPEAUITileManager@@@Z @ 0x180025660
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsInvalidPointer@TileDataLayerProvider@OneCoreDataHelpers@@AEAA_NPEAUIUnknown@@@Z @ 0x1800259F4 (-IsInvalidPointer@TileDataLayerProvider@OneCoreDataHelpers@@AEAA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OneCoreDataHelpers::TileDataLayerProvider::GetTileManager(
        RTL_SRWLOCK *this,
        struct ITileManager **a2)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v5; // rdx
  struct IUnknown *v6; // r8
  struct IUnknown *Ptr; // rdi
  struct IUnknown *v8; // rcx
  HRESULT Instance; // eax
  unsigned int v10; // edi
  struct ITileManager *v11; // r8
  struct IUnknown *v12; // rdi
  PVOID v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IUnknown *ppv; // [rsp+50h] [rbp+20h] BYREF

  *a2 = 0LL;
  v2 = this + 2;
  ppv = 0LL;
  AcquireSRWLockShared(this + 2);
  v6 = ppv;
  Ptr = (struct IUnknown *)this[4].Ptr;
  if ( ppv != Ptr )
  {
    if ( Ptr )
    {
      ((void (__fastcall *)(PVOID))Ptr->lpVtbl->AddRef)(this[4].Ptr);
      v6 = ppv;
    }
    v8 = v6;
    ppv = Ptr;
    v6 = Ptr;
    if ( v8 )
    {
      ((void (__fastcall *)(struct IUnknown *, __int64, struct IUnknown *))v8->lpVtbl->Release)(v8, v5, Ptr);
      v6 = ppv;
    }
  }
  if ( v2 )
  {
    ReleaseSRWLockShared(v2);
    v6 = ppv;
  }
  if ( ((__int64)this[6].Ptr & 1) == 0 )
  {
    if ( !OneCoreDataHelpers::TileDataLayerProvider::IsInvalidPointer(
            (OneCoreDataHelpers::TileDataLayerProvider *)this,
            v6) )
      goto LABEL_23;
    v6 = ppv;
  }
  if ( v6 )
  {
    ppv = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  }
  Instance = CoCreateInstance(
               &GUID_4b6c85f1_a6d9_433a_9789_89ea153626ed,
               0LL,
               4u,
               &GUID_bd3e41ca_2e87_47a8_8ec0_6f0fe76752ac,
               (LPVOID *)&ppv);
  v10 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\onecoredatahelpers.cpp",
      (const char *)(unsigned int)Instance);
    v11 = (struct ITileManager *)ppv;
    goto LABEL_27;
  }
  if ( ((__int64)this[6].Ptr & 1) == 0 )
  {
    AcquireSRWLockExclusive(v2);
    v11 = (struct ITileManager *)ppv;
    if ( this[4].Ptr != ppv )
    {
      v12 = ppv;
      if ( ppv )
      {
        ((void (__fastcall *)(struct IUnknown *))ppv->lpVtbl->AddRef)(ppv);
        v11 = (struct ITileManager *)ppv;
      }
      v13 = this[4].Ptr;
      this[4].Ptr = v12;
      if ( v13 )
      {
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v13 + 16LL))(v13);
        v11 = (struct ITileManager *)ppv;
      }
    }
    if ( !v2 )
      goto LABEL_24;
    ReleaseSRWLockExclusive(v2);
  }
LABEL_23:
  v11 = (struct ITileManager *)ppv;
LABEL_24:
  if ( v11 )
  {
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)v11 + 8LL))(v11);
    v11 = (struct ITileManager *)ppv;
  }
  *a2 = v11;
  v10 = 0;
LABEL_27:
  if ( v11 )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v10;
}
