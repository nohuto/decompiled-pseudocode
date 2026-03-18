/*
 * XREFs of ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00953C4
 * Callers:
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096D84 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C01798E0 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005860 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
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
  _QWORD *v30; // rax
  unsigned __int8 v31; // cl
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  _BYTE v35[56]; // [rsp+20h] [rbp-38h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2, a3, a4) + 9);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v6, &EventProfilerEnter, v7, 5026);
  Current = DXGPROCESS::GetCurrent(v6);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v35, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  CurrentIrql = KeGetCurrentIrql();
  v14 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_23;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v29 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v29 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v29);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9, v11, v12);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
    if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
    {
      v14 = 0LL;
      goto LABEL_23;
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
    goto LABEL_12;
  }
LABEL_23:
  v18 = 0;
LABEL_12:
  v20 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *))(*((_QWORD *)this + 2) + 472LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 224LL),
          a2);
  v23 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v23 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v19, v21);
    v30[3] = 275LL;
    v30[4] = 16LL;
    v30[5] = this;
    v30[6] = CurrentIrql;
    v31 = KeGetCurrentIrql();
    v30[7] = v31;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( v14 && *(_DWORD *)(v14 + 136) != v18 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v19, v21);
    v32[3] = 275LL;
    v32[4] = 25LL;
    v33 = *(int *)(v14 + 136);
    v32[7] = 0LL;
    v32[5] = v33;
    v32[6] = v18;
    WdLogEvent5_WdCriticalError(v32);
  }
  v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v19, v21, v22);
  v24[3] = v20;
  v24[4] = *(_QWORD *)(*((_QWORD *)this + 2) + 224LL);
  hConstrainingVidPn = a2->hConstrainingVidPn;
  v24[5] = a2->hConstrainingVidPn;
  if ( (_DWORD)v20 != -1073741801 && (_DWORD)v20 )
  {
    v34 = WdLogNewEntry5_WdError(hConstrainingVidPn);
    *(_QWORD *)(v34 + 24) = v20;
    WdLogEvent5_WdError(v34);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v26, &EventProfilerExit, v27, 5026);
  return (unsigned int)v20;
}
