/*
 * XREFs of NtUserShutdownBlockReasonCreate @ 0x1C0130DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     InternalSetProp @ 0x1C0081908 (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C008748C (InternalRemoveProp.c)
 *     _GetAncestor @ 0x1C00E9F5C (_GetAncestor.c)
 *     QueueShutdownData @ 0x1C01D168C (QueueShutdownData.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonCreate(__int64 a1, char *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r12
  char *v12; // rax
  __int64 v13; // r14
  _QWORD *v14; // rax
  unsigned __int16 v15; // r11
  int v17; // ecx
  unsigned __int64 v19; // [rsp+88h] [rbp+20h]

  EnterCrit(1LL);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( !v8 )
    goto LABEL_21;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  v7 = *(_QWORD *)(v8 + 16);
  if ( *(_QWORD *)(v7 + 384) != CurrentProcessWin32Process )
  {
    v9 = 5;
    goto LABEL_21;
  }
  if ( v8 != GetAncestor(v8) || a3 > 0x101 )
  {
    v17 = 87;
LABEL_26:
    UserSetLastError(v17);
    goto LABEL_21;
  }
  v19 = a3 + 1;
  v11 = 2 * v19;
  v12 = (char *)Win32AllocPool(2 * v19, 1919054677LL);
  v13 = (__int64)v12;
  if ( !v12 )
  {
    v17 = 8;
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
    RtlStringCchCopyW(v12, v19, a2);
  }
  else
  {
    *(_WORD *)v12 = 0;
  }
  v14 = InternalRemoveProp(v8, gatomShutdownBlockingReason, 1);
  if ( v14 )
  {
    Win32FreePool(v14);
    v15 = gatomShutdownBlockingReason;
  }
  if ( (unsigned int)InternalSetProp(v8, v15, v13, 1) )
  {
    if ( gptiShutdownWaiter )
      QueueShutdownData(a1, 1LL);
    v9 = 1;
  }
  else
  {
    Win32FreePool(v13);
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v7, v6);
  return v9;
}
