/*
 * XREFs of AslFileMappingGetImageTypeEx @ 0x1407058A4
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x1407056E0 (AslFileMappingGetFileKindDetail.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x14070556C (AslFileMappingEnsure.c)
 *     AslpFileGetImageNtHeader @ 0x140706E90 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x140708554 (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslFileMappingGetImageTypeEx(_WORD *a1, _WORD *a2, int *a3, _DWORD *a4, __int64 a5)
{
  unsigned int v7; // r14d
  __int16 v8; // r9
  __int16 v9; // r15
  int v10; // ecx
  int v11; // eax
  int ImageNtHeader; // edi
  __int64 v13; // rax
  __int16 v15; // [rsp+30h] [rbp-68h]
  _QWORD v16[10]; // [rsp+48h] [rbp-50h] BYREF
  _WORD *v18; // [rsp+A8h] [rbp+10h]

  v18 = a2;
  v16[0] = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( *(_DWORD *)(a5 + 576) == 1 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_21;
  }
  ImageNtHeader = AslFileMappingEnsure(a5);
  if ( ImageNtHeader < 0 )
    goto LABEL_4;
  if ( *(_DWORD *)(a5 + 576) != 6 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_5;
  }
  ImageNtHeader = AslpFileGetImageNtHeader(v16, a5);
  if ( ImageNtHeader < 0 )
  {
LABEL_4:
    AslLogCallPrintf(1LL);
LABEL_5:
    v8 = 0;
LABEL_20:
    v11 = 0;
    v10 = 0;
    a2 = v18;
    goto LABEL_21;
  }
  v8 = *(_WORD *)(v16[0] + 4LL);
  v15 = v8;
  v9 = *(_WORD *)(v16[0] + 24LL);
  if ( !a3 && !a4 )
    goto LABEL_20;
  if ( v9 == 267 )
  {
    v7 = *(_DWORD *)(v16[0] + 232LL);
  }
  else if ( v9 == 523 )
  {
    v7 = *(_DWORD *)(v16[0] + 248LL);
  }
  if ( !v7 )
    goto LABEL_20;
  v13 = AslpImageRvaToVa(v16[0], a5 + 520, v7);
  if ( v13 )
  {
    v10 = 1;
    v11 = *(_DWORD *)(v13 + 16);
    ImageNtHeader = 0;
  }
  else
  {
    v11 = 0;
    v10 = 0;
  }
  a2 = v18;
  v8 = v15;
LABEL_21:
  if ( a1 )
    *a1 = v8;
  if ( a2 )
    *a2 = v9;
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v11;
  return (unsigned int)ImageNtHeader;
}
