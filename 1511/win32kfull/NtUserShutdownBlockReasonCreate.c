/*
 * XREFs of NtUserShutdownBlockReasonCreate @ 0x1C00D2DD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     InternalSetProp @ 0x1C0079054 (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C007FC50 (InternalRemoveProp.c)
 *     _GetAncestor @ 0x1C00D0504 (_GetAncestor.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     QueueShutdownData @ 0x1C01D32C0 (QueueShutdownData.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonCreate(__int64 a1, const unsigned __int16 *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r15
  unsigned int v9; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r12
  unsigned __int16 *v12; // rax
  __int64 v13; // r14
  _QWORD *v14; // rax
  unsigned __int16 v15; // r11
  int v17; // ecx
  unsigned __int64 v19; // [rsp+88h] [rbp+20h]

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( !v8 )
    goto LABEL_21;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  v7 = *(_QWORD *)(v8 + 16);
  if ( *(_QWORD *)(v7 + 376) != CurrentProcessWin32Process )
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
  v11 = v19;
  v12 = (unsigned __int16 *)Win32AllocPool(2 * v19);
  v13 = (__int64)v12;
  if ( !v12 )
  {
    v17 = 8;
    goto LABEL_26;
  }
  if ( a3 )
  {
    if ( v11 * 2 )
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
    *v12 = 0;
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
