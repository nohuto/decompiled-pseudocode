/*
 * XREFs of NVMeFirmwareDownloadCompletion @ 0x1C000A290
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeFirmwareDownloadCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 SrbExtension; // rbx
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 result; // rax

  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v2 + 2) == 40 )
    v5 = *(_QWORD *)(v2 + 64);
  else
    v5 = *(_QWORD *)(v2 + 24);
  *(_DWORD *)(v5 + 20) = *(_BYTE *)(v2 + 3) != 1;
  result = StorPortExtendedFunction(1LL, v4, *(_QWORD *)(SrbExtension + 4208));
  *(_QWORD *)(SrbExtension + 4208) = 0LL;
  *(_BYTE *)(SrbExtension + 4245) |= 8u;
  return result;
}
