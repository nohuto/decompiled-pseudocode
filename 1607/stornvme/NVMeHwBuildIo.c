/*
 * XREFs of NVMeHwBuildIo @ 0x1C0001000
 * Callers:
 *     <none>
 * Callees:
 *     NVMeSplitIoCommand @ 0x1C0001C40 (NVMeSplitIoCommand.c)
 *     ScsiReadCapacityRequest @ 0x1C0001D38 (ScsiReadCapacityRequest.c)
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 *     GetNamespaceId @ 0x1C0004770 (GetNamespaceId.c)
 *     IoctlToNVMe @ 0x1C0009BF0 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C000AD38 (ProtocolCommandToNVMe.c)
 *     ScsiInquiryRequest @ 0x1C000B970 (ScsiInquiryRequest.c)
 *     ScsiLogSenseRequest @ 0x1C000BA5C (ScsiLogSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C000BAE8 (ScsiModeSelectRequest.c)
 *     ScsiModeSenseRequest @ 0x1C000BC30 (ScsiModeSenseRequest.c)
 *     ScsiReportLunsCommand @ 0x1C000BDB4 (ScsiReportLunsCommand.c)
 *     ScsiSanitizeRequest @ 0x1C000BE7C (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C000C014 (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C000C13C (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C000C264 (ScsiStartStopUnitRequest.c)
 *     ScsiSyncCacheRequest @ 0x1C000C30C (ScsiSyncCacheRequest.c)
 *     ScsiUnmapRequest @ 0x1C000C394 (ScsiUnmapRequest.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

char __fastcall NVMeHwBuildIo(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r11
  __int64 v10; // rcx
  unsigned __int8 v11; // r10
  int v12; // eax
  unsigned int v13; // edi
  unsigned __int8 *v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // r12
  __int64 v19; // rcx
  bool v20; // zf
  __int64 v21; // r14
  __int64 v22; // r12
  unsigned int *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // r15
  __int16 v28; // ax
  unsigned int v29; // ecx
  unsigned int v30; // r8d
  __int64 v31; // rdi
  unsigned int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rdx
  int NamespaceId; // eax
  unsigned int v36; // r9d
  _DWORD *v37; // r8
  __int64 v38; // rdx
  unsigned int v39; // r8d
  unsigned __int8 v40; // al
  int v41; // eax
  int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // eax
  int v45; // edx
  __int64 v46; // r8
  __int64 v47; // rax
  char v48; // si
  unsigned int v49; // r15d
  __int64 v50; // r14
  _QWORD *v51; // r10
  _QWORD *v52; // rdi
  unsigned int v53; // r11d
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // edx
  _QWORD *v60; // rax
  __int64 v61; // rcx
  int v62; // eax
  __int64 PhysicalAddress; // rax
  __int64 SrbDataBuffer; // rax
  int v65; // eax
  char v66; // cl
  unsigned int v68; // [rsp+30h] [rbp-49h]
  int v69; // [rsp+38h] [rbp-41h]
  int v70; // [rsp+3Ch] [rbp-3Dh]
  unsigned __int16 v71; // [rsp+4Ch] [rbp-2Dh] BYREF
  unsigned int v72; // [rsp+50h] [rbp-29h]
  int v73; // [rsp+54h] [rbp-25h]
  int v74; // [rsp+58h] [rbp-21h]
  int v75; // [rsp+5Ch] [rbp-1Dh]
  __int64 v76; // [rsp+60h] [rbp-19h]
  _DWORD *v77; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v78[2]; // [rsp+70h] [rbp-9h] BYREF
  int v79; // [rsp+80h] [rbp+7h]
  __int64 v80; // [rsp+84h] [rbp+Bh]
  _DWORD v81[9]; // [rsp+8Ch] [rbp+13h] BYREF

  v5 = a2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(_QWORD *)(a2 + 104);
  else
    v7 = *(_QWORD *)(a2 + 56);
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - (v7 & 0xFFF) + 4096;
  v8 = (_QWORD *)(v7 + 4096);
  LODWORD(v9) = 0;
  v10 = 2LL;
  do
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
    v8 += 8;
    *(v8 - 5) = 0LL;
    *(v8 - 4) = 0LL;
    *(v8 - 3) = 0LL;
    *(v8 - 2) = 0LL;
    *(v8 - 1) = 0LL;
    --v10;
  }
  while ( v10 );
  *v8 = 0LL;
  v8[1] = 0LL;
  v8[2] = 0LL;
  v11 = *(_BYTE *)(a2 + 2);
  if ( v11 == 40 )
    v12 = *(_DWORD *)(a2 + 20);
  else
    v12 = v11;
  *(_QWORD *)&v81[7] = v4;
  switch ( v12 )
  {
    case 0:
      if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
        goto LABEL_13;
      LOBYTE(a3) = 0;
      v13 = 0;
      v14 = 0LL;
      if ( v11 == 40 && !*(_DWORD *)(a2 + 20) )
      {
        v15 = *(_DWORD *)(a2 + 56);
        if ( v15 )
        {
          a4 = (unsigned int *)(a2 + 120);
          v9 = v15;
          do
          {
            v16 = *a4;
            if ( (unsigned int)v16 >= 0x80 && (unsigned int)v16 <= *(_DWORD *)(v5 + 16) )
            {
              v17 = v5 + v16;
              a2 = (unsigned int)(*(_DWORD *)(v5 + v16) - 64);
              if ( *(_DWORD *)(v5 + v16) == 64
                || (a2 = (unsigned int)(*(_DWORD *)(v5 + v16) - 65), *(_DWORD *)(v5 + v16) == 65) )
              {
                v13 = *(unsigned __int8 *)(v17 + 10);
                LOBYTE(a3) = 1;
                if ( (_BYTE)v13 )
                  v14 = (unsigned __int8 *)(v17 + 24);
              }
              else if ( *(_DWORD *)(v5 + v16) == 66 )
              {
                v13 = *(_DWORD *)(v17 + 12);
                a3 = 1LL;
                if ( v13 )
                  v14 = (unsigned __int8 *)(v17 + 32);
              }
            }
            ++a4;
            --v9;
          }
          while ( v9 );
        }
      }
      if ( v11 )
      {
        if ( !(_BYTE)a3 )
          v13 = v9;
        v72 = v13;
      }
      else
      {
        v13 = *(unsigned __int8 *)(v5 + 10);
        v72 = v13;
        if ( (_BYTE)v13 )
          v14 = (unsigned __int8 *)(v5 + 72);
      }
      v18 = 0;
      v19 = v11 == 40 ? *(unsigned __int8 *)(*(unsigned int *)(v5 + 52) + v5 + 10) : *(unsigned __int8 *)(v5 + 7);
      v20 = *(_QWORD *)(a1 + 8 * v19 + 1184) == 0LL;
      v74 = v19;
      if ( v20 || v13 < 6 || !v14 )
        goto LABEL_13;
      switch ( *v14 )
      {
        case 0u:
        case 0x2Fu:
        case 0x8Fu:
          *(_BYTE *)(v5 + 3) = 1;
          goto LABEL_104;
        case 0x12u:
          ScsiInquiryRequest(a1, v5, v14);
          goto LABEL_104;
        case 0x15u:
        case 0x55u:
          ScsiModeSelectRequest(a1, v5, v14);
          goto LABEL_104;
        case 0x1Au:
        case 0x5Au:
          ScsiModeSenseRequest(a1, v5, v14);
          goto LABEL_104;
        case 0x1Bu:
          ScsiStartStopUnitRequest(a1, v5, v14);
          goto LABEL_104;
        case 0x25u:
        case 0x9Eu:
          ScsiReadCapacityRequest(a1, v5, v14, v13);
          goto LABEL_104;
        case 0x28u:
        case 0x2Au:
        case 0x88u:
        case 0x8Au:
          if ( v11 == 40 )
            v21 = *(_QWORD *)(v5 + 104);
          else
            v21 = *(_QWORD *)(v5 + 56);
          if ( (v21 & 0xFFF) != 0 )
            v21 = v21 - (v21 & 0xFFF) + 4096;
          if ( v11 == 40 )
            v22 = *(unsigned __int8 *)(*(unsigned int *)(v5 + 52) + v5 + 10);
          else
            v22 = *(unsigned __int8 *)(v5 + 7);
          v73 = v22;
          v23 = (unsigned int *)(v5 + 60);
          if ( v11 != 40 )
            v23 = (unsigned int *)(v5 + 16);
          v24 = *(_QWORD *)(a1 + 8 * v22 + 1184);
          v78[1] = v23;
          v25 = *(unsigned int *)(v24 + 52);
          v75 = v25;
          if ( !(_DWORD)v25
            || !*(_QWORD *)(v24 + 56)
            || (v11 != 40 ? (v26 = *(_DWORD *)(v5 + 12)) : (v26 = *(_DWORD *)(v5 + 24)),
                (v26 & 0xC0) == 0 || (v24 = *v23, !(_DWORD)v24) || (((_DWORD)v25 - 1) & (unsigned int)v24) != 0) )
          {
            LOBYTE(v25) = 36;
            LOBYTE(v24) = 6;
            NVMeSetSenseData(v5, v24, a3, v25);
            v18 = 0;
            goto LABEL_104;
          }
          *(_BYTE *)(v21 + 4245) = *(_BYTE *)(v21 + 4245) & 0xFC | 2;
          if ( *(_BYTE *)(v5 + 2) == 40 )
            v27 = *(_QWORD *)(v5 + 104);
          else
            v27 = *(_QWORD *)(v5 + 56);
          if ( (v27 & 0xFFF) != 0 )
            v27 = v27 - (v27 & 0xFFF) + 4096;
          if ( (*(_BYTE *)(v27 + 4245) & 1) != 0 )
          {
            v28 = *(_WORD *)(a1 + 280);
          }
          else if ( *(_BYTE *)(a1 + 16) )
          {
            v28 = *(_WORD *)(*(_QWORD *)(a1 + 544) + 40LL);
          }
          else
          {
            v68 = v9;
            *(_QWORD *)v81 = 0LL;
            v80 = 20LL;
            v79 = 2;
            StorPortExtendedFunction(15LL, a1, v5);
            v71 = 0;
            StorPortExtendedFunction(56LL, a1, &v81[1]);
            v29 = *(unsigned __int16 *)(a1 + 162);
            v30 = v68;
            if ( v68 >= v29 )
            {
              v30 = v68 % v29;
              v68 %= v29;
            }
            if ( !*(_QWORD *)(32LL * v30 + *(_QWORD *)(a1 + 192) + 24) )
            {
              v31 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 24LL * v71 + 16);
              LODWORD(v22) = v73;
              v32 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 112), 1u)
                  % *(_DWORD *)(v31 + 108);
              v33 = *(_QWORD *)(v31 + 120);
              v13 = v72;
              v34 = *(_QWORD *)(v33 + 8LL * v32);
              *(_QWORD *)(32LL * v30 + *(_QWORD *)(a1 + 192) + 24) = v34;
              ++*(_WORD *)(v34 + 52);
              v30 = v68;
            }
            v28 = *(_WORD *)(*(_QWORD *)(32LL * v30 + *(_QWORD *)(a1 + 192) + 24) + 40LL);
          }
          *(_WORD *)(v27 + 4236) = v28;
          NamespaceId = GetNamespaceId(a1, (unsigned int)v22);
          v37 = (_DWORD *)(v5 + 60);
          if ( *(_BYTE *)(v5 + 2) == 40 )
          {
            v38 = *(unsigned __int8 *)(*(unsigned int *)(v5 + 52) + v5 + 10);
          }
          else
          {
            v38 = *(unsigned __int8 *)(v5 + 7);
            v37 = (_DWORD *)(v5 + 16);
          }
          switch ( *v14 )
          {
            case 0x28u:
              goto LABEL_87;
            case 0x2Au:
              goto LABEL_85;
            case 0x88u:
LABEL_87:
              *(_BYTE *)(v21 + 4096) = 2;
              break;
            case 0x8Au:
LABEL_85:
              *(_BYTE *)(v21 + 4096) = 1;
              break;
          }
          *(_DWORD *)(v21 + 4096) &= 0xFFFFFCFF;
          *(_DWORD *)(v21 + 4100) = NamespaceId;
          *(_QWORD *)(v21 + 4112) = 0LL;
          v39 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 8 * v38 + 1184) + 52LL) + *v37 - 1)
              / *(_DWORD *)(*(_QWORD *)(a1 + 8 * v38 + 1184) + 52LL);
          if ( v13 == 16 )
          {
            HIBYTE(v70) = v14[2];
            BYTE2(v70) = v14[3];
            BYTE1(v70) = v14[4];
            BYTE2(v69) = v14[7];
            LOBYTE(v70) = v14[5];
            BYTE1(v69) = v14[8];
            v40 = v14[9];
            HIBYTE(v69) = v14[6];
          }
          else
          {
            HIBYTE(v69) = v14[2];
            BYTE2(v69) = v14[3];
            BYTE1(v69) = v14[4];
            v40 = v14[5];
            v70 = 0;
          }
          LOBYTE(v69) = v40;
          *(_DWORD *)(v21 + 4136) = v69;
          *(_WORD *)(v21 + 4144) = v39 - 1;
          *(_DWORD *)(v21 + 4144) &= 0xC3FFFFFF;
          *(_DWORD *)(v21 + 4140) = v70;
          v41 = *(_DWORD *)(v21 + 4144) & 0x3FFFFFFF;
          v42 = (v14[1] >> 3) & 1;
          *(_BYTE *)(v21 + 4148) = 0;
          *(_QWORD *)(v21 + 4152) = 0LL;
          *(_DWORD *)(v21 + 4144) = v41 | (v42 << 30);
          v43 = *(_DWORD *)(a1 + 48);
          if ( v43 < v36 || (v45 = v43 % v36, v44 = v43 / v36, v45) )
          {
            v18 = 0;
          }
          else
          {
            v46 = v44;
            v47 = (unsigned int)(unsigned __int16)*(_DWORD *)(v21 + 4144) + 1;
            v76 = *(_QWORD *)(v21 + 4136);
            v18 = v76 / v46 != (v76 + v47 - 1) / v46;
          }
LABEL_104:
          if ( !*(_BYTE *)(v5 + 3) )
          {
            v48 = 0;
            v49 = 0;
            if ( *(_BYTE *)(v5 + 2) == 40 )
              v50 = *(_QWORD *)(v5 + 104);
            else
              v50 = *(_QWORD *)(v5 + 56);
            if ( (v50 & 0xFFF) != 0 )
              v50 = v50 - (v50 & 0xFFF) + 4096;
            if ( (*(_BYTE *)(v50 + 4245) & 6) == 2 )
            {
              if ( !*(_QWORD *)(v50 + 4208) )
                *(_QWORD *)(v50 + 4208) = StorPortGetScatterGatherList(a1, v5);
              v51 = (_QWORD *)(v50 + 4120);
              v52 = (_QWORD *)(v50 + 4120);
              v53 = 0;
              if ( **(_DWORD **)(v50 + 4208) )
              {
                do
                {
                  if ( v48 )
                  {
                    v54 = (_QWORD *)v50;
                    v55 = 64LL;
                    do
                    {
                      *v54 = 0LL;
                      v54[1] = 0LL;
                      v54[2] = 0LL;
                      v54 += 8;
                      *(v54 - 5) = 0LL;
                      *(v54 - 4) = 0LL;
                      *(v54 - 3) = 0LL;
                      *(v54 - 2) = 0LL;
                      *(v54 - 1) = 0LL;
                      --v55;
                    }
                    while ( v55 );
                    v48 = 0;
                  }
                  v56 = *(_QWORD *)(v50 + 4208);
                  v57 = *(_QWORD *)(v56 + 24LL * v53 + 16);
                  v58 = *(unsigned int *)(v56 + 24LL * v53 + 24);
                  if ( v58 + v57 % 4096 > 4096 )
                  {
                    if ( (_DWORD)v58 )
                    {
                      do
                      {
                        v59 = v57 & 0xFFF;
                        if ( v48 )
                        {
                          v60 = (_QWORD *)v50;
                          v61 = 64LL;
                          v48 = 0;
                          do
                          {
                            *v60 = 0LL;
                            v60[1] = 0LL;
                            v60[2] = 0LL;
                            v60 += 8;
                            *(v60 - 5) = 0LL;
                            *(v60 - 4) = 0LL;
                            *(v60 - 3) = 0LL;
                            *(v60 - 2) = 0LL;
                            *(v60 - 1) = 0LL;
                            --v61;
                          }
                          while ( v61 );
                        }
                        *v52 = v57;
                        if ( (unsigned int)(v59 + v58) <= 0x1000 )
                          break;
                        v62 = v59 + v58;
                        LODWORD(v58) = v59 + v58 - 4096;
                        v57 += (unsigned int)(4096 - v59);
                        if ( v52 == v51 )
                        {
                          v48 = 1;
                          v52 = (_QWORD *)v50;
                        }
                        else
                        {
                          ++v52;
                        }
                        ++v49;
                      }
                      while ( v62 != 4096 );
                    }
                  }
                  else
                  {
                    *v52 = v57;
                  }
                  if ( v52 == v51 )
                  {
                    v48 = 1;
                    v52 = (_QWORD *)v50;
                  }
                  else
                  {
                    ++v52;
                  }
                  ++v49;
                  ++v53;
                }
                while ( v53 < **(_DWORD **)(v50 + 4208) );
                if ( v49 >= 2 )
                {
                  if ( v49 == 2 )
                    PhysicalAddress = *(_QWORD *)v50;
                  else
                    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v50, &v71);
                  *(_QWORD *)(v50 + 4128) = PhysicalAddress;
                }
              }
            }
            if ( v18 )
              NVMeSplitIoCommand(a1, v5);
          }
LABEL_159:
          if ( !*(_BYTE *)(v5 + 3) )
            return 1;
          StorPortNotification(0LL, a1, v5);
          return 0;
        case 0x35u:
          ScsiSyncCacheRequest(a1, v5, a3);
          goto LABEL_104;
        case 0x42u:
          ScsiUnmapRequest(a1, v5, v14);
          goto LABEL_104;
        case 0x48u:
          ScsiSanitizeRequest(a1, v5, v14);
          goto LABEL_104;
        case 0x4Du:
          ScsiLogSenseRequest(a1, v5, v14);
          goto LABEL_104;
        case 0xA0u:
          ScsiReportLunsCommand(a1, v5, a3);
          goto LABEL_104;
        case 0xA2u:
          ScsiSecurityProtocolInRequest(a1, v5, v14);
          goto LABEL_104;
        case 0xB5u:
          ScsiSecurityProtocolOutRequest(a1, v5, v14);
          goto LABEL_104;
        default:
          LOBYTE(a4) = 32;
          LOBYTE(a2) = 6;
          NVMeSetSenseData(v5, a2, a3, a4);
          goto LABEL_104;
      }
    case 2:
      if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
        goto LABEL_13;
      IoctlToNVMe(a1);
      goto LABEL_159;
    case 8:
      goto LABEL_149;
    case 9:
      if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
      {
        ProtocolCommandToNVMe(a1);
      }
      else
      {
LABEL_13:
        LOBYTE(a4) = 32;
        LOBYTE(a2) = 8;
        NVMeSetSenseData(v5, a2, a3, a4);
      }
      goto LABEL_159;
    case 36:
      if ( v11 == 40 )
      {
        if ( *(_BYTE *)(*(unsigned int *)(a2 + 120) + a2 + 8) != 1 )
        {
LABEL_147:
          *(_BYTE *)(a2 + 3) = 6;
          goto LABEL_159;
        }
      }
      else if ( *(_BYTE *)(a2 + 4) != 1 )
      {
        goto LABEL_147;
      }
LABEL_149:
      *(_BYTE *)(a2 + 3) = 1;
      goto LABEL_159;
    case 38:
      v77 = 0LL;
      if ( !GetSrbDataBuffer(a2, &v77) || *v77 < 0x48u )
        goto LABEL_158;
      StorPortExtendedFunction(0LL, a1, 96LL);
      *(_BYTE *)(v5 + 3) = 4;
      goto LABEL_159;
    case 39:
      v78[0] = 0LL;
      SrbDataBuffer = GetSrbDataBuffer(a2, v78);
      if ( SrbDataBuffer && *(_DWORD *)v78[0] >= 0x48u )
      {
        v65 = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(SrbDataBuffer + 64));
        v66 = 4;
        if ( !v65 )
          v66 = 1;
        *(_BYTE *)(v5 + 3) = v66;
      }
      else
      {
LABEL_158:
        *(_BYTE *)(v5 + 3) = 6;
      }
      goto LABEL_159;
    default:
      goto LABEL_159;
  }
}
