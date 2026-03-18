/*
 * XREFs of NtUserAttachThreadInput @ 0x1C0042900
 * Callers:
 *     <none>
 * Callees:
 *     DisassociateShellFrameAppThreads2 @ 0x1C0009370 (DisassociateShellFrameAppThreads2.c)
 *     zzzAttachThreadInput @ 0x1C004340C (zzzAttachThreadInput.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C00911E4 (PtiFromThreadId.c)
 */

__int64 __fastcall NtUserAttachThreadInput(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r8
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rcx

  EnterCrit(1LL);
  v6 = PtiFromThreadId(a1);
  v7 = 0;
  v8 = v6;
  if ( !v6 )
    goto LABEL_21;
  v9 = PtiFromThreadId(a2);
  v10 = v9;
  if ( !v9 || !*(_QWORD *)(v8 + 416) || !*(_QWORD *)(v9 + 416) )
    goto LABEL_21;
  if ( a3 )
  {
    if ( (*(_DWORD *)(v8 + 1080) & 0x40000) != 0 || (*(_DWORD *)(v9 + 1080) & 0x40000) != 0 )
    {
      v16 = 5LL;
      goto LABEL_18;
    }
  }
  else
  {
    if ( ((*(_DWORD *)(v8 + 1080) >> 18) & 1) != 0 && (*(_DWORD *)(v9 + 1080) & 0x40000) != 0 )
    {
LABEL_21:
      v16 = 87LL;
      goto LABEL_18;
    }
    if ( ((*(_DWORD *)(v8 + 1080) >> 18) & 1) != 0 )
    {
      DisassociateShellFrameAppThreads2(v8, v9);
      goto LABEL_9;
    }
    if ( (*(_DWORD *)(v9 + 1080) & 0x40000) == 0 )
    {
LABEL_9:
      v11 = 0LL;
      goto LABEL_10;
    }
    DisassociateShellFrameAppThreads2(v9, v8);
  }
  v11 = 1LL;
  if ( !a3 )
    goto LABEL_9;
LABEL_10:
  v12 = zzzAttachThreadInput(v8, v10, v11);
  if ( v12 < 0 )
  {
    v16 = RtlNtStatusToDosError(v12);
LABEL_18:
    UserSetLastError(v16);
    goto LABEL_12;
  }
  v7 = 1;
LABEL_12:
  UserSessionSwitchLeaveCrit(v14, v13);
  return v7;
}
