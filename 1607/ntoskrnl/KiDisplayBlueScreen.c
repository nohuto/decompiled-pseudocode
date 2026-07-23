/*
 * XREFs of KiDisplayBlueScreen @ 0x1401D4F98
 * Callers:
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140127764 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     HeadlessDispatch @ 0x14013CB10 (HeadlessDispatch.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     RtlStringCbPrintfExA @ 0x1401B0E60 (RtlStringCbPrintfExA.c)
 *     InbvAcquireDisplayOwnership @ 0x1401C34E4 (InbvAcquireDisplayOwnership.c)
 *     IoSaveBugCheckProgress @ 0x1401C6100 (IoSaveBugCheckProgress.c)
 *     KeGetBugMessageText @ 0x1401D4C3C (KeGetBugMessageText.c)
 *     KiDumpParameterImages @ 0x1401D52BC (KiDumpParameterImages.c)
 *     KiHeadlessDisplayString @ 0x1401D5410 (KiHeadlessDisplayString.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14023A6D0 (BgpFwDisplayBugCheckScreen.c)
 */

void __fastcall KiDisplayBlueScreen(int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned __int16 v4; // ax
  char *v5; // rdx
  unsigned __int16 v6; // cx
  _WORD *v7; // r8
  __int64 v8; // r9
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rdx
  char *v12; // rcx
  char *v13; // rax
  int v14; // edi
  unsigned __int16 *v15; // rdi
  unsigned __int16 *v16; // rbx
  char *v17; // rbx
  _WORD v18[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+4Ch] [rbp-BCh] BYREF
  NTSTRSAFE_PSTR ppszDestEnd[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v22; // [rsp+78h] [rbp-90h]
  __int16 v23; // [rsp+7Ah] [rbp-8Eh]
  _WORD *v24; // [rsp+80h] [rbp-88h]
  char v25; // [rsp+88h] [rbp-80h] BYREF
  char v26; // [rsp+90h] [rbp-78h] BYREF
  char pszDest[16]; // [rsp+C8h] [rbp-40h] BYREF
  _WORD v28[128]; // [rsp+D8h] [rbp-30h] BYREF
  char v29; // [rsp+1D8h] [rbp+D0h] BYREF

  v19 = KiBugCheckData;
  LOBYTE(v18[0]) = 1;
  HeadlessDispatch(0xEu, 0LL, 0LL, 0LL, 0LL);
  HeadlessDispatch(1u, (__int64)v18, 1LL, 0LL, 0LL);
  v2 = 4LL;
  HeadlessDispatch(0x14u, (__int64)&v19, 4LL, 0LL, 0LL);
  v3 = KiBugCheckDriver;
  if ( KiBugCheckDriver || (KiDumpParameterImages(0LL), (v3 = KiBugCheckDriver) != 0) )
  {
    if ( *(_WORD *)v3 == 30 && !memcmp(*(const void **)(v3 + 8), L"VerifierExt.sys", 0x1EuLL) )
      LODWORD(v3) = 0;
  }
  v24 = v28;
  v23 = 256;
  if ( KeGetBugMessageText(KiBugCheckData, (__int64)ppszDestEnd) )
  {
    v5 = ppszDestEnd[1];
    v4 = (unsigned __int16)ppszDestEnd[0];
  }
  else
  {
    RtlStringCbPrintfExA(pszDest, 0xBuLL, ppszDestEnd, 0LL, 0, "0x%08x", KiBugCheckData);
    v4 = LOWORD(ppszDestEnd[0]) - (unsigned __int16)pszDest;
    v5 = pszDest;
  }
  if ( v4 >= 0x7Fu )
    v4 = 127;
  v6 = 0;
  if ( v4 )
  {
    v6 = v4;
    v7 = v28;
    v8 = v4;
    do
    {
      v9 = *v5++;
      *v7++ = v9;
      --v8;
    }
    while ( v8 );
  }
  v10 = v6;
  v11 = 4LL;
  v22 = 2 * v6;
  v12 = &v29;
  v28[v10] = 0;
  v13 = &v25;
  do
  {
    *((_QWORD *)v13 + 1) = v12;
    v12 += 38;
    *(_DWORD *)v13 = 2490404;
    v13 += 16;
    --v11;
  }
  while ( v11 );
  v21 = 0LL;
  InbvAcquireDisplayOwnership();
  v14 = KiBugCheckData;
  BgpFwAcquireLock();
  if ( (dword_1402F9F90 & 2) != 0 )
    BgpFwDisplayBugCheckScreen(v14, (unsigned int)&qword_14030DD68, v3, (unsigned int)&v21, a1);
  BgpFwReleaseLock();
  IoSaveBugCheckProgress(128);
  v15 = (unsigned __int16 *)v21;
  if ( (_QWORD)v21 )
  {
    v16 = (unsigned __int16 *)*((_QWORD *)&v21 + 1);
    if ( *((_QWORD *)&v21 + 1) )
    {
      KiHeadlessDisplayString(L"\r\n", 6LL);
      KiHeadlessDisplayString(*((_QWORD *)v15 + 1), *v15);
      KiHeadlessDisplayString(L"\r\n", 6LL);
      KiHeadlessDisplayString(*((_QWORD *)v16 + 1), *v16);
      KiHeadlessDisplayString(L"\r\n", 6LL);
      KiHeadlessDisplayString(v24, v22);
      if ( KiBugCheckDriver )
      {
        KiHeadlessDisplayString(L"\r\n", 6LL);
        KiHeadlessDisplayString(*(_QWORD *)(KiBugCheckDriver + 8), *(unsigned __int16 *)KiBugCheckDriver);
      }
      KiHeadlessDisplayString(L"\r\n", 6LL);
      KiHeadlessDisplayString(L"\r\n", 6LL);
      v17 = &v26;
      do
      {
        KiHeadlessDisplayString(*(_QWORD *)v17, *((unsigned __int16 *)v17 - 4));
        KiHeadlessDisplayString(L"\r\n", 6LL);
        v17 += 16;
        --v2;
      }
      while ( v2 );
      KiHeadlessDisplayString(L"\r\n", 6LL);
    }
  }
}
