/*
 * XREFs of RtlApplyRXact @ 0x18008E290
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x180083760 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x1800837A4 (RXactpCommit.c)
 *     ZwSetValueKey @ 0x1800A7010 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A7D70 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x1800A7FB0 (ZwFlushKey.c)
 */

__int64 __fastcall RtlApplyRXact(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  int v4; // edi
  __int64 v5; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = a1[1];
  RtlInitUnicodeString(&DestinationString, L"Log");
  result = ZwSetValueKey(v1, &DestinationString, 0LL, 3LL, a1[3], *(_DWORD *)(a1[3] + 8));
  if ( (int)result >= 0 )
  {
    v4 = ZwFlushKey(v1);
    if ( v4 < 0 )
    {
      v5 = v1;
    }
    else
    {
      v4 = RXactpCommit(a1);
      v5 = v1;
      if ( v4 >= 0 )
      {
        ZwDeleteValueKey(v1, &DestinationString);
        RtlAbortRXact((__int64)a1);
        return 0LL;
      }
    }
    ZwDeleteValueKey(v5, &DestinationString);
    return (unsigned int)v4;
  }
  return result;
}
