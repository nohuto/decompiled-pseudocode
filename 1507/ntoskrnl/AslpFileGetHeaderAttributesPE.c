/*
 * XREFs of AslpFileGetHeaderAttributesPE @ 0x140706BE4
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x140705C78 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x140705378 (AslStringXmlSanitize.c)
 *     AslFileMappingEnsure @ 0x14070556C (AslFileMappingEnsure.c)
 *     AslpFileGetExeWrapper @ 0x140706788 (AslpFileGetExeWrapper.c)
 *     AslpFileGetExportName @ 0x140706908 (AslpFileGetExportName.c)
 *     AslpFileGetNtHeaderAttributes @ 0x140706F68 (AslpFileGetNtHeaderAttributes.c)
 */

__int64 __fastcall AslpFileGetHeaderAttributesPE(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  _WORD v10[2]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-1Ch] BYREF
  unsigned int v12; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+4Ch] [rbp-14h] BYREF
  unsigned int v14; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+54h] [rbp-Ch] BYREF
  wchar_t *v16; // [rsp+58h] [rbp-8h] BYREF
  unsigned __int16 v17; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int16 v18; // [rsp+A8h] [rbp+48h] BYREF

  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0LL;
  v4 = AslFileMappingEnsure(a2);
  if ( v4 < 0 )
    goto LABEL_2;
  if ( *(_DWORD *)(a2 + 576) != 6 )
  {
    *(_DWORD *)(a1 + 600) |= 2u;
    *(_DWORD *)(a1 + 632) |= 2u;
    *(_DWORD *)(a1 + 728) |= 2u;
    *(_DWORD *)(a1 + 56) |= 2u;
    *(_DWORD *)(a1 + 824) |= 2u;
    *(_DWORD *)(a1 + 760) |= 2u;
    *(_DWORD *)(a1 + 1016) |= 2u;
    *(_DWORD *)(a1 + 952) |= 2u;
    *(_DWORD *)(a1 + 984) |= 2u;
    return 0;
  }
  *(_DWORD *)(a1 + 664) |= 2u;
  *(_DWORD *)(a1 + 696) |= 2u;
  if ( (int)AslpFileGetNtHeaderAttributes(
              (unsigned int)&v11,
              (unsigned int)&v12,
              (unsigned int)&v13,
              (unsigned int)&v14,
              (__int64)&v17,
              (__int64)&v18,
              (__int64)v10,
              a2) < 0 )
  {
    *(_DWORD *)(a1 + 600) |= 2u;
    *(_DWORD *)(a1 + 632) |= 2u;
    *(_DWORD *)(a1 + 728) |= 2u;
    *(_DWORD *)(a1 + 56) |= 2u;
    *(_DWORD *)(a1 + 952) |= 2u;
    *(_DWORD *)(a1 + 984) |= 2u;
    *(_DWORD *)(a1 + 1016) |= 2u;
  }
  else
  {
    v5 = v11;
    *(_DWORD *)(a1 + 600) |= 1u;
    *(_DWORD *)(a1 + 632) |= 1u;
    *(_DWORD *)(a1 + 728) |= 1u;
    *(_DWORD *)(a1 + 56) |= 1u;
    *(_DWORD *)(a1 + 952) |= 1u;
    *(_DWORD *)(a1 + 984) |= 1u;
    *(_DWORD *)(a1 + 1016) |= 1u;
    *(_QWORD *)(a1 + 592) = v5;
    *(_QWORD *)(a1 + 624) = v12;
    *(_QWORD *)(a1 + 720) = v13;
    *(_QWORD *)(a1 + 48) = v14;
    *(_QWORD *)(a1 + 944) = v17;
    *(_QWORD *)(a1 + 976) = v18;
    *(_QWORD *)(a1 + 1008) = v10[0];
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
  if ( (int)AslpFileGetExeWrapper(&v15, a2) < 0 )
  {
    *(_DWORD *)(a1 + 824) |= 2u;
  }
  else
  {
    v6 = v15;
    *(_DWORD *)(a1 + 824) |= 1u;
    *(_QWORD *)(a1 + 816) = v6;
    *(_DWORD *)(a1 + 800) = 2;
    *(_QWORD *)(a1 + 808) = 4LL;
  }
  if ( (int)AslpFileGetExportName(&v16) < 0 )
  {
    *(_DWORD *)(a1 + 760) |= 2u;
    return 0;
  }
  v4 = AslStringXmlSanitize(v16);
  if ( v4 >= 0 )
  {
    *(_DWORD *)(a1 + 736) = 4;
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(v7 + 2 * v8) );
    *(_DWORD *)(a1 + 760) |= 5u;
    *(_QWORD *)(a1 + 744) = v8;
    *(_QWORD *)(a1 + 752) = v7;
    return 0;
  }
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)v4;
}
