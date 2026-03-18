/*
 * XREFs of DxgGetCaptureAddressCB @ 0x1C015FB20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgGetCaptureAddressCB(unsigned int *a1)
{
  unsigned int v1; // ebx
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 ProcessDxgProcess; // rsi
  unsigned int v6; // r8d
  __int64 v7; // r9
  int v8; // edx
  struct _EX_RUNDOWN_REF *v9; // rdx
  ULONG_PTR Count; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 CurrentIrql; // al
  bool v15; // cf
  struct _EX_RUNDOWN_REF *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rax
  _BYTE v22[32]; // [rsp+30h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v23; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  a1[1] = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v4);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
    (DXGHANDLETABLELOCKSHARED *)v22,
    (struct _KTHREAD **)ProcessDxgProcess);
  v6 = (*a1 >> 6) & 0xFFFFFF;
  if ( v6 < *(_DWORD *)(ProcessDxgProcess + 224)
    && (v7 = *(_QWORD *)(ProcessDxgProcess + 208),
        v8 = *(_DWORD *)(v7 + 16LL * v6 + 8),
        ((*a1 >> 26) & 0x30) == (*(_BYTE *)(v7 + 16LL * v6 + 8) & 0x30))
    && (v8 & 0x1000) == 0
    && (v8 & 0xF) != 0
    && (*(_BYTE *)(v7 + 16LL * v6 + 8) & 0xF) == 5 )
  {
    v9 = *(struct _EX_RUNDOWN_REF **)(v7 + 16LL * v6);
  }
  else
  {
    v9 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v23, v9);
  if ( !v23 )
    goto LABEL_17;
  v11 = *(_QWORD *)(v23[1].Count + 16);
  if ( !v11 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v11 + 16)) )
    goto LABEL_17;
  CurrentIrql = KeGetCurrentIrql();
  v15 = CurrentIrql < 2u;
  v16 = v23;
  if ( !v15 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23[1].Count + 16) + 16LL) + 192LL) + 64LL);
    v18 = *(_QWORD *)(v17 + 40);
    if ( *(_DWORD *)(v18 + 28) >= 0x2003u )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v18, v12);
      v19[3] = 275LL;
      v19[4] = 20LL;
      v19[5] = *(_QWORD *)(*(_QWORD *)(v23[1].Count + 16) + 16LL);
      v19[6] = 0LL;
      v19[7] = 0LL;
      WdLogEvent5_WdCriticalError(v19);
      v16 = v23;
    }
  }
  Count = v16[6].Count;
  v11 = *(unsigned int *)(Count + 4);
  if ( (v11 & 0x20) != 0 && (v16[9].Count & 0x800) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16[1].Count + 16) + 400LL)
                                                                                       + 8LL)
                                                                           + 216LL))(
      *(_QWORD *)(*(_QWORD *)(v16[1].Count + 16) + 408LL),
      *(_QWORD *)(Count + 8),
      a1 + 1,
      a1 + 2);
  }
  else
  {
LABEL_17:
    v20 = WdLogNewEntry5_WdWarning(v11, Count, v12, v13);
    *(_QWORD *)(v20 + 24) = *a1;
    WdLogEvent5_WdWarning(v20);
    v1 = -1073741811;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v23);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  return v1;
}
