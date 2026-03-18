/*
 * XREFs of PspCaptureCreateInfo @ 0x14050B804
 * Callers:
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspCaptureCreateInfo(char a1, ULONG64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  _BYTE *v4; // rcx
  char v5; // cl

  v3 = 0;
  if ( a1 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v4 = (_BYTE *)MmUserProbeAddress;
    *v4 = *v4;
    v4[87] = v4[87];
  }
  if ( *(_DWORD *)(a2 + 8) || *(_QWORD *)a2 != 88LL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = (32 * *(_BYTE *)(a2 + 16)) ^ (*(_BYTE *)(a3 + 8) ^ (32 * *(_BYTE *)(a2 + 16))) & 0x7F;
    *(_BYTE *)(a3 + 8) = v5;
    *(_BYTE *)(a3 + 9) ^= (*(_BYTE *)(a3 + 9) ^ (*(_BYTE *)(a2 + 16) >> 3)) & 1;
    *(_DWORD *)(a3 + 152) = *(_DWORD *)(a2 + 20);
    *(_BYTE *)(a3 + 8) ^= (v5 ^ (2 * *(_BYTE *)(a2 + 16))) & 2;
    *(_BYTE *)(a3 + 8) ^= (*(_BYTE *)(a3 + 8) ^ (8 * *(_BYTE *)(a2 + 16))) & 0x10;
    *(_WORD *)(a3 + 10) = *(_WORD *)(a2 + 18);
    *(_QWORD *)(a3 + 40) = a2;
  }
  return v3;
}
