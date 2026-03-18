/*
 * XREFs of ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00E7A7C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00E5674 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C001D774 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00D5328 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00E3BDC (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00E4310 (--0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0148C38 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateRenderCore(
        __int64 (__fastcall **a1)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *),
        struct ADAPTER_RENDER **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 (__fastcall *v6)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // r9
  __int64 (__fastcall *v7)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  ADAPTER_RENDER *v15; // rax
  __int64 v16; // rcx
  ADAPTER_RENDER *v17; // rdi
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rax

  if ( !a1 )
  {
    v27 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v27 + 24) = 483LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !a2 )
  {
    v28 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v28 + 24) = 484LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !*((_BYTE *)a1 + 304)
    || !a1[40]
    || !a1[42]
    || !a1[43]
    || !a1[73]
    || !a1[74]
    || !a1[44]
    || !a1[48]
    || !a1[49]
    || !a1[50]
    || !a1[54]
    || !a1[55]
    || !a1[58]
    || !a1[70]
    || !a1[72]
    || !a1[57]
    || !a1[76] )
  {
    if ( (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1) < 1200 )
    {
      v26 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v26 + 24) = 558LL;
    }
    else
    {
      if ( !a1[40]
        && !a1[42]
        && !a1[43]
        && !a1[73]
        && !a1[74]
        && !a1[44]
        && !a1[48]
        && !a1[49]
        && !a1[50]
        && !a1[54]
        && !a1[55]
        && !a1[58]
        && !a1[72]
        && !a1[76]
        && !a1[41]
        && !a1[47]
        && !a1[75]
        && !a1[83]
        && !a1[45]
        && !a1[46]
        && !a1[69]
        && !a1[71]
        && !a1[77]
        && !a1[78]
        && !a1[79] )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22, v24, v25) + 24) = 546LL;
        result = 0LL;
        *a2 = 0LL;
        return result;
      }
      v26 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v26 + 24) = 540LL;
    }
    goto LABEL_132;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = 510LL;
  if ( !a1[71] )
    a1[71] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[77] )
    a1[77] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[78] )
    a1[78] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  v6 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[79] )
    a1[79] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[69] )
    a1[69] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[45] )
    a1[45] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !a1[46] )
    a1[46] = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  v7 = a1[71];
  if ( v7 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
LABEL_64:
    if ( a1[79] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
      && a1[78] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
      && a1[77] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      goto LABEL_40;
    }
LABEL_99:
    v26 = WdLogNewEntry5_WdError(ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange);
    *(_QWORD *)(v26 + 24) = 611LL;
LABEL_132:
    WdLogEvent5_WdError(v26);
    return 3221225561LL;
  }
  if ( a1[77] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || a1[78] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || a1[79] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    if ( v7 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
      goto LABEL_99;
    goto LABEL_64;
  }
LABEL_40:
  v8 = *((unsigned int *)a1 + 448);
  if ( (((_DWORD)v8 - 4096) & 0xFFFFFCFF) == 0 && (_DWORD)v8 != 4352 && (!a1[41] || !a1[47] || !a1[75]) )
  {
    v26 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v26 + 24) = 631LL;
    goto LABEL_132;
  }
  v9 = *((unsigned int *)a1 + 377);
  if ( (v9 & 4) != 0 )
  {
    if ( !a1[83] )
    {
      v29 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v29 + 24) = 640LL;
LABEL_106:
      WdLogEvent5_WdError(v29);
      return 3221225485LL;
    }
    if ( (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1) < 1105 )
    {
      v31 = WdLogNewEntry5_WdWarning(v11, v10, v12, v6);
      *(_QWORD *)(v31 + 24) = a1;
      WdLogEvent5_WdWarning(v31);
      *((_DWORD *)a1 + 377) &= ~4u;
      a1[83] = 0LL;
    }
    v9 = *((unsigned int *)a1 + 377);
    if ( (v9 & 0x20000000) != 0 )
    {
      v29 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v29 + 24) = 652LL;
      goto LABEL_106;
    }
  }
  if ( *((_DWORD *)a1 + 375) > 4u )
    *((_DWORD *)a1 + 375) = 4;
  if ( *((_DWORD *)a1 + 374)
    && (a1[45] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
     || a1[46] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
  {
    v26 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v26 + 24) = 667LL;
    goto LABEL_132;
  }
  v13 = *((_DWORD *)a1 + 380);
  if ( (v13 & 1) == 0 )
  {
    if ( (v13 & 4) == 0 && (v13 & 0x10) == 0 )
    {
      *((_DWORD *)a1 + 383) = 1;
      *((_DWORD *)a1 + 512) = 1;
      goto LABEL_53;
    }
    goto LABEL_107;
  }
  if ( *((int *)a1 + 448) < 0x2000 )
  {
    v32 = *((_DWORD *)a1 + 383);
    if ( v32 )
    {
      v33 = *((_DWORD *)a1 + 62) * v32;
      if ( v33 <= 0x40 )
      {
        *((_DWORD *)a1 + 512) = v33;
        goto LABEL_53;
      }
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, 0x2000LL, 1LL, v6);
      v30[3] = a1;
      v30[4] = 64LL;
      v30[5] = *((unsigned int *)a1 + 62);
      v30[6] = *((unsigned int *)a1 + 383);
LABEL_108:
      WdLogEvent5_WdWarning(v30);
      return 3221225485LL;
    }
LABEL_107:
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, 0x2000LL, 1LL, v6);
    v30[3] = a1;
    goto LABEL_108;
  }
LABEL_53:
  if ( *((_BYTE *)a1 + 2052)
    && *((int *)a1 + 448) >= 4608
    && (!*((_DWORD *)a1 + 496)
     || !*((_DWORD *)a1 + 497)
     || !*((_BYTE *)a1 + 1994)
     || (*((_DWORD *)a1 + 379) & 2) == 0
     || (*((_DWORD *)a1 + 75) & 0x10) == 0 && (v9 & 4) == 0) )
  {
    v29 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v29 + 24) = 730LL;
    goto LABEL_106;
  }
  v14 = *((unsigned int *)a1 + 448);
  if ( (int)v14 >= 0x2000 && (*((_DWORD *)a1 + 379) & 2) == 0 )
  {
    v29 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v29 + 24) = *((unsigned int *)a1 + 379);
    goto LABEL_106;
  }
  if ( (int)v14 >= 4864 && !a1[94] )
  {
    v29 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v29 + 24) = 750LL;
    goto LABEL_106;
  }
  v15 = (ADAPTER_RENDER *)operator new(0x450uLL, 0x2000LL, 1, (POOL_TYPE)512);
  if ( v15 )
    v17 = ADAPTER_RENDER::ADAPTER_RENDER(v15, (struct DXGADAPTER *)a1);
  else
    v17 = 0LL;
  if ( v17 )
  {
    v19 = ADAPTER_RENDER::Initialize(v17);
    if ( v19 < 0 )
    {
      ADAPTER_RENDER::Destroy(v17);
      ADAPTER_RENDER::`scalar deleting destructor'(v17);
    }
    else
    {
      v20 = WdLogNewEntry5_WdEvent(v18);
      *(_QWORD *)(v20 + 24) = v17;
      *(_QWORD *)(v20 + 32) = a1;
      WdLogEvent5_WdEvent(v20);
      *a2 = v17;
    }
    return (unsigned int)v19;
  }
  else
  {
    v34 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v34 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v34);
    return 3221225495LL;
  }
}
