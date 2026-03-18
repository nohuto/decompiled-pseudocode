/*
 * XREFs of ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C00C89D0
 * Callers:
 *     DxgkGetScanLine @ 0x1C00C8510 (DxgkGetScanLine.c)
 *     ?DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C0129DDC (-DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB60 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiGetScanLine(ADAPTER_DISPLAY *this, struct _DXGKARG_GETSCANLINE *a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 ScanLine; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  _QWORD *v27; // rax
  unsigned __int8 v28; // cl
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  _BYTE v32[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5036);
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v32, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_22;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v26 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v26 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v26);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6, v8, v9);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v11 = 0LL;
      goto LABEL_22;
    }
    v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v15 = *(_DWORD *)(v11 + 136);
    goto LABEL_12;
  }
LABEL_22:
  v15 = 0;
LABEL_12:
  v17 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_GETSCANLINE *))(*((_QWORD *)this + 2) + 528LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  v20 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v20 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16, v18);
    v27[3] = 275LL;
    v27[4] = 16LL;
    v27[5] = this;
    v27[6] = CurrentIrql;
    v28 = KeGetCurrentIrql();
    v27[7] = v28;
    WdLogEvent5_WdCriticalError(v27);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v15 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16, v18);
    v29[3] = 275LL;
    v29[4] = 25LL;
    v30 = *(int *)(v11 + 136);
    v29[7] = 0LL;
    v29[5] = v30;
    v29[6] = v15;
    WdLogEvent5_WdCriticalError(v29);
  }
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v16, v18, v19);
  v21[3] = v17;
  v21[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
  ScanLine = a2->ScanLine;
  v21[5] = ScanLine;
  if ( (_DWORD)v17 )
  {
    v31 = WdLogNewEntry5_WdError(ScanLine);
    *(_QWORD *)(v31 + 24) = v17;
    WdLogEvent5_WdError(v31);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v23, &EventProfilerExit, v24, 5036);
  return (unsigned int)v17;
}
