/*
 * XREFs of ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C01202D8
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C014FD7C (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0017BB4 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0095C34 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGPROCESS *Current; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  unsigned int Data1; // r14d
  DXGCOPYPROTECTION **v26; // rsi
  char v27; // cl
  DXGADAPTER *i; // rax
  __int64 v29; // rax
  unsigned int v30; // ebx
  DXGCOPYPROTECTION *v31; // rax
  __int64 v32; // rcx
  DXGCOPYPROTECTION *v33; // rbx
  __int64 v34; // rax
  DXGCOPYPROTECTION *v35; // rax
  __int64 v36; // rdx
  int v37; // esi
  __int64 v38; // r8
  __int64 v39; // r9
  DXGCOPYPROTECTION *v40; // rdx
  DXGCOPYPROTECTION **v41; // rcx
  struct _KTHREAD *v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rbx
  __int64 v45; // rcx
  _BYTE v47[16]; // [rsp+20h] [rbp-68h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp-58h] BYREF
  UUID Uuid; // [rsp+38h] [rbp-50h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 18663LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = 18664LL;
    WdLogEvent5_WdAssertion(v13);
  }
  Current = DXGPROCESS::GetCurrent(v9);
  if ( !Current )
  {
    v19 = WdLogNewEntry5_WdAssertion(v15, v14, v17, v18);
    *(_QWORD *)(v19 + 24) = 18667LL;
    WdLogEvent5_WdAssertion(v19);
  }
  CurrentThread = KeGetCurrentThread();
  v21 = *((_QWORD *)Current + 36);
  if ( *(struct _KTHREAD **)(v21 + 8) != CurrentThread )
  {
    v22 = WdLogNewEntry5_WdAssertion(v21, CurrentThread, v17, v18);
    *(_QWORD *)(v22 + 24) = 18668LL;
    WdLogEvent5_WdAssertion(v22);
  }
  *a4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v47, (struct DXGFASTMUTEX *const)(this + 3));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
  DXGADAPTER::AcquireReference(this[2]);
  while ( 1 )
  {
    v23 = ExUuidCreate(&Uuid);
    if ( v23 >= 0 )
      break;
    if ( v23 != -1073741267 )
    {
      v29 = WdLogNewEntry5_WdError(v24);
      v30 = -1073741801;
      *(_QWORD *)(v29 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v29);
LABEL_27:
      DXGADAPTER::ReleaseReference(this[2]);
      goto LABEL_41;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  Data1 = Uuid.Data1;
  v26 = this + 8;
  do
  {
    v27 = 1;
    for ( i = this[8]; i != (DXGADAPTER *)v26 && i; i = *(DXGADAPTER **)i )
    {
      if ( *((_DWORD *)i + 12) == Data1 )
      {
        v27 = 0;
        ++Data1;
      }
    }
  }
  while ( !v27 );
  v31 = (DXGCOPYPROTECTION *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
  v33 = v31;
  if ( v31 )
  {
    *((_QWORD *)v31 + 2) = this;
    *(_QWORD *)v31 = 0LL;
    *((_QWORD *)v31 + 1) = 0LL;
    *((_QWORD *)v31 + 5) = Current;
    *((_QWORD *)v31 + 3) = 0LL;
    *((_QWORD *)v31 + 4) = 0LL;
    *((_DWORD *)v31 + 12) = Data1;
    *((_DWORD *)v31 + 13) = a2;
    *((_DWORD *)v31 + 14) = a3;
  }
  else
  {
    v33 = 0LL;
  }
  if ( !v33 )
  {
    v34 = WdLogNewEntry5_WdLowResource(v32);
    v30 = -1073741801;
    *(_QWORD *)(v34 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v34);
    goto LABEL_27;
  }
  v35 = *v26;
  *(_QWORD *)v33 = *v26;
  *((_QWORD *)v33 + 1) = v26;
  if ( *((DXGCOPYPROTECTION ***)v35 + 1) != v26 )
    __fastfail(3u);
  *((_QWORD *)v35 + 1) = v33;
  *v26 = v33;
  v37 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
  if ( v37 >= 0 )
  {
    v42 = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*((_QWORD *)Current + 36) + 8LL) != v42 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v42, v36, v38, v39);
      *(_QWORD *)(v43 + 24) = 656LL;
      WdLogEvent5_WdAssertion(v43);
    }
    v44 = (_QWORD *)((char *)v33 + 24);
    v45 = *((_QWORD *)Current + 34);
    *v44 = v45;
    v44[1] = (char *)Current + 272;
    if ( *(struct DXGPROCESS **)(v45 + 8) != (struct DXGPROCESS *)((char *)Current + 272) )
      __fastfail(3u);
    *(_QWORD *)(v45 + 8) = v44;
    *((_QWORD *)Current + 34) = v44;
    *a4 = Data1;
  }
  else
  {
    v40 = *(DXGCOPYPROTECTION **)v33;
    v41 = (DXGCOPYPROTECTION **)*((_QWORD *)v33 + 1);
    if ( *(DXGCOPYPROTECTION **)(*(_QWORD *)v33 + 8LL) != v33 || *v41 != v33 )
      __fastfail(3u);
    *v41 = v40;
    *((_QWORD *)v40 + 1) = v41;
    DXGCOPYPROTECTION::`scalar deleting destructor'(v33);
    DXGADAPTER::ReleaseReference(this[2]);
  }
  v30 = v37;
LABEL_41:
  if ( v47[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47);
  return v30;
}
