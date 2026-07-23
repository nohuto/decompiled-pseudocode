/*
 * XREFs of AslpFileGetChecksumAttributes @ 0x1406C7238
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1406C6BBC (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x14010B304 (RtlFileMapFree.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlFileMapMapView @ 0x14023374C (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x1406C5A48 (AslFileMappingEnsureMappedAs.c)
 *     AslpFileGetChecksum @ 0x1406C7154 (AslpFileGetChecksum.c)
 *     AslpFileGetCrcChecksum @ 0x1406C773C (AslpFileGetCrcChecksum.c)
 */

__int64 __fastcall AslpFileGetChecksumAttributes(__int64 a1, __int64 a2)
{
  int Checksum; // ebx
  int v5; // eax
  _QWORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD v10[8]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v11; // [rsp+98h] [rbp+28h] BYREF

  memset(v10, 0, 0x38uLL);
  if ( !*(_DWORD *)(a2 + 596) )
  {
    v5 = AslFileMappingEnsureMappedAs(a2);
    Checksum = v5;
    if ( v5 >= 0 )
    {
      v6 = (_QWORD *)(a2 + 520);
    }
    else
    {
      if ( v5 != -1073741554
        || (memset(v10, 0, 0x38uLL),
            v10[0] = *(_QWORD *)(a2 + 520),
            LOBYTE(v10[6]) = 0,
            Checksum = RtlFileMapMapView((__int64)v10, 0),
            Checksum < 0) )
      {
LABEL_5:
        AslLogCallPrintf(1LL);
        goto LABEL_12;
      }
      v6 = v10;
    }
    v11 = 0;
    Checksum = AslpFileGetChecksum(&v11, (__int64)v6);
    if ( Checksum >= 0 )
    {
      v7 = v11;
      *(_DWORD *)(a1 + 88) |= 1u;
      v11 = 0;
      *(_QWORD *)(a1 + 72) = 4LL;
      *(_QWORD *)(a1 + 80) = v7;
      *(_DWORD *)(a1 + 64) = 2;
      Checksum = AslpFileGetCrcChecksum(&v11, v6);
      if ( Checksum >= 0 )
      {
        v8 = v11;
        *(_DWORD *)(a1 + 856) |= 1u;
        *(_QWORD *)(a1 + 848) = v8;
        Checksum = 0;
        *(_DWORD *)(a1 + 832) = 2;
        *(_QWORD *)(a1 + 840) = 4LL;
        goto LABEL_12;
      }
    }
    goto LABEL_5;
  }
  AslLogCallPrintf(1LL);
  *(_DWORD *)(a1 + 88) |= 2u;
  Checksum = -1073741823;
  *(_DWORD *)(a1 + 856) |= 2u;
LABEL_12:
  RtlFileMapFree(v10);
  return (unsigned int)Checksum;
}
