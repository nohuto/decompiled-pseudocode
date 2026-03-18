/*
 * XREFs of NVMeFirmwareDownloadCompletion @ 0x1C0008FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFirmwareDownloadCompletion(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  if ( v2 == 40 )
    v5 = *(_QWORD *)(a2 + 64);
  else
    v5 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(v5 + 20) = *(_BYTE *)(a2 + 3) != 1;
  result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v4 + 4208), a1);
  *(_QWORD *)(v4 + 4208) = 0LL;
  *(_BYTE *)(v4 + 4186) = 1;
  return result;
}
