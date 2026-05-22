/*
 * XREFs of ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x1800890B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeleteStaticNodes_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@W4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x18008FB54 (-DeleteStaticNodes_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@W4SPATIAL_GRAPH_DELETE_STA.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAK@Z @ 0x180092FB0 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E0BC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::DeleteStaticNodes(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4)
{
  __int64 v4; // rsi
  DWORD v9; // edi
  unsigned int *v10; // rax
  unsigned int *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v14; // rcx
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // r14
  _DWORD *v18; // rcx
  __int64 v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD v21; // [rsp+70h] [rbp+18h] BYREF

  v4 = a3;
  if ( a3 && !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDB,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v9 = 16 * a3 + 8;
  v10 = (unsigned int *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
    v13 = 223LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v12);
    goto LABEL_17;
  }
  memset(v10, 0, v9);
  v11[1] = v4;
  *v11 = a2;
  if ( (_DWORD)v4 )
    memmove(v11 + 2, a4, 16 * v4);
  v14 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 56);
  v21 = 0;
  v15 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
          v14,
          0x5B842Cu,
          v11,
          v9,
          0LL,
          0,
          &v21);
  v12 = v15;
  if ( v15 >= 0 )
  {
    if ( !v21 )
    {
      v16 = a1 - 8;
      v17 = *(_QWORD *)(a1 + 56);
      v18 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
      if ( v18 && *v18 )
      {
        HolographicDriverClientTrace::Instance();
        HolographicDriverClientTrace::DeleteStaticNodes_(v19, v16, v17 + 12, a2, v4, a4);
      }
      v12 = 0;
      goto LABEL_17;
    }
    v12 = -2147418113;
    v13 = 240LL;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xEE,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(unsigned int)v15);
LABEL_17:
  if ( v11 )
    operator delete(v11);
  return v12;
}
