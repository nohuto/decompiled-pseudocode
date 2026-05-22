/*
 * XREFs of ?GetHeadToPoseTransform@SpatialInputControllerCollection@@AEAA?AUMatrix4x4@Numerics@Foundation@Windows@@AEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18007757C
 * Callers:
 *     ?OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z @ 0x180078E90 (-OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z.c)
 *     ?SendTrackedNodesUpdates@SpatialInputControllerCollection@@QEAAXXZ @ 0x1800794EC (-SendTrackedNodesUpdates@SpatialInputControllerCollection@@QEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180077834 (-EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrap.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall SpatialInputControllerCollection::GetHeadToPoseTransform(
        SpatialInputControllerCollection *a1,
        _OWORD *a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *))
{
  __int64 v5; // rbx
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v6; // rdx
  int v7; // eax
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v16; // [rsp+58h] [rbp+28h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF

  v17 = a3;
  *a2 = _xmm;
  a2[1] = _xmm;
  a2[2] = _xmm;
  a2[3] = _xmm;
  v18 = 0LL;
  GetSystemTimePreciseAsFileTime(&v18);
  v5 = v18;
  v7 = SpatialInputControllerCollection::EnsureResources(a1, v6);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v7);
    return a2;
  }
  v17 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(**((_QWORD **)a1 + 363) + 48LL))(
         *((_QWORD **)a1 + 363),
         v5,
         &v17);
  if ( v8 >= 0 )
  {
    v9 = v17;
    if ( !v17 )
      goto LABEL_14;
    v16 = 0LL;
    v10 = (**v17)(v17, &GUID_1dc46154_efc9_4d3c_b5ce_29877f3734a9, &v16);
    v11 = retaddr;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v16 + 56LL))(v16, a2);
      v11 = retaddr;
      if ( v10 >= 0 )
        goto LABEL_11;
      v12 = 261LL;
    }
    else
    {
      v12 = 259LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v11,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v10);
LABEL_11:
    v13 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_13;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x100,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
    (const char *)(unsigned int)v8);
LABEL_13:
  v9 = v17;
LABEL_14:
  if ( v9 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
  }
  return a2;
}
