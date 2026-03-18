/*
 * XREFs of ?AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017A2E0
 * Callers:
 *     ?CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017BCD0 (-CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEA.c)
 * Callees:
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SA?AV?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@@@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000A4DC (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@SA-.c)
 *     ??4?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000D074 (--4-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET@@@@.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireRawDdiEnumeratorCachedPathInfo(
        DMMVIDPNTOPOLOGY *this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  void **v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  char *v10; // rax
  char *v12; // [rsp+30h] [rbp+8h] BYREF
  void *v13; // [rsp+38h] [rbp+10h] BYREF

  v12 = (char *)this;
  v4 = 0;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  v12 = 0LL;
  v7 = (void **)Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(&v13, 0LL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::operator=((void **)&v12, v7);
  operator delete(v13);
  if ( v12 )
  {
    v10 = v12 + 16;
    *a2 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)(v12 + 16);
    *((_QWORD *)v10 + 1) = 0LL;
    *(_DWORD *)v10 = -1;
    *((_DWORD *)v10 + 1) = -1;
    *((_DWORD *)v10 + 5) = 0;
    *(_QWORD *)(v10 + 28) = 0LL;
    *(_QWORD *)(v10 + 36) = 0LL;
    *(_QWORD *)(v10 + 44) = 0LL;
    *(_QWORD *)(v10 + 52) = 0LL;
    *(_QWORD *)(v10 + 60) = 0LL;
    *(_QWORD *)(v10 + 68) = 0LL;
    *((_DWORD *)v10 + 84) = 0;
    *((_QWORD *)v10 + 43) = 0LL;
    *((_QWORD *)v10 + 44) = 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdLowResource(v8);
    WdLogEvent5_WdLowResource(v9);
    v4 = -1073741801;
  }
  operator delete(0LL);
  return v4;
}
