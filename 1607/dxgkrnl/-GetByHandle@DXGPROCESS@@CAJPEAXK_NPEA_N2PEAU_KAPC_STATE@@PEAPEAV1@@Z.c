/*
 * XREFs of ?GetByHandle@DXGPROCESS@@CAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C00CE2E4
 * Callers:
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00CE1EC (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESS::GetByHandle(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        char a3,
        bool *a4,
        bool *a5,
        PRKAPC_STATE ApcState,
        LUID PrivilegeValue)
{
  __int64 v11; // rcx
  bool *v12; // r13
  struct DXGPROCESS **v13; // r14
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KPROCESS *v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 ProcessDxgProcess; // rbp
  int ProcessSessionId; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 CurrentProcess; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  BOOLEAN v43; // al
  struct _KAPC_STATE *v44; // rdx
  __int64 v45; // rax
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal((__int64)Handle) + 26) != KeGetCurrentThread() )
  {
    v34 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v34 + 24) = 1700LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v12 = a5;
  v13 = (struct DXGPROCESS **)PrivilegeValue;
  *a4 = 0;
  *v12 = 0;
  *v13 = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, DesiredAccess, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v17 = (struct _KPROCESS *)Object;
  v18 = v14;
  if ( v14 < 0 )
  {
    v37 = *((unsigned int *)DXGGLOBAL::GetGlobal(v16) + 264);
    if ( (v37 & 1) != 0 )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v36, v38);
      v40[3] = 275LL;
      v40[4] = 33LL;
      v40[5] = v18;
      v40[6] = 0LL;
      v40[7] = 0LL;
      WdLogEvent5_WdCriticalError(v40);
    }
    v41 = WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
    *(_QWORD *)(v41 + 24) = Handle;
    WdLogEvent5_WdWarning(v41);
    return (unsigned int)v18;
  }
  else
  {
    if ( !Object )
    {
      v42 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v42 + 24) = 1734LL;
      WdLogEvent5_WdAssertion(v42);
    }
    ProcessDxgProcess = PsGetProcessDxgProcess(v17, v15);
    if ( ProcessDxgProcess )
    {
      ProcessSessionId = PsGetProcessSessionId(v17);
      if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v23, v22, v24, v25) )
      {
        if ( a3 )
        {
          v30 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
          CurrentProcess = PsGetCurrentProcess(v31);
          *(_QWORD *)(v30 + 32) = v17;
          *(_QWORD *)(v30 + 24) = CurrentProcess;
          WdLogEvent5_WdWarning(v30);
        }
        else
        {
          PrivilegeValue = (LUID)14LL;
          v43 = SeSinglePrivilegeCheck((LUID)14LL, 1);
          v44 = ApcState;
          *v12 = v43 != 0;
          KeStackAttachProcess(v17, v44);
          *a4 = 1;
        }
      }
      if ( *(struct _KPROCESS **)(ProcessDxgProcess + 48) != v17 )
      {
        v45 = WdLogNewEntry5_WdAssertion(v27);
        *(_QWORD *)(v45 + 24) = 1780LL;
        WdLogEvent5_WdAssertion(v45);
      }
      *v13 = (struct DXGPROCESS *)ProcessDxgProcess;
      return 0LL;
    }
    else
    {
      v35 = WdLogNewEntry5_WdEvent(v19);
      *(_QWORD *)(v35 + 24) = v17;
      WdLogEvent5_WdEvent(v35);
      ObfDereferenceObject(v17);
      return 3221225485LL;
    }
  }
}
