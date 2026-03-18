/*
 * XREFs of ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C006987C
 * Callers:
 *     ?ADAPTER_RENDER_DdiGetRootPageTableSize@@YA_KPEAVADAPTER_RENDER@@PEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C000CDB0 (-ADAPTER_RENDER_DdiGetRootPageTableSize@@YA_KPEAVADAPTER_RENDER@@PEAU_DXGKARG_GETROOTPAGETABLESI.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiGetRootPageTableSize(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETROOTPAGETABLESIZE *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v20; // rax
  unsigned __int8 v21; // cl
  _QWORD *v22; // rax
  __int64 v23; // rcx

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5058);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v7 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_8;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v18 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v18 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v18);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v7 = 0LL;
      goto LABEL_8;
    }
    v7 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
LABEL_8:
    v10 = 0;
    goto LABEL_9;
  }
  v10 = *(_DWORD *)(v7 + 136);
LABEL_9:
  v13 = (*(__int64 (__fastcall **)(_QWORD, struct _DXGKARG_GETROOTPAGETABLESIZE *))(*((_QWORD *)this + 2) + 808LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  v14 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v14 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v11, v12);
    v20[3] = 275LL;
    v20[4] = 16LL;
    v20[5] = this;
    v20[6] = CurrentIrql;
    v21 = KeGetCurrentIrql();
    v20[7] = v21;
    WdLogEvent5_WdCriticalError(v20);
  }
  if ( v7 && *(_DWORD *)(v7 + 136) != v10 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v11, v12);
    v22[3] = 275LL;
    v22[4] = 25LL;
    v23 = *(int *)(v7 + 136);
    v22[7] = 0LL;
    v22[5] = v23;
    v22[6] = v10;
    WdLogEvent5_WdCriticalError(v22);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 5058);
  return v13;
}
