/*
 * XREFs of DxgkEnableUnorderedWaitsForDevice @ 0x1C005B690
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkEnableUnorderedWaitsForDevice(unsigned int a1, char a2)
{
  __int64 v3; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *v6; // rbx
  __int64 v7; // rax
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  unsigned int v14; // edx
  __int64 v15; // r9
  int v16; // r8d
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  struct _KEVENT *v21; // rdi
  BOOLEAN v22; // al
  __int64 v23; // rcx
  char v24; // of
  unsigned __int8 v25; // di
  __int64 v26; // r8
  __int64 v27; // rbp
  __int64 v28; // rt0
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  unsigned int v35; // edi
  _QWORD *i; // rdi
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax

  v3 = a1;
  Current = DXGPROCESS::GetCurrent();
  v6 = Current;
  if ( Current )
  {
    v9 = (char *)Current + 192;
    if ( Current != (struct DXGPROCESS *)-192LL && *((struct _KTHREAD **)Current + 25) == KeGetCurrentThread() )
    {
      v10 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v10 + 24) = 1155LL;
      WdLogEvent5_WdAssertion(v10);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v13 = *((_DWORD *)v9 + 4);
        if ( v13 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v11, &EventBlockThread, v12, v13);
      }
      ExAcquirePushLockSharedEx(v9, 0LL);
    }
    v14 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
    if ( v14 < *((_DWORD *)v6 + 58)
      && (v15 = *((_QWORD *)v6 + 27),
          v16 = *(_DWORD *)(v15 + 16LL * v14 + 8),
          (((unsigned int)v3 >> 26) & 0x30) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x30))
      && (v16 & 0x1000) == 0
      && (v16 & 0xF) != 0
      && (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0xF) == 3 )
    {
      v17 = *(_QWORD *)(v15 + 16LL * v14);
      if ( v17 )
        _InterlockedIncrement64((volatile signed __int64 *)(v17 + 64));
    }
    else
    {
      v17 = 0LL;
    }
    ExReleasePushLockSharedEx(v9, 0LL);
    KeLeaveCriticalRegion();
    if ( v17 )
    {
      v20 = *(_QWORD *)(v17 + 16);
      if ( *(_DWORD *)(v17 + 280) == 2 )
        v21 = (struct _KEVENT *)(v20 + 80);
      else
        v21 = (struct _KEVENT *)(v20 + 56);
      if ( !KeReadStateEvent(v21) )
        KeWaitForSingleObject(v21, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      v22 = ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 80), 0);
      v24 = 0;
      if ( !v22 )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 80LL));
        v25 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v26, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 80), 1u);
        if ( v25 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 80LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v27 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL);
      v28 = _InterlockedAdd64((volatile signed __int64 *)(v27 + 24), 1uLL);
      if ( (v28 < 0) ^ v24 | (v28 == 0) )
      {
        v29 = WdLogNewEntry5_WdAssertion(v23);
        *(_QWORD *)(v29 + 24) = 1141LL;
        WdLogEvent5_WdAssertion(v29);
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v27 + 104, 0LL);
      if ( *(_DWORD *)(v17 + 352) == 1 )
      {
        *(_BYTE *)(v17 + 2847) = a2;
        if ( !a2 )
        {
          for ( i = *(_QWORD **)(v17 + 288); i != (_QWORD *)(v17 + 288) && i; i = (_QWORD *)*i )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 400LL) + 8LL) + 744LL))(i[27]);
        }
        v35 = 0;
      }
      else
      {
        v34 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
        *(_QWORD *)(v34 + 24) = v3;
        *(_QWORD *)(v34 + 32) = -1073741130LL;
        WdLogEvent5_WdWarning(v34);
        v35 = -1073741130;
      }
      ExReleasePushLockSharedEx(v27 + 104, 0LL);
      KeLeaveCriticalRegion();
      v38 = _InterlockedDecrement64((volatile signed __int64 *)(v27 + 24));
      if ( v38 )
      {
        if ( v38 < 0 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v37);
          *(_QWORD *)(v39 + 24) = 1158LL;
          WdLogEvent5_WdAssertion(v39);
        }
      }
      else
      {
        DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v27 + 16), (struct DXGADAPTER *)v27);
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 80));
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v17 + 16), (struct DXGDEVICE *)v17);
      return v35;
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v19 + 24) = v3;
      *(_QWORD *)(v19 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v19);
      return 3221225485LL;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
}
