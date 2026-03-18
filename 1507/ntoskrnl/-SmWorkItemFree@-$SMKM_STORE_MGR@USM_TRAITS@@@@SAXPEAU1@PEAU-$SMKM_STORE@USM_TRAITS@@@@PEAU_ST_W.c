/*
 * XREFs of ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14013ED50
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DB094 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x140140244 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmWdCompleteWorkItems@@YAXPEAU_PF_QUEUE@@PEAXJK@Z @ 0x1402570EC (-SmWdCompleteWorkItems@@YAXPEAU_PF_QUEUE@@PEAXJK@Z.c)
 *     SmWdDPC @ 0x140258450 (SmWdDPC.c)
 *     SmWdWorkItemUpdate @ 0x1402589B4 (SmWdWorkItemUpdate.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14013EEA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14013F004 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rbp
  int v5; // ebx
  int v6; // edi
  int v9; // esi
  __int128 v10; // xmm1
  int v11; // ebx
  struct _EX_RUNDOWN_REF *v12; // rcx
  unsigned __int64 v13; // rtt
  void *v14; // rcx
  int v15; // eax
  _OWORD v16[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]

  v4 = *(_QWORD *)(a3 + 32);
  v5 = *(_DWORD *)a3 & 7;
  v6 = 1;
  v9 = 1;
  if ( a4 )
  {
    v10 = *(_OWORD *)(a3 + 16);
    v16[0] = *(_OWORD *)a3;
    v17 = *(_QWORD *)(a3 + 32);
    v16[1] = v10;
  }
  if ( v5 >= 4 )
  {
    if ( v5 == 5 )
    {
      v14 = (void *)a3;
      if ( (*(_DWORD *)(a3 + 8) & 7) != 0 )
      {
        v11 = 0;
        ExFreePoolWithTag((PVOID)a3, 0);
        goto LABEL_7;
      }
    }
    else
    {
      v11 = 0;
      v15 = *(_DWORD *)(a3 + 8) & 7;
      if ( !v15 )
      {
        *(_QWORD *)(a3 + 32) = 0LL;
        goto LABEL_7;
      }
      if ( v15 != 3 )
      {
        if ( (unsigned int)(v15 - 1) <= 1 )
          v9 = 0;
        goto LABEL_7;
      }
      v14 = (void *)a3;
    }
    ExFreePoolWithTag(v14, 0);
LABEL_13:
    v12 = (struct _EX_RUNDOWN_REF *)((char *)&unk_140350548 + 176 * (*(_DWORD *)(a2 + 4480) & 0x1F));
    _m_prefetchw(v12);
    v13 = v12->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v13 - 2, v13) )
      ExfReleaseRundownProtection(v12);
    return;
  }
  if ( v5 == 2 && (*(_DWORD *)(a3 + 8) & 0x4000000) != 0 )
  {
    if ( LOWORD(stru_140352B20.Alignment) >= 0x1000u )
      ExFreePoolWithTag((PVOID)a3, 0);
    else
      RtlpInterlockedPushEntrySList(&stru_140352B20, (PSLIST_ENTRY)a3);
    goto LABEL_6;
  }
  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(SmGlobals, a3, v4);
  if ( v5 != 1 )
  {
LABEL_6:
    v11 = 0;
    goto LABEL_7;
  }
  v11 = 1;
LABEL_7:
  if ( a4 )
    v6 = ((__int64 (__fastcall *)(_OWORD *, __int64, __int64, _QWORD))SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete)(
           v16,
           a2,
           a2,
           *a4);
  if ( v6 && v11 )
    SmFpFree(&unk_140352B30, 0LL, v4, v4);
  if ( v9 )
    goto LABEL_13;
}
