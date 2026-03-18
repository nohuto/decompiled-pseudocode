/*
 * XREFs of DefSetText @ 0x1C006AF9C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     NtUserDefSetText @ 0x1C0120280 (NtUserDefSetText.c)
 * Callees:
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C0067DE4 (DesktopVerifyHeapLargeUnicodeString.c)
 *     DwmAsyncTextChange @ 0x1C0067F5C (DwmAsyncTextChange.c)
 *     DesktopAlloc @ 0x1C006B8F0 (DesktopAlloc.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     DesktopFree @ 0x1C01DF350 (DesktopFree.c)
 */

__int64 __fastcall DefSetText(__int64 a1, const CHAR **BytesInMultiByteString, __int64 a3)
{
  const CHAR **v3; // r14
  __int64 v5; // rsi
  int v6; // ecx
  unsigned int v7; // esi
  unsigned int v8; // ecx
  __int64 v9; // rax
  BOOL v10; // r15d
  void *v11; // rax
  ULONG BytesInUnicodeString; // [rsp+70h] [rbp+18h] BYREF

  v3 = BytesInMultiByteString;
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 && BytesInMultiByteString && BytesInMultiByteString[1] )
  {
    v6 = *(_DWORD *)BytesInMultiByteString;
    if ( *(_DWORD *)BytesInMultiByteString >= 0x3FFFFFFEu )
      goto LABEL_5;
    if ( *((int *)BytesInMultiByteString + 1) >= 0 )
      v8 = v6 + 2;
    else
      v8 = 2 * v6 + 2;
    BytesInUnicodeString = v8;
    if ( *(_QWORD *)(a1 + 224) )
    {
      DesktopVerifyHeapLargeUnicodeString(v5, a1 + 216);
      v8 = BytesInUnicodeString;
    }
    if ( (*(_DWORD *)(a1 + 220) & 0x7FFFFFFFu) < v8 )
    {
      if ( *(_QWORD *)(a1 + 224) )
      {
        DesktopFree(v5);
        v8 = BytesInUnicodeString;
      }
      v9 = DesktopAlloc(v5, v8, 4LL);
      *(_QWORD *)(a1 + 224) = v9;
      *(_DWORD *)(a1 + 216) = 0;
      if ( !v9 )
      {
        *(_DWORD *)(a1 + 220) &= 0x80000000;
        goto LABEL_6;
      }
      v8 = BytesInUnicodeString;
      *(_DWORD *)(a1 + 220) ^= (BytesInUnicodeString ^ *(_DWORD *)(a1 + 220)) & 0x7FFFFFFF;
    }
    v7 = 1;
    v10 = 1;
    BytesInMultiByteString = (const CHAR **)*(unsigned int *)v3;
    if ( (_DWORD)BytesInMultiByteString )
    {
      if ( *((int *)v3 + 1) < 0 )
      {
        v10 = RtlMultiByteToUnicodeN(
                *(PWCH *)(a1 + 224),
                v8,
                &BytesInUnicodeString,
                v3[1],
                (ULONG)BytesInMultiByteString) >= 0;
        v8 = BytesInUnicodeString + 2;
        BytesInUnicodeString += 2;
      }
      else
      {
        memmove(*(void **)(a1 + 224), v3[1], (unsigned int)BytesInMultiByteString);
        v8 = BytesInUnicodeString;
      }
    }
    if ( !v10 )
    {
LABEL_5:
      *(_DWORD *)(a1 + 216) = 0;
LABEL_6:
      v7 = 0;
      goto LABEL_25;
    }
    *(_DWORD *)(a1 + 216) = v8 - 2;
    *(_WORD *)(*(_QWORD *)(a1 + 224) + 2 * ((unsigned __int64)(v8 - 2) >> 1)) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 216) = 0;
    v7 = 1;
  }
LABEL_25:
  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1, BytesInMultiByteString, a3) )
  {
    v11 = (void *)ReferenceDwmApiPort();
    DwmAsyncTextChange(v11, *(_QWORD *)a1);
  }
  return v7;
}
