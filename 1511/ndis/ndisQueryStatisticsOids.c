/*
 * XREFs of ndisQueryStatisticsOids @ 0x1C00938D0
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C0093CE0 (ndisDeviceControlHandler.c)
 * Callees:
 *     ndisVerifierInitialization @ 0x1C0017178 (ndisVerifierInitialization.c)
 *     ndisCheckForHangSupported @ 0x1C0024A20 (ndisCheckForHangSupported.c)
 *     ndisIsSatisfiedByOidGenStatistics @ 0x1C0024F98 (ndisIsSatisfiedByOidGenStatistics.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisQueryDeviceOid @ 0x1C009383C (ndisQueryDeviceOid.c)
 *     ndisValidOid @ 0x1C0093C34 (ndisValidOid.c)
 */

__int64 __fastcall ndisQueryStatisticsOids(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        SIZE_T NumberOfBytes,
        _DWORD *a7,
        char a8,
        _BYTE *a9)
{
  int v9; // esi
  _DWORD *v11; // r12
  unsigned int v12; // r13d
  unsigned int v13; // r14d
  PVOID PoolWithTag; // rax
  __int64 *v15; // r9
  int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // edi
  __int64 *p_Src; // rsi
  unsigned int v20; // ebx
  int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // ecx
  _BYTE *v24; // rax
  int v26; // ecx
  char valid; // al
  __int64 v28; // r10
  unsigned int v29; // r8d
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  __int64 v31; // rdi
  unsigned int DeviceOid; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  size_t v35; // rbx
  _BYTE *v36; // rdx
  int v37; // eax
  int v38; // edx
  int v39; // eax
  int v40; // edx
  unsigned __int8 v41; // r8
  unsigned __int8 v42; // r10
  int v43; // eax
  int v44; // ecx
  unsigned int v45; // edx
  int v46; // [rsp+30h] [rbp-D0h] BYREF
  char v47; // [rsp+34h] [rbp-CCh]
  int v48; // [rsp+38h] [rbp-C8h]
  unsigned int v49; // [rsp+3Ch] [rbp-C4h]
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v51; // [rsp+48h] [rbp-B8h]
  int v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  unsigned int i; // [rsp+70h] [rbp-90h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  int Src; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  _DWORD *v61; // [rsp+98h] [rbp-68h]
  _BYTE v62[160]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v63[64]; // [rsp+140h] [rbp+40h] BYREF

  v9 = 0;
  P = 0LL;
  v46 = 0;
  v11 = a5;
  v12 = NumberOfBytes;
  v47 = 0;
  v54 = a4;
  v57 = a3;
  v60 = a2;
  v61 = a7;
  v51 = a9;
  v48 = 0;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(0x1Eu, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, a1);
  *a7 = 0;
  v13 = 0;
  if ( a8 )
  {
    v16 = 12;
    v49 = 12;
    memset(a5, 0, (unsigned int)NumberOfBytes);
    v15 = 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6D61444Eu);
    v15 = 0LL;
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      *a9 = 0;
      return 3221225626LL;
    }
    v16 = 8;
    v49 = 8;
  }
  v52 = 0;
  if ( v54 )
  {
    v17 = v16 + 4;
    v55 = 0LL;
    for ( i = v17; ; v17 = i )
    {
      v18 = (unsigned int)v15;
      p_Src = v15;
      memset(v63, 0, 0xF8uLL);
      if ( v12 < v17 )
      {
        v24 = v51;
        LODWORD(v15) = 0;
        v9 = v48;
        v13 = -1073676268;
        *v51 = 0;
        goto LABEL_25;
      }
      v20 = *(_DWORD *)(v57 + 4 * v55);
      if ( (v20 & 0xFF000000) == 0x80000000 )
        v20 &= ~0x80000000;
      if ( v20 != 66050 )
      {
        if ( v20 - 131603 > 5 || (v26 = 55, !_bittest(&v26, v20 - 131603)) )
        {
          if ( v20 != 0xFFFFFF && v20 != 65796 && v20 != -50265850 )
            break;
        }
      }
      v15 = 0LL;
      v13 = 0;
      switch ( v20 )
      {
        case 0x10202u:
          v21 = *(_DWORD *)(a1 + 1832);
          p_Src = (__int64 *)&Src;
          if ( v21 == 14 )
            v21 = 0;
          Src = v21;
          goto LABEL_16;
        case 0x10104u:
          p_Src = (__int64 *)(a1 + 464);
          goto LABEL_123;
        case 0x20213u:
          p_Src = (__int64 *)(a1 + 1624);
          goto LABEL_123;
        case 0x20214u:
          v44 = *(unsigned __int16 *)(a1 + 1786);
          v43 = *(unsigned __int16 *)(a1 + 1784);
LABEL_120:
          p_Src = (__int64 *)&v50;
          v50 = v43 + v44;
LABEL_16:
          v18 = 4;
          goto LABEL_17;
        case 0x20215u:
          v43 = *(unsigned __int16 *)(a1 + 1790);
          v44 = *(unsigned __int16 *)(a1 + 1788) << 16;
          goto LABEL_120;
        case 0x20217u:
          v37 = *(_DWORD *)(a1 + 120);
          v38 = *(_DWORD *)(a1 + 1872);
          v46 = v38;
          if ( (v37 & 0x10) != 0 )
          {
            v38 |= 0x1000000u;
            v46 = v38;
          }
          if ( (v37 & 0x20000) != 0 )
          {
            v38 |= 0x400u;
            v46 = v38;
          }
          if ( (v37 & 0x4000000) != 0 )
          {
            v38 |= 0x2000u;
            v46 = v38;
          }
          v39 = *(_DWORD *)(a1 + 124);
          if ( (v39 & 1) != 0 )
          {
            v38 |= 0x8000u;
            v46 = v38;
          }
          if ( (v39 & 0x1000) != 0 )
          {
            v38 |= 0x40000u;
            v46 = v38;
          }
          if ( (v39 & 0x2000) != 0 )
          {
            v38 |= 0x80000u;
            v46 = v38;
          }
          if ( (v39 & 0x200000) != 0 )
          {
            v38 |= 0x400000u;
            v46 = v38;
          }
          if ( (v39 & 0x400000) != 0 )
          {
            v38 |= 2u;
            v46 = v38;
          }
          if ( *(int *)(a1 + 3504) > 0 )
          {
            v38 |= 0x40000000u;
            v46 = v38;
          }
          if ( *(_BYTE *)(a1 + 32) >= 6u )
          {
            if ( !*(_QWORD *)(*(_QWORD *)(a1 + 3816) + 200LL) )
              goto LABEL_112;
          }
          else if ( !*(_QWORD *)(*(_QWORD *)(a1 + 3816) + 296LL) )
          {
LABEL_112:
            if ( ndisCheckForHangSupported(a1) )
            {
              v40 |= 0x80u;
              v46 = v40;
            }
            if ( v41 >= v42 && *(__int64 **)(*(_QWORD *)(a1 + 3816) + 216LL) != v15 )
              v46 = v40 | 8;
            p_Src = (__int64 *)&v46;
            goto LABEL_16;
          }
          v46 = v38 | 0x800000;
          goto LABEL_112;
      }
      if ( v20 != 131608 )
      {
        if ( v20 == 0xFFFFFF )
        {
          v53 = MEMORY[0xFFFFF78000000320];
          v53 = MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 1592);
          p_Src = &v53;
          v18 = 4;
          v53 = v53 * KeQueryTimeIncrement() / 10000000;
          LODWORD(v15) = 0;
        }
        else
        {
          if ( v20 != -50265850 )
            goto LABEL_22;
          p_Src = (__int64 *)(a1 + 1292);
LABEL_123:
          v18 = 4;
LABEL_58:
          if ( !p_Src )
            goto LABEL_59;
        }
LABEL_17:
        v22 = v49;
        if ( v18 > v12 - v49 )
        {
          v13 = -1073676268;
LABEL_23:
          v9 = v48;
          goto LABEL_24;
        }
        memmove(&v11[v49 / 4], p_Src, v18);
        goto LABEL_19;
      }
      v22 = v49;
      memmove(&ndisFlags, &v11[v49 / 4], 4uLL);
      v18 = 4;
      ndisVerifierInitialization();
      if ( (ndisFlags & 4) == 0 )
        ndisVerifierLevel &= ~4u;
      v63[13] = 4;
LABEL_19:
      v15 = 0LL;
LABEL_20:
      v23 = v18 + v22;
      *v11 = *(_DWORD *)(v57 + 4 * v55);
      v11[1] = v18;
      if ( a8 == (_BYTE)v15 )
        goto LABEL_21;
      v45 = (v23 + 7) & 0xFFFFFFF8;
      if ( v12 - v22 - 4 < v45 )
      {
        v11[2] = v23;
LABEL_21:
        v12 -= v23;
        v11 = (_DWORD *)((char *)v11 + v23);
        v48 += v23;
        goto LABEL_22;
      }
      v12 -= v45;
      v11[2] = v45;
      v11 = (_DWORD *)((char *)v11 + v45);
      v48 += v45;
LABEL_22:
      ++v55;
      if ( ++v52 >= v54 )
        goto LABEL_23;
    }
    valid = ndisValidOid(v60, v20);
    v15 = 0LL;
    if ( !valid )
      goto LABEL_22;
    if ( v20 == 16843010 )
    {
      if ( *(_DWORD *)(a1 + 464) == 3 )
        v20 = 67174658;
    }
    else if ( v20 == 16843009 && *(_DWORD *)(a1 + 464) == 3 )
    {
      v20 = 67174657;
    }
    if ( (*(_DWORD *)(a1 + 124) & 0x800) != 0 )
    {
      v13 = -1073676282;
      goto LABEL_56;
    }
    if ( a8 )
    {
      v29 = v49;
      p_Src = (__int64 *)&v11[v49 / 4];
    }
    else
    {
      p_Src = (__int64 *)P;
      v29 = v49;
    }
    if ( *(_BYTE *)(a1 + 32) < 6u
      || (IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(v20),
          (v31 = IsSatisfiedByOidGenStatistics) == 0)
      && v20 != 131334 )
    {
      DeviceOid = ndisQueryDeviceOid(v28, v63, v20, (__int64)p_Src, v12 - v29);
      v15 = 0LL;
      v13 = DeviceOid;
      v18 = 0;
      if ( !DeviceOid )
        v18 = v63[13];
      goto LABEL_54;
    }
    if ( v47 == (_BYTE)v15 )
    {
      memset(v62, 0, 0x98uLL);
      v33 = ndisQueryDeviceOid(v60, v63, 131334, (__int64)v62, 152);
      v15 = 0LL;
      v13 = v33;
      if ( v33 )
        goto LABEL_71;
      v47 = 1;
    }
    v34 = v12 - v49;
    if ( v20 == 131334 )
    {
      v35 = 152LL;
      if ( v34 >= 0x98 )
      {
        v36 = v62;
LABEL_72:
        memmove(p_Src, v36, v35);
        v15 = 0LL;
        v18 = v35;
LABEL_54:
        if ( a8 != (_BYTE)v15 )
          p_Src = v15;
LABEL_56:
        if ( v13 )
          goto LABEL_23;
        if ( !v18 )
        {
LABEL_59:
          v22 = v49;
          goto LABEL_20;
        }
        goto LABEL_58;
      }
    }
    else
    {
      v35 = 8LL;
      if ( v34 >= 8 )
      {
        v36 = &v62[v31];
        goto LABEL_72;
      }
    }
    v13 = -1073676268;
LABEL_71:
    v18 = (unsigned int)v15;
    goto LABEL_54;
  }
LABEL_24:
  v24 = v51;
LABEL_25:
  *v61 = v9;
  if ( *v24 != (_BYTE)v15 && v13 == -1073741637 )
    v13 = (unsigned int)v15;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qD(0x1Fu, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, a1, v13);
  return v13;
}
