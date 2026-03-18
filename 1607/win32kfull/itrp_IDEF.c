/*
 * XREFs of itrp_IDEF @ 0x1C02E0A30
 * Callers:
 *     <none>
 * Callees:
 *     itrp_FindIDef @ 0x1C02E0A00 (itrp_FindIDef.c)
 *     itrp_SkipPushData @ 0x1C02E17B8 (itrp_SkipPushData.c)
 */

unsigned __int64 __fastcall itrp_IDEF(__int16 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  int *v4; // rcx
  int v5; // edi
  __int64 v6; // r8
  _BYTE *v7; // r9
  __int64 v8; // r10
  __int64 IDef; // r11
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 result; // rax
  _BYTE *v13; // rcx
  char v14; // r10
  _BYTE *v15; // r9
  __int64 v16; // rax
  _BYTE *v17; // rcx

  v1 = *(unsigned __int8 *)(qword_1C03294E0 + 333);
  if ( *(unsigned __int8 *)(qword_1C03294E0 + 333) < 2u )
  {
    v3 = *(_QWORD *)(qword_1C03294E0 + 16 * v1 + 200);
    if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
      || !((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) )
    {
      dword_1C0329530 = 4368;
      return qword_1C0329538;
    }
    v4 = (int *)(qword_1C03294C8 - 4);
    qword_1C03294C8 = (__int64)v4;
    v5 = *v4;
    if ( (*v4 & 0xFFFFFF00) != 0 )
    {
      dword_1C0329530 = 4375;
      return qword_1C0329538;
    }
    IDef = itrp_FindIDef(*v4);
    if ( !IDef )
    {
      v10 = *(int *)(v8 + 336);
      if ( (int)v10 >= *(unsigned __int16 *)(*(_QWORD *)(v8 + 344) + 22LL) )
      {
        dword_1C0329530 = 4376;
        return qword_1C0329538;
      }
      IDef = *(_QWORD *)(v8 + 168) + 8 * v10;
      *(_DWORD *)(v8 + 336) = v10 + 1;
    }
    *(_BYTE *)(IDef + 6) = v1;
    *(_BYTE *)(IDef + 7) = v5;
    *(_DWORD *)IDef = (_DWORD)v7 - v3;
    v11 = qword_1C0329540;
    result = qword_1C0329538;
    if ( (unsigned __int64)v7 >= qword_1C0329540 )
    {
      v13 = v7 + 1;
      if ( (unsigned __int64)(v7 + 1) <= qword_1C0329538 && v13 >= v7 )
      {
        v14 = 45;
        while ( *v7 != v14 )
        {
          v15 = v13;
          if ( (unsigned __int64)v13 >= result )
            goto LABEL_21;
          v16 = itrp_SkipPushData(v13, v11, v6, v13);
          v11 = qword_1C0329540;
          v7 = (_BYTE *)v16;
          result = qword_1C0329538;
          if ( (unsigned __int64)v7 >= qword_1C0329540 )
          {
            v13 = v7 + 1;
            if ( (unsigned __int64)(v7 + 1) <= qword_1C0329538 && v13 >= v7 )
              continue;
          }
          goto LABEL_27;
        }
        v15 = v7 + 1;
LABEL_21:
        if ( v15 != (_BYTE *)result )
          goto LABEL_26;
        v17 = v15 - 1;
        if ( (unsigned __int64)(v15 - 1) >= v11 && v15 >= v17 )
        {
          if ( *v17 != v14 )
            dword_1C0329530 = 4356;
LABEL_26:
          *(_WORD *)(IDef + 4) = (_WORD)v15 - a1 - 1;
          return (unsigned __int64)v15;
        }
      }
    }
LABEL_27:
    dword_1C0329530 = 4381;
    return result;
  }
  dword_1C0329530 = 4361;
  return qword_1C0329538;
}
