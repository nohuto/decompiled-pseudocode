/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x14052FBA0
 * Callers:
 *     <none>
 * Callees:
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14048A8A0 (ObCreateObjectEx.c)
 */

NTSTATUS __cdecl NtCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  _QWORD *v6; // rdx
  NTSTATUS inserted; // ecx
  _BYTE *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object[3]; // [rsp+68h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = WaitCompletionPacketHandle;
    if ( (unsigned __int64)WaitCompletionPacketHandle >= MmUserProbeAddress )
      v6 = (_QWORD *)MmUserProbeAddress;
    *v6 = *v6;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               IopWaitCompletionPacketObjectType,
               (int)ObjectAttributes,
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
    inserted = ObInsertObjectEx(v8, 0LL, DesiredAccess, 0LL, 0, 0LL, &v11);
    if ( inserted >= 0 )
      *WaitCompletionPacketHandle = (HANDLE)v11;
  }
  return inserted;
}
