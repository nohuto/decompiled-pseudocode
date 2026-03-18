/*
 * XREFs of CmpDoReDoSetLastWriteTime @ 0x1405ED318
 * Callers:
 *     CmpDoReDoRecord @ 0x1405ED194 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSetInformationKey @ 0x140153600 (ZwSetInformationKey.c)
 *     CmpDoReOpenTransKey @ 0x1405ED434 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoSetLastWriteTime(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF
  __int64 KeySetInformation; // [rsp+40h] [rbp+18h] BYREF

  v3 = CmpDoReOpenTransKey(a1, a2 + 32, 2LL, &KeyHandle);
  if ( v3 >= 0 )
  {
    KeySetInformation = *(_QWORD *)(a2 + 48);
    v3 = ZwSetInformationKey(KeyHandle, KeyWriteTimeInformation, &KeySetInformation, 8u);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v3;
}
