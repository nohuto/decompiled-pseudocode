/*
 * XREFs of ArbOverrideConflict @ 0x1405586C4
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetNextRange @ 0x14055A5F0 (RtlGetNextRange.c)
 *     RtlGetFirstRange @ 0x14055A6A4 (RtlGetFirstRange.c)
 */

char __fastcall ArbOverrideConflict(__int64 a1, __int64 a2)
{
  char v2; // si
  PRTL_RANGE v4; // rdx
  unsigned __int64 v5; // rdi
  unsigned __int64 Start; // rax
  bool v7; // cf
  _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 2) == 0 )
    return 0;
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  v4 = Range;
  if ( Range )
  {
    v5 = *(_QWORD *)(a2 + 16);
    do
    {
      Start = v4->Start;
      v7 = v5 < v4->Start;
      if ( v5 > v4->Start )
      {
        if ( v4->End < v5 )
          goto LABEL_6;
        v7 = v5 < Start;
      }
      if ( (!v7 || *(_QWORD *)(a2 + 24) >= Start) && (v4->Attributes & *(_BYTE *)(a2 + 67)) == 0 )
      {
        if ( v4->Owner != *(void **)(*(_QWORD *)(a2 + 32) + 32LL) || (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 2) == 0 )
          return 0;
        v2 = 1;
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
        *(_QWORD *)a2 = v5;
      }
LABEL_6:
      RtlGetNextRange(&Iterator, &Range, 1u);
      v4 = Range;
    }
    while ( Range );
  }
  return v2;
}
