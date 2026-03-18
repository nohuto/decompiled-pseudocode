/*
 * XREFs of ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00DAA98
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D7050 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C0019638 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00BE388 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00D5DB0 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00D64EC (--0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01292F4 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
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
  ADAPTER_RENDER *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  ADAPTER_RENDER *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // esi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 result; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rax

  if ( !a1 )
  {
    v33 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v33 + 24) = 17116LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( !a2 )
  {
    v34 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v34 + 24) = 17117LL;
    WdLogEvent5_WdAssertion(v34);
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
      v32 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v32 + 24) = 17191LL;
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
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v28, v30, v31) + 24) = 17179LL;
        result = 0LL;
        *a2 = 0LL;
        return result;
      }
      v32 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v32 + 24) = 17173LL;
    }
    goto LABEL_130;
  }
  v6 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v7 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  *(_QWORD *)(v6 + 24) = 17143LL;
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
LABEL_60:
    if ( a1[77] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
      && a1[76] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
      && a1[75] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      goto LABEL_40;
    }
LABEL_98:
    v32 = WdLogNewEntry5_WdError(ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange);
    *(_QWORD *)(v32 + 24) = 17244LL;
LABEL_130:
    WdLogEvent5_WdError(v32);
    return 3221225561LL;
  }
  if ( a1[75] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || a1[76] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || a1[77] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    if ( v9 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
      goto LABEL_98;
    goto LABEL_60;
  }
LABEL_40:
  v10 = *((unsigned int *)a1 + 414);
  if ( (((_DWORD)v10 - 4096) & 0xFFFFFCFF) == 0 && (_DWORD)v10 != 4352 && (!a1[39] || !a1[45] || !a1[73]) )
  {
    v32 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v32 + 24) = 17264LL;
    goto LABEL_130;
  }
  v11 = *((unsigned int *)a1 + 343);
  if ( (v11 & 4) != 0 )
  {
    if ( !a1[81] )
    {
      v35 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v35 + 24) = 17273LL;
LABEL_105:
      WdLogEvent5_WdError(v35);
      return 3221225485LL;
    }
    if ( (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)a1) < 1105 )
    {
      v37 = WdLogNewEntry5_WdWarning(v12, v7, v13, v8);
      *(_QWORD *)(v37 + 24) = a1;
      WdLogEvent5_WdWarning(v37);
      *((_DWORD *)a1 + 343) &= ~4u;
      a1[81] = 0LL;
    }
    v11 = *((unsigned int *)a1 + 343);
    if ( (v11 & 0x20000000) != 0 )
    {
      v35 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v35 + 24) = 17285LL;
      goto LABEL_105;
    }
  }
  if ( *((_DWORD *)a1 + 341) > 4u )
    *((_DWORD *)a1 + 341) = 4;
  if ( *((_DWORD *)a1 + 340)
    && (a1[43] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
     || a1[44] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
  {
    v32 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v32 + 24) = 17300LL;
    goto LABEL_130;
  }
  v14 = *((_DWORD *)a1 + 346);
  if ( (v14 & 1) == 0 )
  {
    if ( (v14 & 4) == 0 && (v14 & 0x10) == 0 )
    {
      *((_DWORD *)a1 + 349) = 1;
      *((_DWORD *)a1 + 478) = 1;
      goto LABEL_51;
    }
    goto LABEL_106;
  }
  if ( *((int *)a1 + 414) < 0x2000 )
  {
    v38 = *((_DWORD *)a1 + 349);
    if ( v38 )
    {
      v39 = *((_DWORD *)a1 + 58) * v38;
      if ( v39 <= 0x40 )
      {
        *((_DWORD *)a1 + 478) = v39;
        goto LABEL_51;
      }
      v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v7, 1LL, v8);
      v36[3] = a1;
      v36[4] = 64LL;
      v36[5] = *((unsigned int *)a1 + 58);
      v36[6] = *((unsigned int *)a1 + 349);
LABEL_107:
      WdLogEvent5_WdWarning(v36);
      return 3221225485LL;
    }
LABEL_106:
    v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v7, 1LL, v8);
    v36[3] = a1;
    goto LABEL_107;
  }
LABEL_51:
  if ( *((_BYTE *)a1 + 1916)
    && *((int *)a1 + 414) >= 4608
    && (!*((_DWORD *)a1 + 462)
     || !*((_DWORD *)a1 + 463)
     || !*((_BYTE *)a1 + 1858)
     || (*((_DWORD *)a1 + 345) & 2) == 0
     || (*((_DWORD *)a1 + 71) & 0x10) == 0 && (v11 & 4) == 0) )
  {
    v35 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v35 + 24) = 17363LL;
    goto LABEL_105;
  }
  if ( *((int *)a1 + 414) >= 4864 && !a1[92] )
  {
    v35 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v35 + 24) = 17373LL;
    goto LABEL_105;
  }
  v15 = (ADAPTER_RENDER *)operator new(0x480uLL, (__int64)v7, 1, (POOL_TYPE)512);
  if ( v15 )
    v20 = ADAPTER_RENDER::ADAPTER_RENDER(v15, (struct DXGADAPTER *)a1);
  else
    v20 = 0LL;
  if ( v20 )
  {
    v23 = ADAPTER_RENDER::Initialize(v20);
    if ( v23 < 0 )
    {
      ADAPTER_RENDER::Destroy(v20);
      ADAPTER_RENDER::`scalar deleting destructor'(v20);
    }
    else
    {
      v26 = WdLogNewEntry5_WdEvent(v22, v21, v24, v25);
      *(_QWORD *)(v26 + 24) = v20;
      *(_QWORD *)(v26 + 32) = a1;
      WdLogEvent5_WdEvent(v26);
      *a2 = v20;
    }
    return (unsigned int)v23;
  }
  else
  {
    v40 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    *(_QWORD *)(v40 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v40);
    return 3221225495LL;
  }
}
