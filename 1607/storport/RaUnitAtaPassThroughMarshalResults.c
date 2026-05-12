/*
 * XREFs of RaUnitAtaPassThroughMarshalResults @ 0x1C0001440
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0018B7C (GetSrbScsiData.c)
 */

__int64 __fastcall RaUnitAtaPassThroughMarshalResults(__int64 a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  bool v5; // zf
  _BYTE *v9; // r8
  unsigned __int8 v10; // r10
  char v11; // r9
  _BYTE *v12; // rcx
  unsigned __int8 v13; // dl
  char v14; // r11
  unsigned __int8 v15; // r9
  unsigned __int8 v16; // dl
  char *v17; // r8
  int v18; // r9d
  __int64 v19; // rcx
  __int64 result; // rax
  unsigned __int8 v21; // r8
  _BYTE *v22; // [rsp+50h] [rbp+8h] BYREF
  char v23; // [rsp+60h] [rbp+18h] BYREF

  v22 = 0LL;
  v5 = *(_BYTE *)(a1 + 2) == 40;
  v23 = 0;
  if ( v5 )
  {
    GetSrbScsiData(a1, 0, 0, 0, (__int64)&v22, (__int64)&v23);
    v9 = v22;
    v10 = v23;
    *((_DWORD *)a2 + 2) = *(_DWORD *)(a1 + 60);
  }
  else
  {
    v9 = *(_BYTE **)(a1 + 32);
    v10 = *(_BYTE *)(a1 + 11);
    *((_DWORD *)a2 + 2) = *(_DWORD *)(a1 + 16);
  }
  *((_QWORD *)a2 + 5) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  v11 = *v9 & 0x7F;
  if ( (unsigned __int8)(v11 - 114) > 1u )
  {
    if ( (unsigned __int8)(v11 - 112) > 1u || v10 < 0xCu )
      goto LABEL_24;
    *((_BYTE *)a2 + 40) = v9[3];
    *((_BYTE *)a2 + 41) = v9[6];
    *((_BYTE *)a2 + 42) = v9[11];
    *((_BYTE *)a2 + 43) = v9[10];
    *((_BYTE *)a2 + 44) = v9[9];
    *((_BYTE *)a2 + 45) = v9[5];
    *((_BYTE *)a2 + 46) = v9[4];
    goto LABEL_22;
  }
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  if ( v10 )
  {
    if ( (unsigned __int8)(v11 - 114) > 1u )
      goto LABEL_24;
    if ( v9 + 8 <= &v9[v10] )
    {
      v15 = v9[7];
      if ( v15 <= 0xF7u )
      {
        v16 = v15 + 8;
        if ( (unsigned __int8)(v15 + 8) > v10 )
          v16 = v10;
        v13 = v16 - 8;
        if ( v13 )
        {
          v12 = v9 + 8;
          v14 = 1;
        }
      }
    }
  }
  else
  {
    v14 = 0;
  }
  if ( v14 )
  {
    v23 = 9;
    if ( v12 )
    {
      if ( v13 )
      {
LABEL_15:
        if ( v13 < 2u )
          goto LABEL_24;
        v17 = &v23;
        v18 = 0;
        while ( *v12 != *v17 )
        {
          ++v18;
          ++v17;
          if ( v18 )
          {
            v21 = v12[1] + 2;
            if ( v13 <= v21 )
              goto LABEL_24;
            v12 += v21;
            v13 -= v21;
            goto LABEL_15;
          }
        }
        if ( v13 < 0xEu || !v12 )
          goto LABEL_24;
        *((_BYTE *)a2 + 40) = v12[3];
        *((_BYTE *)a2 + 41) = v12[5];
        *((_BYTE *)a2 + 42) = v12[7];
        *((_BYTE *)a2 + 43) = v12[9];
        *((_BYTE *)a2 + 44) = v12[11];
        *((_BYTE *)a2 + 45) = v12[12];
        *((_BYTE *)a2 + 46) = v12[13];
        if ( (v12[2] & 1) != 0 )
        {
          *((_BYTE *)a2 + 33) = v12[4];
          *((_BYTE *)a2 + 34) = v12[6];
          *((_BYTE *)a2 + 35) = v12[8];
          *((_BYTE *)a2 + 36) = v12[10];
        }
LABEL_22:
        if ( (*(_BYTE *)(a1 + 3) & 0x3F) == 0xE )
        {
          *((_BYTE *)a2 + 46) = 65;
          *((_BYTE *)a2 + 40) = 1;
        }
      }
    }
  }
LABEL_24:
  if ( a3 != 1 && (a2[1] & 2) != 0 && (v19 = *((_QWORD *)a2 + 3)) != 0 )
    result = v19 + *((unsigned int *)a2 + 2);
  else
    result = *a2;
  *(_DWORD *)a4 = 0;
  *(_QWORD *)(a4 + 8) = result;
  return result;
}
