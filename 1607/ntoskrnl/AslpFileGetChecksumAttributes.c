/*
 * XREFs of AslpFileGetChecksumAttributes @ 0x1406C7100
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1406C6A84 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x140084CFC (RtlFileMapFree.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     RtlFileMapMapView @ 0x140233920 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x1406C5910 (AslFileMappingEnsureMappedAs.c)
 *     AslpFileGetChecksum @ 0x1406C701C (AslpFileGetChecksum.c)
 *     AslpFileGetCrcChecksum @ 0x1406C7604 (AslpFileGetCrcChecksum.c)
 */

__int64 __fastcall AslpFileGetChecksumAttributes(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int Checksum; // eax
  const char *v6; // r9
  int v7; // r8d
  _QWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  int v12; // [rsp+20h] [rbp-50h]
  _QWORD v13[8]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v14; // [rsp+98h] [rbp+28h] BYREF

  memset(v13, 0, 0x38uLL);
  if ( !*(_DWORD *)(a2 + 596) )
  {
    Checksum = AslFileMappingEnsureMappedAs(a2);
    v4 = Checksum;
    if ( Checksum >= 0 )
    {
      v8 = (_QWORD *)(a2 + 520);
    }
    else
    {
      if ( Checksum != -1073741554 )
      {
        v6 = "AslFileMappingEnsureMappedAs failed [%x]";
        v7 = 3576;
LABEL_6:
        v12 = Checksum;
        AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetChecksumAttributes", v7, (_DWORD)v6, v12);
        goto LABEL_17;
      }
      memset(v13, 0, 0x38uLL);
      v13[0] = *(_QWORD *)(a2 + 520);
      LOBYTE(v13[6]) = 0;
      Checksum = RtlFileMapMapView((__int64)v13, 0);
      v4 = Checksum;
      if ( Checksum < 0 )
      {
        v6 = "RtlFileMapMapView failed [%x]";
        v7 = 3594;
        goto LABEL_6;
      }
      v8 = v13;
    }
    v14 = 0;
    Checksum = AslpFileGetChecksum(&v14, (__int64)v8);
    v4 = Checksum;
    if ( Checksum >= 0 )
    {
      v9 = v14;
      *(_DWORD *)(a1 + 88) |= 1u;
      v14 = 0;
      *(_QWORD *)(a1 + 72) = 4LL;
      *(_QWORD *)(a1 + 80) = v9;
      *(_DWORD *)(a1 + 64) = 2;
      Checksum = AslpFileGetCrcChecksum(&v14, v8);
      v4 = Checksum;
      if ( Checksum >= 0 )
      {
        v10 = v14;
        *(_DWORD *)(a1 + 856) |= 1u;
        *(_QWORD *)(a1 + 848) = v10;
        v4 = 0;
        *(_DWORD *)(a1 + 832) = 2;
        *(_QWORD *)(a1 + 840) = 4LL;
        goto LABEL_17;
      }
      v6 = "AslpFileGetCrcChecksum failed [%x]";
      v7 = 3627;
    }
    else
    {
      v6 = "AslpFileGetChecksum failed [%x]";
      v7 = 3610;
    }
    goto LABEL_6;
  }
  AslLogCallPrintf(
    1LL,
    (unsigned int)"AslpFileGetChecksumAttributes",
    3562,
    (unsigned int)"AslpFileGetChecksumAttributes called with a partial view which is not supported");
  *(_DWORD *)(a1 + 88) |= 2u;
  v4 = -1073741823;
  *(_DWORD *)(a1 + 856) |= 2u;
LABEL_17:
  RtlFileMapFree(v13);
  return v4;
}
