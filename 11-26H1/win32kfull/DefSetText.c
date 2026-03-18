/*
 * XREFs of DefSetText @ 0x14012D150
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     NtUserDefSetText @ 0x140216A70 (NtUserDefSetText.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncTextChange @ 0x14012D474 (DwmAsyncTextChange.c)
 *     DesktopAlloc @ 0x14012D510 (DesktopAlloc.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x14012D58C (DesktopVerifyHeapLargeUnicodeString.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall DefSetText(__int64 a1, unsigned int *a2)
{
  ULONG v3; // ecx
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  void *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // esi
  BOOL v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rax
  int v20; // [rsp+40h] [rbp-38h] BYREF
  int v21; // [rsp+44h] [rbp-34h]
  __int64 v22; // [rsp+48h] [rbp-30h]
  ULONG MaxBytesInUnicodeString; // [rsp+90h] [rbp+18h] BYREF
  CHAR *MultiByteString; // [rsp+98h] [rbp+20h]

  MaxBytesInUnicodeString = 0;
  if ( *(_QWORD *)(a1 + 24) && a2 && *((_QWORD *)a2 + 1) )
  {
    if ( *a2 < 0x3FFFFFFE )
    {
      v3 = *a2;
      if ( (a2[1] & 0x80000000) != 0 )
        v4 = 2 * v3;
      else
        v4 = v3 & 0xFFFFFFFE;
      v5 = v4 + 2;
      MaxBytesInUnicodeString = v4 + 2;
      v6 = *(_QWORD *)(a1 + 24);
      v7 = *(_QWORD *)(a1 + 184);
      if ( v7 )
      {
        v21 = 0;
        v22 = v7;
        v8 = *(_QWORD *)(a1 + 40);
        v20 = *(_DWORD *)(v8 + 184);
        v21 = *(_DWORD *)(v8 + 188);
        DesktopVerifyHeapLargeUnicodeString(v6, &v20);
        v5 = MaxBytesInUnicodeString;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 188LL) & 0x7FFFFFFFu) < (unsigned int)v5 )
      {
        v9 = *(void **)(a1 + 184);
        if ( v9 )
        {
          RtlFreeHeap(*(PVOID *)(v6 + 136), 0, v9);
          v5 = MaxBytesInUnicodeString;
        }
        v10 = DesktopAlloc(v6, v5, 4LL);
        if ( v10 )
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 192LL) = v10 + *(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 40);
        else
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 192LL) = 0LL;
        *(_QWORD *)(a1 + 184) = v10;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 184LL) = 0;
        v11 = *(_QWORD *)(a1 + 40);
        v12 = *(_DWORD *)(v11 + 188) & 0x80000000;
        if ( !*(_QWORD *)(a1 + 184) )
        {
          *(_DWORD *)(v11 + 188) = v12;
LABEL_28:
          v13 = 0;
          goto LABEL_22;
        }
        *(_DWORD *)(v11 + 188) = MaxBytesInUnicodeString & 0x7FFFFFFF | v12;
      }
      v13 = 1;
      v14 = 1;
      if ( *a2 )
      {
        if ( (a2[1] & 0x80000000) != 0 )
        {
          MultiByteString = (CHAR *)*((_QWORD *)a2 + 1);
          v14 = RtlMultiByteToUnicodeN(
                  *(PWCH *)(a1 + 184),
                  MaxBytesInUnicodeString,
                  &MaxBytesInUnicodeString,
                  MultiByteString,
                  *a2) >= 0;
          MaxBytesInUnicodeString += 2;
        }
        else
        {
          memmove(*(void **)(a1 + 184), *((const void **)a2 + 1), *a2);
        }
      }
      v15 = *(_QWORD *)(a1 + 40);
      if ( v14 )
      {
        *(_DWORD *)(v15 + 184) = MaxBytesInUnicodeString - 2;
        *(_WORD *)(*(_QWORD *)(a1 + 184) + 2 * ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 40) + 184LL) >> 1)) = 0;
        goto LABEL_22;
      }
      *(_DWORD *)(v15 + 184) = 0;
      goto LABEL_28;
    }
    v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 184LL) = 0;
LABEL_22:
  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
  {
    v18 = (void *)ReferenceDwmApiPort(v17, v16);
    DwmAsyncTextChange(v18);
  }
  return v13;
}
