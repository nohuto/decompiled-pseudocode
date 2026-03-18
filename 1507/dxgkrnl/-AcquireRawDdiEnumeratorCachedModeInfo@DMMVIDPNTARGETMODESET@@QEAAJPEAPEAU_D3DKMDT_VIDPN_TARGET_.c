/*
 * XREFs of ?AcquireRawDdiEnumeratorCachedModeInfo@DMMVIDPNTARGETMODESET@@QEAAJPEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C008836C
 * Callers:
 *     ?CreateNewModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0097960 (-CreateNewModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET.c)
 * Callees:
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SA?AV?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@@@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C0009824 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SA-AV.c)
 *     ??4?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000D074 (--4-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET@@@@.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireRawDdiEnumeratorCachedModeInfo(
        DMMVIDPNTARGETMODESET *this,
        struct _D3DKMDT_VIDPN_TARGET_MODE **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  void **v7; // rax
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // [rsp+38h] [rbp+10h] BYREF
  void *v14; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  *a2 = 0LL;
  v13 = 0LL;
  v7 = (void **)Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance(&v14, 0LL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::operator=((void **)&v13, v7);
  operator delete(v14);
  v9 = v13;
  if ( v13 )
  {
    *((_DWORD *)v9 + 4) = ++*((_DWORD *)this + 20);
    *((_DWORD *)v9 + 20) = 0;
    *((_QWORD *)v9 + 8) = 0xFFFFFFFFLL;
    *((_DWORD *)v9 + 6) = 0;
    *(_QWORD *)(v9 + 28) = -1LL;
    *(_QWORD *)(v9 + 36) = -1LL;
    *(_QWORD *)(v9 + 44) = -1LL;
    *((_DWORD *)v9 + 18) = 8;
    *a2 = (struct _D3DKMDT_VIDPN_TARGET_MODE *)(v9 + 16);
  }
  else
  {
    v12 = WdLogNewEntry5_WdLowResource(v8);
    WdLogEvent5_WdLowResource(v12);
    v4 = -1073741801;
  }
  operator delete(0LL);
  return v4;
}
