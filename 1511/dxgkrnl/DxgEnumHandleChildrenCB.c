/*
 * XREFs of DxgEnumHandleChildrenCB @ 0x1C013BF30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000D310 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0065F40 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgEnumHandleChildrenCB(unsigned int *a1)
{
  struct DXGPROCESS *Current; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r9
  int v6; // ecx
  __int64 v7; // rdx
  struct DXGRESOURCE *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _EX_RUNDOWN_REF *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  unsigned int v18; // edx
  ULONG_PTR Count; // rcx
  int v20; // eax
  _BYTE v22[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v23[32]; // [rsp+38h] [rbp-20h] BYREF
  struct _EX_RUNDOWN_REF *v24; // [rsp+60h] [rbp+8h] BYREF

  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v23, Current);
  v3 = 0;
  v4 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v4 < *((_DWORD *)Current + 58)
    && (v5 = *((_QWORD *)Current + 27),
        v6 = *(_DWORD *)(v5 + 16LL * (unsigned int)v4 + 8),
        ((*a1 >> 26) & 0x30) == (*(_BYTE *)(v5 + 16LL * (unsigned int)v4 + 8) & 0x30))
    && (v6 & 0x1000) == 0
    && (v6 & 0xF) != 0
    && (v7 = 2 * v4, (*(_BYTE *)(v5 + 8 * v7 + 8) & 0xF) == 4) )
  {
    v8 = *(struct DXGRESOURCE **)(v5 + 8 * v7);
  }
  else
  {
    v8 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v24, v8);
  v13 = v24;
  if ( v24 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24[1].Count + 16) + 16LL) + 176LL) + 64LL);
      v16 = *(_QWORD *)(v15 + 40);
      if ( *(_DWORD *)(v16 + 28) >= 0x2003u )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v16, v11);
        v17[3] = 275LL;
        v17[4] = 20LL;
        v17[5] = *(_QWORD *)(*(_QWORD *)(v24[1].Count + 16) + 16LL);
        v17[6] = 0LL;
        v17[7] = 0LL;
        WdLogEvent5_WdCriticalError(v17);
        v13 = v24;
      }
    }
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v22, (struct _KTHREAD **)(v13[1].Count + 136));
    v18 = a1[1];
    Count = v24[3].Count;
    v20 = 0;
    if ( v18 )
    {
      while ( Count )
      {
        Count = *(_QWORD *)(Count + 64);
        if ( ++v20 >= v18 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      if ( Count )
        v3 = *(_DWORD *)(Count + 16);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = *a1;
    WdLogEvent5_WdWarning(v14);
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v24);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  return v3;
}
