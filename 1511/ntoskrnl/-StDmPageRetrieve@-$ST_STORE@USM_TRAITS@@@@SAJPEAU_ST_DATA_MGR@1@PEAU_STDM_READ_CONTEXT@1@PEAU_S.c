/*
 * XREFs of ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010F998
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010C0A8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1401104A0 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 * Callees:
 *     MmAreMdlPagesCached @ 0x14010516C (MmAreMdlPagesCached.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14010F674 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     __chkstk @ 0x14015C1E0 (__chkstk.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x140204540 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402048A0 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceIoListBuild@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAXPEAU_PF_QUEUE@@PEAK@Z @ 0x140204C6C (-StDmDeviceIoListBuild@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KP.c)
 *     ?StDmEtaQueueRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14020515C (-StDmEtaQueueRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     StEtaCheckForRefresh @ 0x14020799C (StEtaCheckForRefresh.c)
 *     SmWdWorkItemRegister @ 0x1402096E8 (SmWdWorkItemRegister.c)
 *     SmWdWorkItemUpdate @ 0x1402097D8 (SmWdWorkItemUpdate.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRetrieve(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int128 v5; // xmm0
  __int64 v7; // xmm1_8
  unsigned __int32 *v9; // r15
  unsigned __int64 v10; // r14
  int v11; // ebx
  int v12; // r12d
  int v13; // r13d
  unsigned __int32 v14; // r15d
  int v15; // r8d
  _BYTE *v16; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  void *v20; // rsp
  void *v21; // rsp
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int32 v28; // [rsp+30h] [rbp+0h] BYREF
  _BYTE v29[12]; // [rsp+34h] [rbp+4h] BYREF
  _BYTE *v30; // [rsp+40h] [rbp+10h]
  __int64 v31; // [rsp+48h] [rbp+18h] BYREF
  __int128 v32; // [rsp+50h] [rbp+20h] BYREF
  __int64 v33; // [rsp+60h] [rbp+30h]
  char v34; // [rsp+68h] [rbp+38h] BYREF

  v3 = *(_DWORD *)(a3 + 8);
  *(_BYTE *)(a3 + 8) = 0;
  v5 = *(_OWORD *)(a3 + 8);
  v7 = *(_QWORD *)(a3 + 24);
  v30 = &v29[4];
  v31 = a2;
  v28 = 0;
  *(_DWORD *)&v29[8] = 0;
  *(_QWORD *)v29 = (unsigned __int8)v3;
  v33 = v7;
  v32 = v5;
  if ( (unsigned __int8)v3 > 1u && (unsigned __int8)*(_DWORD *)(a1 + 128) )
  {
    v18 = 16LL * (unsigned __int8)v3 + 15;
    if ( v18 <= 16 * (unsigned __int64)(unsigned __int8)v3 )
      v18 = 0xFFFFFFFFFFFFFF0LL;
    v19 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
    v20 = alloca(v19);
    v21 = alloca(v19);
    v9 = &v28;
  }
  else
  {
    v9 = (unsigned __int32 *)&v34;
  }
  if ( *(_QWORD *)(a2 + 48) && !(unsigned int)MmAreMdlPagesCached(*(_QWORD *)(a3 + 16)) )
    *(_DWORD *)(a3 + 8) |= 0x8000000u;
  if ( (unsigned __int8)*(_DWORD *)(a1 + 128) == 1 )
  {
    SmWdWorkItemRegister(&unk_140303DC8, *(unsigned int *)(*(_QWORD *)(a1 + 152) + 4480LL), a3, 1LL);
    v28 = 1;
  }
  v10 = (unsigned __int64)v9;
  v11 = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(a1, a2, (__int64)&v32, a3, (__int64)v9);
  if ( v11 < 0 )
  {
LABEL_40:
    v14 = v28;
    if ( (*(_DWORD *)(a1 + 128) & 0x100) != 0 )
      v11 = -1073741275;
  }
  else
  {
    v12 = v33;
    v13 = v32;
    while ( 1 )
    {
      if ( v11 == 259 )
        v10 += 16LL;
      v13 ^= (unsigned __int8)(v13 ^ (v13 + 1));
      LODWORD(v32) = v13;
      if ( (unsigned int)(unsigned __int8)v13 >= *(_DWORD *)v29 )
        break;
      LODWORD(v33) = ++v12;
      v11 = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(a1, v31, (__int64)&v32, a3, v10);
      if ( v11 < 0 )
        goto LABEL_40;
    }
    if ( v10 <= (unsigned __int64)v9 )
    {
      v11 = 0;
LABEL_17:
      v14 = v28;
      goto LABEL_18;
    }
    v11 = ST_STORE<SM_TRAITS>::StDmDeviceIoListBuild(
            a1,
            v9,
            (unsigned int)((__int64)(v10 - (_QWORD)v9) >> 4),
            a3,
            &v29[4],
            &v31);
    if ( v11 < 0 )
      goto LABEL_17;
    v22 = *(_QWORD *)v30 >> 3;
    if ( (unsigned int)v22 > 1 )
      SmWdWorkItemRegister(
        &unk_140303DC8,
        *(unsigned int *)(*(_QWORD *)(a1 + 152) + 4480LL),
        a3,
        (unsigned int)(v22 - 1));
    v23 = *(_QWORD *)(a1 + 440);
    v14 = 0;
    v24 = *(unsigned int *)(a1 + 448);
    if ( *(int *)(v23 + 8) > 0 )
    {
      v25 = *(_QWORD *)v23 + *(unsigned int *)(v23 + 12);
      if ( v25 + (unsigned __int64)(unsigned int)v31 < v24 + *(_QWORD *)&KeQueryPerformanceCounter(0LL) )
        goto LABEL_34;
    }
    else if ( (unsigned int)v31 < (unsigned int)v24 )
    {
LABEL_34:
      v11 = ST_STORE<SM_TRAITS>::StDeviceIoIssue(a1, &v29[4]);
      goto LABEL_18;
    }
    if ( (++*(_DWORD *)(a1 + 452) & 0x7F) == 0
      && (unsigned int)StEtaCheckForRefresh(*(_QWORD *)(a1 + 440), 0LL, 0LL, 0LL) )
    {
      ST_STORE<SM_TRAITS>::StDmEtaQueueRefresh(a1);
    }
    _InterlockedOr((volatile signed __int32 *)(a3 + 8), 0x2000000u);
    v11 = -1073741691;
  }
LABEL_18:
  v15 = (unsigned __int8)v32;
  if ( (unsigned __int8)*(_DWORD *)(a3 + 8) != (unsigned __int8)v32 )
  {
    if ( (unsigned __int8)*(_DWORD *)(a1 + 128) == 1 )
    {
      _m_prefetchw((const void *)(a3 + 8));
      v28 = *(_DWORD *)(a3 + 8);
      do
      {
        *(_DWORD *)v29 = v28;
        v28 = v15 | v28 & 0xFFFFFF00;
        v28 = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 8), v28, *(signed __int32 *)v29);
      }
      while ( v28 != *(_DWORD *)v29 );
    }
    else
    {
      *(_BYTE *)(a3 + 8) = v32;
    }
  }
  v16 = v30;
  if ( v30 != &v29[4] )
  {
    while ( v16 != &v29[4] )
    {
      v26 = *(_QWORD *)&v29[4];
      *(_QWORD *)&v29[4] = **(_QWORD **)&v29[4] & 0xFFFFFFFFFFFFFFF8uLL;
      if ( (_BYTE *)v26 == v16 )
      {
        *(_QWORD *)&v29[4] = 0LL;
        v30 = &v29[4];
      }
      else
      {
        *(_QWORD *)v16 = *(_QWORD *)v16 & 7LL | (8LL * (*(_QWORD *)v16 >> 3) - 8);
      }
      if ( (*(_DWORD *)(v26 + 28) & 1) == 0 )
      {
        *(_DWORD *)(v26 + 28) |= 1u;
        v27 = *(_QWORD *)(v26 + 16);
        if ( v27 )
          *(_DWORD *)(v27 + 4) = v11;
        else
          *(_DWORD *)(v26 + 8) = v11;
      }
      ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(a1, v26);
      v16 = v30;
    }
    v11 = 259;
  }
  if ( v14 )
  {
    SmWdWorkItemUpdate(&unk_140303DC8, *(_QWORD *)(a1 + 152), a3, (unsigned int)v11);
    return 259;
  }
  return (unsigned int)v11;
}
