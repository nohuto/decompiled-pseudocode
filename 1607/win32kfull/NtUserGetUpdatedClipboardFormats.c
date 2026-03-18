/*
 * XREFs of NtUserGetUpdatedClipboardFormats @ 0x1C0215250
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00F9194 (CheckClipboardAccess.c)
 *     CountNumClipFormatForIL @ 0x1C0149F10 (CountNumClipFormatForIL.c)
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C0149F84 (CheckClipboardAccessForIntegrityLevel.c)
 *     IsFmtBlocked @ 0x1C01E6738 (IsFmtBlocked.c)
 */

__int64 __fastcall NtUserGetUpdatedClipboardFormats(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // r12d
  __int64 CurrentProcessWin32Process; // r13
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rdx
  unsigned int *v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned int v15; // r8d
  unsigned int v16; // edi
  unsigned int v17; // r15d
  __int64 v18; // rsi
  unsigned int v19; // ecx
  __int64 v20; // r10
  _DWORD *v21; // r8
  int v23; // [rsp+20h] [rbp-58h]

  v4 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v6 = 0;
  EnterCrit(0LL, 1LL);
  v13 = CheckClipboardAccess(v8, v7, v9, v10);
  if ( v13 )
  {
    v14 = PsGetCurrentProcessWin32Process(v12, v11);
    v15 = CountNumClipFormatForIL(*(_QWORD *)(v14 + 824), v13);
    v11 = (_DWORD *)W32UserProbeAddress;
    v12 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v12 = (unsigned int *)W32UserProbeAddress;
    *v12 = *v12;
    *a3 = v15;
    if ( v4 >= v15 )
    {
      v16 = 0;
      v17 = 0;
      v23 = 0;
      while ( v16 < *(_DWORD *)(v13 + 104) && v17 < v4 )
      {
        v18 = 32LL * v16;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                             *(_QWORD *)(*(_QWORD *)(v13 + 96) + v18 + 20),
                             *(_QWORD *)(CurrentProcessWin32Process + 824))
          || !(unsigned int)IsFmtBlocked(*(_DWORD *)(*(_QWORD *)(v13 + 96) + 32LL * v16)) )
        {
          v21 = (_DWORD *)(a1 + 4LL * v17);
          v11 = v21;
          if ( (unsigned __int64)v21 >= W32UserProbeAddress )
            v11 = (_DWORD *)W32UserProbeAddress;
          *v11 = *v11;
          v12 = (unsigned int *)*(unsigned int *)(v18 + *(_QWORD *)(v13 + 96));
          *v21 = (_DWORD)v12;
          v17 = ++v23;
        }
        else
        {
          EtwTraceUIPIClipboardError(0LL, CurrentProcessWin32Process, v19, *(_QWORD *)(v20 + v18 + 20));
        }
        ++v16;
      }
      v6 = 1;
    }
    else
    {
      UserSetLastError(122LL);
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v6;
}
