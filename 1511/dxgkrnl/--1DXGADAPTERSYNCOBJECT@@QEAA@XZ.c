/*
 * XREFs of ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C0093B40
 * Callers:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C001FA20 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00948DC (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT(DXGADAPTERSYNCOBJECT *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  DXGADAPTERSYNCOBJECT *v6; // rcx
  DXGADAPTERSYNCOBJECT **v7; // rax
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  if ( !*((_BYTE *)this + 24) )
    goto LABEL_18;
  v2 = *((_QWORD *)this + 2) + 136LL;
  KeEnterCriticalRegion();
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 8)) > 1 )
  {
    if ( *(struct _KTHREAD **)v2 == KeGetCurrentThread() )
    {
      if ( *(int *)(v2 + 12) <= 0 )
      {
        v9 = WdLogNewEntry5_WdAssertion(v4);
        *(_QWORD *)(v9 + 24) = 328LL;
        WdLogEvent5_WdAssertion(v9);
      }
      ++*(_DWORD *)(v2 + 12);
      goto LABEL_8;
    }
    if ( bTracingEnabled )
    {
      v10 = *(_DWORD *)(v2 + 56);
      if ( v10 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v4, &EventBlockThread, v5, v10);
    }
    ExInterlockedAddLargeInteger((PLARGE_INTEGER)(v2 + 16), (LARGE_INTEGER)1LL, (PKSPIN_LOCK)(v2 + 48));
    KeWaitForSingleObject((PVOID)(v2 + 24), Executive, 0, 0, 0LL);
  }
  if ( *(_QWORD *)v2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v11 + 24) = 354LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *(_DWORD *)(v2 + 12) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v12 + 24) = 355LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *(_QWORD *)v2 = KeGetCurrentThread();
  *(_DWORD *)(v2 + 12) = 1;
LABEL_8:
  v6 = *(DXGADAPTERSYNCOBJECT **)this;
  v7 = (DXGADAPTERSYNCOBJECT **)*((_QWORD *)this + 1);
  if ( *(DXGADAPTERSYNCOBJECT **)(*(_QWORD *)this + 8LL) != this || *v7 != this )
    __fastfail(3u);
  *v7 = v6;
  *((_QWORD *)v6 + 1) = v7;
  if ( *(struct _KTHREAD **)v2 != KeGetCurrentThread() )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v3, v5);
    v13[3] = 275LL;
    v13[4] = 4LL;
    v13[5] = v2;
    v13[6] = 0LL;
    v13[7] = 0LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( *(int *)(v2 + 12) <= 0 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v14 + 24) = 374LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (*(_DWORD *)(v2 + 12))-- == 1 )
  {
    *(_QWORD *)v2 = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) != 1 )
      KeSetEvent((PRKEVENT)(v2 + 24), 0, 0);
  }
  else
  {
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 8));
  }
  KeLeaveCriticalRegion();
  DXGADAPTER::ReleaseReference(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL));
LABEL_18:
  if ( *((_QWORD *)this + 4) )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v15 + 24) = 1013LL;
    WdLogEvent5_WdAssertion(v15);
  }
  *((_QWORD *)this + 2) = 0LL;
}
