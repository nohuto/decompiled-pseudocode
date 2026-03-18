/*
 * XREFs of ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C0085A38
 * Callers:
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0084A60 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C01A70B0 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct _KTHREAD **v11; // rbx
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v14; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  _QWORD *v24; // rax
  D3DKMDT_HVIDPN hConstrainingVidPn; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  unsigned __int8 v32; // cl
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  _BYTE v36[8]; // [rsp+20h] [rbp-38h] BYREF
  struct _KTHREAD **v37; // [rsp+28h] [rbp-30h]
  int v38; // [rsp+30h] [rbp-28h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 9);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v4, &EventProfilerEnter, v5, 5026);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v7);
  v10 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
    v11 = (struct _KTHREAD **)(ProcessDxgProcess + 88);
  else
    v11 = 0LL;
  v38 = 0;
  v37 = v11;
  if ( v11 && v11[1] == KeGetCurrentThread() )
  {
    v29 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v29 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( v10 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v11);
    v38 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v14 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_29;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v30 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v30 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v30);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v14 = 0LL;
      goto LABEL_29;
    }
    v14 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    v18 = *(_DWORD *)(v14 + 136);
    goto LABEL_19;
  }
LABEL_29:
  v18 = 0;
LABEL_19:
  v20 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *))(*((_QWORD *)this + 2) + 488LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
          a2);
  v23 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v23 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v19, v21);
    v31[3] = 275LL;
    v31[4] = 16LL;
    v31[5] = this;
    v31[6] = CurrentIrql;
    v32 = KeGetCurrentIrql();
    v31[7] = v32;
    WdLogEvent5_WdCriticalError(v31);
  }
  if ( v14 && *(_DWORD *)(v14 + 136) != v18 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v19, v21);
    v33[3] = 275LL;
    v33[4] = 25LL;
    v34 = *(int *)(v14 + 136);
    v33[7] = 0LL;
    v33[5] = v34;
    v33[6] = v18;
    WdLogEvent5_WdCriticalError(v33);
  }
  v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v19, v21, v22);
  v24[3] = v20;
  v24[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
  hConstrainingVidPn = a2->hConstrainingVidPn;
  v24[5] = a2->hConstrainingVidPn;
  if ( (_DWORD)v20 != -1073741801 && (_DWORD)v20 )
  {
    v35 = WdLogNewEntry5_WdError(hConstrainingVidPn);
    *(_QWORD *)(v35 + 24) = v20;
    WdLogEvent5_WdError(v35);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v26, &EventProfilerExit, v27, 5026);
  return (unsigned int)v20;
}
