/*
 * XREFs of NtUserGetUpdatedClipboardFormats @ 0x1C021C2B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00D6580 (CheckClipboardAccess.c)
 *     CountNumClipFormatForIL @ 0x1C0117370 (CountNumClipFormatForIL.c)
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C01173E4 (CheckClipboardAccessForIntegrityLevel.c)
 *     IsFmtBlocked @ 0x1C01F0A94 (IsFmtBlocked.c)
 */

__int64 __fastcall NtUserGetUpdatedClipboardFormats(__int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 CurrentProcessWin32Process; // r13
  unsigned int v6; // ebx
  _DWORD *v7; // rdx
  unsigned int *v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned int v11; // r8d
  unsigned int v12; // edi
  unsigned int v13; // r15d
  __int64 v14; // rsi
  unsigned int v15; // ecx
  __int64 v16; // r10
  _DWORD *v17; // r8
  int v19; // [rsp+20h] [rbp-58h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = 0;
  EnterCrit(1LL);
  v9 = CheckClipboardAccess();
  if ( v9 )
  {
    v10 = PsGetCurrentProcessWin32Process(v8);
    v11 = CountNumClipFormatForIL(*(_QWORD *)(v10 + 832), v9);
    v7 = (_DWORD *)W32UserProbeAddress;
    v8 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v8 = (unsigned int *)W32UserProbeAddress;
    *v8 = *v8;
    *a3 = v11;
    if ( a2 >= v11 )
    {
      v12 = 0;
      v13 = 0;
      v19 = 0;
      while ( v12 < *(_DWORD *)(v9 + 104) && v13 < a2 )
      {
        v14 = 32LL * v12;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                             *(_QWORD *)(*(_QWORD *)(v9 + 96) + v14 + 20),
                             *(_QWORD *)(CurrentProcessWin32Process + 832))
          || !(unsigned int)IsFmtBlocked(*(_DWORD *)(*(_QWORD *)(v9 + 96) + 32LL * v12)) )
        {
          v17 = (_DWORD *)(a1 + 4LL * v13);
          v7 = v17;
          if ( (unsigned __int64)v17 >= W32UserProbeAddress )
            v7 = (_DWORD *)W32UserProbeAddress;
          *v7 = *v7;
          v8 = (unsigned int *)*(unsigned int *)(v14 + *(_QWORD *)(v9 + 96));
          *v17 = (_DWORD)v8;
          v13 = ++v19;
        }
        else
        {
          EtwTraceUIPIClipboardError(0LL, CurrentProcessWin32Process, v15, *(_QWORD *)(v16 + v14 + 20));
        }
        ++v12;
      }
      v6 = 1;
    }
    else
    {
      UserSetLastError(122);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v6;
}
