/*
 * XREFs of ndisFilterCancelSendNetBufferLists @ 0x1C0058D30
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0012B0C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 */

NTSTATUS __fastcall ndisFilterCancelSendNetBufferLists(__int64 a1, __int64 a2)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v4; // [rsp+28h] [rbp-40h]
  __int64 v5; // [rsp+38h] [rbp-30h]

  v4 = a1;
  v5 = a2;
  return ndisExpandStack(ndisFilterCancelSendNetBufferListsInternal, v3);
}
