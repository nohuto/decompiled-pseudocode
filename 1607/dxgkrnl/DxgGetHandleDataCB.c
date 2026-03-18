/*
 * XREFs of DxgGetHandleDataCB @ 0x1C015FD00
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00A5A60 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

ULONG_PTR __fastcall DxgGetHandleDataCB(unsigned int *a1)
{
  struct DXGPROCESS *Current; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // eax
  ULONG_PTR Count; // rbx
  unsigned int v9; // ecx
  __int64 v10; // r9
  int v11; // edx
  struct _EX_RUNDOWN_REF *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _EX_RUNDOWN_REF *v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // r9
  int v26; // edx
  struct DXGRESOURCE *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _EX_RUNDOWN_REF *v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  struct _EX_RUNDOWN_REF *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _BYTE v41[32]; // [rsp+20h] [rbp-20h] BYREF
  struct _EX_RUNDOWN_REF *v42; // [rsp+50h] [rbp+10h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)a1);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v41, (struct _KTHREAD **)Current);
  v7 = a1[1];
  Count = 0LL;
  if ( v7 != 1 )
  {
    if ( v7 != 2 )
    {
      v39 = WdLogNewEntry5_WdWarning(v4, v3, v5, v6);
      *(_QWORD *)(v39 + 24) = (int)a1[1];
      WdLogEvent5_WdWarning(v39);
      goto LABEL_46;
    }
    v24 = (*a1 >> 6) & 0xFFFFFF;
    if ( v24 < *((_DWORD *)Current + 56)
      && (v25 = *((_QWORD *)Current + 26),
          v26 = *(_DWORD *)(v25 + 16LL * v24 + 8),
          ((*a1 >> 26) & 0x30) == (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x30))
      && ((v26 & 0x1000) == 0 || (v26 & 0x2000) != 0)
      && (v26 & 0xF) != 0
      && (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0xF) == 4 )
    {
      v27 = *(struct DXGRESOURCE **)(v25 + 16LL * v24);
    }
    else
    {
      v27 = 0LL;
    }
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v42, v27);
    v31 = v42;
    if ( v42 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42[1].Count + 16) + 16LL) + 192LL) + 64LL)
                        + 40LL);
        if ( *(_DWORD *)(v32 + 28) >= 0x2003u )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v42, v29);
          v33[3] = 275LL;
          v33[4] = 20LL;
          v33[5] = *(_QWORD *)(*(_QWORD *)(v42[1].Count + 16) + 16LL);
          v33[6] = 0LL;
          v33[7] = 0LL;
          WdLogEvent5_WdCriticalError(v33);
          v31 = v42;
        }
      }
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v31[1].Count + 16) + 16LL)) )
      {
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v35) + 191) )
        {
          v37 = WdLogNewEntry5_WdAssertion(v36);
          *(_QWORD *)(v37 + 24) = 126LL;
          WdLogEvent5_WdAssertion(v37);
LABEL_44:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v42);
          goto LABEL_46;
        }
        v34 = v42;
      }
      if ( (HIDWORD(v34->Ptr) & 1) != 0 )
        Count = *(_QWORD *)(v34[7].Count + 16);
      else
        Count = v34[7].Count;
      goto LABEL_44;
    }
    v38 = WdLogNewEntry5_WdWarning(v28, 0LL, v29, v30);
    *(_QWORD *)(v38 + 24) = *a1;
    WdLogEvent5_WdWarning(v38);
    goto LABEL_44;
  }
  v9 = (*a1 >> 6) & 0xFFFFFF;
  if ( v9 < *((_DWORD *)Current + 56)
    && (v10 = *((_QWORD *)Current + 26),
        v11 = *(_DWORD *)(v10 + 16LL * v9 + 8),
        ((*a1 >> 26) & 0x30) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x30))
    && ((v11 & 0x1000) == 0 || (v11 & 0x2000) != 0)
    && (v11 & 0xF) != 0
    && (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0xF) == 5 )
  {
    v12 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * v9);
  }
  else
  {
    v12 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v42, v12);
  v16 = v42;
  if ( !v42 )
  {
    v23 = WdLogNewEntry5_WdWarning(v13, 0LL, v14, v15);
    *(_QWORD *)(v23 + 24) = *a1;
    WdLogEvent5_WdWarning(v23);
    goto LABEL_22;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42[1].Count + 16) + 16LL) + 192LL) + 64LL) + 40LL);
    if ( *(_DWORD *)(v17 + 28) >= 0x2003u )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v42, v14);
      v18[3] = 275LL;
      v18[4] = 20LL;
      v18[5] = *(_QWORD *)(*(_QWORD *)(v42[1].Count + 16) + 16LL);
      v18[6] = 0LL;
      v18[7] = 0LL;
      WdLogEvent5_WdCriticalError(v18);
      v16 = v42;
    }
  }
  if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v16[1].Count + 16) + 16LL)) )
  {
LABEL_18:
    if ( (a1[2] & 1) != 0 )
      Count = v19[4].Count;
    else
      Count = *(_QWORD *)(v19[6].Count + 16);
    goto LABEL_22;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v20) + 191) )
  {
    v19 = v42;
    goto LABEL_18;
  }
  v22 = WdLogNewEntry5_WdAssertion(v21);
  *(_QWORD *)(v22 + 24) = 83LL;
  WdLogEvent5_WdAssertion(v22);
LABEL_22:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v42);
LABEL_46:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41);
  return Count;
}
