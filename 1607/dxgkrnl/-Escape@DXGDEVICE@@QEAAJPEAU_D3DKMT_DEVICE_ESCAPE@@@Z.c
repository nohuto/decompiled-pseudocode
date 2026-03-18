/*
 * XREFs of ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C015DBA4
 * Callers:
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::Escape(DXGDEVICE *this, struct _D3DKMT_DEVICE_ESCAPE *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 Type; // rcx
  __int64 v10; // rax
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  struct _KTHREAD **ProcessDxgProcess; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  D3DKMT_HANDLE v19; // r9d
  __int64 v20; // r8
  int v21; // edx
  struct _EX_RUNDOWN_REF *v22; // rdx
  __int64 v23; // rdx
  ULONG_PTR Count; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // eax
  __int64 v28; // rax
  _BYTE v29[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v30; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v8 + 24) = 4523LL;
    WdLogEvent5_WdAssertion(v8);
  }
  Type = (unsigned int)a2->Type;
  if ( (_DWORD)Type )
  {
    if ( (_DWORD)Type == 1 )
      return 3221225659LL;
    v10 = WdLogNewEntry5_WdWarning(Type, v3, v5, v6);
    *(_QWORD *)(v10 + 24) = a2->Type;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v10);
    return (unsigned int)-1073741811;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(Type);
    ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v13);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v29, ProcessDxgProcess);
    v16 = PsGetCurrentProcess(v15);
    v18 = PsGetProcessDxgProcess(v16, v17);
    v19 = (a2->VidPnFromAllocation.hPrimaryAllocation >> 6) & 0xFFFFFF;
    if ( v19 < *(_DWORD *)(v18 + 224)
      && (v20 = *(_QWORD *)(v18 + 208),
          v21 = *(_DWORD *)(v20 + 16LL * v19 + 8),
          ((a2->VidPnFromAllocation.hPrimaryAllocation >> 26) & 0x30) == (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x30))
      && (v21 & 0x1000) == 0
      && (v21 & 0xF) != 0
      && (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0xF) == 5 )
    {
      v22 = *(struct _EX_RUNDOWN_REF **)(v20 + 16LL * v19);
    }
    else
    {
      v22 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v30, v22);
    if ( !v30 || (Count = v30[6].Count, v27 = *(_DWORD *)(Count + 4), (v27 & 0x2003) == 0) )
    {
      v28 = WdLogNewEntry5_WdWarning(Count, v23, v25, v26);
      *(_QWORD *)(v28 + 24) = a2->VidPnFromAllocation.hPrimaryAllocation;
      *(_QWORD *)(v28 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v28);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
      return 3221225485LL;
    }
    a2->VidPnFromAllocation.VidPnSourceId = (v27 >> 6) & 0xF;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  }
  return v7;
}
