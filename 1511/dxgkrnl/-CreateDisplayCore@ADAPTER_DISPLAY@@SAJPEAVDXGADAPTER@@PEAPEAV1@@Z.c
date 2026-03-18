/*
 * XREFs of ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00DA798
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D7050 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C0019618 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00BE388 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00DAF78 (--0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00DB25C (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01290DC (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  ADAPTER_DISPLAY *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 result; // rax
  _QWORD *v23; // rax
  unsigned int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx

  v5 = (struct DXGADAPTER *)a1;
  if ( !a1 )
  {
    v25 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v25 + 24) = 17831LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !a2 )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v26 + 24) = 17832LL;
    WdLogEvent5_WdAssertion(v26);
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
    if ( ((int)DXGADAPTER::GetDriverVersion(v5) >= 1200 || (*((_DWORD *)v5 + 71) & 0x10) != 0)
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
      if ( !*((_DWORD *)v5 + 230) && !*((_DWORD *)v5 + 231) )
        goto LABEL_54;
      v23 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v23[3] = *((unsigned int *)v5 + 230);
      v30 = *((unsigned int *)v5 + 231);
      v24 = -1073741735;
      v23[5] = -1073741735LL;
      v23[4] = v30;
LABEL_72:
      WdLogEvent5_WdError(v23);
      return v24;
    }
    goto LABEL_36;
  }
  if ( *((_QWORD *)v5 + 249) )
  {
    if ( *((_QWORD *)v5 + 60) && *((_QWORD *)v5 + 66) && *((_QWORD *)v5 + 49) )
      goto LABEL_17;
    goto LABEL_36;
  }
  if ( !*((_QWORD *)v5 + 86) || (a1 = *((_QWORD *)v5 + 66) == 0LL, (_DWORD)a1 != (*((_QWORD *)v5 + 68) == 0LL)) )
  {
LABEL_36:
    v23 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v23[3] = v5;
    v24 = -1073741735;
    v23[4] = -1073741735LL;
    goto LABEL_72;
  }
LABEL_17:
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, v6, a4) + 24) = v5;
  if ( (int)DXGADAPTER::GetDriverVersion(v5) >= 1200 && !*((_DWORD *)v5 + 230) && !*((_DWORD *)v5 + 231) )
  {
LABEL_54:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, v7, v8, v9) + 24) = v5;
    result = 0LL;
    *a2 = 0LL;
    return result;
  }
  if ( (unsigned int)(*((_DWORD *)v5 + 230) - 1) > 0xF )
  {
    v27 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v27 + 24) = v5;
    v28 = *((unsigned int *)v5 + 230);
    goto LABEL_67;
  }
  if ( !*((_DWORD *)v5 + 231) )
  {
    v27 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v27 + 24) = v5;
    v28 = *((unsigned int *)v5 + 231);
LABEL_67:
    *(_QWORD *)(v27 + 32) = v28;
    goto LABEL_68;
  }
  if ( *((_BYTE *)v5 + 1916)
    && *((int *)v5 + 414) >= 4608
    && (!*((_BYTE *)v5 + 1856) || !*((_BYTE *)v5 + 1857) || !*((_QWORD *)v5 + 82)) )
  {
    v27 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v27 + 24) = 18001LL;
LABEL_68:
    WdLogEvent5_WdError(v27);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v5 + 64) )
    *((_QWORD *)v5 + 64) = SwapChainObOpenProcedure;
  if ( !*((_QWORD *)v5 + 65) )
    *((_QWORD *)v5 + 65) = ADAPTER_DISPLAY::DefaultDdiRecommendVidPnTopology;
  if ( !*((_QWORD *)v5 + 80) )
    *((_QWORD *)v5 + 80) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  v10 = (ADAPTER_DISPLAY *)operator new(0x150uLL, v7, 1, (POOL_TYPE)512);
  if ( v10 )
    v15 = ADAPTER_DISPLAY::ADAPTER_DISPLAY(v10, v5);
  else
    v15 = 0LL;
  if ( !v15 )
  {
    v29 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    v24 = -1073741801;
    *(_QWORD *)(v29 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v29);
    return v24;
  }
  v18 = ADAPTER_DISPLAY::Initialize(v15);
  if ( v18 < 0 )
  {
    ADAPTER_DISPLAY::Destroy(v15);
    ADAPTER_DISPLAY::`scalar deleting destructor'(v15);
  }
  else
  {
    v21 = WdLogNewEntry5_WdEvent(v17, v16, v19, v20);
    *(_QWORD *)(v21 + 24) = v15;
    *(_QWORD *)(v21 + 32) = v5;
    WdLogEvent5_WdEvent(v21);
    *a2 = v15;
  }
  return (unsigned int)v18;
}
