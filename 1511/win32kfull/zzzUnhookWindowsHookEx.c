/*
 * XREFs of zzzUnhookWindowsHookEx @ 0x1C00821F0
 * Callers:
 *     NtUserUnhookWindowsHookEx @ 0x1C00821B0 (NtUserUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C00823B4 (zzzSetWindowsHookEx.c)
 *     zzzCancelJournalling @ 0x1C010A868 (zzzCancelJournalling.c)
 *     zzzUnhookWindowsHook @ 0x1C01E7690 (zzzUnhookWindowsHook.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0064BC4 (PhkFirstGlobalValid.c)
 *     FreeHook @ 0x1C00826A0 (FreeHook.c)
 *     PhkNextValid @ 0x1C0084AA4 (PhkNextValid.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E7124 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall zzzUnhookWindowsHookEx(struct tagHOOK *a1, __int64 a2, __int64 a3)
{
  struct tagHOOK *v3; // rdx
  __int64 v4; // rbx
  _BYTE *v5; // rdi
  __int64 v6; // r9
  int v8; // r10d
  __int64 i; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  v4 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 16) & 0x80u) != 0 )
    return 0LL;
  v5 = &unk_1C02E1BF0;
  if ( (*((_BYTE *)&unk_1C02E1BF0 + *((int *)a1 + 12) + 1) & 4) != 0 )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v13;
    ++*((_DWORD *)a1 + 2);
    v13[1] = a1;
    zzzJournalAttach((struct tagTHREADINFO *)v4, 0);
    v3 = (struct tagHOOK *)ThreadUnlock1(v12, v11);
  }
  if ( v3 )
    FreeHook(v3);
  v6 = *(unsigned int *)(v4 + 440);
  if ( (v6 & 0x40000) != 0 )
  {
    v8 = -1;
    do
    {
      if ( (*v5 & 0x10) != 0 )
      {
        for ( i = PhkFirstGlobalValid(v4, v8, a3, v6); i; i = PhkNextValid(i, v10, a3, v6) )
        {
          if ( *(_QWORD *)(i + 16) == v4 )
            return 1LL;
        }
      }
      ++v8;
      ++v5;
    }
    while ( v8 <= 14 );
    *(_DWORD *)(v4 + 440) = v6 & 0xFFFBFFFF;
  }
  return 1LL;
}
