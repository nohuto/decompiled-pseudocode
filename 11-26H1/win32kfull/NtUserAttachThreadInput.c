/*
 * XREFs of NtUserAttachThreadInput @ 0x1401CA0A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     zzzAttachThreadInput @ 0x1401CA1C8 (zzzAttachThreadInput.c)
 *     DisassociateShellFrameAppThreads2 @ 0x1402A6D6C (DisassociateShellFrameAppThreads2.c)
 */

__int64 __fastcall NtUserAttachThreadInput(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  ULONG v12; // ecx
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx

  EnterCrit(0LL, 0LL);
  v6 = PtiFromThreadId(a1);
  v7 = 0LL;
  v8 = v6;
  if ( !v6 )
    goto LABEL_13;
  v9 = PtiFromThreadId(a2);
  v10 = v9;
  if ( !v9 || !*(_QWORD *)(v8 + 488) || !*(_QWORD *)(v9 + 488) )
    goto LABEL_13;
  v11 = *(_DWORD *)(v8 + 1360) & 0x40000LL;
  if ( !a3 )
  {
    if ( !v11 )
    {
      if ( (*(_DWORD *)(v10 + 1360) & 0x40000) == 0 )
        goto LABEL_11;
      v16 = v8;
      v17 = v10;
      goto LABEL_19;
    }
    if ( (*(_DWORD *)(v10 + 1360) & 0x40000) == 0 )
    {
      v16 = v10;
      v17 = v8;
LABEL_19:
      DisassociateShellFrameAppThreads2(v17, v16);
      goto LABEL_11;
    }
LABEL_13:
    v12 = 87;
    goto LABEL_14;
  }
  if ( v11 || (*(_DWORD *)(v10 + 1360) & 0x40000) != 0 )
  {
    v12 = 5;
LABEL_14:
    UserSetLastError(v12);
    goto LABEL_15;
  }
LABEL_11:
  v13 = zzzAttachThreadInput(v8, v10, a3 != 0);
  if ( v13 < 0 )
  {
    v12 = RtlNtStatusToDosError(v13);
    goto LABEL_14;
  }
  v7 = 1LL;
LABEL_15:
  UserSessionSwitchLeaveCrit(v14);
  return v7;
}
