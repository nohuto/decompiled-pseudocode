/*
 * XREFs of DxgGetHandleDataCB @ 0x1C013C290
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0065F40 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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
  int v11; // r8d
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
  unsigned int v24; // esi
  struct DXGPROCESS *v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // r8
  int v28; // edx
  struct DXGRESOURCE *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  struct _EX_RUNDOWN_REF *v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  struct _EX_RUNDOWN_REF *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  _BYTE v43[32]; // [rsp+20h] [rbp-20h] BYREF
  struct _EX_RUNDOWN_REF *v44; // [rsp+50h] [rbp+10h] BYREF

  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v43, Current);
  v7 = a1[1];
  Count = 0LL;
  if ( v7 != 1 )
  {
    if ( v7 != 2 )
    {
      v41 = WdLogNewEntry5_WdWarning(v4, v3, v5, v6);
      *(_QWORD *)(v41 + 24) = (int)a1[1];
      WdLogEvent5_WdWarning(v41);
      goto LABEL_44;
    }
    v24 = *a1;
    v25 = DXGPROCESS::GetCurrent();
    v26 = (v24 >> 6) & 0xFFFFFF;
    if ( v26 < *((_DWORD *)v25 + 58)
      && (v27 = *((_QWORD *)v25 + 27),
          v28 = *(_DWORD *)(v27 + 16LL * v26 + 8),
          ((v24 >> 26) & 0x30) == (*(_BYTE *)(v27 + 16LL * v26 + 8) & 0x30))
      && (v28 & 0x1000) == 0
      && (v28 & 0xF) != 0
      && (*(_BYTE *)(v27 + 16LL * v26 + 8) & 0xF) == 4 )
    {
      v29 = *(struct DXGRESOURCE **)(v27 + 16LL * v26);
    }
    else
    {
      v29 = 0LL;
    }
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v44, v29);
    v33 = v44;
    if ( v44 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44[1].Count + 16) + 16LL) + 176LL) + 64LL)
                        + 40LL);
        if ( *(_DWORD *)(v34 + 28) >= 0x2003u )
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v44, v31);
          v35[3] = 275LL;
          v35[4] = 20LL;
          v35[5] = *(_QWORD *)(*(_QWORD *)(v44[1].Count + 16) + 16LL);
          v35[6] = 0LL;
          v35[7] = 0LL;
          WdLogEvent5_WdCriticalError(v35);
          v33 = v44;
        }
      }
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v33[1].Count + 16) + 16LL)) )
      {
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v37) + 231) )
        {
          v39 = WdLogNewEntry5_WdAssertion(v38);
          *(_QWORD *)(v39 + 24) = 125LL;
          WdLogEvent5_WdAssertion(v39);
LABEL_42:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v44);
          goto LABEL_44;
        }
        v36 = v44;
      }
      if ( (HIDWORD(v36->Ptr) & 1) != 0 )
        Count = *(_QWORD *)(v36[7].Count + 16);
      else
        Count = v36[7].Count;
      goto LABEL_42;
    }
    v40 = WdLogNewEntry5_WdWarning(v30, 0LL, v31, v32);
    *(_QWORD *)(v40 + 24) = *a1;
    WdLogEvent5_WdWarning(v40);
    goto LABEL_42;
  }
  v9 = (*a1 >> 6) & 0xFFFFFF;
  if ( v9 < *((_DWORD *)Current + 58)
    && (v10 = *((_QWORD *)Current + 27),
        v11 = *(_DWORD *)(v10 + 16LL * v9 + 8),
        ((*a1 >> 26) & 0x30) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x30))
    && (v11 & 0x1000) == 0
    && (v11 & 0xF) != 0
    && (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0xF) == 5 )
  {
    v12 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * v9);
  }
  else
  {
    v12 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v44, v12);
  v16 = v44;
  if ( !v44 )
  {
    v23 = WdLogNewEntry5_WdWarning(v13, 0LL, v14, v15);
    *(_QWORD *)(v23 + 24) = *a1;
    WdLogEvent5_WdWarning(v23);
    goto LABEL_21;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44[1].Count + 16) + 16LL) + 176LL) + 64LL) + 40LL);
    if ( *(_DWORD *)(v17 + 28) >= 0x2003u )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v44, v14);
      v18[3] = 275LL;
      v18[4] = 20LL;
      v18[5] = *(_QWORD *)(*(_QWORD *)(v44[1].Count + 16) + 16LL);
      v18[6] = 0LL;
      v18[7] = 0LL;
      WdLogEvent5_WdCriticalError(v18);
      v16 = v44;
    }
  }
  if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v16[1].Count + 16) + 16LL)) )
  {
LABEL_17:
    if ( (a1[2] & 1) != 0 )
      Count = v19[4].Count;
    else
      Count = *(_QWORD *)(v19[6].Count + 16);
    goto LABEL_21;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v20) + 231) )
  {
    v19 = v44;
    goto LABEL_17;
  }
  v22 = WdLogNewEntry5_WdAssertion(v21);
  *(_QWORD *)(v22 + 24) = 83LL;
  WdLogEvent5_WdAssertion(v22);
LABEL_21:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v44);
LABEL_44:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
  return Count;
}
