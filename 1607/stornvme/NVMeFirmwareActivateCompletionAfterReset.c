/*
 * XREFs of NVMeFirmwareActivateCompletionAfterReset @ 0x1C000A240
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 */

_DWORD *__fastcall NVMeFirmwareActivateCompletionAfterReset(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // dl
  __int64 v4; // r8
  __int64 SrbExtension; // r10
  __int64 v6; // r11
  __int64 v7; // r9

  SrbExtension = GetSrbExtension(a3);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v7 = *(_QWORD *)(v4 + 64);
  else
    v7 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)(v7 + 20) = v3 != 0 ? 0 : 0x20;
  *(_BYTE *)(SrbExtension + 4245) |= 8u;
  *(_BYTE *)(v4 + 3) = 1;
  return NVMeRequestComplete(v6, v4);
}
