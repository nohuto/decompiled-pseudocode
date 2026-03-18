/*
 * XREFs of zzzUnhookWindowsHookEx @ 0x1C00A4690
 * Callers:
 *     zzzCancelJournalling @ 0x1C00945F8 (zzzCancelJournalling.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C00A4650 (NtUserUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C00A4854 (zzzSetWindowsHookEx.c)
 *     zzzUnhookWindowsHook @ 0x1C01DDEF0 (zzzUnhookWindowsHook.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0057C74 (PhkFirstGlobalValid.c)
 *     FreeHook @ 0x1C00A4550 (FreeHook.c)
 *     PhkNextValid @ 0x1C00EE6A8 (PhkNextValid.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01DD8E4 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall zzzUnhookWindowsHookEx(struct tagHOOK *a1)
{
  struct tagHOOK *v1; // rdx
  __int64 v2; // rbx
  _BYTE *v3; // rdi
  int v4; // r9d
  int v6; // r10d
  __int64 i; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  v2 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 16) & 0x80u) != 0 )
    return 0LL;
  v3 = byte_1C02E8F38;
  if ( (byte_1C02E8F38[*((_DWORD *)a1 + 12) + 1] & 4) != 0 )
  {
    v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v12;
    ++*((_DWORD *)a1 + 2);
    v12[1] = a1;
    zzzJournalAttach((struct tagTHREADINFO *)v2, 0);
    v1 = (struct tagHOOK *)ThreadUnlock1(v11, v10);
  }
  if ( v1 )
    FreeHook(v1);
  v4 = *(_DWORD *)(v2 + 440);
  if ( (v4 & 0x40000) != 0 )
  {
    v6 = -1;
    do
    {
      if ( (*v3 & 0x10) != 0 )
      {
        for ( i = PhkFirstGlobalValid(v2, v6); i; i = PhkNextValid(i, v8, v9) )
        {
          if ( *(_QWORD *)(i + 16) == v2 )
            return 1LL;
        }
      }
      ++v6;
      ++v3;
    }
    while ( v6 <= 14 );
    *(_DWORD *)(v2 + 440) = v4 & 0xFFFBFFFF;
  }
  return 1LL;
}
