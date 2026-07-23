/*
 * XREFs of RtlApplyRXact @ 0x18008E280
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x180083750 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x180083794 (RXactpCommit.c)
 *     ZwSetValueKey @ 0x1800A7010 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A7D70 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x1800A7FB0 (ZwFlushKey.c)
 */

NTSTATUS __fastcall RtlApplyRXact(__int64 a1)
{
  void *v1; // rbx
  NTSTATUS result; // eax
  int v4; // edi
  void *v5; // rcx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(void **)(a1 + 8);
  RtlInitUnicodeString(&DestinationString, L"Log");
  result = ZwSetValueKey(v1, &DestinationString, 0, 3u, *(PVOID *)(a1 + 24), *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
  if ( result >= 0 )
  {
    v4 = ZwFlushKey(v1);
    if ( v4 < 0 )
    {
      v5 = v1;
    }
    else
    {
      v4 = RXactpCommit((__int64 *)a1);
      v5 = v1;
      if ( v4 >= 0 )
      {
        ZwDeleteValueKey(v1, &DestinationString);
        RtlAbortRXact(a1);
        return 0;
      }
    }
    ZwDeleteValueKey(v5, &DestinationString);
    return v4;
  }
  return result;
}
