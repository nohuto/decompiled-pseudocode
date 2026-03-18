/*
 * XREFs of ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1800998F8
 * Callers:
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180099AE4 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?Create@CDecodeBitmap@@SAJAEBU_GUID@@U_LUID@@PEAPEAV1@@Z @ 0x18001E980 (-Create@CDecodeBitmap@@SAJAEBU_GUID@@U_LUID@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x180090270 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x180099634 (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180099754 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
        struct CDecodeBitmap **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        struct _LUID *a3)
{
  const struct CSM_BUFFER_ATTRIBUTES *v4; // r13
  struct CBitmapRealization *v6; // rsi
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rbx
  struct _LUID v10; // xmm1_8
  HANDLE v11; // rax
  int v12; // eax
  int v13; // eax
  __int64 (__fastcall *v14)(CBitmapRealization *); // rax
  unsigned int v15; // edx
  __int64 i; // rbx
  HANDLE v17; // rcx
  struct _LUID v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  _DWORD v22[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE v23; // [rsp+40h] [rbp-C8h]
  struct _LUID v24; // [rsp+48h] [rbp-C0h]
  struct _LUID v25; // [rsp+50h] [rbp-B8h]
  HANDLE v26[32]; // [rsp+58h] [rbp-B0h] BYREF
  struct CBitmapRealization *v28; // [rsp+198h] [rbp+90h] BYREF

  v4 = a2;
  v6 = 0LL;
  v28 = 0LL;
  v7 = 0;
  memset_0(v26, 0, sizeof(v26));
  if ( (unsigned int)(a3[3].HighPart - 1) > 0x1E )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_1801B8EF0, 3u, -2147024809, 0x545u);
    return v7;
  }
  v8 = NtOpenCompositionSurfaceSwapChainHandleInfo(*((_QWORD *)*this + 4), this + 1, v26);
  if ( v8 < 0 )
  {
    v7 = v8 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, &dword_1801B8EF0, 3u, v8 | 0x10000000, 0x54Eu);
    return v7;
  }
  if ( a3[3].HighPart <= 1u )
    goto LABEL_4;
  v19 = a3[5];
  if ( !this[19] )
  {
    v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*this + 3) + 8LL))(*((_QWORD *)*this + 3));
    v21 = CDecodeBitmap::Create((const struct _GUID *)(v20 + 252), v19, this + 19);
    v7 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x6ADu);
  }
  if ( (v7 & 0x80000000) == 0 )
  {
    v4 = a2;
LABEL_4:
    v9 = 0LL;
    if ( a3[3].HighPart )
    {
      while ( 1 )
      {
        v22[0] = a3[3].LowPart;
        v22[1] = v9;
        v10 = a3[3 * v9 + 6];
        v11 = v26[v9 + 1];
        v24 = a3[3 * v9 + 5];
        v23 = v11;
        v25 = v10;
        v12 = CCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
                this,
                v4,
                (const struct CSM_REALIZATION_INFO *)v22,
                &v28);
        v7 = v12;
        if ( v12 < 0 )
          break;
        v6 = v28;
        v26[v9 + 1] = 0LL;
        v13 = CCompositionSurfaceInfo::CBindInfo::AddRealization((CCompositionSurfaceInfo::CBindInfo *)this, v6);
        v7 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801B8EF0, 3u, v13, 0x57Du);
          goto LABEL_12;
        }
        if ( v6 )
        {
          v14 = *(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v6 + 16LL);
          if ( v14 == CBitmapRealization::Release )
            CBitmapRealization::Release(v6);
          else
            v14(v6);
          v6 = 0LL;
          v28 = 0LL;
        }
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= a3[3].HighPart )
          goto LABEL_12;
      }
      MilInstrumentationCheckHR(0x14u, &dword_1801B8EF0, 3u, v12, 0x572u);
      v6 = v28;
    }
    goto LABEL_12;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801B8EF0, 3u, v7, 0x558u);
LABEL_12:
  v15 = (unsigned int)v26[0];
  for ( i = 0LL; (unsigned int)i < v15; i = (unsigned int)(i + 1) )
  {
    v17 = v26[i + 1];
    if ( v17 )
    {
      CloseHandle(v17);
      v15 = (unsigned int)v26[0];
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
