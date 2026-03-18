/*
 * XREFs of ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00DB5E4
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00BEB04 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C0017B64 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00AAAC0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00C235C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00C2C1C (--0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0123630 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateRenderCore(
        __int64 (__fastcall **a1)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *),
        struct ADAPTER_RENDER **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 (__fastcall *v7)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rdx
  __int64 (__fastcall *v8)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // r9
  __int64 (__fastcall *v9)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  ADAPTER_RENDER *v17; // rax
  __int64 v18; // rcx
  ADAPTER_RENDER *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // esi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 result; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax

  if ( !a1 )
  {
    v32 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v32 + 24) = 16738LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( !a2 )
  {
    v33 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v33 + 24) = 16739LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( !*((_BYTE *)a1 + 288)
    || !a1[38]
    || !a1[40]
    || !a1[41]
    || !a1[71]
    || !a1[72]
    || !a1[42]
    || !a1[46]
    || !a1[47]
    || !a1[48]
    || !a1[52]
    || !a1[53]
    || !a1[56]
    || !a1[68]
    || !a1[70]
    || !a1[55]
    || !a1[74] )
  {
    if ( (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1) < 1200 )
    {
      v31 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v31 + 24) = 16813LL;
    }
    else
    {
      if ( !a1[38]
        && !a1[40]
        && !a1[41]
        && !a1[71]
        && !a1[72]
        && !a1[42]
        && !a1[46]
        && !a1[47]
        && !a1[48]
        && !a1[52]
        && !a1[53]
        && !a1[56]
        && !a1[70]
        && !a1[74]
        && !a1[39]
        && !a1[45]
        && !a1[73]
        && !a1[81]
        && !a1[43]
        && !a1[44]
        && !a1[67]
        && !a1[69]
        && !a1[75]
        && !a1[76]
        && !a1[77] )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v28, v27, v29, v30) + 24) = 16801LL;
        result = 0LL;
        *a2 = 0LL;
        return result;
      }
      v31 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v31 + 24) = 16795LL;
    }
    goto LABEL_128;
  }
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v7 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  *(_QWORD *)(v6 + 24) = 16765LL;
  if ( !a1[69] )
    a1[69] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[75] )
    a1[75] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[76] )
    a1[76] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  v8 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[77] )
    a1[77] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[67] )
    a1[67] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[43] )
    a1[43] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[44] )
    a1[44] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  v9 = a1[69];
  if ( v9 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
LABEL_69:
    if ( a1[77] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
      && a1[76] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
      && a1[75] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      goto LABEL_40;
    }
LABEL_102:
    v31 = WdLogNewEntry5_WdError(ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange);
    *(_QWORD *)(v31 + 24) = 16866LL;
LABEL_128:
    WdLogEvent5_WdError(v31);
    return 3221225561LL;
  }
  if ( a1[75] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || a1[76] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || a1[77] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    if ( v9 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
      goto LABEL_102;
    goto LABEL_69;
  }
LABEL_40:
  v10 = *((unsigned int *)a1 + 412);
  if ( (((_DWORD)v10 - 4096) & 0xFFFFFCFF) == 0 && (_DWORD)v10 != 4352 && (!a1[39] || !a1[45] || !a1[73]) )
  {
    v31 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v31 + 24) = 16886LL;
    goto LABEL_128;
  }
  v11 = *((unsigned int *)a1 + 341);
  if ( (v11 & 4) != 0 )
  {
    if ( !a1[81] )
    {
      v34 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v34 + 24) = 16895LL;
LABEL_106:
      WdLogEvent5_WdError(v34);
      return 3221225485LL;
    }
    if ( (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1) < 1105 )
    {
      v36 = WdLogNewEntry5_WdWarning(v12, v7, v13, v8);
      *(_QWORD *)(v36 + 24) = a1;
      WdLogEvent5_WdWarning(v36);
      *((_DWORD *)a1 + 341) &= ~4u;
      a1[81] = 0LL;
    }
    v11 = *((unsigned int *)a1 + 341);
    if ( (v11 & 0x20000000) != 0 )
    {
      v34 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v34 + 24) = 16907LL;
      goto LABEL_106;
    }
  }
  if ( *((_DWORD *)a1 + 339) > 4u )
    *((_DWORD *)a1 + 339) = 4;
  if ( *((_DWORD *)a1 + 338)
    && (a1[43] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
     || a1[44] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
  {
    v31 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v31 + 24) = 16922LL;
    goto LABEL_128;
  }
  v14 = *((_DWORD *)a1 + 344);
  if ( (v14 & 1) == 0 )
  {
    if ( (v14 & 4) == 0 && (v14 & 0x10) == 0 )
    {
      *((_DWORD *)a1 + 347) = 1;
      *((_DWORD *)a1 + 476) = 1;
      goto LABEL_60;
    }
    goto LABEL_107;
  }
  if ( *((int *)a1 + 412) < 0x2000 )
  {
    v15 = *((_DWORD *)a1 + 347);
    if ( v15 )
    {
      v16 = *((_DWORD *)a1 + 58) * v15;
      if ( v16 <= 0x40 )
      {
        *((_DWORD *)a1 + 476) = v16;
        goto LABEL_60;
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v7, 1LL, v8);
      v35[3] = a1;
      v35[4] = 64LL;
      v35[5] = *((unsigned int *)a1 + 58);
      v35[6] = *((unsigned int *)a1 + 347);
LABEL_108:
      WdLogEvent5_WdWarning(v35);
      return 3221225485LL;
    }
LABEL_107:
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v7, 1LL, v8);
    v35[3] = a1;
    goto LABEL_108;
  }
LABEL_60:
  if ( *((_BYTE *)a1 + 1908)
    && *((int *)a1 + 412) >= 4608
    && (!*((_DWORD *)a1 + 460)
     || !*((_DWORD *)a1 + 461)
     || !*((_BYTE *)a1 + 1850)
     || (*((_DWORD *)a1 + 343) & 2) == 0
     || (*((_DWORD *)a1 + 71) & 8) == 0 && (v11 & 4) == 0) )
  {
    v34 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v34 + 24) = 16985LL;
    goto LABEL_106;
  }
  if ( *((int *)a1 + 412) >= 4864 && !a1[92] )
  {
    v34 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v34 + 24) = 16995LL;
    goto LABEL_106;
  }
  v17 = (ADAPTER_RENDER *)operator new(0x430uLL, (__int64)v7, 1, (POOL_TYPE)512);
  if ( v17 )
    v19 = ADAPTER_RENDER::ADAPTER_RENDER(v17, (struct DXGADAPTER *)a1);
  else
    v19 = 0LL;
  if ( v19 )
  {
    v22 = ADAPTER_RENDER::Initialize(v19);
    if ( v22 < 0 )
    {
      ADAPTER_RENDER::Destroy(v19);
      ADAPTER_RENDER::`scalar deleting destructor'(v19);
    }
    else
    {
      v25 = WdLogNewEntry5_WdEvent(v21, v20, v23, v24);
      *(_QWORD *)(v25 + 24) = v19;
      *(_QWORD *)(v25 + 32) = a1;
      WdLogEvent5_WdEvent(v25);
      *a2 = v19;
    }
    return (unsigned int)v22;
  }
  else
  {
    v37 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v37 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v37);
    return 3221225495LL;
  }
}
