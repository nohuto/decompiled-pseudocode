/*
 * XREFs of DxgkHandleVideoParameters @ 0x1C01780F4
 * Callers:
 *     DpiGdoHandleVideoParameters @ 0x1C019E6E8 (DpiGdoHandleVideoParameters.c)
 * Callees:
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001588 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0008750 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C01470C4 (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0147588 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C01487D8 (-UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C0177F74 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 *     DmmGetMacrovisonSupportFromClientVidPnSource @ 0x1C01A3D9C (DmmGetMacrovisonSupportFromClientVidPnSource.c)
 *     DmmGetPathContentFromClientVidPnSource @ 0x1C01A4348 (DmmGetPathContentFromClientVidPnSource.c)
 *     DmmIsSourcePresentedOnClientVidPnAnalogTvOut @ 0x1C01A49A0 (DmmIsSourcePresentedOnClientVidPnAnalogTvOut.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C01A4E2C (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 */

__int64 __fastcall DxgkHandleVideoParameters(DXGADAPTER ***a1, unsigned int a2, char *Source1)
{
  __int64 v4; // r15
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  struct DXGFASTMUTEX *const *ProcessDxgProcess; // rax
  __int64 v9; // rcx
  unsigned __int8 v10; // r8
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  int v22; // r14d
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int updated; // eax
  __int64 v28; // rax
  int v30; // [rsp+20h] [rbp-39h] BYREF
  unsigned int v31; // [rsp+24h] [rbp-35h] BYREF
  _BYTE v32[24]; // [rsp+28h] [rbp-31h] BYREF
  _BYTE v33[80]; // [rsp+40h] [rbp-19h] BYREF
  char v34; // [rsp+D8h] [rbp+7Fh] BYREF

  v4 = a2;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGFASTMUTEX *const *)PsGetProcessDxgProcess(CurrentProcess, v7);
  if ( !ProcessDxgProcess )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    v12 = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return (unsigned int)v12;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v32,
    ProcessDxgProcess,
    v10);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 65LL;
    WdLogEvent5_WdAssertion(v14);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, (struct DXGADAPTER *const)a1, 0LL);
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33);
  if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)a1) )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v12 = -1073741637;
    v16[3] = a1;
    v16[4] = -1073741637LL;
LABEL_11:
    WdLogEvent5_WdError(v16);
    goto LABEL_45;
  }
  if ( (unsigned int)v4 >= *((_DWORD *)a1[266] + 20) )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v12 = -1071774975;
    v16[3] = v4;
    v16[4] = a1;
    v16[5] = -1071774975LL;
    goto LABEL_11;
  }
  if ( RtlCompareMemory(Source1, &GUID_VIDEO_PARAMETERS, 0x10uLL) != 16 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v12 = -1073741811;
    v16[3] = -1073741811LL;
    goto LABEL_11;
  }
  v34 = 0;
  DmmIsSourcePresentedOnClientVidPnAnalogTvOut(a1, (unsigned int)v4, &v34, &v31);
  v21 = *((_DWORD *)Source1 + 5);
  v22 = 1;
  if ( v21 == 1 )
  {
    *(_QWORD *)(Source1 + 28) = 0LL;
    *(_QWORD *)(Source1 + 36) = 0LL;
    *(_QWORD *)(Source1 + 44) = 0LL;
    v12 = 0;
    *(_QWORD *)(Source1 + 52) = 0LL;
    *(_QWORD *)(Source1 + 60) = 0LL;
    *(_QWORD *)(Source1 + 68) = 0LL;
    *(_QWORD *)(Source1 + 76) = 0LL;
    *(_QWORD *)(Source1 + 84) = 0LL;
    *(_QWORD *)(Source1 + 92) = 0LL;
    memset(Source1 + 100, 0, 0x100uLL);
    *((_DWORD *)Source1 + 6) = 3;
    if ( v34 == 1 )
    {
      v30 = 0;
      DmmGetPathContentFromClientVidPnSource(a1, (unsigned int)v4, &v30);
      *((_DWORD *)Source1 + 7) = (v30 == 2) + 1;
    }
    else
    {
      *((_DWORD *)Source1 + 7) = 1;
    }
    *((_DWORD *)Source1 + 9) = 3;
    if ( v34 == 1 )
      *((_DWORD *)Source1 + 8) = GetCurrentTvStandard((struct DXGADAPTER *)a1, v31);
    else
      *((_DWORD *)Source1 + 8) = 0x8000;
    *((_DWORD *)Source1 + 10) = *((_DWORD *)Source1 + 8) | 0x8000;
    if ( v34 == 1 )
    {
      DmmGetMacrovisonSupportFromClientVidPnSource(a1, (unsigned int)v4, &v34);
      if ( (v34 & 4) == 0 && (v34 & 2) == 0 )
        v22 = 0;
    }
    *((_DWORD *)Source1 + 20) = v22;
    if ( v22 )
    {
      *((_DWORD *)Source1 + 6) |= 0x100u;
      *((_DWORD *)Source1 + 22) = 196799;
    }
    goto LABEL_45;
  }
  if ( v21 != 2 )
    goto LABEL_45;
  v12 = 0;
  if ( (*((_DWORD *)Source1 + 6) & 0x100) == 0 )
  {
LABEL_42:
    if ( v34 == 1 && (*((_DWORD *)Source1 + 6) & 1) != 0 )
      DmmUpdateContentOnAllClientVidPnPathsFromSource(
        a1,
        (unsigned int)v4,
        (unsigned int)(*((_DWORD *)Source1 + 7) == 2) + 1);
    goto LABEL_45;
  }
  v23 = (unsigned int)(*((_DWORD *)Source1 + 21) - 1);
  if ( *((_DWORD *)Source1 + 21) != 1 )
  {
    v23 = (unsigned int)(*((_DWORD *)Source1 + 21) - 2);
    if ( *((_DWORD *)Source1 + 21) == 2 )
    {
      updated = ADAPTER_DISPLAY::DestroyCopyProtection(a1[266], v4, *((_DWORD *)Source1 + 23));
    }
    else
    {
      if ( *((_DWORD *)Source1 + 21) != 4 )
      {
        v24 = WdLogNewEntry5_WdWarning(v23, v18, v19, v20);
        v25 = *((unsigned int *)Source1 + 21);
LABEL_33:
        *(_QWORD *)(v24 + 24) = v25;
        v12 = -1073741811;
        *(_QWORD *)(v24 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v24);
        goto LABEL_45;
      }
      v26 = *((unsigned int *)Source1 + 24);
      if ( (unsigned int)v26 > 3 )
      {
LABEL_32:
        v24 = WdLogNewEntry5_WdWarning(v23, v18, v26, v20);
        v25 = *((unsigned int *)Source1 + 24);
        goto LABEL_33;
      }
      updated = ADAPTER_DISPLAY::UpdateCopyProtection(a1[266], v4, v26, *((_DWORD *)Source1 + 23));
    }
    goto LABEL_39;
  }
  v26 = *((unsigned int *)Source1 + 24);
  if ( (unsigned int)(v26 - 1) <= 2 )
  {
    if ( *((_DWORD *)Source1 + 20) != 1 )
      goto LABEL_32;
    updated = ADAPTER_DISPLAY::CreateCopyProtection(a1[266], v4, v26, (unsigned int *)Source1 + 23);
LABEL_39:
    v12 = updated;
    goto LABEL_41;
  }
  v28 = WdLogNewEntry5_WdWarning(v23, v18, v26, v20);
  v12 = -1073741811;
  *(_QWORD *)(v28 + 24) = *((unsigned int *)Source1 + 24);
  *(_QWORD *)(v28 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v28);
LABEL_41:
  if ( v12 >= 0 )
    goto LABEL_42;
LABEL_45:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
  if ( v32[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
  return (unsigned int)v12;
}
