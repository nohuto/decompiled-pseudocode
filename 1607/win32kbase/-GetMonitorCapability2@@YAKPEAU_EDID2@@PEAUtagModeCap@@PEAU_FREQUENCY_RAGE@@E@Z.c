/*
 * XREFs of ?GetMonitorCapability2@@YAKPEAU_EDID2@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C00C76CC
 * Callers:
 *     ?GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C005E3B8 (-GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 * Callees:
 *     ?InsertModecapList@@YAKPEAUtagModeCap@@0K@Z @ 0x1C005E900 (-InsertModecapList@@YAKPEAUtagModeCap@@0K@Z.c)
 */

__int64 __fastcall GetMonitorCapability2(struct _EDID2 *a1, struct tagModeCap *a2, struct _FREQUENCY_RAGE *a3, char a4)
{
  unsigned int v4; // r12d
  unsigned int v6; // r10d
  unsigned int v7; // r8d
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  struct tagModeCap *v11; // r11
  struct _EDID2 *v12; // r9
  unsigned int v13; // r15d
  unsigned int v14; // edx
  unsigned __int8 *v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  unsigned int v18; // r9d
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned __int8 v21; // r8
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int inserted; // r9d
  char *v28; // r11
  char v29; // cl
  int v30; // r8d
  int v31; // edx
  int v32; // r10d
  char v33; // al
  unsigned int v34; // edx
  unsigned int v35; // r12d
  _BYTE *v36; // r8
  unsigned int v37; // ecx
  unsigned int v38; // eax
  bool v39; // zf
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // r12d
  unsigned __int8 *v43; // r10
  unsigned __int8 v44; // r8
  int v45; // edx
  int v46; // r11d
  int v47; // eax
  int v48; // r11d
  int v49; // r8d
  char v50; // al
  unsigned int v51; // edx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned int v55; // eax
  __int64 result; // rax
  int v57; // eax
  int v58; // [rsp+20h] [rbp-30h]
  int v59; // [rsp+20h] [rbp-30h]
  unsigned int v60; // [rsp+24h] [rbp-2Ch]
  unsigned int v61; // [rsp+28h] [rbp-28h]
  int v62; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v63; // [rsp+34h] [rbp-1Ch]
  unsigned int v64; // [rsp+38h] [rbp-18h]
  int v65; // [rsp+3Ch] [rbp-14h]
  int v66; // [rsp+40h] [rbp-10h]
  int v67; // [rsp+44h] [rbp-Ch]

  v4 = *((unsigned __int8 *)a1 + 126);
  v6 = *((unsigned __int8 *)a1 + 127) >> 3;
  v7 = (v4 >> 5) & 1;
  v60 = v6;
  v8 = (v4 >> 2) & 7;
  v61 = *((_BYTE *)a1 + 127) & 7;
  v9 = v4 & 3;
  v11 = a2;
  v12 = a1;
  if ( v6 > 0x1F )
  {
    v57 = -(a4 != 0);
    goto LABEL_62;
  }
  v13 = 128;
  if ( v7 )
  {
    v14 = 0;
    while ( v13 < 0xFF )
    {
      ++v14;
      v13 += ((*((unsigned __int8 *)a1 + v13) | 0x40u) >> 6) * (*((_BYTE *)a1 + v13) & 0x1F) + 1;
      if ( v14 >= v7 )
        goto LABEL_6;
    }
    v57 = -(a4 != 0);
    goto LABEL_62;
  }
LABEL_6:
  if ( v8 )
  {
    *(_DWORD *)a3 = -1;
    *((_DWORD *)a3 + 1) = 0;
    *((_DWORD *)a3 + 2) = -1;
    *((_DWORD *)a3 + 3) = 0;
    *((_DWORD *)a3 + 4) = -1;
    *((_DWORD *)a3 + 5) = 0;
    v58 = 0;
    while ( v13 < 0xF8 )
    {
      v15 = (unsigned __int8 *)v12 + v13;
      v16 = v15[4];
      v17 = (v16 >> 6) + 4 * *v15;
      if ( v17 < *(_DWORD *)a3 )
        *(_DWORD *)a3 = v17;
      v18 = ((v16 >> 4) & 3) + 4 * v15[1];
      if ( v18 > *((_DWORD *)a3 + 1) )
        *((_DWORD *)a3 + 1) = v18;
      v19 = 1000 * (((v16 >> 2) & 3) + 4 * v15[2]);
      if ( v19 < *((_DWORD *)a3 + 2) )
        *((_DWORD *)a3 + 2) = v19;
      v20 = 1000 * ((v16 & 3) + 4 * v15[3]);
      if ( v20 > *((_DWORD *)a3 + 3) )
        *((_DWORD *)a3 + 3) = v20;
      v21 = v15[7];
      v22 = 1000000 * (v15[5] + 16 * (v21 & 0xF0));
      if ( v22 < *((_DWORD *)a3 + 4) )
        *((_DWORD *)a3 + 4) = v22;
      v23 = 1000000 * (v15[6] + ((v21 & 0xF) << 8));
      if ( v23 > *((_DWORD *)a3 + 5) )
        *((_DWORD *)a3 + 5) = v23;
      v24 = *((_DWORD *)a3 + 1);
      if ( *(_DWORD *)a3 > v24
        || (v25 = *((_DWORD *)a3 + 3), *((_DWORD *)a3 + 2) > v25)
        || (v26 = *((_DWORD *)a3 + 5), *((_DWORD *)a3 + 4) > v26)
        || v24 < 0x3C
        || v25 < 0x7080
        || v26 < 0x1194000 )
      {
        *((_DWORD *)a3 + 1) = -1;
        *((_DWORD *)a3 + 2) = 0;
        *((_DWORD *)a3 + 3) = -1;
        *((_DWORD *)a3 + 4) = 0;
        *((_DWORD *)a3 + 5) = -1;
        *(_DWORD *)a3 = a4 == 0 ? 0x38 : 0;
      }
      v13 += 8;
      v12 = a1;
      if ( ++v58 >= v8 )
        goto LABEL_29;
    }
    goto LABEL_60;
  }
LABEL_29:
  inserted = 0;
  if ( v9 )
  {
    v66 = 0;
    v67 = -1;
    v59 = 0;
    v65 = a4 == 0 ? 0x38 : 0;
    while ( v13 < 0xE5 )
    {
      v28 = (char *)a1 + v13;
      v29 = v28[13];
      v30 = (unsigned __int8)v28[22] + ((v28[23] & 0xF) << 8);
      v62 = (unsigned __int8)v28[21] + 16 * (v28[23] & 0xF0);
      v63 = v30;
      v31 = (unsigned __int8)v28[11] + 16 * (v29 & 0xF0) + v62;
      v32 = v30 + ((v29 & 0xF) << 8) + (unsigned __int8)v28[12];
      if ( !v31 || !v32 )
        break;
      v33 = v28[26];
      v34 = (100000 * (unsigned int)*(unsigned __int16 *)(v28 + 9) / (v31 * v32) + 5) / 0xA;
      v64 = v34;
      if ( v33 < 0 )
        v64 = v34 >> 1;
      inserted = InsertModecapList((struct tagModeCap *)&v62, a2, inserted);
      v13 += 27;
      if ( ++v59 >= v9 )
      {
        v6 = v60;
        v11 = a2;
        goto LABEL_38;
      }
    }
    goto LABEL_60;
  }
LABEL_38:
  if ( v6 )
  {
    v66 = 0;
    v67 = -1;
    v35 = 0;
    v65 = a4 == 0 ? 0x38 : 0;
    while ( v13 < 0xFC )
    {
      v36 = (char *)a1 + v13;
      v37 = (unsigned __int8)v36[2];
      v62 = 16 * ((unsigned __int8)*v36 + 16);
      v38 = 100 * v62 / v37;
      v39 = (v36[1] & 0x40) == 0;
      v40 = (unsigned __int8)v36[3];
      v63 = v38;
      v64 = v40;
      if ( !v39 )
        v64 = v40 >> 1;
      v41 = InsertModecapList((struct tagModeCap *)&v62, v11, inserted);
      v11 = a2;
      ++v35;
      v13 += 4;
      inserted = v41;
      if ( v35 >= v60 )
        goto LABEL_44;
    }
    goto LABEL_60;
  }
LABEL_44:
  if ( v61 )
  {
    v66 = 0;
    v67 = -1;
    v42 = 0;
    v65 = a4 == 0 ? 0x38 : 0;
    while ( v13 < 0xEE )
    {
      v43 = (unsigned __int8 *)a1 + v13;
      v44 = v43[7];
      v45 = v43[5];
      v46 = (v43[4] & 0xF) << 8;
      v62 = 16 * (v43[4] & 0xF0) + v43[2];
      v47 = v62 + v43[3];
      v63 = 16 * (v44 & 0xF0) + v45;
      v48 = v47 + v46;
      v49 = v63 + v43[6] + ((v44 & 0xF) << 8);
      if ( !v48 || !v49 )
        break;
      v50 = v43[17];
      v51 = (100000 * (unsigned int)*(unsigned __int16 *)v43 / (v48 * v49) + 5) / 0xA;
      v64 = v51;
      if ( v50 < 0 )
        v64 = v51 >> 1;
      ++v42;
      v13 += 18;
      inserted = InsertModecapList((struct tagModeCap *)&v62, a2, inserted);
      if ( v42 >= v61 )
        goto LABEL_52;
    }
LABEL_60:
    v57 = -(a4 != 0);
LABEL_62:
    *((_DWORD *)a3 + 5) = -1;
    *((_DWORD *)a3 + 4) = 0;
    *(_DWORD *)a3 = ~(_BYTE)v57 & 0x38;
    result = 0LL;
    *((_DWORD *)a3 + 3) = -1;
    *(_QWORD *)((char *)a3 + 4) = 0xFFFFFFFFLL;
    return result;
  }
LABEL_52:
  if ( !v8 )
  {
    *((_DWORD *)a3 + 1) = -1;
    *((_DWORD *)a3 + 2) = 0;
    *((_DWORD *)a3 + 3) = -1;
    *((_DWORD *)a3 + 4) = 0;
    *((_DWORD *)a3 + 5) = -1;
    *(_DWORD *)a3 = a4 == 0 ? 0x38 : 0;
  }
  LODWORD(v52) = inserted;
  if ( inserted > 1 )
  {
    do
    {
      v53 = (unsigned int)(v52 - 2);
      v52 = (unsigned int)(v52 - 1);
      v54 = 3 * v53;
      v55 = *((_DWORD *)a2 + 6 * v52 + 2);
      if ( *((_DWORD *)a2 + 2 * v54 + 2) < v55 )
        *((_DWORD *)a2 + 2 * v54 + 2) = v55;
    }
    while ( (unsigned int)v52 > 1 );
  }
  return inserted;
}
