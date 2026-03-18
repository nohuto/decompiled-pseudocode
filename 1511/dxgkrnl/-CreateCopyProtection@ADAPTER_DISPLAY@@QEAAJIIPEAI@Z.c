/*
 * XREFs of ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C0125E20
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C0153088 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0019688 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A734 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rbp
  __int64 v13; // rax
  struct _KTHREAD **v14; // rcx
  __int64 v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  unsigned int Data1; // r14d
  DXGCOPYPROTECTION **v19; // rsi
  char v20; // cl
  DXGADAPTER *i; // rax
  __int64 v22; // rax
  unsigned int v23; // ebx
  DXGCOPYPROTECTION *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  DXGCOPYPROTECTION *v29; // rbx
  __int64 v30; // rax
  DXGCOPYPROTECTION *v31; // rax
  int v32; // esi
  DXGCOPYPROTECTION *v33; // rdx
  DXGCOPYPROTECTION **v34; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rbx
  __int64 v38; // rcx
  _BYTE v40[16]; // [rsp+20h] [rbp-68h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp-58h] BYREF
  UUID Uuid; // [rsp+38h] [rbp-50h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 19074LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v10 + 24) = 19075LL;
    WdLogEvent5_WdAssertion(v10);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v13 + 24) = 19078LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = (struct _KTHREAD **)*((_QWORD *)Current + 36);
  if ( *v14 != KeGetCurrentThread() )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v15 + 24) = 19079LL;
    WdLogEvent5_WdAssertion(v15);
  }
  *a4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v40, (struct DXGFASTMUTEX *const)(this + 3));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
  DXGADAPTER::AcquireReference(this[2]);
  while ( 1 )
  {
    v16 = ExUuidCreate(&Uuid);
    if ( v16 >= 0 )
      break;
    if ( v16 != -1073741267 )
    {
      v22 = WdLogNewEntry5_WdError(v17);
      v23 = -1073741801;
      *(_QWORD *)(v22 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v22);
LABEL_27:
      DXGADAPTER::ReleaseReference(this[2]);
      goto LABEL_41;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  Data1 = Uuid.Data1;
  v19 = this + 11;
  do
  {
    v20 = 1;
    for ( i = this[11]; i != (DXGADAPTER *)v19 && i; i = *(DXGADAPTER **)i )
    {
      if ( *((_DWORD *)i + 12) == Data1 )
      {
        v20 = 0;
        ++Data1;
      }
    }
  }
  while ( !v20 );
  v24 = (DXGCOPYPROTECTION *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
  v29 = v24;
  if ( v24 )
  {
    *((_QWORD *)v24 + 2) = this;
    *(_QWORD *)v24 = 0LL;
    *((_QWORD *)v24 + 1) = 0LL;
    *((_QWORD *)v24 + 5) = Current;
    *((_QWORD *)v24 + 3) = 0LL;
    *((_QWORD *)v24 + 4) = 0LL;
    *((_DWORD *)v24 + 12) = Data1;
    *((_DWORD *)v24 + 13) = a2;
    *((_DWORD *)v24 + 14) = a3;
  }
  else
  {
    v29 = 0LL;
  }
  if ( !v29 )
  {
    v30 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
    v23 = -1073741801;
    *(_QWORD *)(v30 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v30);
    goto LABEL_27;
  }
  v31 = *v19;
  *(_QWORD *)v29 = *v19;
  *((_QWORD *)v29 + 1) = v19;
  if ( *((DXGCOPYPROTECTION ***)v31 + 1) != v19 )
    __fastfail(3u);
  *((_QWORD *)v31 + 1) = v29;
  *v19 = v29;
  v32 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
  if ( v32 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( **((struct _KTHREAD ***)Current + 36) != CurrentThread )
    {
      v36 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v36 + 24) = 500LL;
      WdLogEvent5_WdAssertion(v36);
    }
    v37 = (_QWORD *)((char *)v29 + 24);
    v38 = *((_QWORD *)Current + 34);
    *v37 = v38;
    v37[1] = (char *)Current + 272;
    if ( *(struct DXGPROCESS **)(v38 + 8) != (struct DXGPROCESS *)((char *)Current + 272) )
      __fastfail(3u);
    *(_QWORD *)(v38 + 8) = v37;
    *((_QWORD *)Current + 34) = v37;
    *a4 = Data1;
  }
  else
  {
    v33 = *(DXGCOPYPROTECTION **)v29;
    v34 = (DXGCOPYPROTECTION **)*((_QWORD *)v29 + 1);
    if ( *(DXGCOPYPROTECTION **)(*(_QWORD *)v29 + 8LL) != v29 || *v34 != v29 )
      __fastfail(3u);
    *v34 = v33;
    *((_QWORD *)v33 + 1) = v34;
    DXGCOPYPROTECTION::`scalar deleting destructor'(v29);
    DXGADAPTER::ReleaseReference(this[2]);
  }
  v23 = v32;
LABEL_41:
  if ( v40[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v40);
  return v23;
}
