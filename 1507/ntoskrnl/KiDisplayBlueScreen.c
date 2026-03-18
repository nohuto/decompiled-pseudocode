/*
 * XREFs of KiDisplayBlueScreen @ 0x140202B60
 * Callers:
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     HeadlessDispatch @ 0x14015F390 (HeadlessDispatch.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     RtlStringCbPrintfExA @ 0x1401DC21C (RtlStringCbPrintfExA.c)
 *     InbvAcquireDisplayOwnership @ 0x1401F0A2C (InbvAcquireDisplayOwnership.c)
 *     IoSaveBugCheckProgress @ 0x1401F3834 (IoSaveBugCheckProgress.c)
 *     KeGetBugMessageText @ 0x140202814 (KeGetBugMessageText.c)
 *     KiDumpParameterImages @ 0x140202E84 (KiDumpParameterImages.c)
 *     KiHeadlessDisplayString @ 0x140202FDC (KiHeadlessDisplayString.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14026FAA0 (BgpFwDisplayBugCheckScreen.c)
 */

__int64 __fastcall KiDisplayBlueScreen(int a1)
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
  __int64 result; // rax
  unsigned __int16 *v16; // rdi
  unsigned __int16 *v17; // rbx
  char *v18; // rbx
  _WORD v19[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  NTSTRSAFE_PSTR ppszDestEnd[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v22; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v23; // [rsp+78h] [rbp-90h]
  __int16 v24; // [rsp+7Ah] [rbp-8Eh]
  _WORD *v25; // [rsp+80h] [rbp-88h]
  char v26; // [rsp+88h] [rbp-80h] BYREF
  char v27; // [rsp+90h] [rbp-78h] BYREF
  char pszDest[16]; // [rsp+C8h] [rbp-40h] BYREF
  _WORD v29[128]; // [rsp+D8h] [rbp-30h] BYREF
  char v30; // [rsp+1D8h] [rbp+D0h] BYREF

  v20 = KiBugCheckData;
  LOBYTE(v19[0]) = 1;
  HeadlessDispatch(0xEu, 0LL, 0LL, 0LL, 0LL);
  HeadlessDispatch(1u, (__int64)v19, 1LL, 0LL, 0LL);
  v2 = 4LL;
  HeadlessDispatch(0x14u, (__int64)&v20, 4LL, 0LL, 0LL);
  v3 = KiBugCheckDriver;
  if ( KiBugCheckDriver || (KiDumpParameterImages(0LL), (v3 = KiBugCheckDriver) != 0) )
  {
    if ( *(_WORD *)v3 == 30 && !memcmp(*(const void **)(v3 + 8), L"VerifierExt.sys", 0x1EuLL) )
      LODWORD(v3) = 0;
  }
  v25 = v29;
  v24 = 256;
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
    v7 = v29;
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
  v23 = 2 * v6;
  v12 = &v30;
  v29[v10] = 0;
  v13 = &v26;
  do
  {
    *((_QWORD *)v13 + 1) = v12;
    v12 += 38;
    *(_DWORD *)v13 = 2490404;
    v13 += 16;
    --v11;
  }
  while ( v11 );
  v22 = 0LL;
  InbvAcquireDisplayOwnership();
  v14 = KiBugCheckData;
  BgpFwAcquireLock();
  if ( (dword_140323CF0 & 2) != 0 )
    BgpFwDisplayBugCheckScreen(v14, (unsigned int)&qword_140338C88, v3, (unsigned int)&v22, a1);
  BgpFwReleaseLock();
  result = IoSaveBugCheckProgress(128);
  v16 = (unsigned __int16 *)v22;
  if ( (_QWORD)v22 )
  {
    v17 = (unsigned __int16 *)*((_QWORD *)&v22 + 1);
    if ( *((_QWORD *)&v22 + 1) )
    {
      KiHeadlessDisplayString(L"\r\n", 6LL);
      KiHeadlessDisplayString(*((_QWORD *)v16 + 1), *v16);
      KiHeadlessDisplayString(L"\r\n", 6LL);
      KiHeadlessDisplayString(*((_QWORD *)v17 + 1), *v17);
      KiHeadlessDisplayString(L"\r\n", 6LL);
      KiHeadlessDisplayString(v25, v23);
      if ( KiBugCheckDriver )
      {
        KiHeadlessDisplayString(L"\r\n", 6LL);
        KiHeadlessDisplayString(*(_QWORD *)(KiBugCheckDriver + 8), *(unsigned __int16 *)KiBugCheckDriver);
      }
      KiHeadlessDisplayString(L"\r\n", 6LL);
      KiHeadlessDisplayString(L"\r\n", 6LL);
      v18 = &v27;
      do
      {
        KiHeadlessDisplayString(*(_QWORD *)v18, *((unsigned __int16 *)v18 - 4));
        KiHeadlessDisplayString(L"\r\n", 6LL);
        v18 += 16;
        --v2;
      }
      while ( v2 );
      return KiHeadlessDisplayString(L"\r\n", 6LL);
    }
  }
  return result;
}
