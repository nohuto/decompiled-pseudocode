/*
 * XREFs of SymCryptMarvin32 @ 0x140082910
 * Callers:
 *     HvpGenerateLogEntry @ 0x140480044 (HvpGenerateLogEntry.c)
 *     HvpLogEntryCheckHeaderChecksum @ 0x1406030E0 (HvpLogEntryCheckHeaderChecksum.c)
 *     HvApplyLogFile @ 0x1406121E0 (HvApplyLogFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMarvin32(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, _DWORD *a4)
{
  int v4; // eax
  int v6; // r10d
  unsigned __int64 v7; // rdx
  int v8; // eax
  int v9; // r10d
  int v10; // eax
  int v11; // r10d
  int v12; // eax
  int v13; // eax
  int v14; // r10d
  int v15; // eax
  int v16; // r10d
  unsigned int v17; // edx
  unsigned int v18; // eax
  int v19; // r10d
  int v20; // eax
  int v21; // r10d
  int v22; // eax
  int v23; // r10d
  int v24; // eax
  int v25; // r10d
  __int64 result; // rax
  int v27; // eax
  int v28; // r10d
  int v29; // eax
  int v30; // r10d
  int v31; // eax
  int v32; // r10d
  int v33; // eax
  int v34; // r10d
  int v35; // eax
  int v36; // r10d
  int v37; // eax
  int v38; // r10d
  int v39; // eax
  int v40; // r10d
  int v41; // eax
  int v42; // r10d

  v4 = HvSymcryptSeed;
  v6 = dword_140329ED4;
  if ( a3 > 7 )
  {
    v7 = ((a3 - 8) >> 3) + 1;
    a3 += -8LL * v7;
    do
    {
      v8 = *(_DWORD *)a2 + v4;
      v9 = v8 ^ v6;
      v10 = v9 + __ROL4__(v8, 20);
      v11 = v10 ^ __ROL4__(v9, 9);
      v12 = *((_DWORD *)a2 + 1) + __ROL4__(v10, 27);
      a2 += 8;
      v13 = v11 + v12;
      v14 = v13 ^ __ROL4__(v11, 19);
      v15 = v14 + __ROL4__(v13, 20);
      v16 = v15 ^ __ROL4__(v14, 9);
      v4 = v16 + __ROL4__(v15, 27);
      v6 = __ROL4__(v16, 19);
      --v7;
    }
    while ( v7 );
    if ( a3 > 7 )
    {
LABEL_15:
      v39 = *(_DWORD *)a2 + v4;
      v40 = v39 ^ v6;
      v41 = v40 + __ROL4__(v39, 20);
      v42 = v41 ^ __ROL4__(v40, 9);
      v4 = v42 + __ROL4__(v41, 27);
      v6 = __ROL4__(v42, 19);
      goto LABEL_6;
    }
  }
  if ( !(_DWORD)a3 )
  {
LABEL_6:
    v17 = 128;
    goto LABEL_7;
  }
  switch ( (int)a3 )
  {
    case 1:
      goto LABEL_10;
    case 2:
      goto LABEL_12;
    case 3:
      goto LABEL_14;
    case 5:
      v27 = *(_DWORD *)a2 + v4;
      v28 = v27 ^ v6;
      v29 = v28 + __ROL4__(v27, 20);
      v30 = v29 ^ __ROL4__(v28, 9);
      v4 = v30 + __ROL4__(v29, 27);
      v6 = __ROL4__(v30, 19);
      a2 += 4;
LABEL_10:
      v17 = *a2 | 0x8000;
      break;
    case 6:
      v31 = *(_DWORD *)a2 + v4;
      v32 = v31 ^ v6;
      v33 = v32 + __ROL4__(v31, 20);
      v34 = v33 ^ __ROL4__(v32, 9);
      v4 = v34 + __ROL4__(v33, 27);
      v6 = __ROL4__(v34, 19);
      a2 += 4;
LABEL_12:
      v17 = *(unsigned __int16 *)a2 | 0x800000;
      break;
    case 7:
      v35 = *(_DWORD *)a2 + v4;
      v36 = v35 ^ v6;
      v37 = v36 + __ROL4__(v35, 20);
      v38 = v37 ^ __ROL4__(v36, 9);
      v4 = v38 + __ROL4__(v37, 27);
      v6 = __ROL4__(v38, 19);
      a2 += 4;
LABEL_14:
      v17 = *(unsigned __int16 *)a2 | (a2[2] << 16) | 0x80000000;
      break;
    default:
      goto LABEL_15;
  }
LABEL_7:
  v18 = v17 + v4;
  v19 = v18 ^ v6;
  v20 = v19 + __ROL4__(v18, 20);
  v21 = v20 ^ __ROL4__(v19, 9);
  v22 = v21 + __ROL4__(v20, 27);
  v23 = v22 ^ __ROL4__(v21, 19);
  v24 = v23 + __ROL4__(v22, 20);
  v25 = v24 ^ __ROL4__(v23, 9);
  result = (unsigned int)(v25 + __ROL4__(v24, 27));
  a4[1] = __ROL4__(v25, 19);
  *a4 = result;
  return result;
}
