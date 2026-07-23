/*
 * XREFs of MiGenerateSystemImageNames @ 0x140482C50
 * Callers:
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiGenerateSystemImageNames(
        unsigned __int16 *a1,
        const UNICODE_STRING *a2,
        UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        UNICODE_STRING *Source,
        PUNICODE_STRING Destination)
{
  wchar_t *v6; // r11
  wchar_t *v10; // r9
  wchar_t *v11; // rax
  wchar_t *i; // r10
  unsigned __int16 Length; // ax
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // cx
  wchar_t *PoolWithTag; // rax

  v6 = (wchar_t *)*((_QWORD *)a1 + 1);
  if ( *v6 == 92 )
  {
    v10 = &v6[(unsigned __int64)*a1 >> 1];
    v11 = v10;
    for ( i = v10 - 1; ; --i )
    {
      if ( *i == 92 )
      {
        a4->Buffer = v11;
        a4->Length = 2 * (v10 - v11);
        goto LABEL_7;
      }
      v11 = i;
      if ( i == v6 )
        break;
    }
    return 3221225711LL;
  }
  else
  {
    a4->Length = *a1;
    a4->Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
LABEL_7:
    a4->MaximumLength = a4->Length;
    *Source = *(UNICODE_STRING *)a1;
    Source->Length -= a4->Length;
    Source->MaximumLength = Source->Length;
    *Destination = *(PUNICODE_STRING)a1;
    if ( a2 )
    {
      Length = Source->Length;
      Destination->MaximumLength = Source->Length;
      v15 = Length + a2->Length;
      if ( v15 < Length )
        return 3221225626LL;
      v16 = Length + a2->Length;
      Destination->MaximumLength = v15;
      v17 = v15 + a4->Length;
      if ( v17 < v16 )
        return 3221225626LL;
      Destination->MaximumLength = v17;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17, 0x644C6D4Du);
      Destination->Buffer = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      Destination->Length = 0;
      RtlAppendUnicodeStringToString(Destination, Source);
      RtlAppendUnicodeStringToString(Destination, a2);
      RtlAppendUnicodeStringToString(Destination, a4);
      a4->Buffer = &Destination->Buffer[(unsigned __int64)Source->Length >> 1];
      a4->Length += a2->Length;
      a4->MaximumLength += a2->Length;
    }
    if ( a3 )
      *a4 = *a3;
    return 0LL;
  }
}
