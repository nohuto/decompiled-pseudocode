/*
 * XREFs of MiLogOutswappedProcessCommitRelease @ 0x1401CFA94
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x1401D059C (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401BF978 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x1401CF38C (_TlgWriteEx.c)
 */

void MiLogOutswappedProcessCommitRelease()
{
  __int64 v0; // r10
  __int64 v1; // r11
  ULONG64 v2; // r8
  TraceLoggingHProvider v3; // r9
  const GUID *v4; // [rsp+20h] [rbp-39h]
  const GUID *v5; // [rsp+28h] [rbp-31h]
  int v6; // [rsp+40h] [rbp-19h] BYREF
  __int64 v7; // [rsp+48h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+17h] BYREF
  int *v10; // [rsp+80h] [rbp+27h]
  int v11; // [rsp+88h] [rbp+2Fh]
  int v12; // [rsp+8Ch] [rbp+33h]
  __int64 *v13; // [rsp+90h] [rbp+37h]
  int v14; // [rsp+98h] [rbp+3Fh]
  int v15; // [rsp+9Ch] [rbp+43h]

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 4uLL) )
    {
      v6 = *(_DWORD *)(v0 + 744);
      v7 = v1;
      TlgCreateSz(&pDesc, (LPCSTR)(v0 + 1104));
      v12 = 0;
      v15 = 0;
      v13 = &v7;
      v10 = &v6;
      v11 = 4;
      v14 = 8;
      TlgWriteEx(v3, &unk_140254334, v2, (ULONG)v3, v4, v5, 5u, &pData);
    }
  }
}
