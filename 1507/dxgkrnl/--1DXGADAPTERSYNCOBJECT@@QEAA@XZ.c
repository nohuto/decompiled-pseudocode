/*
 * XREFs of ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C0083230
 * Callers:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C001FCB0 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00837A8 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT(
        DXGADAPTERSYNCOBJECT *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rax
  DXGADAPTERSYNCOBJECT *v15; // rcx
  DXGADAPTERSYNCOBJECT **v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v20; // rax

  if ( *((_BYTE *)this + 24) )
  {
    v5 = *((_QWORD *)this + 2) + 136LL;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v5 + 8) == KeGetCurrentThread() )
    {
      if ( *(int *)(v5 + 24) <= 0 )
      {
        v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
        *(_QWORD *)(v10 + 24) = 319LL;
        WdLogEvent5_WdAssertion(v10);
      }
      ++*(_DWORD *)(v5 + 24);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5 + 16, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v12 = *(_DWORD *)(v5 + 28);
          if ( v12 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v11, &EventBlockThread, v8, v12);
        }
        _InterlockedIncrement64((volatile signed __int64 *)v5);
        ExAcquirePushLockExclusiveEx(v5 + 16, 0LL);
      }
      if ( *(_QWORD *)(v5 + 8) )
      {
        v13 = WdLogNewEntry5_WdAssertion(v11, v6, v8, v9);
        *(_QWORD *)(v13 + 24) = 343LL;
        WdLogEvent5_WdAssertion(v13);
      }
      if ( *(_DWORD *)(v5 + 24) )
      {
        v14 = WdLogNewEntry5_WdAssertion(v11, v6, v8, v9);
        *(_QWORD *)(v14 + 24) = 344LL;
        WdLogEvent5_WdAssertion(v14);
      }
      *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
      *(_DWORD *)(v5 + 24) = 1;
    }
    v15 = *(DXGADAPTERSYNCOBJECT **)this;
    v16 = (DXGADAPTERSYNCOBJECT **)*((_QWORD *)this + 1);
    if ( *(DXGADAPTERSYNCOBJECT **)(*(_QWORD *)this + 8LL) != this || *v16 != this )
      __fastfail(3u);
    *v16 = v15;
    *((_QWORD *)v15 + 1) = v16;
    if ( *(struct _KTHREAD **)(v5 + 8) != KeGetCurrentThread() )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v6, v8);
      v17[3] = 275LL;
      v17[4] = 4LL;
      v17[5] = v5;
      v17[6] = 0LL;
      v17[7] = 0LL;
      WdLogEvent5_WdCriticalError(v17);
    }
    if ( *(int *)(v5 + 24) <= 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v15, v6, v8, v9);
      *(_QWORD *)(v18 + 24) = 363LL;
      WdLogEvent5_WdAssertion(v18);
    }
    if ( (*(_DWORD *)(v5 + 24))-- == 1 )
    {
      *(_QWORD *)(v5 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL));
  }
  if ( *((_QWORD *)this + 4) )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = 956LL;
    WdLogEvent5_WdAssertion(v20);
  }
  *((_QWORD *)this + 2) = 0LL;
}
