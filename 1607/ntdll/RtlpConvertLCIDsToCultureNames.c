/*
 * XREFs of RtlpConvertLCIDsToCultureNames @ 0x1800E6D20
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800E7EF0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     LdrpMultiSZCchLength @ 0x1800106B0 (LdrpMultiSZCchLength.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800448A0 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     wcsnlen @ 0x18009C740 (wcsnlen.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlUnicodeStringToLcid @ 0x1800E6118 (RtlUnicodeStringToLcid.c)
 */

__int64 __fastcall RtlpConvertLCIDsToCultureNames(WCHAR *SourceString, _QWORD *a2)
{
  PCWSTR v3; // rsi
  unsigned int v4; // r14d
  __int16 v5; // bx
  unsigned int v6; // edi
  PVOID Heap; // rax
  unsigned int v8; // ecx
  void *v9; // r15
  _DWORD *v10; // r12
  int v11; // ecx
  unsigned __int64 Length; // rbx
  PULONG v14; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-D8h]
  _UNICODE_STRING String; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v19[6]; // [rsp+58h] [rbp-A8h] BYREF
  char v20; // [rsp+70h] [rbp-90h] BYREF

  v3 = SourceString;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !a2 || !SourceString || *a2 || (int)LdrpMultiSZCchLength(SourceString, (__int64)a2, &v14) < 0 )
    return 3221225485LL;
  LODWORD(v14) = 2 * (_DWORD)v14;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x2A8uLL);
  v8 = (unsigned int)v14;
  v9 = Heap;
  v15 = (unsigned int)v14;
  v10 = Heap;
  while ( 1 )
  {
    if ( !*v3 || !v8 )
    {
LABEL_21:
      *v10 = 0;
      goto LABEL_22;
    }
    if ( v4 >= 4 )
      break;
    v17 = 2 * (unsigned int)wcsnlen(v3, (unsigned __int64)v8 >> 1);
    RtlInitUnicodeString(&DestinationString, v3);
    v14 = &v19[v4];
    if ( (int)RtlUnicodeStringToLcid(&DestinationString, v14) < 0 )
      break;
    *(_DWORD *)&String.Length = 11141120;
    String.Buffer = (wchar_t *)&v20;
    LODWORD(v14) = *v14;
    if ( !RtlLCIDToCultureName((LCID)v14, &String) )
      break;
    v11 = 0;
    if ( v4 )
    {
      while ( (_DWORD)v14 != v19[v11] )
      {
        if ( ++v11 >= v4 )
          goto LABEL_14;
      }
      break;
    }
LABEL_14:
    LOWORD(v14) = String.Length + 2 + v5;
    if ( (unsigned __int16)v14 >= 0x2A7u )
    {
      v6 = -1073741595;
      goto LABEL_19;
    }
    Length = String.Length;
    memmove(v10, String.Buffer, String.Length + 2LL);
    ++v4;
    v3 = (PCWSTR)((char *)v3 + (unsigned int)v17 + 2);
    v8 = -2 - v17 + v15;
    v15 = v8;
    v10 = (_DWORD *)((char *)v10 + 2 * (Length >> 1) + 2);
    if ( !v3 )
      goto LABEL_21;
    v5 = (__int16)v14;
  }
  v6 = -1073741811;
LABEL_19:
  if ( v9 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    return v6;
  }
LABEL_22:
  *a2 = v9;
  return v6;
}
