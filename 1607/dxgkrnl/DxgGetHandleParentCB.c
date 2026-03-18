/*
 * XREFs of DxgGetHandleParentCB @ 0x1C0160040
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgGetHandleParentCB(__int64 a1)
{
  __int64 v1; // rdi
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 ProcessDxgProcess; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // r8d
  __int64 v9; // rdx
  struct _EX_RUNDOWN_REF *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR Count; // rcx
  __int64 v16; // rax
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v19; // [rsp+58h] [rbp+10h] BYREF

  v1 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v3);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
    (DXGHANDLETABLELOCKSHARED *)v18,
    (struct _KTHREAD **)ProcessDxgProcess);
  v5 = 0;
  v6 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *(_DWORD *)(ProcessDxgProcess + 224)
    && (v7 = *(_QWORD *)(ProcessDxgProcess + 208),
        v8 = *(_DWORD *)(v7 + 16LL * (unsigned int)v6 + 8),
        (((unsigned int)v1 >> 26) & 0x30) == (*(_BYTE *)(v7 + 16LL * (unsigned int)v6 + 8) & 0x30))
    && (v8 & 0x1000) == 0
    && (v8 & 0xF) != 0
    && (v9 = 2 * v6, (*(_BYTE *)(v7 + 8 * v9 + 8) & 0xF) == 5) )
  {
    v10 = *(struct _EX_RUNDOWN_REF **)(v7 + 8 * v9);
  }
  else
  {
    v10 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v19, v10);
  if ( v19 )
  {
    Count = v19[5].Count;
    if ( Count )
      v5 = *(_DWORD *)(Count + 16);
  }
  else
  {
    v16 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v16 + 24) = v1;
    WdLogEvent5_WdWarning(v16);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v19);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return v5;
}
