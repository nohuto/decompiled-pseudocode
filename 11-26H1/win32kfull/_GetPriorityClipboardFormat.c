/*
 * XREFs of _GetPriorityClipboardFormat @ 0x1401AF280
 * Callers:
 *     NtUserGetPriorityClipboardFormat @ 0x1401AF1D0 (NtUserGetPriorityClipboardFormat.c)
 * Callees:
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x140056770 (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1401AF77C (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall GetPriorityClipboardFormat(__int64 a1, int a2)
{
  unsigned int *v3; // r14
  struct tagWINDOWSTATION *v4; // rax
  struct tagWINDOWSTATION *v5; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // xmm0_8
  int v14; // eax
  __int64 v15; // xmm0_8
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // xmm0_8
  int v19; // esi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  int v23; // [rsp+28h] [rbp-40h]
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+38h] [rbp-30h]
  __int64 v26; // [rsp+40h] [rbp-28h] BYREF
  int v27; // [rsp+48h] [rbp-20h]

  v3 = (unsigned int *)a1;
  v4 = CheckClipboardAccess(a1);
  v5 = v4;
  if ( !v4 || !*((_DWORD *)v4 + 26) || !*((_QWORD *)v4 + 12) )
    return 0LL;
  while ( 1 )
  {
    v7 = a2--;
    if ( v7 <= 0 )
      return 0xFFFFFFFFLL;
    v8 = *v3;
    if ( *v3 )
    {
      v9 = *((_QWORD *)v5 + 12);
      LODWORD(v10) = *((_DWORD *)v5 + 26);
      while ( 1 )
      {
        v11 = v10;
        v10 = (unsigned int)(v10 - 1);
        if ( !v11 )
          break;
        if ( *(_DWORD *)v9 == v8 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
          if ( CurrentProcessWin32Process )
            CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          v13 = *(_QWORD *)(CurrentProcessWin32Process + 864);
          v14 = *(_DWORD *)(CurrentProcessWin32Process + 872);
          v22 = v13;
          v15 = *(_QWORD *)(v9 + 20);
          v23 = v14;
          v16 = *(_DWORD *)(v9 + 28);
          v24 = v15;
          v25 = v16;
          if ( CheckClipboardAccessForIntegrityLevel(&v24, (const struct tagUIPI_INFO *)&v22)
            || !(unsigned int)IsFmtBlocked(v8) )
          {
            return v8;
          }
          v18 = *(_QWORD *)(v9 + 20);
          v19 = *(_DWORD *)(v9 + 28);
          v20 = PsGetCurrentProcessWin32Process(v17);
          v21 = v20;
          if ( v20 )
            v21 = -(__int64)(*(_QWORD *)v20 != 0LL) & v20;
          v26 = v18;
          v27 = v19;
          EtwTraceUIPIClipboardError(0LL, v21, v8, &v26);
          break;
        }
        v9 += 32LL;
      }
    }
    ++v3;
  }
}
