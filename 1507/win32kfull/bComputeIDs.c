/*
 * XREFs of bComputeIDs @ 0x1C015929C
 * Callers:
 *     bVerifyTTF @ 0x1C0158564 (bVerifyTTF.c)
 * Callees:
 *     bVerifyMsftTable @ 0x1C0159510 (bVerifyMsftTable.c)
 *     vDetectOldBiDiFonts @ 0x1C0159918 (vDetectOldBiDiFonts.c)
 *     bCvtUnToMac @ 0x1C02452C4 (bCvtUnToMac.c)
 *     bVerifyMsftHighByteTable @ 0x1C0245370 (bVerifyMsftHighByteTable.c)
 *     bVerifyMsftTableGeneral @ 0x1C0245570 (bVerifyMsftTableGeneral.c)
 */

__int64 __fastcall bComputeIDs(
        __int64 a1,
        unsigned int *a2,
        _WORD *a3,
        _WORD *a4,
        _QWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v8; // rbx
  __int64 v9; // rbp
  _WORD *v10; // r14
  _WORD *v11; // r10
  _WORD *v12; // r9
  unsigned __int16 v14; // dx
  _QWORD *v15; // r8
  _WORD *v16; // rdi
  _DWORD *v17; // rcx
  _WORD *v18; // rsi
  _WORD *v19; // r12
  unsigned __int64 v20; // r11
  _DWORD *v21; // r15
  __int16 v22; // ax
  unsigned int v23; // edx
  int v24; // r9d
  unsigned __int32 v25; // edx
  _WORD *v26; // r10
  int v27; // r11d
  int v28; // eax
  __int16 v29; // ax
  unsigned int v31; // eax
  __int64 v32; // rcx
  BOOL v33; // edx
  _DWORD *v34; // rax
  _DWORD *v35; // r9
  unsigned int v36; // eax
  unsigned __int32 v37; // ecx
  _WORD *v38; // rdx
  unsigned __int64 v39; // [rsp+58h] [rbp-50h]
  unsigned int v41; // [rsp+B8h] [rbp+10h] BYREF
  _WORD *v42; // [rsp+C0h] [rbp+18h]
  _WORD *v43; // [rsp+C8h] [rbp+20h]

  v43 = a4;
  v42 = a3;
  v8 = 0LL;
  v9 = a2[1];
  v10 = (_WORD *)(a1 + *a2);
  v41 = 0;
  v11 = a4;
  v12 = a3;
  if ( (unsigned int)v9 < 6 )
    return 0LL;
  v14 = __ROR2__(v10[1], 8);
  if ( v14 > (unsigned int)(v9 - 4) >> 3 )
    return 0LL;
  v15 = a5;
  v16 = v10 + 2;
  v17 = a7;
  v18 = v10 + 2;
  v19 = 0LL;
  *a5 = 0LL;
  *v17 = 0;
  v20 = (unsigned __int64)&v10[4 * v14 + 2];
  v39 = v20;
  if ( __ROR2__(*v10, 8) || v14 > 0x1Eu || (unsigned __int64)v16 >= v20 )
    return 0LL;
  v21 = a6;
  do
  {
    v22 = __ROR2__(*v18, 8);
    if ( v22 == 3 )
    {
      v23 = *((_DWORD *)v18 + 1);
      *v12 = 3;
      v24 = (unsigned __int16)v18[1];
      LOWORD(v24) = __ROR2__(v24, 8);
      v25 = _byteswap_ulong(v23);
      *v11 = v24;
      if ( v25 > (unsigned __int64)(v9 - 6) )
      {
LABEL_45:
        v11 = v43;
        v12 = v42;
        goto LABEL_12;
      }
      v26 = (_WORD *)((char *)v10 + v25);
      *v15 = v26;
      v27 = (unsigned __int16)__ROR2__(*v26, 8);
      if ( v27 == 2 )
      {
        v28 = bVerifyMsftHighByteTable((_DWORD)v26, (_DWORD)v21, a8, v24, v9, v25);
      }
      else
      {
        if ( v27 != 4 )
        {
LABEL_44:
          v20 = v39;
          *v15 = 0LL;
          goto LABEL_45;
        }
        if ( (unsigned __int16)v24 < 2u || (unsigned __int16)v24 > 5u )
          v28 = bVerifyMsftTable((_DWORD)v26, (_DWORD)v21, (_DWORD)v17, a8, v24, (__int64)&v41, v9, v25, (__int64)v10);
        else
          v28 = bVerifyMsftTableGeneral((_DWORD)v26, (_DWORD)v21, a8, v24, v9, v25, (__int64)v10);
      }
      if ( v28 )
      {
        v29 = __ROR2__(v18[1], 8);
        *(_WORD *)(a8 + 8) = v29;
        if ( v29 )
        {
          if ( v29 != 1 || !*a7 )
          {
LABEL_23:
            if ( v16 < v18 )
            {
              while ( __ROR2__(*v16, 8) != 3 || __ROR2__(v16[1], 8) != *v43 )
              {
                v16 += 4;
                if ( v16 >= v18 )
                  return 1LL;
              }
              return 0LL;
            }
            return 1LL;
          }
          v36 = a2[16];
          if ( v36 )
            v8 = a1 + v36;
          v35 = a7;
          *v21 = 4;
          v32 = v8;
        }
        else
        {
          v31 = a2[16];
          if ( v31 )
            v32 = a1 + v31;
          else
            v32 = 0LL;
          v33 = 0;
          if ( v32 && (__ROR2__(*(_WORD *)(v32 + 62), 8) & 0xFF00) == 0 )
            v33 = *(_BYTE *)(v32 + 32) == 5;
          v34 = a7;
          if ( *a7 || v33 )
            *v21 = 4;
          v35 = v34;
        }
        vDetectOldBiDiFonts(v32, v41, v21, v35);
        goto LABEL_23;
      }
      LODWORD(v17) = (_DWORD)a7;
      v15 = a5;
      goto LABEL_44;
    }
    if ( v22 == 1 && !__ROR2__(v18[1], 8) && !v19 )
      v19 = v18;
LABEL_12:
    v18 += 4;
  }
  while ( (unsigned __int64)v18 < v20 );
  if ( v19 )
  {
    v37 = _byteswap_ulong(*((_DWORD *)v19 + 1));
    *v12 = 1;
    v38 = (_WORD *)((char *)v10 + v37);
    *v11 = 0;
    *v15 = v38;
    if ( v37 <= 0xFFFFFEF9 && v37 + 262 <= (unsigned int)v9 && !__ROR2__(*v38, 8) && __ROR2__(v38[1], 8) <= 0x108u )
    {
      *v21 = 2 - ((unsigned int)bCvtUnToMac(a1, a2, 1LL) != 0);
      return 1LL;
    }
    *v15 = 0LL;
  }
  return 0LL;
}
