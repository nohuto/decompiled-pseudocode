/*
 * XREFs of _GetPriorityClipboardFormat @ 0x1C01E677C
 * Callers:
 *     NtUserGetPriorityClipboardFormat @ 0x1C0214630 (NtUserGetPriorityClipboardFormat.c)
 * Callees:
 *     CheckClipboardAccess @ 0x1C00F9194 (CheckClipboardAccess.c)
 *     CheckClipboardAccessForIntegrityLevel @ 0x1C0149F84 (CheckClipboardAccessForIntegrityLevel.c)
 *     IsFmtBlocked @ 0x1C01E6738 (IsFmtBlocked.c)
 */

__int64 __fastcall GetPriorityClipboardFormat(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned int *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rbp
  int v13; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax

  v4 = a2;
  v5 = (unsigned int *)a1;
  v6 = CheckClipboardAccess(a1, a2, a3, a4);
  v9 = v6;
  if ( !v6 || !*(_DWORD *)(v6 + 104) || !*(_QWORD *)(v6 + 96) )
    return 0LL;
  while ( v4 > 0 )
  {
    v11 = *v5;
    --v4;
    if ( *v5 )
    {
      v12 = *(_QWORD *)(v9 + 96);
      v13 = *(_DWORD *)(v9 + 104);
      while ( v13 )
      {
        --v13;
        if ( *(_DWORD *)v12 == v11 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v7);
          if ( !(unsigned int)CheckClipboardAccessForIntegrityLevel(
                                *(_QWORD *)(v12 + 20),
                                *(_QWORD *)(CurrentProcessWin32Process + 824))
            && (unsigned int)IsFmtBlocked(v11) )
          {
            v17 = PsGetCurrentProcessWin32Process(v16, v15);
            EtwTraceUIPIClipboardError(0LL, v17, v11, *(_QWORD *)(v12 + 20));
            break;
          }
          return v11;
        }
        v12 += 32LL;
      }
    }
    ++v5;
  }
  return 0xFFFFFFFFLL;
}
