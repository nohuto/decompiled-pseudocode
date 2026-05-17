/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x18007CFD8
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x18007CE90 (RtlQueryImageFileExecutionOptions.c)
 *     RtlpOpenImageFileOptionsKey @ 0x18007CF18 (RtlpOpenImageFileOptionsKey.c)
 * Callees:
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h]
  void *v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]
  __int128 v8; // [rsp+40h] [rbp-18h]
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_180146220;
  Handle = (HANDLE)qword_180146220;
  if ( qword_180146220 )
    goto LABEL_2;
  v5 = 0LL;
  v6 = &unk_180102A30;
  v4 = 48;
  v7 = 576;
  v8 = 0LL;
  result = NtOpenKey(&Handle, 9LL, &v4);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_180146220, (signed __int64)Handle, 0LL) )
    {
      NtClose(Handle);
      v1 = (HANDLE)qword_180146220;
    }
    else
    {
      v1 = Handle;
    }
LABEL_2:
    *a1 = v1;
    return 0LL;
  }
  return result;
}
