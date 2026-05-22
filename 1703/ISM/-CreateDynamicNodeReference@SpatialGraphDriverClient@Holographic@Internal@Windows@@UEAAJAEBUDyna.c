/*
 * XREFs of ?CreateDynamicNodeReference@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUDynamicNodeInfo@234@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x180088FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@PEAUISpatialGraphNodeReferenceFactory@234@@Z @ 0x180089A84 (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 *     ??0SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAA@XZ @ 0x18008CCB4 (--0SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::CreateDynamicNodeReference(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct Windows::Internal::Holographic::DynamicNodeInfo *a2,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference **a3)
{
  Windows::Internal::Holographic::SpatialGraphNodeReference *v6; // rax
  int v7; // ebx
  __int64 v8; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  v6 = (Windows::Internal::Holographic::SpatialGraphNodeReference *)operator new(
                                                                      0x90uLL,
                                                                      (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_8:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xD1,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v8 = Windows::Internal::Holographic::SpatialGraphNodeReference::SpatialGraphNodeReference(v6);
  v7 = Windows::Internal::Holographic::SpatialGraphNodeReference::RuntimeClassInitialize(v8, (char *)this + 56, a2, 0LL);
  if ( v7 >= 0 )
  {
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct Windows::Internal::Holographic::ISpatialGraphNodeReference **))v8)(
           v8,
           &GUID_38c1de2c_ee80_434a_bdb5_67c0ad990483,
           a3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v7 < 0 )
    goto LABEL_8;
  return 0LL;
}
