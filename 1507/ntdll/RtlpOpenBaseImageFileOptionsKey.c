/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x180071308
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x1800711C0 (RtlQueryImageFileExecutionOptions.c)
 *     RtlpOpenImageFileOptionsKey @ 0x180071248 (RtlpOpenImageFileOptionsKey.c)
 * Callees:
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
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

  v1 = (HANDLE)qword_180147190;
  Handle = (HANDLE)qword_180147190;
  if ( qword_180147190 )
    goto LABEL_2;
  v5 = 0LL;
  v6 = &unk_1801028F0;
  v4 = 48;
  v7 = 576;
  v8 = 0LL;
  result = NtOpenKey(&Handle, 9LL, &v4);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_180147190, (signed __int64)Handle, 0LL) )
    {
      NtClose(Handle);
      v1 = (HANDLE)qword_180147190;
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
