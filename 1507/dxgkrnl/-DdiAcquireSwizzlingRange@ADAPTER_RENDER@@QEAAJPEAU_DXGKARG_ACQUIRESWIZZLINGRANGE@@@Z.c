/*
 * XREFs of ?DdiAcquireSwizzlingRange@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z @ 0x1C0093174
 * Callers:
 *     ?ADAPTER_RENDER_DdiAcquireSwizzlingRange@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z @ 0x1C000A9F0 (-ADAPTER_RENDER_DdiAcquireSwizzlingRange@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_ACQUIRESWIZZLINGRA.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiAcquireSwizzlingRange(
        ADAPTER_RENDER *this,
        struct _DXGKARG_ACQUIRESWIZZLINGRANGE *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 PrivateDriverData; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  LARGE_INTEGER CPUTranslatedAddress; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rax
  _QWORD *v31; // rax
  unsigned __int8 v32; // cl
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 5006);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_24;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v30 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v30 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v30);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v10 = 0LL;
      goto LABEL_24;
    }
    v10 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v14 = *(_DWORD *)(v10 + 136);
    goto LABEL_12;
  }
LABEL_24:
  v14 = 0;
LABEL_12:
  v16 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ACQUIRESWIZZLINGRANGE *))(*((_QWORD *)this + 2) + 344LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  v19 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v19 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v15, v17);
    v31[3] = 275LL;
    v31[4] = 16LL;
    v31[5] = this;
    v31[6] = CurrentIrql;
    v32 = KeGetCurrentIrql();
    v31[7] = v32;
    WdLogEvent5_WdCriticalError(v31);
  }
  if ( v10 && *(_DWORD *)(v10 + 136) != v14 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v15, v17);
    v33[3] = 275LL;
    v33[4] = 25LL;
    v34 = *(int *)(v10 + 136);
    v33[7] = 0LL;
    v33[5] = v34;
    v33[6] = v14;
    WdLogEvent5_WdCriticalError(v33);
  }
  v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v15, v17, v18);
  v20[3] = v16;
  v20[4] = a2->hAllocation;
  v20[5] = a2->RangeId;
  PrivateDriverData = a2->PrivateDriverData;
  v20[6] = PrivateDriverData;
  v25 = WdLogNewEntry5_WdTrace(PrivateDriverData, v22, v23, v24);
  *(_QWORD *)(v25 + 24) = a2->SegmentId;
  CPUTranslatedAddress = a2->CPUTranslatedAddress;
  *(LARGE_INTEGER *)(v25 + 32) = CPUTranslatedAddress;
  if ( (_DWORD)v16 != -1071775481 && (_DWORD)v16 != -1071775480 && (_DWORD)v16 )
  {
    v35 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdError)((LARGE_INTEGER)CPUTranslatedAddress.QuadPart);
    *(_QWORD *)(v35 + 24) = v16;
    WdLogEvent5_WdError(v35);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v27, &EventProfilerExit, v28, 5006);
  return (unsigned int)v16;
}
