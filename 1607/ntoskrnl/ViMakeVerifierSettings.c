/*
 * XREFs of ViMakeVerifierSettings @ 0x1407D18BC
 * Callers:
 *     VfTriageSystem @ 0x1407B9FB0 (VfTriageSystem.c)
 * Callees:
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     VfInitSetVerifyDriverTargets @ 0x1407D1678 (VfInitSetVerifyDriverTargets.c)
 */

NTSTATUS __fastcall ViMakeVerifierSettings(_DWORD *a1, _DWORD *a2)
{
  const wchar_t *v2; // rsi
  void *v4; // rbx
  int v5; // ebp
  size_t v6; // rdx

  VfVerifyMode = 1;
  v2 = L"*";
  MmVerifyDriverLevel = a1[1];
  v4 = 0LL;
  v5 = 0;
  v6 = *a1 >> 19;
  if ( (_DWORD)v6 )
  {
    v4 = a1 + 2;
LABEL_5:
    VfInitSetVerifyDriverTargets(v4, v6);
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: target drivers are `%ws'.\n", v4);
    goto LABEL_7;
  }
  if ( a2 )
  {
    v4 = a2 + 2;
    v6 = *a2 >> 19;
    goto LABEL_5;
  }
  v5 = 1;
  VfInitSetVerifyDriverTargets(L"*", 4uLL);
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: all drivers will be targetted.\n");
LABEL_7:
  VerifierTriageActionTaken = 1;
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: system will enable verification features %X.\n", a1[1]);
  if ( !v5 )
    v2 = (const wchar_t *)v4;
  return RtlStringCbCopyW(ViVerifyTargets, 0x200uLL, v2);
}
