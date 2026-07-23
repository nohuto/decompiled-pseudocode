/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x1404AE8BC
 * Callers:
 *     <none>
 * Callees:
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  __int64 v6; // rdx
  NTSTATUS inserted; // ecx
  _BYTE *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object[3]; // [rsp+68h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = (__int64)WaitCompletionPacketHandle;
    if ( (unsigned __int64)WaitCompletionPacketHandle >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               IopWaitCompletionPacketObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v10,
               112,
               0,
               0,
               Object,
               0LL);
  if ( inserted >= 0 )
  {
    v8 = Object[0];
    *((_QWORD *)Object[0] + 12) = 0LL;
    v8[104] = 0;
    v8[105] = 0;
    *((_QWORD *)v8 + 11) = 0LL;
    inserted = ObInsertObjectEx(v8, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v11);
    if ( inserted >= 0 )
      *WaitCompletionPacketHandle = (HANDLE)v11;
  }
  return inserted;
}
