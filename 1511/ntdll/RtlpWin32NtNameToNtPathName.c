/*
 * XREFs of RtlpWin32NtNameToNtPathName @ 0x18000E1A4
 * Callers:
 *     RtlDosPathNameToRelativeNtPathName @ 0x180016A90 (RtlDosPathNameToRelativeNtPathName.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x18000E310 (RtlAppendUnicodeStringToString.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpWin32NtNameToNtPathName(
        UNICODE_STRING *a1,
        _UNICODE_STRING *a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING **a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v7; // esi
  _UNICODE_STRING *v9; // rbx
  unsigned __int16 *Heap; // rax
  UNICODE_STRING v12; // xmm0
  unsigned __int16 *Buffer; // r8
  unsigned __int16 *i; // rcx
  _WORD *v16; // rcx
  UNICODE_STRING Source; // [rsp+20h] [rbp-28h] BYREF

  v7 = a1->Length + 2;
  v9 = a2;
  if ( v7 > 0xFFFE )
    return 3221225734LL;
  if ( !a2 )
  {
    if ( !a3 )
      return 3221225485LL;
    goto LABEL_4;
  }
  if ( v7 > a2->MaximumLength )
  {
    if ( a3 )
    {
LABEL_4:
      Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      a3->Buffer = Heap;
      if ( !Heap )
        return 3221225495LL;
      a3->Length = 0;
      v9 = a3;
      a3->MaximumLength = v7;
      goto LABEL_6;
    }
    return 3221225734LL;
  }
LABEL_6:
  RtlAppendUnicodeStringToString(v9, &RtlpDosDevicesPrefix);
  Source = *a1;
  v12 = Source;
  Source.Buffer += 4;
  Source.Length = _mm_cvtsi128_si32((__m128i)v12) - 8;
  RtlAppendUnicodeStringToString(v9, &Source);
  if ( a4 )
    *a4 = v9;
  v9->Buffer[(unsigned __int64)v9->Length >> 1] = 0;
  if ( a5 )
  {
    Buffer = v9->Buffer;
    for ( i = &Buffer[((unsigned __int64)v9->Length >> 1) - 1]; ; --i )
    {
      if ( i < Buffer )
        goto LABEL_16;
      if ( *i == 92 )
        break;
    }
    v16 = i + 1;
    if ( !v16 || !*v16 )
    {
LABEL_16:
      *a5 = 0LL;
      goto LABEL_9;
    }
    *a5 = v16;
  }
LABEL_9:
  if ( a6 )
  {
    *(_DWORD *)a6 = 0;
    *(_QWORD *)(a6 + 8) = 0LL;
    *(_QWORD *)(a6 + 16) = 0LL;
    *(_QWORD *)(a6 + 24) = 0LL;
  }
  return 0LL;
}
