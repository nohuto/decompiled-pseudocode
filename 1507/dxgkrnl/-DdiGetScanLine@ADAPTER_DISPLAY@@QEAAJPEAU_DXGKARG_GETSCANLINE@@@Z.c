/*
 * XREFs of ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C00B3250
 * Callers:
 *     DxgkGetScanLine @ 0x1C00B2CE0 (DxgkGetScanLine.c)
 *     ?DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C0123EE4 (-DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiGetScanLine(ADAPTER_DISPLAY *this, struct _DXGKARG_GETSCANLINE *a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v6; // rbx
  struct _KTHREAD **v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v13; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 ScanLine; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned __int8 v30; // cl
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _BYTE v34[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v35; // [rsp+28h] [rbp-30h]
  int v36; // [rsp+30h] [rbp-28h]

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5036);
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v6 = Current;
  if ( Current )
    v7 = (struct _KTHREAD **)((char *)Current + 96);
  else
    v7 = 0LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34, v7);
  if ( v6 )
  {
    DXGPUSHLOCK::AcquireExclusive(v35);
    v36 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v13 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_26;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v28 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v28 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v28);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8, v10, v11);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v13 = 0LL;
      goto LABEL_26;
    }
    v13 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v17 = *(_DWORD *)(v13 + 136);
    goto LABEL_16;
  }
LABEL_26:
  v17 = 0;
LABEL_16:
  v19 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_GETSCANLINE *))(*((_QWORD *)this + 2) + 528LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  v22 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v22 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v18, v20);
    v29[3] = 275LL;
    v29[4] = 16LL;
    v29[5] = this;
    v29[6] = CurrentIrql;
    v30 = KeGetCurrentIrql();
    v29[7] = v30;
    WdLogEvent5_WdCriticalError(v29);
  }
  if ( v13 && *(_DWORD *)(v13 + 136) != v17 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v18, v20);
    v31[3] = 275LL;
    v31[4] = 25LL;
    v32 = *(int *)(v13 + 136);
    v31[7] = 0LL;
    v31[5] = v32;
    v31[6] = v17;
    WdLogEvent5_WdCriticalError(v31);
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v18, v20, v21);
  v23[3] = v19;
  v23[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
  ScanLine = a2->ScanLine;
  v23[5] = ScanLine;
  if ( (_DWORD)v19 )
  {
    v33 = WdLogNewEntry5_WdError(ScanLine);
    *(_QWORD *)(v33 + 24) = v19;
    WdLogEvent5_WdError(v33);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v25, &EventProfilerExit, v26, 5036);
  return (unsigned int)v19;
}
