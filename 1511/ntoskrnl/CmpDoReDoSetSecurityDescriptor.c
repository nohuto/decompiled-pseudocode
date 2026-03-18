/*
 * XREFs of CmpDoReDoSetSecurityDescriptor @ 0x1405ED378
 * Callers:
 *     CmpDoReDoRecord @ 0x1405ED194 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSetSecurityObject @ 0x1401537E0 (ZwSetSecurityObject.c)
 *     CmpDoReOpenTransKey @ 0x1405ED434 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoSetSecurityDescriptor(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v3 = CmpDoReOpenTransKey(a1, a2 + 32, 0x40000LL, &Handle);
  if ( v3 >= 0 )
  {
    v3 = ZwSetSecurityObject(Handle, 4u, *(PSECURITY_DESCRIPTOR *)(a2 + 56));
    ZwClose(Handle);
  }
  return (unsigned int)v3;
}
