/*
 * XREFs of NtUserShutdownBlockReasonCreate @ 0x1C012E380
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0054080 (InternalRemoveProp.c)
 *     _GetAncestor @ 0x1C00987DC (_GetAncestor.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     InternalSetProp @ 0x1C00A782C (InternalSetProp.c)
 *     QueueShutdownData @ 0x1C015486C (QueueShutdownData.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonCreate(__int64 a1, char *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r15
  int v9; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r12
  char *v12; // rax
  __int64 v13; // r14
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int16 v17; // r11
  __int64 v18; // r8
  __int64 v20; // rcx
  unsigned __int64 v22; // [rsp+88h] [rbp+20h]

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( !v8 )
    goto LABEL_21;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6);
  v7 = *(_QWORD *)(v8 + 16);
  if ( *(_QWORD *)(v7 + 376) != CurrentProcessWin32Process )
  {
    v9 = 5;
    goto LABEL_21;
  }
  if ( v8 != GetAncestor(v8) || a3 > 0x101 )
  {
    v20 = 87LL;
LABEL_26:
    UserSetLastError(v20);
    goto LABEL_21;
  }
  v22 = a3 + 1;
  v11 = 2 * v22;
  v12 = (char *)Win32AllocPool(2 * v22, 1919054677LL);
  v13 = (__int64)v12;
  if ( !v12 )
  {
    v20 = 8LL;
    goto LABEL_26;
  }
  if ( a3 )
  {
    if ( v11 )
    {
      if ( ((unsigned __int8)a2 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v11] > W32UserProbeAddress || &a2[v11] < a2 )
        *W32UserProbeAddress = 0;
    }
    RtlStringCchCopyW(v12, v22, a2);
  }
  else
  {
    *(_WORD *)v12 = 0;
  }
  v14 = InternalRemoveProp();
  if ( v14 )
  {
    Win32FreePool(v14, v15, v16);
    v17 = gatomShutdownBlockingReason;
  }
  if ( (unsigned int)InternalSetProp(v8, v17, v13, 1) )
  {
    if ( gptiShutdownWaiter )
      QueueShutdownData(a1, 1LL);
    v9 = 1;
  }
  else
  {
    Win32FreePool(v13, v6, v18);
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v7, v6);
  return v9;
}
