/*
 * XREFs of RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800F4714
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800E5B80 (RtlGetUILanguageInfo.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800F48E0 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x180076C5C (RtlpInitAndCallLcidToCultureName.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800F48E0 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 */

__int64 __fastcall RtlpMuiRegGetFallbackLanguageInfoByLangId(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        char a4,
        __int64 a5)
{
  __int16 v9; // r9
  __int16 i; // r8
  __int16 v11; // dx
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rcx
  wchar_t *Heap; // rax
  wchar_t *v17; // rsi
  unsigned int FallbackLanguageInfoByName; // ebx
  _UNICODE_STRING v19; // [rsp+30h] [rbp-28h] BYREF

  if ( !a1 || !a2 || !a5 )
    return 3221225485LL;
  v9 = 0;
  for ( i = 0; i < 8; i += 2 )
  {
    v11 = (*(_WORD *)(a2 + 8) >> i) & 3;
    if ( v11 == 2 )
    {
      v12 = *(__int16 *)(a2 + 2LL * v9 + 12);
      if ( *(_WORD *)(28 * v12 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 4) == a3 )
      {
        v13 = 28LL * (__int16)v12;
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        *(_OWORD *)a5 = *(_OWORD *)(v13 + v14);
        *(_QWORD *)(a5 + 16) = *(_QWORD *)(v13 + v14 + 16);
        *(_DWORD *)(a5 + 24) = *(_DWORD *)(v13 + v14 + 24);
        return 0LL;
      }
    }
    else if ( *(__int16 *)(a2 + 2LL * v9 + 12) != a3 && v11 != 1 )
    {
      *(_QWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 8) = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_DWORD *)(a5 + 24) = 0;
      *(_WORD *)(a5 + 6) = -1;
      *(_WORD *)(a5 + 4) = a3;
      return 0LL;
    }
    ++v9;
  }
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  v17 = Heap;
  if ( !Heap )
    return 3221225495LL;
  if ( a4 && *(__int16 *)(a2 + 6) > 0 && RtlpInitAndCallLcidToCultureName(&v19, Heap, a3) )
  {
    FallbackLanguageInfoByName = RtlpMuiRegGetFallbackLanguageInfoByName(a1, a2, v19.Buffer, 0LL, a5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
    return FallbackLanguageInfoByName;
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
    return 3221225524LL;
  }
}
