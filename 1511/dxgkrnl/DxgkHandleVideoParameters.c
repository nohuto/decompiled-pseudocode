/*
 * XREFs of DxgkHandleVideoParameters @ 0x1C0153088
 * Callers:
 *     DpiGdoHandleVideoParameters @ 0x1C0174D30 (DpiGdoHandleVideoParameters.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000244C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000AE8C (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C0125E20 (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0129740 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C012FC6C (-UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C0152F08 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 *     DmmGetMacrovisonSupportFromClientVidPnSource @ 0x1C017A490 (DmmGetMacrovisonSupportFromClientVidPnSource.c)
 *     DmmGetPathContentFromClientVidPnSource @ 0x1C017AB44 (DmmGetPathContentFromClientVidPnSource.c)
 *     DmmIsSourcePresentedOnClientVidPnAnalogTvOut @ 0x1C017B414 (DmmIsSourcePresentedOnClientVidPnAnalogTvOut.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C017B8A0 (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 */

__int64 __fastcall DxgkHandleVideoParameters(DXGADAPTER ***a1, unsigned int a2, char *Source1)
{
  __int64 v4; // r15
  struct DXGFASTMUTEX *const *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  int updated; // eax
  __int64 v25; // rax
  int v27; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v28; // [rsp+24h] [rbp-4Ch] BYREF
  _BYTE v29[16]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v30[56]; // [rsp+38h] [rbp-38h] BYREF
  char v31; // [rsp+B8h] [rbp+48h] BYREF

  v4 = a2;
  Current = (struct DXGFASTMUTEX *const *)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    v9 = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return (unsigned int)v9;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 65LL;
    WdLogEvent5_WdAssertion(v11);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, (struct DXGADAPTER *const)a1, 0LL);
  v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v30);
  if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)a1) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v9 = -1073741637;
    v13[3] = a1;
    v13[4] = -1073741637LL;
LABEL_11:
    WdLogEvent5_WdError(v13);
    goto LABEL_45;
  }
  if ( (unsigned int)v4 >= *((_DWORD *)a1[248] + 26) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v9 = -1071774975;
    v13[3] = v4;
    v13[4] = a1;
    v13[5] = -1071774975LL;
    goto LABEL_11;
  }
  if ( RtlCompareMemory(Source1, &GUID_VIDEO_PARAMETERS, 0x10uLL) != 16 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v9 = -1073741811;
    v13[3] = -1073741811LL;
    goto LABEL_11;
  }
  v31 = 0;
  DmmIsSourcePresentedOnClientVidPnAnalogTvOut(a1, (unsigned int)v4, &v31, &v28);
  v18 = *((_DWORD *)Source1 + 5);
  v19 = 1;
  if ( v18 == 1 )
  {
    *(_QWORD *)(Source1 + 28) = 0LL;
    *(_QWORD *)(Source1 + 36) = 0LL;
    *(_QWORD *)(Source1 + 44) = 0LL;
    v9 = 0;
    *(_QWORD *)(Source1 + 52) = 0LL;
    *(_QWORD *)(Source1 + 60) = 0LL;
    *(_QWORD *)(Source1 + 68) = 0LL;
    *(_QWORD *)(Source1 + 76) = 0LL;
    *(_QWORD *)(Source1 + 84) = 0LL;
    *(_QWORD *)(Source1 + 92) = 0LL;
    memset(Source1 + 100, 0, 0x100uLL);
    *((_DWORD *)Source1 + 6) = 3;
    if ( v31 == 1 )
    {
      v27 = 0;
      DmmGetPathContentFromClientVidPnSource(a1, (unsigned int)v4, &v27);
      *((_DWORD *)Source1 + 7) = (v27 == 2) + 1;
    }
    else
    {
      *((_DWORD *)Source1 + 7) = 1;
    }
    *((_DWORD *)Source1 + 9) = 3;
    if ( v31 == 1 )
      *((_DWORD *)Source1 + 8) = GetCurrentTvStandard((struct DXGADAPTER *)a1, v28);
    else
      *((_DWORD *)Source1 + 8) = 0x8000;
    *((_DWORD *)Source1 + 10) = *((_DWORD *)Source1 + 8) | 0x8000;
    if ( v31 == 1 )
    {
      DmmGetMacrovisonSupportFromClientVidPnSource(a1, (unsigned int)v4, &v31);
      if ( (v31 & 4) == 0 && (v31 & 2) == 0 )
        v19 = 0;
    }
    *((_DWORD *)Source1 + 20) = v19;
    if ( v19 )
    {
      *((_DWORD *)Source1 + 6) |= 0x100u;
      *((_DWORD *)Source1 + 22) = 196799;
    }
    goto LABEL_45;
  }
  if ( v18 != 2 )
    goto LABEL_45;
  v9 = 0;
  if ( (*((_DWORD *)Source1 + 6) & 0x100) == 0 )
  {
LABEL_42:
    if ( v31 == 1 && (*((_DWORD *)Source1 + 6) & 1) != 0 )
      DmmUpdateContentOnAllClientVidPnPathsFromSource(
        a1,
        (unsigned int)v4,
        (unsigned int)(*((_DWORD *)Source1 + 7) == 2) + 1);
    goto LABEL_45;
  }
  v20 = (unsigned int)(*((_DWORD *)Source1 + 21) - 1);
  if ( *((_DWORD *)Source1 + 21) != 1 )
  {
    v20 = (unsigned int)(*((_DWORD *)Source1 + 21) - 2);
    if ( *((_DWORD *)Source1 + 21) == 2 )
    {
      updated = ADAPTER_DISPLAY::DestroyCopyProtection(a1[248], v4, *((_DWORD *)Source1 + 23));
    }
    else
    {
      if ( *((_DWORD *)Source1 + 21) != 4 )
      {
        v21 = WdLogNewEntry5_WdWarning(v20, v15, v16, v17);
        v22 = *((unsigned int *)Source1 + 21);
LABEL_33:
        *(_QWORD *)(v21 + 24) = v22;
        v9 = -1073741811;
        *(_QWORD *)(v21 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v21);
        goto LABEL_45;
      }
      v23 = *((unsigned int *)Source1 + 24);
      if ( (unsigned int)v23 > 3 )
      {
LABEL_32:
        v21 = WdLogNewEntry5_WdWarning(v20, v15, v23, v17);
        v22 = *((unsigned int *)Source1 + 24);
        goto LABEL_33;
      }
      updated = ADAPTER_DISPLAY::UpdateCopyProtection(a1[248], v4, v23, *((_DWORD *)Source1 + 23));
    }
    goto LABEL_39;
  }
  v23 = *((unsigned int *)Source1 + 24);
  if ( (unsigned int)(v23 - 1) <= 2 )
  {
    if ( *((_DWORD *)Source1 + 20) != 1 )
      goto LABEL_32;
    updated = ADAPTER_DISPLAY::CreateCopyProtection(a1[248], v4, v23, (unsigned int *)Source1 + 23);
LABEL_39:
    v9 = updated;
    goto LABEL_41;
  }
  v25 = WdLogNewEntry5_WdWarning(v20, v15, v23, v17);
  v9 = -1073741811;
  *(_QWORD *)(v25 + 24) = *((unsigned int *)Source1 + 24);
  *(_QWORD *)(v25 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v25);
LABEL_41:
  if ( v9 >= 0 )
    goto LABEL_42;
LABEL_45:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
  return (unsigned int)v9;
}
