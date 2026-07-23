/*
 * XREFs of ViDeadlockAnalyze @ 0x140714A9C
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 *     ViDeadlockAnalyze @ 0x140714A9C (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14004EF40 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x14015E0C0 (KeGetCurrentStackPointer.c)
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViDeadlockAddParticipant @ 0x140714720 (ViDeadlockAddParticipant.c)
 *     ViDeadlockAnalyze @ 0x140714A9C (ViDeadlockAnalyze.c)
 *     ViDeadlockCertify @ 0x140714DAC (ViDeadlockCertify.c)
 *     ViDeadlockPreprocessOptions @ 0x1407156D0 (ViDeadlockPreprocessOptions.c)
 */

__int64 __fastcall ViDeadlockAnalyze(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5)
{
  unsigned int v6; // edi
  PVOID v7; // rcx
  bool v8; // zf
  _DWORD *v9; // rdx
  int v10; // ecx
  char *CurrentStackPointer; // rax
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  int v15; // r10d
  _QWORD *v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rdx
  int v19; // r9d
  int v20; // ebp
  unsigned int v21; // eax
  _QWORD *v22; // [rsp+30h] [rbp-38h]
  _QWORD *v24; // [rsp+78h] [rbp+10h]
  int v26; // [rsp+88h] [rbp+20h]

  v26 = a4;
  v6 = 1;
  if ( a3 )
  {
    v7 = ViDeadlockGlobals;
    ++*((_DWORD *)ViDeadlockGlobals + 8201);
    v8 = *((_DWORD *)v7 + 8201) == 1073741822;
    *((_DWORD *)v7 + 8199) = 0;
    *((_DWORD *)v7 + 8216) = 0;
    *((_QWORD *)v7 + 4107) = 0LL;
    if ( v8 )
      ViDeadlockState |= 8u;
    KeQueryCurrentStackInformation((_DWORD *)v7 + 8283, (unsigned __int64 *)v7 + 4142, (unsigned __int64 *)v7 + 4143);
    a4 = v26;
  }
  v9 = ViDeadlockGlobals;
  v10 = *((_DWORD *)ViDeadlockGlobals + 8201);
  if ( *(_DWORD *)(a2 + 72) >> 3 == v10 )
    return 0LL;
  ++*((_DWORD *)ViDeadlockGlobals + 8199);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a2 + 72) & 7 | (8 * v10);
  if ( a4 > v9[8202] )
  {
    ++v9[8204];
    return 0LL;
  }
  if ( v9[8199] >= v9[8203] )
  {
    ++v9[8205];
    return 0LL;
  }
  CurrentStackPointer = KeGetCurrentStackPointer();
  v13 = ViDeadlockGlobals;
  if ( (unsigned __int64)&CurrentStackPointer[-*((_QWORD *)ViDeadlockGlobals + 4142)] <= 0x1630 )
  {
    ++*((_DWORD *)ViDeadlockGlobals + 8206);
    return 0LL;
  }
  v14 = *(_QWORD *)(a2 + 56);
  v15 = a1;
  if ( a1 == *(_QWORD *)(v14 + 8) && (*(_DWORD *)(a2 + 72) & 4) == 0 )
  {
    ViDeadlockAddParticipant(a2);
    goto LABEL_28;
  }
  v6 = 0;
  v22 = (_QWORD *)(v14 + 24);
  v16 = *(_QWORD **)(v14 + 24);
  v24 = v16;
  if ( v16 == (_QWORD *)(v14 + 24) )
    goto LABEL_32;
  while ( 1 )
  {
    v17 = (__int64)(v16 - 5);
    v18 = *(v16 - 5);
    *((_DWORD *)v16 + 8) = v16[4] & 7 | (8 * v13[8201]);
    if ( v18 )
      break;
LABEL_22:
    v16 = (_QWORD *)*v24;
    v24 = v16;
    if ( v16 == v22 )
      goto LABEL_27;
  }
  v19 = v26;
  if ( v17 != a2 )
    v19 = v26 + 1;
  v6 = ViDeadlockAnalyze(v15, v18, 0, v19, a5);
  if ( !v6 )
  {
    v13 = ViDeadlockGlobals;
    v15 = a1;
    goto LABEL_22;
  }
  ViDeadlockAddParticipant(v17);
  if ( v17 != a2 )
    ViDeadlockAddParticipant(a2);
  v13 = ViDeadlockGlobals;
LABEL_27:
  if ( !v6 )
  {
LABEL_32:
    v20 = a3;
    goto LABEL_33;
  }
LABEL_28:
  v20 = a3;
  if ( a3 )
  {
    if ( (unsigned int)ViDeadlockCertify(a5, a2) )
    {
      *((_QWORD *)v13 + 4107) = a1;
      ViDeadlockPreprocessOptions(
        byte_1402F99E4,
        "Type !deadlock in the debugger for more information.",
        4097LL,
        a1,
        a2,
        0LL);
      VfReportIssueWithOptions(196, 4097, a1, a2, 0LL, byte_1402F99E4);
      return 0LL;
    }
    v6 = 0;
LABEL_33:
    if ( v20 )
    {
      v21 = v13[8199];
      if ( v21 > v13[8200] )
        v13[8200] = v21;
    }
  }
  return v6;
}
