/*
 * XREFs of ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C01470C4
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01780F4 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0009450 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C001ECDC (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C008717C (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 ProcessDxgProcess; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  unsigned int Data1; // r14d
  char *v21; // rsi
  char v22; // cl
  DXGADAPTER *i; // rax
  __int64 v24; // rax
  unsigned int v25; // ebx
  DXGCOPYPROTECTION *v26; // rax
  __int64 v27; // rcx
  DXGCOPYPROTECTION *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // esi
  DXGCOPYPROTECTION *v32; // rdx
  DXGCOPYPROTECTION **v33; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rbx
  __int64 v38; // rcx
  union _LARGE_INTEGER Interval; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v41[16]; // [rsp+28h] [rbp-60h] BYREF
  UUID Uuid; // [rsp+38h] [rbp-50h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 4122LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v10 + 24) = 4123LL;
    WdLogEvent5_WdAssertion(v10);
  }
  CurrentProcess = PsGetCurrentProcess(v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v12);
  if ( !ProcessDxgProcess )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v15 + 24) = 4126LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *(_QWORD *)(ProcessDxgProcess + 280);
  if ( *(struct _KTHREAD **)(v16 + 8) != KeGetCurrentThread() )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v17 + 24) = 4127LL;
    WdLogEvent5_WdAssertion(v17);
  }
  *a4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v41, (struct DXGFASTMUTEX *const)(this + 3));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
  _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
  while ( 1 )
  {
    v18 = ExUuidCreate(&Uuid);
    if ( v18 >= 0 )
      break;
    if ( v18 != -1073741267 )
    {
      v24 = WdLogNewEntry5_WdError(v19);
      v25 = -1073741801;
      *(_QWORD *)(v24 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v24);
LABEL_27:
      DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
      goto LABEL_41;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  Data1 = Uuid.Data1;
  v21 = (char *)(this + 8);
  do
  {
    v22 = 1;
    for ( i = this[8]; i != (DXGADAPTER *)v21 && i; i = *(DXGADAPTER **)i )
    {
      if ( *((_DWORD *)i + 12) == Data1 )
      {
        v22 = 0;
        ++Data1;
      }
    }
  }
  while ( !v22 );
  v26 = (DXGCOPYPROTECTION *)operator new(0x40uLL, 0x4B677844u, PagedPool);
  v28 = v26;
  if ( v26 )
  {
    *((_QWORD *)v26 + 2) = this;
    *(_QWORD *)v26 = 0LL;
    *((_QWORD *)v26 + 1) = 0LL;
    *((_QWORD *)v26 + 5) = ProcessDxgProcess;
    *((_QWORD *)v26 + 3) = 0LL;
    *((_QWORD *)v26 + 4) = 0LL;
    *((_DWORD *)v26 + 12) = Data1;
    *((_DWORD *)v26 + 13) = a2;
    *((_DWORD *)v26 + 14) = a3;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !v28 )
  {
    v29 = WdLogNewEntry5_WdLowResource(v27);
    v25 = -1073741801;
    *(_QWORD *)(v29 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v29);
    goto LABEL_27;
  }
  v30 = *(_QWORD *)v21;
  if ( *(char **)(*(_QWORD *)v21 + 8LL) != v21 )
    __fastfail(3u);
  *(_QWORD *)v28 = v30;
  *((_QWORD *)v28 + 1) = v21;
  *(_QWORD *)(v30 + 8) = v28;
  *(_QWORD *)v21 = v28;
  v31 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
  if ( v31 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*(_QWORD *)(ProcessDxgProcess + 280) + 8LL) != CurrentThread )
    {
      v35 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v35 + 24) = 598LL;
      WdLogEvent5_WdAssertion(v35);
    }
    v36 = (_QWORD *)(ProcessDxgProcess + 264);
    v37 = (_QWORD *)((char *)v28 + 24);
    v38 = *(_QWORD *)(ProcessDxgProcess + 264);
    if ( *(_QWORD *)(v38 + 8) != ProcessDxgProcess + 264 )
      __fastfail(3u);
    *v37 = v38;
    v37[1] = v36;
    *(_QWORD *)(v38 + 8) = v37;
    *v36 = v37;
    *a4 = Data1;
  }
  else
  {
    v32 = *(DXGCOPYPROTECTION **)v28;
    v33 = (DXGCOPYPROTECTION **)*((_QWORD *)v28 + 1);
    if ( *(DXGCOPYPROTECTION **)(*(_QWORD *)v28 + 8LL) != v28 || *v33 != v28 )
      __fastfail(3u);
    *v33 = v32;
    *((_QWORD *)v32 + 1) = v33;
    DXGCOPYPROTECTION::`scalar deleting destructor'(v28);
    DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
  }
  v25 = v31;
LABEL_41:
  if ( v41[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41);
  return v25;
}
