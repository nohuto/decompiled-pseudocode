/*
 * XREFs of ?GetByHandle@DXGPROCESS@@CAJPEAXE_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C014DC5C
 * Callers:
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C014D708 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESS::GetByHandle(
        HANDLE Handle,
        char a2,
        char a3,
        bool *a4,
        bool *a5,
        struct _KAPC_STATE *ApcState,
        LUID PrivilegeValue)
{
  __int64 v11; // rcx
  __int64 v12; // rax
  struct DXGPROCESS **v13; // r15
  bool *v14; // r12
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  PVOID v20; // rdi
  unsigned int v21; // ebp
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 ProcessWin32Process; // rbp
  __int64 v28; // r8
  __int64 v29; // r9
  int ProcessSessionId; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 CurrentProcess; // rax
  __int64 v38; // rax
  BOOLEAN v39; // al
  struct _KAPC_STATE *v40; // rdx
  PVOID *v41; // rbx
  __int64 v42; // rax
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal((__int64)Handle) + 28) != KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 1460LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = (struct DXGPROCESS **)PrivilegeValue;
  v14 = a5;
  *a4 = 0;
  *v13 = 0LL;
  *v14 = 0;
  v15 = ObReferenceObjectByHandle(Handle, a2 != 0 ? 1024 : 512, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v20 = Object;
  v21 = v15;
  if ( v15 < 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    *(_QWORD *)(v22 + 24) = Handle;
    WdLogEvent5_WdWarning(v22);
    return v21;
  }
  if ( !Object )
  {
    v24 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v24 + 24) = 1488LL;
    WdLogEvent5_WdAssertion(v24);
  }
  ProcessWin32Process = PsGetProcessWin32Process(v20);
  if ( !ProcessWin32Process )
    goto LABEL_11;
  ProcessSessionId = PsGetProcessSessionId(v20);
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v32, v31, v33, v34) )
  {
    if ( a3 )
    {
      v35 = WdLogNewEntry5_WdWarning(v26, v25, v28, v29);
      CurrentProcess = PsGetCurrentProcess(v36);
      *(_QWORD *)(v35 + 32) = v20;
      *(_QWORD *)(v35 + 24) = CurrentProcess;
      WdLogEvent5_WdWarning(v35);
LABEL_11:
      v38 = WdLogNewEntry5_WdEvent(v26, v25, v28, v29);
      *(_QWORD *)(v38 + 24) = v20;
      WdLogEvent5_WdEvent(v38);
      if ( *a4 )
      {
        KeUnstackDetachProcess(ApcState);
        *a4 = 0;
      }
      ObfDereferenceObject(v20);
      return 3221225485LL;
    }
    PrivilegeValue = (LUID)14LL;
    v39 = SeSinglePrivilegeCheck((LUID)14LL, 1);
    v40 = ApcState;
    *v14 = v39 != 0;
    KeStackAttachProcess((PRKPROCESS)v20, v40);
    *a4 = 1;
  }
  v41 = *(PVOID **)(ProcessWin32Process + 248);
  if ( !v41 )
    goto LABEL_11;
  if ( v41[7] != v20 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v26);
    *(_QWORD *)(v42 + 24) = 1556LL;
    WdLogEvent5_WdAssertion(v42);
  }
  *v13 = (struct DXGPROCESS *)v41;
  return 0LL;
}
