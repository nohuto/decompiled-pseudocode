/*
 * XREFs of KiBugCheckProgress @ 0x1401D4E7C
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140127764 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiHeadlessDisplayString @ 0x1401D5410 (KiHeadlessDisplayString.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14023A518 (BgpFwDisplayBugCheckProgressUpdate.c)
 */

__int64 __fastcall KiBugCheckProgress(unsigned int a1)
{
  bool v1; // di
  __int64 v3; // r8
  __int128 v5; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 *v6; // [rsp+30h] [rbp-30h]
  int v7; // [rsp+38h] [rbp-28h]
  char *v8; // [rsp+40h] [rbp-20h]
  char v9; // [rsp+48h] [rbp-18h] BYREF

  v7 = 0x80000;
  v6 = 0LL;
  v1 = IopAutoReboot != 0;
  v8 = &v9;
  v5 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_1402F9F90 & 2) != 0 )
  {
    LOBYTE(v3) = v1;
    BgpFwDisplayBugCheckProgressUpdate(a1, &v5, v3);
  }
  BgpFwReleaseLock();
  if ( a1 )
  {
    KiHeadlessDisplayString(L"\r\x1B[0K\r", 14LL);
    if ( (_QWORD)v5 )
    {
      if ( *((_QWORD *)&v5 + 1) && v6 )
      {
        KiHeadlessDisplayString(*(_QWORD *)(v5 + 8), *(unsigned __int16 *)v5);
        KiHeadlessDisplayString(L" ", 4LL);
        KiHeadlessDisplayString(*(_QWORD *)(*((_QWORD *)&v5 + 1) + 8LL), (unsigned __int16)**((_WORD **)&v5 + 1));
        KiHeadlessDisplayString(v8, (unsigned __int16)v7);
        KiHeadlessDisplayString(*((_QWORD *)v6 + 1), *v6);
      }
    }
  }
  if ( a1 == 100 )
    KiHeadlessDisplayString(L"\r\n", 6LL);
  return 0LL;
}
