/*
 * XREFs of CmpDoReDoSetValueExisting @ 0x1405ED3CC
 * Callers:
 *     CmpDoReDoRecord @ 0x1405ED194 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     CmpDoReOpenTransKey @ 0x1405ED434 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoSetValueExisting(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  v3 = CmpDoReOpenTransKey(a1, a2 + 32, 2LL, &KeyHandle);
  if ( v3 >= 0 )
  {
    v3 = ZwSetValueKey(
           KeyHandle,
           (PUNICODE_STRING)(a2 + 48),
           0,
           *(_DWORD *)(a2 + 64),
           *(PVOID *)(a2 + 72),
           *(_DWORD *)(a2 + 68));
    ZwClose(KeyHandle);
  }
  return (unsigned int)v3;
}
