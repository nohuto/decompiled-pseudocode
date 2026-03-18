/*
 * XREFs of DxgGetCaptureAddressCB @ 0x1C0137AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgGetCaptureAddressCB(unsigned int *a1)
{
  unsigned int v1; // ebx
  struct DXGPROCESS *Current; // rsi
  unsigned int v4; // ecx
  __int64 v5; // r9
  int v6; // r8d
  struct _EX_RUNDOWN_REF *v7; // rdx
  ULONG_PTR Count; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 CurrentIrql; // al
  bool v13; // cf
  struct _EX_RUNDOWN_REF *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _BYTE v23[32]; // [rsp+30h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v24; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  a1[1] = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v23, Current);
  v4 = (*a1 >> 6) & 0xFFFFFF;
  if ( v4 < *((_DWORD *)Current + 58)
    && (v5 = *((_QWORD *)Current + 27),
        v6 = *(_DWORD *)(v5 + 16LL * v4 + 8),
        ((*a1 >> 26) & 0x30) == (*(_BYTE *)(v5 + 16LL * v4 + 8) & 0x30))
    && (v6 & 0x1000) == 0
    && (v6 & 0xF) != 0
    && (*(_BYTE *)(v5 + 16LL * v4 + 8) & 0xF) == 5 )
  {
    v7 = *(struct _EX_RUNDOWN_REF **)(v5 + 16LL * v4);
  }
  else
  {
    v7 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v24, v7);
  if ( !v24 )
    goto LABEL_17;
  v9 = *(_QWORD *)(v24[1].Count + 16);
  if ( !v9 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v9 + 16)) )
    goto LABEL_17;
  CurrentIrql = KeGetCurrentIrql();
  v13 = CurrentIrql < 2u;
  v14 = v24;
  if ( !v13 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24[1].Count + 16) + 16LL) + 176LL) + 64LL);
    v16 = *(_QWORD *)(v15 + 40);
    if ( *(_DWORD *)(v16 + 28) >= 0x2003u )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v16, v10);
      v17[3] = 275LL;
      v17[4] = 20LL;
      v17[5] = *(_QWORD *)(*(_QWORD *)(v24[1].Count + 16) + 16LL);
      v17[6] = 0LL;
      v17[7] = 0LL;
      WdLogEvent5_WdCriticalError(v17);
      v14 = v24;
    }
  }
  Count = v14[6].Count;
  v9 = *(unsigned int *)(Count + 4);
  if ( (v9 & 0x20) != 0 && (v14[9].Count & 0x100) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14[1].Count + 16) + 400LL)
                                                                                       + 8LL)
                                                                           + 208LL))(
      *(_QWORD *)(*(_QWORD *)(v14[1].Count + 16) + 408LL),
      *(_QWORD *)(Count + 8),
      a1 + 1,
      a1 + 2);
  }
  else
  {
LABEL_17:
    v21 = WdLogNewEntry5_WdWarning(v9, Count, v10, v11);
    *(_QWORD *)(v21 + 24) = *a1;
    WdLogEvent5_WdWarning(v21);
    v1 = -1073741811;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v24, v18, v19, v20);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  return v1;
}
