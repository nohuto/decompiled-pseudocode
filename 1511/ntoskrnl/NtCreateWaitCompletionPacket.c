/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x1404A6A48
 * Callers:
 *     <none>
 * Callees:
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateWaitCompletionPacket(__int64 *a1, unsigned int a2, __int64 a3)
{
  char PreviousMode; // di
  _QWORD *v6; // rdx
  int inserted; // ecx
  _BYTE *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object[3]; // [rsp+68h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (_QWORD *)MmUserProbeAddress;
    *v6 = *v6;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               IopWaitCompletionPacketObjectType,
               a3,
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
    inserted = ObInsertObjectEx(v8, 0LL, a2, 0, 0, 0LL, &v11);
    if ( inserted >= 0 )
      *a1 = v11;
  }
  return (unsigned int)inserted;
}
