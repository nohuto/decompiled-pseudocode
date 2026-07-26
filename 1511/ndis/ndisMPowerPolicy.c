/*
 * XREFs of ndisMPowerPolicy @ 0x1C00DFB64
 * Callers:
 *     ndisSetSystemPower @ 0x1C0097BD0 (ndisSetSystemPower.c)
 *     ndisQueryPower @ 0x1C00DF930 (ndisQueryPower.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00059C8 (ndisQuerySetMiniport.c)
 *     ndisGetTimeInterval @ 0x1C00124CC (ndisGetTimeInterval.c)
 *     ndisIsMiniportStarted @ 0x1C001BE98 (ndisIsMiniportStarted.c)
 *     ndisCancelWaitWake @ 0x1C0024E7C (ndisCancelWaitWake.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_jqxq @ 0x1C003AE50 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003AED0 (Template_jqxqq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 */

__int64 __fastcall ndisMPowerPolicy(__int64 a1, int a2, int a3, int *a4, char a5)
{
  int v5; // edi
  unsigned int v6; // r13d
  __int64 v7; // rsi
  int v9; // r15d
  __int64 v10; // rbx
  char v11; // r12
  unsigned __int16 v13; // cx
  int v14; // edx
  int v15; // eax
  int v16; // edi
  int v17; // edi
  int v18; // edi
  __m128i v19; // xmm0
  unsigned __int16 v20; // cx
  int v21; // eax
  __int64 v22; // [rsp+20h] [rbp-E0h]
  _BYTE v24[248]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v25[248]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v26[20]; // [rsp+250h] [rbp+150h] BYREF

  v5 = 0;
  v6 = 0;
  v7 = a2;
  memset(v26, 0, sizeof(v26));
  v9 = 4;
  v10 = a1;
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_qD(0x73u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a1, a2);
  if ( (_DWORD)v7 == 6 )
  {
    if ( (unsigned __int8)byte_1C0083715 >= 4u )
      WPP_SF_q(0x74u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10);
    if ( (int)Microsoft_Windows_NDISEnableBits < 0 )
      Template_jqxq(
        a1,
        &PowerShutdownMiniport,
        (const GUID *)(v10 + 4064),
        v10 + 4064,
        *(_DWORD *)(v10 + 4112),
        *(_QWORD *)(v10 + 4080),
        222);
    *a4 = 4;
    if ( (unsigned __int8)byte_1C0083715 < 4u )
      return 0LL;
    v13 = 117;
    goto LABEL_135;
  }
  if ( (_DWORD)v7 == 1 )
  {
    if ( (unsigned __int8)byte_1C0083715 >= 4u )
      WPP_SF_q(0x76u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10);
    if ( (int)Microsoft_Windows_NDISEnableBits < 0 )
      Template_jqxq(
        a1,
        &PowerWakeUpDevice,
        (const GUID *)(v10 + 4064),
        v10 + 4064,
        *(_DWORD *)(v10 + 4112),
        *(_QWORD *)(v10 + 4080),
        246);
    if ( !a5 )
    {
      *(_DWORD *)(v10 + 124) &= ~0x800u;
      *(_QWORD *)(v10 + 4656) += ndisGetTimeInterval((_QWORD *)(v10 + 4648));
    }
    *a4 = 1;
    if ( (unsigned __int8)byte_1C0083715 < 4u )
      return 0LL;
    v13 = 119;
    goto LABEL_135;
  }
  v11 = a5;
  if ( !a5 )
  {
    *(_DWORD *)(v10 + 124) |= 0x800u;
    *(_QWORD *)(v10 + 4648) = MEMORY[0xFFFFF78000000014];
  }
  if ( (*(_DWORD *)(v10 + 124) & 0x20) == 0
    || !ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)v10)
    || *(_DWORD *)(v10 + 1520) != 1 )
  {
    if ( (unsigned __int8)byte_1C0083715 >= 4u )
      WPP_SF_q(0x78u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxq(
        a1,
        &PowerPolicySetD3,
        (const GUID *)(v10 + 4064),
        v10 + 4064,
        *(_DWORD *)(v10 + 4112),
        *(_QWORD *)(v10 + 4080),
        32);
    *a4 = 4;
    if ( (unsigned __int8)byte_1C0083715 < 4u )
      return 0LL;
    v13 = 121;
    goto LABEL_135;
  }
  if ( (unsigned int)(*(_DWORD *)(v10 + 3924) - 2) > 2 )
  {
    if ( a3 == 6 )
    {
      if ( (_DWORD)v7 == 5 )
      {
        if ( !a5 )
        {
          *(_DWORD *)(v10 + 124) &= ~0x400u;
          ndisCancelWaitWake(v10);
        }
        *a4 = 4;
        if ( (unsigned __int8)byte_1C0083715 < 4u )
          return 0LL;
        v13 = 123;
LABEL_135:
        WPP_SF_q(v13, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10);
        return 0LL;
      }
    }
    else if ( (_DWORD)v7 == 5 && (ndisAoAcCapable || ndisAoAcTest) )
    {
      if ( !a5 )
      {
        *(_DWORD *)(v10 + 124) &= ~0x400u;
        ndisCancelWaitWake(v10);
      }
      *a4 = 4;
      if ( (unsigned __int8)byte_1C0083715 < 4u )
        return 0LL;
      v13 = 124;
      goto LABEL_135;
    }
    if ( (*(_DWORD *)(v10 + 124) & 0x40) == 0 )
    {
      if ( (unsigned __int8)byte_1C0083715 >= 4u )
        WPP_SF_qD(0x7Du, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10, 0);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxq(
          a1,
          &PowerWakeNotEnabled,
          (const GUID *)(v10 + 4064),
          v10 + 4064,
          *(_DWORD *)(v10 + 4112),
          *(_QWORD *)(v10 + 4080),
          121);
      goto LABEL_110;
    }
    v14 = *(_DWORD *)(v10 + 4 * v7 + 1240);
    if ( (int)v7 >= 5 && ((int)v7 > *(_DWORD *)(v10 + 1268) || v14 > *(_DWORD *)(v10 + 1272)) )
    {
      if ( (unsigned __int8)byte_1C0083715 >= 4u )
        WPP_SF_q(0x7Eu, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxq(
          a1,
          &PowerHibernateOrShutdown,
          (const GUID *)(v10 + 4064),
          v10 + 4064,
          *(_DWORD *)(v10 + 4112),
          *(_QWORD *)(v10 + 4080),
          153);
      goto LABEL_110;
    }
    a1 = *(unsigned int *)(v10 + 1124);
    if ( (a1 & 2) != 0 && *(_DWORD *)(v10 + 1100) )
      v5 = *(_DWORD *)(v10 + 1100);
    if ( (a1 & 0xFFFFFFFD) != 0 )
    {
      v15 = *(_DWORD *)(v10 + 1104);
      if ( v15 )
      {
        if ( !v5 || v5 > v15 )
          v5 = *(_DWORD *)(v10 + 1104);
      }
    }
    if ( !v5 )
    {
      if ( (unsigned __int8)byte_1C0083715 >= 4u )
        WPP_SF_q(0x7Fu, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxq(
          a1,
          &PowerPolicyPatternNotEnabled,
          (const GUID *)(v10 + 4064),
          v10 + 4064,
          *(_DWORD *)(v10 + 4112),
          *(_QWORD *)(v10 + 4080),
          194);
      goto LABEL_110;
    }
    if ( v5 > *(_DWORD *)(v10 + 1272) )
      v5 = *(_DWORD *)(v10 + 1272);
    if ( (int)v7 > *(_DWORD *)(v10 + 1268) || v14 > v5 || !v14 )
    {
      if ( (unsigned __int8)byte_1C0083715 >= 2u )
        WPP_SF_q(0x80u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10);
      if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
        Template_jqxq(
          a1,
          &PowerPolicyError,
          (const GUID *)(v10 + 4064),
          v10 + 4064,
          *(_DWORD *)(v10 + 4112),
          *(_QWORD *)(v10 + 4080),
          235);
      v11 = a5;
      v6 = -1073741823;
LABEL_110:
      if ( v11 )
      {
LABEL_118:
        *a4 = 4;
        if ( (unsigned __int8)byte_1C0083715 >= 4u )
        {
          LODWORD(v22) = 4;
          WPP_SF_qdD(0x87u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10, v7, v22);
        }
        if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
          Template_jqxqq(
            a1,
            &PowerPolicyStates,
            (const GUID *)(v10 + 4064),
            v10 + 4064,
            *(_DWORD *)(v10 + 4112),
            *(_QWORD *)(v10 + 4080),
            v7,
            *a4);
        if ( (unsigned __int8)byte_1C0083715 < 4u )
          return v6;
        v20 = 136;
LABEL_103:
        WPP_SF_q(v20, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10);
        return v6;
      }
LABEL_111:
      v21 = *(_DWORD *)(v10 + 124);
      if ( (v21 & 1) != 0 && (v21 & 0x40) == 0 )
      {
        memset(v24, 0, sizeof(v24));
        if ( (unsigned __int8)byte_1C0083715 >= 4u )
          WPP_SF_q(0x86u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10);
        if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
          Template_jqxq(
            a1,
            &PowerDisableWakeup,
            (const GUID *)(v10 + 4064),
            v10 + 4064,
            *(_DWORD *)(v10 + 4112),
            *(_QWORD *)(v10 + 4080),
            161);
        *(_DWORD *)&v26[4] = 0;
        *(_QWORD *)&v26[8] = 0LL;
        *(_DWORD *)&v26[16] = 0;
        *(_DWORD *)v26 = 1311360;
        memset(v24, 0, sizeof(v24));
        *(_DWORD *)&v24[88] |= 8u;
        *(_QWORD *)&v24[104] = &ndisIntReqGeneric;
        *(_DWORD *)v24 = 15466902;
        *(_QWORD *)&v24[40] = v26;
        *(_DWORD *)&v24[32] = -50265847;
        *(_QWORD *)&v24[4] = 1LL;
        *(_DWORD *)&v24[48] = 20;
        ndisQuerySetMiniport((void *)v10, 0LL, (struct _NDIS_OID_REQUEST *)v24, 0LL, 0LL);
      }
      goto LABEL_118;
    }
    v16 = v5 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 != 1 )
            goto LABEL_85;
          if ( (*(_DWORD *)(v10 + 1228) & 0x2000) != 0 )
            goto LABEL_80;
        }
        a1 = 4098LL;
        if ( (*(_DWORD *)(v10 + 1228) & 0x1002) == 0x1002 )
        {
          v9 = 3;
          goto LABEL_80;
        }
      }
      a1 = 2049LL;
      if ( (*(_DWORD *)(v10 + 1228) & 0x801) == 0x801 )
      {
        v9 = 2;
        goto LABEL_80;
      }
    }
    if ( (*(_DWORD *)(v10 + 1228) & 0x400) != 0 )
    {
      v9 = 1;
LABEL_80:
      if ( v14 > v9 )
      {
        v6 = -1073741823;
        if ( (unsigned __int8)byte_1C0083715 >= 2u )
          WPP_SF_qD(0x82u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10, v7);
        if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
          Template_jqxq(
            a1,
            &PowerPolicyError,
            (const GUID *)(v10 + 4064),
            v10 + 4064,
            *(_DWORD *)(v10 + 4112),
            *(_QWORD *)(v10 + 4080),
            51);
      }
      goto LABEL_89;
    }
LABEL_85:
    v6 = -1073741823;
    if ( (unsigned __int8)byte_1C0083715 >= 2u )
      WPP_SF_qD(0x81u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10, v7);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
      Template_jqxq(
        a1,
        &PowerPolicyError,
        (const GUID *)(v10 + 4064),
        v10 + 4064,
        *(_DWORD *)(v10 + 4112),
        *(_QWORD *)(v10 + 4080),
        27);
LABEL_89:
    if ( !a5 )
    {
      v19 = *(__m128i *)(v10 + 1120);
      *(_DWORD *)&v26[16] = *(_DWORD *)(v10 + 1136);
      *(__m128i *)v26 = v19;
      *(_DWORD *)v26 = 1311360;
      *(_DWORD *)&v26[12] = _mm_srli_si128(v19, 8).m128i_i32[1] & 0xFFFFFFFE;
      memset(v25, 0, sizeof(v25));
      *(_DWORD *)&v25[88] |= 8u;
      *(_QWORD *)&v25[104] = &ndisIntReqGeneric;
      *(_DWORD *)v25 = 15466902;
      *(_QWORD *)&v25[40] = v26;
      *(_DWORD *)&v25[32] = -50265847;
      *(_DWORD *)&v25[48] = 20;
      *(_QWORD *)&v25[4] = 1LL;
      if ( (unsigned int)ndisQuerySetMiniport((void *)v10, 0LL, (struct _NDIS_OID_REQUEST *)v25, 0LL, 0LL) )
      {
        if ( (unsigned __int8)byte_1C0083715 >= 2u )
          WPP_SF_qD(0x83u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10, *(int *)&v26[4]);
        if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
          Template_jqxq(
            a1,
            &PowerPolicyError,
            (const GUID *)(v10 + 4064),
            v10 + 4064,
            *(_DWORD *)(v10 + 4112),
            *(_QWORD *)(v10 + 4080),
            101);
        goto LABEL_111;
      }
      if ( *(_DWORD *)&v26[4] )
        *(_DWORD *)(v10 + 124) |= 0x400u;
    }
    *a4 = v9;
    if ( (unsigned __int8)byte_1C0083715 >= 4u )
    {
      LODWORD(v22) = v9;
      WPP_SF_qdD(0x84u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10, v7, v22);
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxqq(
        a1,
        &PowerPolicyStates,
        (const GUID *)(v10 + 4064),
        v10 + 4064,
        *(_DWORD *)(v10 + 4112),
        *(_QWORD *)(v10 + 4080),
        v7,
        *a4);
    if ( (unsigned __int8)byte_1C0083715 < 4u )
      return v6;
    v20 = 133;
    goto LABEL_103;
  }
  if ( !a5 )
  {
    *(_DWORD *)(v10 + 124) &= ~0x400u;
    ndisCancelWaitWake(v10);
  }
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_q(0x7Au, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v10);
  return 2147483663LL;
}
