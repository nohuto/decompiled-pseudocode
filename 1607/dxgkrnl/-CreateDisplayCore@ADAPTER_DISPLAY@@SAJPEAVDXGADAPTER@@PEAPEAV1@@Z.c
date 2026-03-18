/*
 * XREFs of ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00E7778
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00E5674 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C001D754 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00D5328 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00F6330 (--0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00F66C0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0147394 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
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
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rax
  __int64 result; // rax
  _QWORD *v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx

  v5 = (struct DXGADAPTER *)a1;
  if ( !a1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v19 + 24) = 3289LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v20 + 24) = 3290LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v6 = *((_QWORD *)v5 + 59);
  if ( !v6
    || !*((_QWORD *)v5 + 60)
    || !*((_QWORD *)v5 + 61)
    || !*((_QWORD *)v5 + 63)
    || !*((_QWORD *)v5 + 64)
    || !*((_QWORD *)v5 + 65)
    || !*((_QWORD *)v5 + 52)
    || !*((_QWORD *)v5 + 53) )
  {
    if ( ((int)DXGADAPTER::GetDriverVersion(v5) >= 1200 || (*((_DWORD *)v5 + 75) & 0x10) != 0)
      && !v8
      && !*((_QWORD *)v5 + 60)
      && !*((_QWORD *)v5 + 61)
      && !*((_QWORD *)v5 + 62)
      && !*((_QWORD *)v5 + 63)
      && !*((_QWORD *)v5 + 64)
      && !*((_QWORD *)v5 + 65)
      && !*((_QWORD *)v5 + 51)
      && !*((_QWORD *)v5 + 52)
      && !*((_QWORD *)v5 + 53)
      && !*((_QWORD *)v5 + 68)
      && !*((_QWORD *)v5 + 66)
      && !*((_QWORD *)v5 + 67)
      && !*((_QWORD *)v5 + 82) )
    {
      if ( !*((_DWORD *)v5 + 252) && !*((_DWORD *)v5 + 253) )
        goto LABEL_56;
      v17 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v17[3] = *((unsigned int *)v5 + 252);
      v24 = *((unsigned int *)v5 + 253);
      v18 = -1073741735;
      v17[5] = -1073741735LL;
      v17[4] = v24;
LABEL_74:
      WdLogEvent5_WdError(v17);
      return v18;
    }
    goto LABEL_38;
  }
  if ( *((_QWORD *)v5 + 267) )
  {
    if ( *((_QWORD *)v5 + 62) && *((_QWORD *)v5 + 68) && *((_QWORD *)v5 + 51) )
      goto LABEL_17;
    goto LABEL_38;
  }
  if ( !*((_QWORD *)v5 + 88) || (a1 = *((_QWORD *)v5 + 68) == 0LL, (_DWORD)a1 != (*((_QWORD *)v5 + 70) == 0LL)) )
  {
LABEL_38:
    v17 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v17[3] = v5;
    v18 = -1073741735;
    v17[4] = -1073741735LL;
    goto LABEL_74;
  }
LABEL_17:
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, v6, a4) + 24) = v5;
  if ( (int)DXGADAPTER::GetDriverVersion(v5) >= 1200 && !*((_DWORD *)v5 + 252) && !*((_DWORD *)v5 + 253) )
  {
LABEL_56:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, v7, v8, v9) + 24) = v5;
    result = 0LL;
    *a2 = 0LL;
    return result;
  }
  if ( (unsigned int)(*((_DWORD *)v5 + 252) - 1) > 0xF )
  {
    v21 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v21 + 24) = v5;
    v22 = *((unsigned int *)v5 + 252);
    goto LABEL_69;
  }
  if ( !*((_DWORD *)v5 + 253) )
  {
    v21 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v21 + 24) = v5;
    v22 = *((unsigned int *)v5 + 253);
LABEL_69:
    *(_QWORD *)(v21 + 32) = v22;
    goto LABEL_70;
  }
  if ( *((_BYTE *)v5 + 2052)
    && *((int *)v5 + 448) >= 4608
    && (!*((_BYTE *)v5 + 1992) || !*((_BYTE *)v5 + 1993) || !*((_QWORD *)v5 + 84)) )
  {
    v21 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v21 + 24) = 3459LL;
LABEL_70:
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v5 + 66) )
    *((_QWORD *)v5 + 66) = SwapChainObOpenProcedure;
  if ( !*((_QWORD *)v5 + 67) )
    *((_QWORD *)v5 + 67) = ADAPTER_DISPLAY::DefaultDdiRecommendVidPnTopology;
  if ( !*((_QWORD *)v5 + 82) )
    *((_QWORD *)v5 + 82) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)v5 + 119) )
    *((_QWORD *)v5 + 119) = DxgkQueryFSEBlock;
  v10 = (ADAPTER_DISPLAY *)operator new(0x138uLL, v7, 1, (POOL_TYPE)512);
  if ( v10 )
    v12 = ADAPTER_DISPLAY::ADAPTER_DISPLAY(v10, v5);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v23 = WdLogNewEntry5_WdLowResource(v11);
    v18 = -1073741801;
    *(_QWORD *)(v23 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v23);
    return v18;
  }
  v14 = ADAPTER_DISPLAY::Initialize(v12);
  if ( v14 < 0 )
  {
    ADAPTER_DISPLAY::Destroy(v12);
    ADAPTER_DISPLAY::`scalar deleting destructor'(v12);
  }
  else
  {
    v15 = WdLogNewEntry5_WdEvent(v13);
    *(_QWORD *)(v15 + 24) = v12;
    *(_QWORD *)(v15 + 32) = v5;
    WdLogEvent5_WdEvent(v15);
    *a2 = v12;
  }
  return (unsigned int)v14;
}
