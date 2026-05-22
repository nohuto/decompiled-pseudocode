/*
 * XREFs of ?SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x1800895E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStaticNodeDurability_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x18008F8B4 (-SetStaticNodeDurability_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAK@Z @ 0x180092FB0 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::SetStaticNodeDurability(
        __int64 a1,
        __int128 *a2,
        int a3)
{
  __int128 v3; // xmm0
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rbx
  __int64 v12; // rdi
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *a2;
  v16 = a3;
  v7 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 56);
  v15 = v3;
  v8 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         v7,
         0x5B8428u,
         &v15,
         0x14u,
         0LL,
         0,
         0LL);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = a1 - 8;
    v12 = *(_QWORD *)(a1 + 56);
    v13 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v13 )
    {
      if ( *v13 )
      {
        HolographicDriverClientTrace::Instance();
        HolographicDriverClientTrace::SetStaticNodeDurability_(v14, v11, v12 + 12, a2, a3);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x15E,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
