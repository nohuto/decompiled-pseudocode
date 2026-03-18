/*
 * XREFs of ?GetByHandle@DXGPROCESS@@CAJPEAXEPEAPEAV1@@Z @ 0x1C00DB384
 * Callers:
 *     ?Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ @ 0x1C00DB2B4 (-Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESS::GetByHandle(HANDLE Handle, __int64 a2, struct DXGPROCESS **a3, __int64 a4)
{
  char v5; // di
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KTHREAD *CurrentThread; // r9
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID v17; // rdi
  unsigned int v18; // esi
  struct DXGPROCESS *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 ProcessWin32Process; // rbp
  __int64 v23; // r8
  __int64 v24; // r9
  int ProcessSessionId; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 CurrentProcess; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v5 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)Handle, a2, (__int64)a3, a4);
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)Global + 26) != CurrentThread )
  {
    v31 = WdLogNewEntry5_WdAssertion(v9, v8, v10, CurrentThread);
    *(_QWORD *)(v31 + 24) = 1370LL;
    WdLogEvent5_WdAssertion(v31);
  }
  *a3 = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, v5 != 0 ? 1024 : 512, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v17 = Object;
  v18 = v12;
  if ( v12 < 0 )
  {
    v32 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v32 + 24) = Handle;
    WdLogEvent5_WdWarning(v32);
    return v18;
  }
  else
  {
    if ( !Object )
    {
      v33 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      *(_QWORD *)(v33 + 24) = 1396LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v19 = 0LL;
    ProcessWin32Process = PsGetProcessWin32Process(v17);
    if ( !ProcessWin32Process )
      goto LABEL_15;
    ProcessSessionId = PsGetProcessSessionId(v17);
    if ( ProcessSessionId == (unsigned int)PsGetCurrentProcessSessionId(v27, v26, v28, v29) )
    {
      v19 = *(struct DXGPROCESS **)(ProcessWin32Process + 248);
    }
    else
    {
      v34 = WdLogNewEntry5_WdWarning(v21, v20, v23, v24);
      CurrentProcess = PsGetCurrentProcess(v35);
      *(_QWORD *)(v34 + 32) = v17;
      *(_QWORD *)(v34 + 24) = CurrentProcess;
      WdLogEvent5_WdWarning(v34);
    }
    if ( v19 )
    {
      if ( *((PVOID *)v19 + 7) != v17 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v21, v20, v23, v24);
        *(_QWORD *)(v37 + 24) = 1440LL;
        WdLogEvent5_WdAssertion(v37);
      }
      *a3 = v19;
      return 0LL;
    }
    else
    {
LABEL_15:
      v38 = WdLogNewEntry5_WdEvent(v21, v20, v23, v24);
      *(_QWORD *)(v38 + 24) = v17;
      WdLogEvent5_WdEvent(v38);
      ObfDereferenceObject(v17);
      return 3221225485LL;
    }
  }
}
