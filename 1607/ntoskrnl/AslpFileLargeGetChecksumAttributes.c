/*
 * XREFs of AslpFileLargeGetChecksumAttributes @ 0x1406C96A4
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1406C94E0 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslpFileLargeGetChecksum @ 0x1406C95B8 (AslpFileLargeGetChecksum.c)
 *     AslpFileLargeGetCrcChecksum @ 0x1406C9794 (AslpFileLargeGetCrcChecksum.c)
 */

__int64 __fastcall AslpFileLargeGetChecksumAttributes(__int64 a1, _QWORD *a2)
{
  int Checksum; // eax
  unsigned int v5; // edi
  __int64 v6; // rax
  int CrcChecksum; // eax
  __int64 v8; // rax
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+20h] [rbp-18h]
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0;
  Checksum = AslpFileLargeGetChecksum(&v12, a2);
  v5 = Checksum;
  if ( Checksum >= 0 )
  {
    v6 = v12;
    *(_DWORD *)(a1 + 88) |= 1u;
    v12 = 0;
    *(_QWORD *)(a1 + 80) = v6;
    *(_DWORD *)(a1 + 64) = 2;
    *(_QWORD *)(a1 + 72) = 4LL;
    CrcChecksum = AslpFileLargeGetCrcChecksum(&v12, a2);
    v5 = CrcChecksum;
    if ( CrcChecksum >= 0 )
    {
      v8 = v12;
      *(_DWORD *)(a1 + 856) |= 1u;
      *(_QWORD *)(a1 + 848) = v8;
      v5 = 0;
      *(_DWORD *)(a1 + 832) = 2;
      *(_QWORD *)(a1 + 840) = 4LL;
      return v5;
    }
    v11 = CrcChecksum;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileLargeGetChecksumAttributes",
      694,
      (unsigned int)"AslpFileGetCrcChecksum failed [%x]",
      v11);
  }
  else
  {
    v10 = Checksum;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileLargeGetChecksumAttributes",
      673,
      (unsigned int)"AslpFileLargeGetChecksum failed [%x]",
      v10);
    *(_DWORD *)(a1 + 88) |= 2u;
  }
  *(_DWORD *)(a1 + 856) |= 2u;
  return v5;
}
