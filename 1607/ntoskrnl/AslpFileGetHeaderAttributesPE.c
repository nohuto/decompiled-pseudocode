/*
 * XREFs of AslpFileGetHeaderAttributesPE @ 0x1406C7C50
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1406C6BBC (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1406C5964 (AslFileMappingEnsure.c)
 *     AslpFileGetNtHeaderAttributes @ 0x1406C7EF0 (AslpFileGetNtHeaderAttributes.c)
 */

__int64 __fastcall AslpFileGetHeaderAttributesPE(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // rax
  _WORD v7[2]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v8; // [rsp+44h] [rbp-1Ch] BYREF
  unsigned int v9; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+4Ch] [rbp-14h] BYREF
  unsigned int v11; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v12; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int16 v13; // [rsp+98h] [rbp+38h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v4 = AslFileMappingEnsure(a2);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 576) == 6
      && (*(_DWORD *)(a1 + 664) |= 2u,
          *(_DWORD *)(a1 + 696) |= 2u,
          (int)AslpFileGetNtHeaderAttributes(
                 (unsigned int)&v8,
                 (unsigned int)&v9,
                 (unsigned int)&v10,
                 (unsigned int)&v11,
                 (__int64)&v12,
                 (__int64)&v13,
                 (__int64)v7,
                 a2) >= 0) )
    {
      v5 = v8;
      *(_DWORD *)(a1 + 600) |= 1u;
      *(_DWORD *)(a1 + 632) |= 1u;
      *(_DWORD *)(a1 + 728) |= 1u;
      *(_DWORD *)(a1 + 56) |= 1u;
      *(_DWORD *)(a1 + 952) |= 1u;
      *(_DWORD *)(a1 + 984) |= 1u;
      *(_DWORD *)(a1 + 1016) |= 1u;
      *(_QWORD *)(a1 + 592) = v5;
      *(_QWORD *)(a1 + 624) = v9;
      *(_QWORD *)(a1 + 720) = v10;
      *(_QWORD *)(a1 + 48) = v11;
      *(_QWORD *)(a1 + 944) = v12;
      *(_QWORD *)(a1 + 976) = v13;
      *(_QWORD *)(a1 + 1008) = v7[0];
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
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)v4;
}
