/*
 * XREFs of AslpFileGetChecksumAttributes @ 0x140706220
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x140705C78 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x14016C7F8 (RtlFileMapFree.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlFileMapMapView @ 0x140269450 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x140705624 (AslFileMappingEnsureMappedAs.c)
 *     AslpFileGetChecksum @ 0x14070613C (AslpFileGetChecksum.c)
 *     AslpFileGetCrcChecksum @ 0x1407066EC (AslpFileGetCrcChecksum.c)
 */

__int64 __fastcall AslpFileGetChecksumAttributes(__int64 a1, __int64 a2)
{
  int v4; // eax
  int Checksum; // ebx
  _QWORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD v10[8]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v11; // [rsp+90h] [rbp+20h] BYREF

  memset(v10, 0, 0x38uLL);
  v4 = AslFileMappingEnsureMappedAs(a2);
  Checksum = v4;
  if ( v4 >= 0 )
  {
    v6 = (_QWORD *)(a2 + 520);
  }
  else
  {
    if ( v4 != -1073741554 )
      goto LABEL_3;
    memset(v10, 0, 0x38uLL);
    v10[0] = *(_QWORD *)(a2 + 520);
    LOBYTE(v10[6]) = 0;
    Checksum = RtlFileMapMapView((__int64)v10, 0);
    if ( Checksum < 0 )
      goto LABEL_3;
    v6 = v10;
  }
  v11 = 0;
  Checksum = AslpFileGetChecksum(&v11, (__int64)v6);
  if ( Checksum >= 0 )
  {
    v7 = v11;
    *(_DWORD *)(a1 + 88) |= 1u;
    v11 = 0;
    *(_QWORD *)(a1 + 80) = v7;
    *(_DWORD *)(a1 + 64) = 2;
    *(_QWORD *)(a1 + 72) = 4LL;
    Checksum = AslpFileGetCrcChecksum(&v11, v6);
    if ( Checksum >= 0 )
    {
      v8 = v11;
      *(_DWORD *)(a1 + 856) |= 1u;
      *(_QWORD *)(a1 + 848) = v8;
      Checksum = 0;
      *(_DWORD *)(a1 + 832) = 2;
      *(_QWORD *)(a1 + 840) = 4LL;
      goto LABEL_10;
    }
  }
LABEL_3:
  AslLogCallPrintf(1LL);
LABEL_10:
  RtlFileMapFree(v10);
  return (unsigned int)Checksum;
}
