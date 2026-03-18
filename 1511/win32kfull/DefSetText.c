/*
 * XREFs of DefSetText @ 0x1C0072B08
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     NtUserDefSetText @ 0x1C00F9CE0 (NtUserDefSetText.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00569D8 (IsToplevelWindowDesktopComposed.c)
 *     DesktopAlloc @ 0x1C0072310 (DesktopAlloc.c)
 *     DwmAsyncTextChange @ 0x1C00743D8 (DwmAsyncTextChange.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall DefSetText(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  ULONG v5; // ecx
  unsigned int v6; // esi
  unsigned int v7; // ecx
  void *v8; // r8
  PVOID v9; // rax
  BOOL v10; // r15d
  ULONG BytesInMultiByteString; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // rax
  ULONG BytesInUnicodeString; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 && a2 && *(_QWORD *)(a2 + 8) )
  {
    v5 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 >= 0x3FFFFFFEu )
      goto LABEL_5;
    if ( *(int *)(a2 + 4) >= 0 )
      v7 = v5 + 2;
    else
      v7 = 2 * v5 + 2;
    BytesInUnicodeString = v7;
    if ( (*(_DWORD *)(a1 + 220) & 0x7FFFFFFFu) < v7 )
    {
      v8 = *(void **)(a1 + 224);
      if ( v8 )
      {
        RtlFreeHeap(*(PVOID *)(v4 + 120), 0, v8);
        v7 = BytesInUnicodeString;
      }
      v9 = DesktopAlloc(v4, v7);
      *(_QWORD *)(a1 + 224) = v9;
      *(_DWORD *)(a1 + 216) = 0;
      if ( !v9 )
      {
        *(_DWORD *)(a1 + 220) &= 0x80000000;
        goto LABEL_6;
      }
      v7 = BytesInUnicodeString;
      *(_DWORD *)(a1 + 220) ^= (BytesInUnicodeString ^ *(_DWORD *)(a1 + 220)) & 0x7FFFFFFF;
    }
    v6 = 1;
    v10 = 1;
    BytesInMultiByteString = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 )
    {
      if ( *(int *)(a2 + 4) < 0 )
      {
        v10 = RtlMultiByteToUnicodeN(
                *(PWCH *)(a1 + 224),
                v7,
                &BytesInUnicodeString,
                *(const CHAR **)(a2 + 8),
                BytesInMultiByteString) >= 0;
        v7 = BytesInUnicodeString + 2;
        BytesInUnicodeString += 2;
      }
      else
      {
        memmove(*(void **)(a1 + 224), *(const void **)(a2 + 8), BytesInMultiByteString);
        v7 = BytesInUnicodeString;
      }
    }
    if ( !v10 )
    {
LABEL_5:
      *(_DWORD *)(a1 + 216) = 0;
LABEL_6:
      v6 = 0;
      goto LABEL_23;
    }
    *(_DWORD *)(a1 + 216) = v7 - 2;
    *(_WORD *)(*(_QWORD *)(a1 + 224) + 2 * ((unsigned __int64)(v7 - 2) >> 1)) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 216) = 0;
    v6 = 1;
  }
LABEL_23:
  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
  {
    v16 = (void *)ReferenceDwmApiPort(v13, v12, v14, v15);
    DwmAsyncTextChange(v16);
  }
  return v6;
}
