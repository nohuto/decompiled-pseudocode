/*
 * XREFs of RtlApplyRXact @ 0x18007E210
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x18007E2F0 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x18007E334 (RXactpCommit.c)
 *     ZwSetValueKey @ 0x180093F00 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x180094580 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x1800946A0 (ZwFlushKey.c)
 */

__int64 __fastcall RtlApplyRXact(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  int v4; // edi
  __int64 v5; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  RtlInitUnicodeString(&DestinationString, L"Log");
  result = ZwSetValueKey(
             v1,
             &DestinationString,
             0LL,
             3LL,
             *(_QWORD *)(a1 + 24),
             *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
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
        RtlAbortRXact(a1);
        return 0LL;
      }
    }
    ZwDeleteValueKey(v5, &DestinationString);
    return (unsigned int)v4;
  }
  return result;
}
