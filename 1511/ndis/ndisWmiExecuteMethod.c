/*
 * XREFs of ndisWmiExecuteMethod @ 0x1C00CF320
 * Callers:
 *     ndisWMIDispatch @ 0x1C009EDDC (ndisWMIDispatch.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00059C8 (ndisQuerySetMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisOidPMAddRemove @ 0x1C000B4D0 (ndisOidPMAddRemove.c)
 *     ndisWmiGetGuid @ 0x1C001A910 (ndisWmiGetGuid.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_jqxqqq @ 0x1C004084C (Template_jqxqqq.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ndisWmiFindInstanceName @ 0x1C009F330 (ndisWmiFindInstanceName.c)
 *     ndisWmiXlateNdisOffloadToWmiOffload @ 0x1C00ADF2C (ndisWmiXlateNdisOffloadToWmiOffload.c)
 *     ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams @ 0x1C00AE22C (ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1C00D01E4 (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ndisReferenceMiniportByName @ 0x1C00E30F8 (ndisReferenceMiniportByName.c)
 *     ndisDereferenceVcPtr @ 0x1C00F3C4C (ndisDereferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiExecuteMethod(__int64 a1, __int64 a2, unsigned int a3, int *a4)
{
  int InstanceName; // ebx
  __int64 v9; // rcx
  __int16 v10; // r9
  _DWORD *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r13
  int v16; // ecx
  int v17; // ecx
  void *v18; // rdx
  int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int SetMiniport; // eax
  __int64 v26; // rcx
  void *v27; // rcx
  unsigned int v28; // esi
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  int v34; // eax
  _QWORD *v35; // rcx
  int v36; // ecx
  __m128i *v37; // r8
  __m128i v38; // xmm2
  unsigned int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // edx
  _DWORD *v44; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+58h] [rbp-A8h]
  int v46; // [rsp+5Ch] [rbp-A4h]
  int v47; // [rsp+60h] [rbp-A0h]
  int v48; // [rsp+64h] [rbp-9Ch]
  PVOID P; // [rsp+68h] [rbp-98h]
  void *v50; // [rsp+70h] [rbp-90h]
  _BYTE v51[248]; // [rsp+80h] [rbp-80h] BYREF

  v44 = 0LL;
  v47 = 0;
  v50 = 0LL;
  v45 = 0;
  if ( (unsigned __int8)byte_1C0083719 >= 4u )
    WPP_SF_q(0x3Bu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(a2 + 44) & 0x80u) == 0 )
  {
    InstanceName = ndisWmiFindInstanceName(
                     &v44,
                     a1,
                     (wchar_t *)(*(unsigned int *)(a2 + 48) + a2 + 2),
                     *(_WORD *)(*(unsigned int *)(a2 + 48) + a2));
    if ( InstanceName < 0 )
    {
      if ( (unsigned __int8)byte_1C0083719 >= 2u )
        WPP_SF_q(0x3Cu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1);
      P = 0LL;
      goto LABEL_106;
    }
    P = v44;
    if ( v44 )
      goto LABEL_12;
  }
  else
  {
    P = 0LL;
  }
  v9 = *(_QWORD *)(a1 + 3824);
  if ( v9 )
    ndisReferenceMiniportByName((PCUNICODE_STRING)(v9 + 8));
LABEL_12:
  if ( (int)ndisWmiGetGuid(&v44, a1, (_QWORD *)(a2 + 24), 0) < 0 )
  {
    if ( (unsigned __int8)byte_1C0083719 >= 2u )
      WPP_SF_q(v10 + 61, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1);
    goto LABEL_15;
  }
  v11 = v44;
  v12 = v44[6];
  if ( (v12 & 0x80u) == 0 )
  {
    if ( (unsigned __int8)byte_1C0083719 >= 2u )
      WPP_SF_q(0x3Eu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1);
    InstanceName = -1073741637;
    goto LABEL_107;
  }
  if ( (v12 & 0x200) == 0 )
  {
    memset(v51, 0, sizeof(v51));
    *(_DWORD *)&v51[88] |= 8u;
    *(_DWORD *)&v51[8] = 0;
    v22 = *(unsigned int *)(a2 + 60);
    *(_QWORD *)&v51[104] = &ndisIntReqWmi;
    *(_DWORD *)v51 = 15466902;
    *(_DWORD *)&v51[4] = 12;
    *(_DWORD *)&v51[32] = v44[4];
    *(_DWORD *)&v51[56] = *(_DWORD *)(a2 + 56);
    *(_QWORD *)&v51[40] = a2 + v22;
    *(_DWORD *)&v51[48] = *(_DWORD *)(a2 + 64);
    *(_DWORD *)&v51[52] = a3 - v22;
    goto LABEL_53;
  }
  v13 = *(unsigned int *)(a2 + 64);
  if ( (unsigned int)v13 < 0x20 )
    goto LABEL_15;
  v14 = *(unsigned int *)(a2 + 60);
  v15 = v14 + a2;
  if ( *(_BYTE *)(v14 + a2) != 2 || *(_BYTE *)(v15 + 1) != 1 || *(_WORD *)(v15 + 2) < 0x20u )
    goto LABEL_15;
  v48 = *(_DWORD *)(v15 + 4);
  v44 = *(_DWORD **)(v15 + 16);
  v46 = *(_DWORD *)(v15 + 24);
  if ( (v12 & 0x2000000) != 0 )
  {
    v16 = v11[4];
    if ( ((v16 + 67042805) & 0xFFFFFFFD) != 0 )
    {
      if ( (unsigned int)(v16 + 67042802) <= 1 && a3 - (unsigned int)v14 < 0x20 )
      {
        v17 = v14 + 32;
LABEL_30:
        if ( a3 < 0x38 )
        {
LABEL_31:
          InstanceName = -1073741789;
          *a4 = 4;
          goto LABEL_107;
        }
        *(_DWORD *)(a2 + 44) |= 0x20u;
        goto LABEL_33;
      }
    }
    else if ( a3 - (unsigned int)v14 < 0x10C )
    {
      v17 = v14 + 268;
      goto LABEL_30;
    }
    memset(v51, 0, sizeof(v51));
    *(_DWORD *)&v51[88] |= 8u;
    v18 = &ndisIntReqWmi;
    *(_QWORD *)&v51[104] = &ndisIntReqWmi;
    *(_DWORD *)v51 = 15466902;
    *(_DWORD *)&v51[32] = v11[4];
    *(_DWORD *)&v51[4] = 2;
    *(_DWORD *)&v51[8] = *(_DWORD *)(v15 + 4);
    v19 = a3 - v14;
    *(_QWORD *)&v51[40] = v14 + a2;
    goto LABEL_47;
  }
  if ( v11[4] == 66086 && a3 - (unsigned int)v14 < 0x43C )
  {
    v17 = v14 + 1084;
    goto LABEL_30;
  }
  memmove((void *)(v14 + a2), (const void *)(v15 + 32), v13 - 32);
  if ( (v11[6] & 0x4000000) == 0 )
  {
    memset(v51, 0, sizeof(v51));
    v18 = &ndisIntReqWmi;
    *(_DWORD *)&v51[88] |= 8u;
    v21 = *(unsigned int *)(a2 + 60);
    *(_DWORD *)&v51[8] = v48;
    *(_QWORD *)&v51[104] = &ndisIntReqWmi;
    *(_DWORD *)v51 = 15466902;
    *(_DWORD *)&v51[4] = 12;
    *(_DWORD *)&v51[32] = v11[4];
    *(_DWORD *)&v51[56] = *(_DWORD *)(a2 + 56);
    *(_QWORD *)&v51[40] = a2 + v21;
    *(_DWORD *)&v51[48] = *(_DWORD *)(a2 + 64) - 32;
    *(_DWORD *)&v51[52] = a3 - v21;
    goto LABEL_49;
  }
  if ( *(_DWORD *)(a2 + 56) != 1 )
  {
LABEL_15:
    InstanceName = -1073741811;
    goto LABEL_107;
  }
  v20 = *(unsigned int *)(a2 + 60);
  if ( a3 - (unsigned int)v20 < 0x10 )
  {
    v17 = v20 + 16;
    if ( a3 < 0x38 )
      goto LABEL_31;
    *(_DWORD *)(a2 + 44) |= 0x20u;
LABEL_33:
    *(_DWORD *)(a2 + 48) = v17;
LABEL_34:
    *(_DWORD *)a2 = 56;
    InstanceName = 0;
    *a4 = 56;
    goto LABEL_107;
  }
  v47 = 16;
  memset(v51, 0, sizeof(v51));
  *(_DWORD *)&v51[88] |= 8u;
  v18 = &ndisIntReqWmi;
  *(_QWORD *)&v51[104] = &ndisIntReqWmi;
  *(_DWORD *)v51 = 15466902;
  *(_DWORD *)&v51[32] = v11[4];
  *(_DWORD *)&v51[8] = v48;
  *(_QWORD *)&v51[40] = a2 + v20;
  v19 = *(_DWORD *)(a2 + 64) - 32;
  *(_DWORD *)&v51[4] = 1;
LABEL_47:
  *(_DWORD *)&v51[48] = v19;
LABEL_49:
  *(_QWORD *)&v51[16] = v44;
  if ( !v44 )
    v18 = *(void **)&v51[24];
  *(_QWORD *)&v51[24] = v18;
  *(_DWORD *)&v51[12] = v46;
LABEL_53:
  v23 = v11[4] + 50265846;
  if ( v23 <= 5 && (v24 = 43, _bittest(&v24, v23)) )
  {
    SetMiniport = ndisOidPMAddRemove((char *)a1, 0LL, (PNDIS_OID_REQUEST)v51);
  }
  else
  {
    if ( P || (v27 = v50) == 0LL )
      v27 = (void *)a1;
    SetMiniport = ndisQuerySetMiniport(v27, P, (struct _NDIS_OID_REQUEST *)v51, 0LL, 0LL);
  }
  v28 = SetMiniport;
  if ( ((SetMiniport + 1073676268) & 0xFFFFFFFD) == 0 )
  {
    v41 = *(_DWORD *)&v51[68];
    if ( *(_DWORD *)&v51[4] != 12 )
      v41 = *(_DWORD *)&v51[56];
    v42 = *(_DWORD *)(a2 + 60) + v41 + 32;
    if ( a3 < 0x38 )
      goto LABEL_31;
    *(_DWORD *)a2 = 56;
    *(_DWORD *)(a2 + 44) |= 0x20u;
    *(_DWORD *)(a2 + 48) = v42;
    InstanceName = 0;
    *a4 = 56;
LABEL_106:
    if ( InstanceName == 259 )
      goto LABEL_109;
    goto LABEL_107;
  }
  if ( SetMiniport )
  {
    if ( (unsigned __int8)byte_1C0083719 >= 2u )
      WPP_SF_q(0x3Fu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
      Template_jqxqqq(
        v26,
        &ExecuteMethodFailed,
        (const GUID *)(a1 + 4064),
        a1 + 4064,
        *(_DWORD *)(a1 + 4112),
        *(_QWORD *)(a1 + 4080),
        v28,
        79,
        *(_DWORD *)(a2 + 56));
    if ( (v11[6] & 0x200) != 0 )
    {
      if ( (v28 & 0xC0010000) == 0xC0010000 )
        v28 = (unsigned __int16)v28 | 0xC0230000;
    }
    else if ( v28 != 259 && v28 != -2147483643 )
    {
      v29 = -1073741823;
      if ( v28 != -1073741823 && v28 != -1073741670 && v28 != -1073741637 )
      {
        if ( v28 == -1073676267 )
          v29 = -1073741811;
        InstanceName = v29;
        goto LABEL_107;
      }
    }
    InstanceName = v28;
    goto LABEL_106;
  }
  if ( *(_DWORD *)&v51[4] == 12 )
  {
    v30 = v11[4];
    if ( v30 == 66086 )
    {
      ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams((_DWORD *)(a2 + *(unsigned int *)(a2 + 60)));
      v31 = 1084;
    }
    else if ( v30 == 66085 )
    {
      v32 = ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues(
              (void *)(a2 + *(unsigned int *)(a2 + 60)),
              *(unsigned int *)&v51[60]);
      InstanceName = v32;
      if ( v32 == -1073676268 )
      {
        v33 = *(_DWORD *)(a2 + 60) + v45 + 32;
        if ( a3 < 0x38 )
          goto LABEL_31;
        *(_DWORD *)(a2 + 44) |= 0x20u;
        *(_DWORD *)(a2 + 48) = v33;
        goto LABEL_34;
      }
      if ( v32 )
      {
        if ( (v32 & 0xC0010000) == 0xC0010000 )
          InstanceName = (unsigned __int16)v32 | 0xC0230000;
        goto LABEL_106;
      }
      v31 = v45;
    }
    else
    {
      v31 = *(_DWORD *)&v51[60];
    }
    goto LABEL_100;
  }
  if ( *(_DWORD *)&v51[4] == 1 )
  {
    v34 = v11[4];
    if ( v34 == -50265846 || v34 == -50265843 )
    {
      v31 = 196;
    }
    else
    {
      v35 = (_QWORD *)(a2 + *(unsigned int *)(a2 + 60));
      *v35 = 0LL;
      v35[1] = 0LL;
      *(_DWORD *)v35 = 1048837;
      *((_BYTE *)v35 + 8) = v51[232];
      v31 = v47;
    }
    goto LABEL_100;
  }
  v36 = v11[4];
  if ( ((v36 + 67042805) & 0xFFFFFFFD) == 0 )
  {
    ndisWmiXlateNdisOffloadToWmiOffload((__int128 *)(a2 + *(unsigned int *)(a2 + 60)));
    v31 = 268;
    goto LABEL_100;
  }
  if ( (unsigned int)(v36 + 67042802) > 1 )
  {
    v31 = *(_DWORD *)&v51[52];
LABEL_100:
    v40 = v31 + *(_DWORD *)(a2 + 60);
    *(_DWORD *)(a2 + 64) = v31;
    goto LABEL_101;
  }
  v37 = (__m128i *)(a2 + *(unsigned int *)(a2 + 60));
  v38 = *v37;
  v37[1].m128i_i32[3] = v37[1].m128i_i32[0];
  v37->m128i_i32[0] = _mm_cvtsi128_si32(v38);
  v37->m128i_i16[1] = 32;
  v39 = _mm_cvtsi128_si32(_mm_srli_si128(v38, 8));
  v37->m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v38, 4));
  v37[1].m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v38, 12));
  v37->m128i_i32[2] = v39 & 3;
  v37->m128i_i32[3] = (v39 >> 2) & 3;
  v37[1].m128i_i32[0] = (v39 >> 4) & 3;
  v37[1].m128i_i32[1] = (unsigned __int8)v39 >> 6;
  v40 = *(_DWORD *)(a2 + 60) + 32;
  *(_DWORD *)(a2 + 64) = 32;
LABEL_101:
  *(_DWORD *)a2 = v40;
  InstanceName = 0;
  *a4 = v40;
LABEL_107:
  if ( P )
    ndisDereferenceVcPtr(P);
LABEL_109:
  if ( v50 )
    ndisDereferenceMiniport((__int64)v50, 0x5Fu);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0083719 >= 4u )
    WPP_SF_qD(0x40u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1, InstanceName);
  return (unsigned int)InstanceName;
}
