/*
 * XREFs of PpmParkApplyPolicy @ 0x1401394A8
 * Callers:
 *     PpmParkRegisterParking @ 0x140138DFC (PpmParkRegisterParking.c)
 *     PpmParkSetLpiCap @ 0x1401F4644 (PpmParkSetLpiCap.c)
 *     PpmRegisterPerfStates @ 0x140536740 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140537218 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x14063DEB8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14063DF80 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmEventParkNodeCapChange @ 0x1401F20A4 (PpmEventParkNodeCapChange.c)
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
  unsigned __int8 v16; // r8
  int v17; // edx
  unsigned __int8 v18; // cl
  __int64 v19; // rcx
  char v20; // al
  unsigned int v21; // r13d
  __int64 v22; // r15
  unsigned __int8 v23; // r8
  int v24; // r12d
  unsigned __int8 v25; // r12
  int v26; // edi
  unsigned __int8 v27; // di
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // cl
  char *v30; // rdi
  __int64 v31; // r8
  char v32; // cl
  unsigned __int8 v33; // cl
  unsigned __int8 v34; // al
  char v35; // al
  char v36; // cl
  char v37; // al
  char v38; // al
  char v39; // cl
  char v40; // al
  unsigned __int16 v41; // dx
  __int64 v42; // rcx
  unsigned __int8 v43; // r8
  unsigned __int8 v44; // al
  unsigned __int16 v45; // dx
  __int64 v46; // rcx
  unsigned __int8 v47; // r8
  unsigned __int8 v48; // al
  char v49; // al
  int v50; // [rsp+20h] [rbp-78h]
  int v51; // [rsp+24h] [rbp-74h]
  char v52; // [rsp+28h] [rbp-70h]
  unsigned int v53; // [rsp+2Ch] [rbp-6Ch]
  char v54; // [rsp+30h] [rbp-68h]
  int v55; // [rsp+34h] [rbp-64h]
  int v56; // [rsp+38h] [rbp-60h]
  _BYTE *v57; // [rsp+40h] [rbp-58h]
  char v58; // [rsp+A0h] [rbp+8h]
  __int16 v59; // [rsp+A8h] [rbp+10h] BYREF
  __int16 v60; // [rsp+B0h] [rbp+18h]
  unsigned __int16 v61; // [rsp+B8h] [rbp+20h]

  v4 = 0;
  if ( PpmParkNodes )
  {
    v5 = 64;
    v6 = 174LL * dword_1402DE28C;
    v60 = PpmCurrentProfile[v6 + 16];
    v59 = WORD1(PpmCurrentProfile[v6 + 16]);
    if ( (((unsigned __int64)qword_1402D1748[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F)) & 1) == 0 )
    {
      v32 = PpmParkInitialClass1UnParkCount;
      if ( (unsigned int)PpmParkInitialClass1UnParkCount > 0x40 )
        v32 = 64;
      HIBYTE(v60) = 0;
      v5 = v32;
    }
    v7 = PpmParkNumNodes;
    v8 = PpmParkGranularity;
    v9 = PpmParkLpiCap;
    v10 = (unsigned __int8)PpmParkGranularity;
    v11 = PpmParkThermalCap;
    v12 = PpmParkNodes;
    v53 = PpmParkNumNodes;
    v61 = 0;
    v57 = PpmParkNodes;
    v13 = PpmParkLpiCap / (unsigned int)PpmParkNumNodes
        - PpmParkLpiCap / (unsigned int)PpmParkNumNodes % (unsigned __int8)PpmParkGranularity;
    v54 = v13;
    v14 = PpmParkThermalCap / (unsigned int)PpmParkNumNodes
        - PpmParkThermalCap / (unsigned int)PpmParkNumNodes % (unsigned __int8)PpmParkGranularity;
    v15 = 0;
    v52 = v14;
    if ( PpmParkNumNodes )
    {
      v51 = (unsigned __int8)v13;
      v55 = (unsigned __int8)v14;
      v50 = PpmHeteroPolicy;
      do
      {
        a4 = &v12[120 * v15];
        v16 = a4[6];
        v17 = v16 - v10;
        if ( v51 > v17 )
          LOBYTE(v13) = v16 - v8;
        v9 -= (unsigned __int8)v13;
        a4[102] = v13;
        v18 = v14;
        if ( v55 > v17 )
          v18 = v16 - v8;
        a4[104] = v18;
        v56 = v11 - v18;
        v19 = a4 - (_BYTE *)&v59;
        v58 = 0;
        v20 = 0;
        v21 = 0;
        v22 = 0LL;
        do
        {
          v23 = *((_BYTE *)&v59 + v22 + v19 + 96);
          if ( v23 )
          {
            v24 = (v23 * *((unsigned __int8 *)&v59 + v22) + 50) / 100;
            v25 = (v23 - (unsigned __int8)v24) % v8 + v24;
            v26 = (v23 * *((unsigned __int8 *)&v60 + v22) + 50) / 100;
            v27 = (v23 - (unsigned __int8)v26) % v8 + v26;
            if ( v21 )
            {
              v33 = v25;
              if ( v25 >= v5 )
                v33 = v5;
              v25 = v33;
            }
            if ( v27 )
            {
              v28 = v27;
              if ( v8 > v27 )
                v28 = v8;
              v27 = v28;
            }
            v29 = v25;
            if ( v25 < v27 )
              v29 = v27;
            a4[v22 + 98] = v27;
            v20 = v27 + v58;
            a4[v22 + 100] = v29;
            v19 = a4 - (_BYTE *)&v59;
            v58 += v27;
          }
          ++v21;
          ++v22;
        }
        while ( v21 < 2 );
        v7 = v53;
        v11 = v56;
        if ( !v20 )
        {
          v34 = a4[100];
          a4[98] = v8;
          if ( v8 > v34 )
            v34 = v8;
          a4[100] = v34;
        }
        if ( v50 == 2 )
        {
          v35 = a4[98];
          a4[107] = 0;
          v36 = v35;
          if ( (unsigned __int8)v35 <= 1u )
            v36 = 1;
          v37 = a4[100];
          a4[98] = v36;
          if ( (unsigned __int8)v37 <= 1u )
            v37 = 1;
          a4[100] = v37;
          a4[99] = 0;
          a4[101] = 0;
          a4[114] |= 4u;
        }
        else if ( v50 == 3 && a4[97] )
        {
          v38 = a4[99];
          a4[106] = 0;
          a4[98] = 0;
          a4[100] = 0;
          v39 = v38;
          if ( (unsigned __int8)v38 <= 1u )
            v39 = 1;
          v40 = a4[101];
          a4[99] = v39;
          if ( (unsigned __int8)v40 <= 1u )
            v40 = 1;
          a4[101] = v40;
          a4[114] |= 2u;
        }
        v12 = v57;
        v15 = v61 + 1;
        LOBYTE(v14) = v52;
        LOBYTE(v13) = v54;
        ++v61;
        v10 = v8;
      }
      while ( v61 < v53 );
    }
    do
    {
LABEL_24:
      if ( !v9 )
        goto LABEL_25;
      v41 = 0;
    }
    while ( !v7 );
    while ( v9 )
    {
      v42 = 120LL * v41;
      v43 = v12[v42 + 6];
      if ( v43 )
      {
        v44 = v8 + v12[v42 + 102];
        if ( v44 < v43 )
        {
          v12[v42 + 102] = v44;
          v9 -= v10;
        }
      }
      if ( ++v41 >= v7 )
        goto LABEL_24;
    }
LABEL_25:
    while ( v11 )
    {
      v45 = 0;
      if ( v7 )
      {
        while ( v11 )
        {
          v46 = 120LL * v45;
          v47 = v12[v46 + 6];
          if ( v47 )
          {
            v48 = v8 + v12[v46 + 104];
            if ( v48 < v47 )
            {
              v12[v46 + 104] = v48;
              v11 -= v10;
            }
          }
          if ( ++v45 >= v7 )
            goto LABEL_25;
        }
        break;
      }
    }
    if ( v7 )
    {
      do
      {
        v30 = &v12[120 * v4];
        v31 = (unsigned __int8)v30[102];
        if ( (unsigned __int8)v30[103] != (unsigned __int8)v30[6] - (_DWORD)v31
          || (unsigned __int8)v30[105] != (unsigned __int8)v30[6] - (unsigned __int8)v30[104] )
        {
          LOBYTE(a4) = v30[104];
          PpmEventParkNodeCapChange(*((unsigned __int16 *)v30 + 2), *((_QWORD *)v30 + 1), v31, a4);
          v12 = PpmParkNodes;
          v49 = v30[6] - v30[102];
          v7 = PpmParkNumNodes;
          v30[105] = v30[6] - v30[104];
          v30[103] = v49;
        }
        ++v4;
      }
      while ( v4 < v7 );
    }
  }
}
