/*
 * XREFs of InitMultiSessionSku @ 0x1407E8D3C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ApiSetResolveToHost @ 0x140153A68 (ApiSetResolveToHost.c)
 */

__int16 InitMultiSessionSku()
{
  int v0; // eax
  __int64 *v1; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  _WORD v4[12]; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 v5; // [rsp+60h] [rbp+8h] BYREF

  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  if ( RtlpNumberOfInitialSessions != 1 )
    goto LABEL_2;
  RtlInitUnicodeString(&DestinationString, L"ext-ms-win-session-wtsapi32-l1-1-0");
  v1 = &qword_14034E968;
  if ( !qword_14034E968 )
    v1 = (__int64 *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2336LL);
  v0 = ApiSetResolveToHost(*v1, &DestinationString.Length, 0LL, (char *)&v5, (__int64)v4);
  if ( v0 < 0 || v5 && (LOWORD(v0) = -v4[0], (v5 & (unsigned __int8)-(v4[0] != 0)) != 0) )
  {
LABEL_2:
    LOWORD(v0) = MEMORY[0xFFFFF780000002F0] | 0x100;
    MEMORY[0xFFFFF780000002F0] |= 0x100u;
  }
  return v0;
}
