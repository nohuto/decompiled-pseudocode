/*
 * XREFs of ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00D1E28
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00BEB04 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C0017B44 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00AAAC0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00CF474 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00CF898 (--0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01233FC (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateDisplayCore(
        unsigned __int64 a1,
        struct ADAPTER_DISPLAY **a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGADAPTER *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  ADAPTER_DISPLAY *v10; // rax
  __int64 v11; // rcx
  ADAPTER_DISPLAY *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 result; // rax
  _QWORD *v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx

  v5 = (struct DXGADAPTER *)a1;
  if ( !a1 )
  {
    v22 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v22 + 24) = 17453LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a2 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 17454LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v6 = *((_QWORD *)v5 + 57);
  if ( !v6
    || !*((_QWORD *)v5 + 58)
    || !*((_QWORD *)v5 + 59)
    || !*((_QWORD *)v5 + 61)
    || !*((_QWORD *)v5 + 62)
    || !*((_QWORD *)v5 + 63)
    || !*((_QWORD *)v5 + 50)
    || !*((_QWORD *)v5 + 51) )
  {
    if ( ((int)DXGADAPTER::GetDriverVersion(v5) >= 1200 || (*((_DWORD *)v5 + 71) & 8) != 0)
      && !v8
      && !*((_QWORD *)v5 + 58)
      && !*((_QWORD *)v5 + 59)
      && !*((_QWORD *)v5 + 60)
      && !*((_QWORD *)v5 + 61)
      && !*((_QWORD *)v5 + 62)
      && !*((_QWORD *)v5 + 63)
      && !*((_QWORD *)v5 + 49)
      && !*((_QWORD *)v5 + 50)
      && !*((_QWORD *)v5 + 51)
      && !*((_QWORD *)v5 + 66)
      && !*((_QWORD *)v5 + 64)
      && !*((_QWORD *)v5 + 65)
      && !*((_QWORD *)v5 + 80) )
    {
      if ( !*((_DWORD *)v5 + 228) && !*((_DWORD *)v5 + 229) )
        goto LABEL_54;
      v20 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v20[3] = *((unsigned int *)v5 + 228);
      v27 = *((unsigned int *)v5 + 229);
      v21 = -1073741735;
      v20[5] = -1073741735LL;
      v20[4] = v27;
LABEL_72:
      WdLogEvent5_WdError(v20);
      return v21;
    }
    goto LABEL_36;
  }
  if ( *((_QWORD *)v5 + 248) )
  {
    if ( *((_QWORD *)v5 + 60) && *((_QWORD *)v5 + 66) && *((_QWORD *)v5 + 49) )
      goto LABEL_17;
    goto LABEL_36;
  }
  if ( !*((_QWORD *)v5 + 86) || (a1 = *((_QWORD *)v5 + 66) == 0LL, (_DWORD)a1 != (*((_QWORD *)v5 + 68) == 0LL)) )
  {
LABEL_36:
    v20 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v20[3] = v5;
    v21 = -1073741735;
    v20[4] = -1073741735LL;
    goto LABEL_72;
  }
LABEL_17:
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, v6, a4) + 24) = v5;
  if ( (int)DXGADAPTER::GetDriverVersion(v5) >= 1200 && !*((_DWORD *)v5 + 228) && !*((_DWORD *)v5 + 229) )
  {
LABEL_54:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, v7, v8, v9) + 24) = v5;
    result = 0LL;
    *a2 = 0LL;
    return result;
  }
  if ( (unsigned int)(*((_DWORD *)v5 + 228) - 1) > 0xF )
  {
    v24 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v24 + 24) = v5;
    v25 = *((unsigned int *)v5 + 228);
    goto LABEL_67;
  }
  if ( !*((_DWORD *)v5 + 229) )
  {
    v24 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v24 + 24) = v5;
    v25 = *((unsigned int *)v5 + 229);
LABEL_67:
    *(_QWORD *)(v24 + 32) = v25;
    goto LABEL_68;
  }
  if ( *((_BYTE *)v5 + 1908)
    && *((int *)v5 + 412) >= 4608
    && (!*((_BYTE *)v5 + 1848) || !*((_BYTE *)v5 + 1849) || !*((_QWORD *)v5 + 82)) )
  {
    v24 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v24 + 24) = 17623LL;
LABEL_68:
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v5 + 64) )
    *((_QWORD *)v5 + 64) = SwapChainObOpenProcedure;
  if ( !*((_QWORD *)v5 + 65) )
    *((_QWORD *)v5 + 65) = ADAPTER_DISPLAY::DefaultDdiRecommendVidPnTopology;
  if ( !*((_QWORD *)v5 + 80) )
    *((_QWORD *)v5 + 80) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  v10 = (ADAPTER_DISPLAY *)operator new(0x108uLL, v7, 1, (POOL_TYPE)512);
  if ( v10 )
    v12 = ADAPTER_DISPLAY::ADAPTER_DISPLAY(v10, v5);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v26 = WdLogNewEntry5_WdLowResource(v11);
    v21 = -1073741801;
    *(_QWORD *)(v26 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v26);
    return v21;
  }
  v15 = ADAPTER_DISPLAY::Initialize(v12);
  if ( v15 < 0 )
  {
    ADAPTER_DISPLAY::Destroy(v12);
    ADAPTER_DISPLAY::`scalar deleting destructor'(v12);
  }
  else
  {
    v18 = WdLogNewEntry5_WdEvent(v14, v13, v16, v17);
    *(_QWORD *)(v18 + 24) = v12;
    *(_QWORD *)(v18 + 32) = v5;
    WdLogEvent5_WdEvent(v18);
    *a2 = v12;
  }
  return (unsigned int)v15;
}
