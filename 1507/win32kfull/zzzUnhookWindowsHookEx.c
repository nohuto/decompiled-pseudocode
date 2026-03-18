/*
 * XREFs of zzzUnhookWindowsHookEx @ 0x1C0049B20
 * Callers:
 *     NtUserUnhookWindowsHookEx @ 0x1C0049AE0 (NtUserUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C0049CE8 (zzzSetWindowsHookEx.c)
 *     zzzCancelJournalling @ 0x1C00FEE88 (zzzCancelJournalling.c)
 *     zzzUnhookWindowsHook @ 0x1C01E7220 (zzzUnhookWindowsHook.c)
 * Callees:
 *     FreeHook @ 0x1C004A000 (FreeHook.c)
 *     PhkNextValid @ 0x1C004A350 (PhkNextValid.c)
 *     PhkFirstGlobalValid @ 0x1C008C504 (PhkFirstGlobalValid.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E6CB4 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
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
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  v2 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 16) & 0x80u) != 0 )
    return 0LL;
  v3 = &unk_1C02E2030;
  if ( (*((_BYTE *)&unk_1C02E2030 + *((int *)a1 + 12) + 1) & 4) != 0 )
  {
    v10[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v10;
    ++*((_DWORD *)a1 + 2);
    v10[1] = a1;
    zzzJournalAttach((struct tagTHREADINFO *)v2, 0);
    v1 = (struct tagHOOK *)ThreadUnlock1(v9, v8);
  }
  if ( v1 )
    FreeHook(v1);
  v4 = *(_DWORD *)(v2 + 448);
  if ( (v4 & 0x40000) != 0 )
  {
    v6 = -1;
    do
    {
      if ( (*v3 & 0x10) != 0 )
      {
        for ( i = PhkFirstGlobalValid(v2, (unsigned int)v6); i; i = PhkNextValid(i) )
        {
          if ( *(_QWORD *)(i + 16) == v2 )
            return 1LL;
        }
      }
      ++v6;
      ++v3;
    }
    while ( v6 <= 14 );
    *(_DWORD *)(v2 + 448) = v4 & 0xFFFBFFFF;
  }
  return 1LL;
}
