/*
 * XREFs of ViMakeVerifierSettings @ 0x1407854AC
 * Callers:
 *     VfTriageSystem @ 0x14076FA08 (VfTriageSystem.c)
 * Callees:
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     VfInitSetVerifyDriverTargets @ 0x140785268 (VfInitSetVerifyDriverTargets.c)
 */

NTSTATUS __fastcall ViMakeVerifierSettings(_DWORD *a1, _DWORD *a2)
{
  const wchar_t *v2; // rsi
  size_t v5; // rdx
  void *v6; // rbx
  int v7; // ebp
  __int64 v8; // rax

  VfVerifyMode = 1;
  v2 = L"*";
  MmVerifyDriverLevel = a1[1];
  v5 = *a1 >> 19;
  v6 = 0LL;
  v7 = 0;
  if ( (_DWORD)v5 )
  {
    v6 = a1 + 2;
LABEL_5:
    VfInitSetVerifyDriverTargets(v6, v5);
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: target drivers are `%ws'.\n", v6);
    goto LABEL_9;
  }
  if ( a2 )
  {
    v6 = a2 + 2;
    v5 = *a2 >> 19;
    goto LABEL_5;
  }
  v7 = 1;
  v8 = -1LL;
  do
    ++v8;
  while ( asc_140775D00[v8] );
  VfInitSetVerifyDriverTargets(L"*", (unsigned int)(2 * v8 + 2));
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: all drivers will be targetted.\n");
LABEL_9:
  VerifierTriageActionTaken = 1;
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: system will enable verification features %X.\n", a1[1]);
  ViVerifyFlags = a1[1];
  if ( !v7 )
    v2 = (const wchar_t *)v6;
  return RtlStringCbCopyW(ViVerifyTargets, 0x200uLL, v2);
}
