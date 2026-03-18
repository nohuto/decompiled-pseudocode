/*
 * XREFs of Crashdump_Command_InstallRing @ 0x1C0035F60
 * Callers:
 *     Crashdump_Command_PrepareForDump @ 0x1C0035FA4 (Crashdump_Command_PrepareForDump.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall Crashdump_Command_InstallRing(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  char v4; // r8
  _DWORD *result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 56) = 1;
  v3 = v2 | 1;
  v4 = *(_QWORD *)(v1 + 8);
  result = *(_DWORD **)(a1 + 16);
  if ( (v4 & 1) != 0 )
  {
    *result = v3;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    result[1] = HIDWORD(v3);
  }
  else
  {
    *(_QWORD *)result = v3;
  }
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}
