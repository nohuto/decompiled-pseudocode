/*
 * XREFs of PpmParkApplyPolicy @ 0x1401443E0
 * Callers:
 *     PpmParkRegisterParking @ 0x140143D88 (PpmParkRegisterParking.c)
 *     PpmParkSetLpiCap @ 0x14020DF34 (PpmParkSetLpiCap.c)
 *     PpmRegisterPerfStates @ 0x140569AC8 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x14056A4D0 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x140676710 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406767D8 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmEventParkNodeCapChange @ 0x14020C010 (PpmEventParkNodeCapChange.c)
 */

void __fastcall PpmParkApplyPolicy(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned __int16 v4; // bx
  unsigned __int8 v5; // r14
  __int64 v6; // rcx
  unsigned int v7; // r10d
  unsigned __int8 v8; // r11
  int v9; // esi
  int v10; // edi
  int v11; // ebp
  _BYTE *v12; // r15
  unsigned int v13; // ecx
  unsigned int v14; // r12d
  unsigned __int16 v15; // dx
  int v16; // r13d
  unsigned __int8 v17; // r8
  int v18; // edx
  unsigned __int8 v19; // cl
  __int64 v20; // rcx
  char v21; // al
  unsigned int v22; // r13d
  __int64 v23; // r15
  unsigned __int8 v24; // r8
  int v25; // r12d
  unsigned __int8 v26; // r12
  int v27; // edi
  unsigned __int8 v28; // di
  unsigned __int8 v29; // cl
  unsigned __int8 v30; // cl
  char *v31; // rdi
  __int64 v32; // r8
  char v33; // cl
  unsigned __int8 v34; // cl
  unsigned __int8 v35; // al
  char v36; // al
  char v37; // cl
  char v38; // al
  char v39; // al
  char v40; // cl
  char v41; // al
  unsigned __int16 v42; // dx
  __int64 v43; // rcx
  unsigned __int8 v44; // r8
  unsigned __int8 v45; // al
  unsigned __int16 v46; // dx
  __int64 v47; // rcx
  unsigned __int8 v48; // r8
  unsigned __int8 v49; // al
  char v50; // al
  int v51; // [rsp+20h] [rbp-78h]
  unsigned int v52; // [rsp+24h] [rbp-74h]
  int v53; // [rsp+28h] [rbp-70h]
  char v54; // [rsp+2Ch] [rbp-6Ch]
  char v55; // [rsp+30h] [rbp-68h]
  int v56; // [rsp+34h] [rbp-64h]
  _BYTE *v57; // [rsp+38h] [rbp-60h]
  char v58; // [rsp+A0h] [rbp+8h]
  __int16 v59; // [rsp+A8h] [rbp+10h] BYREF
  __int16 v60; // [rsp+B0h] [rbp+18h]
  unsigned __int16 v61; // [rsp+B8h] [rbp+20h]

  v4 = 0;
  if ( PpmParkNodes )
  {
    v5 = 64;
    v6 = 174LL * dword_140303D4C;
    v60 = PpmCurrentProfile[v6 + 16];
    v59 = WORD1(PpmCurrentProfile[v6 + 16]);
    if ( (((unsigned __int64)qword_1402F87C8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F)) & 1) == 0 )
    {
      v33 = PpmParkInitialClass1UnParkCount;
      if ( (unsigned int)PpmParkInitialClass1UnParkCount > 0x40 )
        v33 = 64;
      HIBYTE(v60) = 0;
      v5 = v33;
    }
    v7 = PpmParkNumNodes;
    v8 = PpmParkGranularity;
    v9 = PpmParkLpiCap;
    v10 = (unsigned __int8)PpmParkGranularity;
    v11 = PpmParkThermalCap;
    v12 = PpmParkNodes;
    v52 = PpmParkNumNodes;
    v61 = 0;
    v57 = PpmParkNodes;
    v13 = PpmParkLpiCap / (unsigned int)PpmParkNumNodes
        - PpmParkLpiCap / (unsigned int)PpmParkNumNodes % (unsigned __int8)PpmParkGranularity;
    v55 = v13;
    v14 = PpmParkThermalCap / (unsigned int)PpmParkNumNodes
        - PpmParkThermalCap / (unsigned int)PpmParkNumNodes % (unsigned __int8)PpmParkGranularity;
    v15 = 0;
    v54 = v14;
    if ( PpmParkNumNodes )
    {
      v16 = (unsigned __int8)v14;
      v51 = (unsigned __int8)v13;
      v56 = (unsigned __int8)v14;
      do
      {
        a4 = &v12[120 * v15];
        v17 = a4[6];
        v18 = v17 - v10;
        if ( v51 > v18 )
          LOBYTE(v13) = v17 - v8;
        v9 -= (unsigned __int8)v13;
        a4[102] = v13;
        v19 = v14;
        if ( v16 > v18 )
          v19 = v17 - v8;
        a4[104] = v19;
        v53 = v11 - v19;
        v20 = a4 - (_BYTE *)&v59;
        v58 = 0;
        v21 = 0;
        v22 = 0;
        v23 = 0LL;
        do
        {
          v24 = *((_BYTE *)&v59 + v23 + v20 + 96);
          if ( v24 )
          {
            v25 = (v24 * *((unsigned __int8 *)&v59 + v23) + 50) / 100;
            v26 = (v24 - (unsigned __int8)v25) % v8 + v25;
            v27 = (v24 * *((unsigned __int8 *)&v60 + v23) + 50) / 100;
            v28 = (v24 - (unsigned __int8)v27) % v8 + v27;
            if ( v22 )
            {
              v34 = v26;
              if ( v26 >= v5 )
                v34 = v5;
              v26 = v34;
            }
            if ( v28 )
            {
              v29 = v28;
              if ( v8 > v28 )
                v29 = v8;
              v28 = v29;
            }
            v30 = v26;
            if ( v26 < v28 )
              v30 = v28;
            a4[v23 + 98] = v28;
            v21 = v28 + v58;
            a4[v23 + 100] = v30;
            v20 = a4 - (_BYTE *)&v59;
            v58 += v28;
          }
          ++v22;
          ++v23;
        }
        while ( v22 < 2 );
        v7 = v52;
        v11 = v53;
        if ( !v21 )
        {
          v35 = a4[100];
          a4[98] = v8;
          if ( v8 > v35 )
            v35 = v8;
          a4[100] = v35;
        }
        if ( PpmHeteroPolicy == 2 )
        {
          v36 = a4[98];
          a4[107] = 0;
          v37 = v36;
          if ( (unsigned __int8)v36 <= 1u )
            v37 = 1;
          v38 = a4[100];
          a4[98] = v37;
          if ( (unsigned __int8)v38 <= 1u )
            v38 = 1;
          a4[100] = v38;
          a4[99] = 0;
          a4[101] = 0;
          a4[114] |= 4u;
        }
        else if ( PpmHeteroPolicy == 3 && a4[97] )
        {
          v39 = a4[99];
          a4[106] = 0;
          a4[98] = 0;
          a4[100] = 0;
          v40 = v39;
          if ( (unsigned __int8)v39 <= 1u )
            v40 = 1;
          v41 = a4[101];
          a4[99] = v40;
          if ( (unsigned __int8)v41 <= 1u )
            v41 = 1;
          a4[101] = v41;
          a4[114] |= 2u;
        }
        v12 = v57;
        v15 = v61 + 1;
        LOBYTE(v14) = v54;
        LOBYTE(v13) = v55;
        v16 = v56;
        ++v61;
        v10 = v8;
      }
      while ( v61 < v52 );
    }
    do
    {
LABEL_24:
      if ( !v9 )
        goto LABEL_25;
      v42 = 0;
    }
    while ( !v7 );
    while ( v9 )
    {
      v43 = 120LL * v42;
      v44 = v12[v43 + 6];
      if ( v44 )
      {
        v45 = v8 + v12[v43 + 102];
        if ( v45 < v44 )
        {
          v12[v43 + 102] = v45;
          v9 -= v10;
        }
      }
      if ( ++v42 >= v7 )
        goto LABEL_24;
    }
LABEL_25:
    while ( v11 )
    {
      v46 = 0;
      if ( v7 )
      {
        while ( v11 )
        {
          v47 = 120LL * v46;
          v48 = v12[v47 + 6];
          if ( v48 )
          {
            v49 = v8 + v12[v47 + 104];
            if ( v49 < v48 )
            {
              v12[v47 + 104] = v49;
              v11 -= v10;
            }
          }
          if ( ++v46 >= v7 )
            goto LABEL_25;
        }
        break;
      }
    }
    if ( v7 )
    {
      do
      {
        v31 = &v12[120 * v4];
        v32 = (unsigned __int8)v31[102];
        if ( (unsigned __int8)v31[103] != (unsigned __int8)v31[6] - (_DWORD)v32
          || (unsigned __int8)v31[105] != (unsigned __int8)v31[6] - (unsigned __int8)v31[104] )
        {
          LOBYTE(a4) = v31[104];
          PpmEventParkNodeCapChange(*((unsigned __int16 *)v31 + 2), *((_QWORD *)v31 + 1), v32, a4);
          v12 = PpmParkNodes;
          v50 = v31[6] - v31[102];
          v7 = PpmParkNumNodes;
          v31[105] = v31[6] - v31[104];
          v31[103] = v50;
        }
        ++v4;
      }
      while ( v4 < v7 );
    }
  }
}
