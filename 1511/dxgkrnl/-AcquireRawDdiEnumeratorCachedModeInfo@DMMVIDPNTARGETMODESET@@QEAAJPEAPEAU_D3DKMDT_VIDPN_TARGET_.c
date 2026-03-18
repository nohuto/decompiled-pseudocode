/*
 * XREFs of ?AcquireRawDdiEnumeratorCachedModeInfo@DMMVIDPNTARGETMODESET@@QEAAJPEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0092B88
 * Callers:
 *     ?CreateNewModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00BF020 (-CreateNewModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET.c)
 * Callees:
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SA?AV?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@@@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C000C3C8 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SA-AV.c)
 *     ??4?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000C518 (--4-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET@@@@.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireRawDdiEnumeratorCachedModeInfo(
        DMMVIDPNTARGETMODESET *this,
        struct _D3DKMDT_VIDPN_TARGET_MODE **a2)
{
  unsigned int v2; // ebx
  void **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // [rsp+38h] [rbp+10h] BYREF
  void *v15; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  *a2 = 0LL;
  v14 = 0LL;
  v5 = (void **)Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance(&v15, 0LL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::operator=((void **)&v14, v5);
  operator delete(v15);
  v10 = v14;
  if ( v14 )
  {
    *((_DWORD *)v10 + 4) = ++*((_DWORD *)this + 20);
    *((_DWORD *)v10 + 20) = 0;
    *((_QWORD *)v10 + 8) = 0xFFFFFFFFLL;
    *((_DWORD *)v10 + 6) = 0;
    *(_QWORD *)(v10 + 28) = -1LL;
    *(_QWORD *)(v10 + 36) = -1LL;
    *(_QWORD *)(v10 + 44) = -1LL;
    *((_DWORD *)v10 + 18) = 8;
    *a2 = (struct _D3DKMDT_VIDPN_TARGET_MODE *)(v10 + 16);
  }
  else
  {
    v13 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    WdLogEvent5_WdLowResource(v13);
    v2 = -1073741801;
  }
  operator delete(0LL);
  return v2;
}
