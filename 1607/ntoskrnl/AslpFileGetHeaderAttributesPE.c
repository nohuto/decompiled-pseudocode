/*
 * XREFs of AslpFileGetHeaderAttributesPE @ 0x1406C7B18
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1406C6A84 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1406C582C (AslFileMappingEnsure.c)
 *     AslpFileGetNtHeaderAttributes @ 0x1406C7DB8 (AslpFileGetNtHeaderAttributes.c)
 */

__int64 __fastcall AslpFileGetHeaderAttributesPE(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rax
  int v8; // [rsp+20h] [rbp-40h]
  _WORD v9[2]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+44h] [rbp-1Ch] BYREF
  unsigned int v11; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+4Ch] [rbp-14h] BYREF
  unsigned int v13; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v14; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int16 v15; // [rsp+98h] [rbp+38h] BYREF

  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v4 = AslFileMappingEnsure(a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 576) == 6
      && (*(_DWORD *)(a1 + 664) |= 2u,
          *(_DWORD *)(a1 + 696) |= 2u,
          (int)AslpFileGetNtHeaderAttributes(
                 (unsigned int)&v10,
                 (unsigned int)&v11,
                 (unsigned int)&v12,
                 (unsigned int)&v13,
                 (__int64)&v14,
                 (__int64)&v15,
                 (__int64)v9,
                 a2) >= 0) )
    {
      v6 = v10;
      *(_DWORD *)(a1 + 600) |= 1u;
      *(_DWORD *)(a1 + 632) |= 1u;
      *(_DWORD *)(a1 + 728) |= 1u;
      *(_DWORD *)(a1 + 56) |= 1u;
      *(_DWORD *)(a1 + 952) |= 1u;
      *(_DWORD *)(a1 + 984) |= 1u;
      *(_DWORD *)(a1 + 1016) |= 1u;
      *(_QWORD *)(a1 + 592) = v6;
      *(_QWORD *)(a1 + 624) = v11;
      *(_QWORD *)(a1 + 720) = v12;
      *(_QWORD *)(a1 + 48) = v13;
      *(_QWORD *)(a1 + 944) = v14;
      *(_QWORD *)(a1 + 976) = v15;
      *(_QWORD *)(a1 + 1008) = v9[0];
      *(_DWORD *)(a1 + 576) = 2;
      *(_QWORD *)(a1 + 584) = 4LL;
      *(_DWORD *)(a1 + 608) = 2;
      *(_QWORD *)(a1 + 616) = 4LL;
      *(_DWORD *)(a1 + 704) = 2;
      *(_QWORD *)(a1 + 712) = 4LL;
      *(_DWORD *)(a1 + 32) = 2;
      *(_QWORD *)(a1 + 40) = 4LL;
      *(_DWORD *)(a1 + 928) = 1;
      *(_QWORD *)(a1 + 936) = 2LL;
      *(_DWORD *)(a1 + 960) = 1;
      *(_QWORD *)(a1 + 968) = 2LL;
      *(_DWORD *)(a1 + 992) = 1;
      *(_QWORD *)(a1 + 1000) = 2LL;
    }
    else
    {
      *(_DWORD *)(a1 + 600) |= 2u;
      *(_DWORD *)(a1 + 632) |= 2u;
      *(_DWORD *)(a1 + 728) |= 2u;
      *(_DWORD *)(a1 + 56) |= 2u;
      *(_DWORD *)(a1 + 952) |= 2u;
      *(_DWORD *)(a1 + 984) |= 2u;
      *(_DWORD *)(a1 + 1016) |= 2u;
    }
    return 0;
  }
  else
  {
    v8 = v4;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetHeaderAttributesPE",
      2451,
      (unsigned int)"AslFileMappingEnsure failed [%x]",
      v8);
  }
  return v5;
}
