/*
 * XREFs of RtlpMuiRegTryToAppendLanguageName @ 0x180076AE4
 * Callers:
 *     RtlpMuiRegTryToAppendLanguageToMuiszFromLangList @ 0x1800147AC (RtlpMuiRegTryToAppendLanguageToMuiszFromLangList.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1800F4A68 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18003E6F8 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x180076C5C (RtlpInitAndCallLcidToCultureName.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegTryToAppendLanguageName(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        wchar_t *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v10; // rbp
  PVOID Heap; // r12
  __int16 v12; // ax
  unsigned int v13; // edi
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v10 = *a3;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  if ( Heap )
  {
    v12 = *(_WORD *)(a2 + 6);
    if ( v12 <= 0 )
    {
      if ( !(unsigned __int8)RtlpInitAndCallLcidToCultureName(&DestinationString, Heap, *(unsigned __int16 *)(a2 + 4)) )
      {
        v5 = -1073741595;
        goto LABEL_13;
      }
    }
    else
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2LL * v12)));
    }
    if ( *a3 && *a3 <= a5 && RtlpLangNameInMultiSzString_Size(a4, DestinationString.Buffer, *a3) )
      goto LABEL_13;
    v13 = v10 + (DestinationString.Length >> 1) + 1;
    if ( a4 && (unsigned int)v10 < v13 )
    {
      if ( v13 < a5 )
      {
        memmove(&a4[v10], DestinationString.Buffer, DestinationString.Length);
        a4[v13 - 1] = 0;
LABEL_12:
        *a3 = v13;
LABEL_13:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v5;
      }
    }
    else if ( v13 < a5 )
    {
      goto LABEL_12;
    }
    if ( a4 )
      v5 = -1073741789;
    goto LABEL_12;
  }
  return 3221225495LL;
}
