/*
 * XREFs of NtUserGetUpdatedClipboardFormats @ 0x1402B4F40
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x140056770 (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1401AF6D0 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1401AF77C (-IsFmtBlocked@@YAHI@Z.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetUpdatedClipboardFormats(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r12d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rsi
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct tagWINDOWSTATION *v9; // r14
  __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned int ULongFromUser; // eax
  unsigned int v13; // r15d
  unsigned int v14; // r13d
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v22; // [rsp+20h] [rbp-88h] BYREF
  int v23; // [rsp+28h] [rbp-80h]
  int v24; // [rsp+4Ch] [rbp-5Ch]
  __int64 v25; // [rsp+50h] [rbp-58h] BYREF
  int v26; // [rsp+58h] [rbp-50h]
  __int64 v27; // [rsp+60h] [rbp-48h] BYREF
  int v28; // [rsp+68h] [rbp-40h]

  v3 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = CurrentProcessWin32Process;
  v6 = 0;
  if ( CurrentProcessWin32Process )
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  EnterLeaveCritShared::EnterLeaveCritShared(&v22, 1LL);
  v9 = CheckClipboardAccess(v7);
  if ( v9 )
  {
    v10 = PsGetCurrentProcessWin32Process(v8);
    if ( v10 )
      v10 &= -(__int64)(*(_QWORD *)v10 != 0LL);
    v22 = *(_QWORD *)(v10 + 864);
    v23 = *(_DWORD *)(v10 + 872);
    v11 = CountNumClipFormatForIL(&v22, (__int64)v9);
    ULongFromUser = RtlReadULongFromUser(a3);
    RtlWriteULongToUser(a3, ULongFromUser);
    *a3 = v11;
    if ( v3 >= v11 )
    {
      v13 = 0;
      v14 = 0;
      while ( v13 < *((_DWORD *)v9 + 26) && v14 < v3 )
      {
        v22 = *(_QWORD *)(v5 + 864);
        v23 = *(_DWORD *)(v5 + 872);
        v15 = 32LL * v13;
        v16 = *((_QWORD *)v9 + 12);
        v25 = *(_QWORD *)(v16 + v15 + 20);
        v26 = *(_DWORD *)(v16 + v15 + 28);
        if ( CheckClipboardAccessForIntegrityLevel(&v25, (const struct tagUIPI_INFO *)&v22)
          || !(unsigned int)IsFmtBlocked(*(unsigned int *)(v15 + *((_QWORD *)v9 + 12)), v17) )
        {
          v19 = 4LL * v14;
          v20 = RtlReadULongFromUser(v19 + a1);
          RtlWriteULongToUser(v19 + a1, v20);
          v8 = *(unsigned int *)(v15 + *((_QWORD *)v9 + 12));
          *(_DWORD *)(a1 + v19) = v8;
          v24 = ++v14;
        }
        else
        {
          v18 = *((_QWORD *)v9 + 12);
          v27 = *(_QWORD *)(v15 + v18 + 20);
          v28 = *(_DWORD *)(v15 + v18 + 28);
          EtwTraceUIPIClipboardError(0LL, v5, *(unsigned int *)(v15 + v18), &v27);
        }
        ++v13;
        v3 = a2;
      }
      v6 = 1;
    }
    else
    {
      UserSetLastError(122);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
