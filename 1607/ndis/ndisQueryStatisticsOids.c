/*
 * XREFs of ndisQueryStatisticsOids @ 0x1C009BB34
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C009B358 (ndisDeviceControlHandler.c)
 * Callees:
 *     ndisCheckForHangSupported @ 0x1C001B6DC (ndisCheckForHangSupported.c)
 *     ndisVerifierInitialization @ 0x1C001CC48 (ndisVerifierInitialization.c)
 *     ndisIsSatisfiedByOidGenStatistics @ 0x1C0020434 (ndisIsSatisfiedByOidGenStatistics.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisValidOid @ 0x1C009BF40 (ndisValidOid.c)
 *     ndisQueryDeviceOid @ 0x1C009BF7C (ndisQueryDeviceOid.c)
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
  __int64 *p_Src; // rsi
  _DWORD *v11; // r12
  unsigned int v12; // r13d
  unsigned int v13; // r14d
  PVOID PoolWithTag; // rax
  int v15; // edi
  void *v16; // rcx
  __int64 v17; // rbx
  unsigned int v18; // edi
  unsigned int v19; // ebx
  int v20; // eax
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  _BYTE *v23; // rcx
  int v25; // ecx
  __int64 v26; // r10
  unsigned int v27; // r8d
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  __int64 *v29; // r9
  __int64 v30; // rdi
  unsigned int DeviceOid; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  size_t v34; // rbx
  _BYTE *v35; // rdx
  int v36; // eax
  int v37; // edx
  int v38; // eax
  int v39; // edx
  unsigned __int8 v40; // r8
  unsigned __int8 v41; // r9
  int v42; // eax
  int v43; // ecx
  unsigned int v44; // edx
  int v45; // [rsp+30h] [rbp-D0h] BYREF
  char v46; // [rsp+34h] [rbp-CCh]
  unsigned int v47; // [rsp+38h] [rbp-C8h]
  int v48; // [rsp+3Ch] [rbp-C4h]
  int v49; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v50; // [rsp+48h] [rbp-B8h]
  int v51; // [rsp+50h] [rbp-B0h]
  unsigned int v52; // [rsp+54h] [rbp-ACh]
  __int64 v53; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+60h] [rbp-A0h]
  unsigned int v55; // [rsp+68h] [rbp-98h]
  int Src; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v57; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h]
  __int64 v59; // [rsp+80h] [rbp-80h]
  _DWORD *v60; // [rsp+88h] [rbp-78h]
  _BYTE v61[160]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v62[64]; // [rsp+130h] [rbp+30h] BYREF

  p_Src = 0LL;
  v11 = a5;
  v12 = NumberOfBytes;
  v60 = a7;
  v50 = a9;
  v48 = 0;
  P = 0LL;
  v45 = 0;
  v46 = 0;
  v52 = a4;
  v57 = a3;
  v59 = a2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_q(0x1Eu, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, a1);
  v13 = 0;
  *a7 = 0;
  if ( a8 )
  {
    v15 = 12;
    v16 = a5;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6D61444Eu);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      *a9 = 0;
      return 3221225626LL;
    }
    v15 = 8;
    v16 = PoolWithTag;
  }
  v47 = v15;
  memset(v16, 0, (unsigned int)NumberOfBytes);
  v51 = 0;
  if ( !v52 )
  {
    v23 = a9;
    goto LABEL_24;
  }
  v17 = 0LL;
  v54 = 0LL;
  v55 = v15 + 4;
  while ( 1 )
  {
    v18 = 0;
    memset(v62, 0, 0xF8uLL);
    if ( v12 < v55 )
      break;
    v19 = *(_DWORD *)(v57 + 4 * v17);
    if ( (v19 & 0xFF000000) == 0x80000000 )
      v19 &= ~0x80000000;
    if ( v19 != 66050 )
    {
      if ( v19 - 131603 > 5 || (v25 = 55, !_bittest(&v25, v19 - 131603)) )
      {
        if ( v19 != 0xFFFFFF && v19 != 65796 && v19 != -50265850 )
        {
          if ( !(unsigned __int8)ndisValidOid(v59, v19) )
          {
            p_Src = 0LL;
            goto LABEL_22;
          }
          if ( v19 == 16843010 )
          {
            if ( *(_DWORD *)(a1 + 464) == 3 )
              v19 = 67174658;
          }
          else if ( v19 == 16843009 && *(_DWORD *)(a1 + 464) == 3 )
          {
            v19 = 67174657;
          }
          if ( (*(_DWORD *)(a1 + 124) & 0x800) != 0 )
          {
            v13 = -1073676282;
            goto LABEL_55;
          }
          if ( a8 )
          {
            v27 = v47;
            p_Src = (__int64 *)((char *)v11 + v47);
          }
          else
          {
            p_Src = (__int64 *)P;
            v27 = v47;
          }
          if ( *(_BYTE *)(a1 + 32) < 6u
            || (IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(v19),
                (v30 = IsSatisfiedByOidGenStatistics) == 0)
            && v19 != 131334 )
          {
            DeviceOid = ndisQueryDeviceOid(v26, v62, v19, p_Src, v12 - v27);
            v29 = 0LL;
            v13 = DeviceOid;
            v18 = 0;
            if ( !DeviceOid )
              v18 = v62[13];
LABEL_53:
            if ( a8 != (_BYTE)v29 )
              p_Src = v29;
LABEL_55:
            if ( v13 )
              goto LABEL_128;
            if ( !v18 )
              goto LABEL_19;
            goto LABEL_57;
          }
          if ( v46 == (_BYTE)v29 )
          {
            memset(v61, 0, 0x98uLL);
            v32 = ndisQueryDeviceOid(v59, v62, 131334LL, v61, 152);
            v29 = 0LL;
            v13 = v32;
            if ( !v32 )
            {
              v46 = 1;
              goto LABEL_66;
            }
LABEL_70:
            v18 = (unsigned int)v29;
            goto LABEL_53;
          }
LABEL_66:
          v33 = v12 - v47;
          if ( v19 == 131334 )
          {
            v34 = 152LL;
            if ( v33 >= 0x98 )
            {
              v35 = v61;
LABEL_71:
              memmove(p_Src, v35, v34);
              v29 = 0LL;
              v18 = v34;
              goto LABEL_53;
            }
          }
          else
          {
            v34 = 8LL;
            if ( v33 >= 8 )
            {
              v35 = &v61[v30];
              goto LABEL_71;
            }
          }
          v13 = -1073676268;
          goto LABEL_70;
        }
      }
    }
    p_Src = 0LL;
    v13 = 0;
    switch ( v19 )
    {
      case 0x10202u:
        v20 = *(_DWORD *)(a1 + 1832);
        if ( v20 == 14 )
          v20 = 0;
        p_Src = (__int64 *)&Src;
        Src = v20;
        goto LABEL_16;
      case 0x10104u:
        p_Src = (__int64 *)(a1 + 464);
        break;
      case 0x20213u:
        p_Src = (__int64 *)(a1 + 1624);
        break;
      case 0x20214u:
        v43 = *(unsigned __int16 *)(a1 + 1786);
        v42 = *(unsigned __int16 *)(a1 + 1784);
        goto LABEL_119;
      case 0x20215u:
        v42 = *(unsigned __int16 *)(a1 + 1790);
        v43 = *(unsigned __int16 *)(a1 + 1788) << 16;
LABEL_119:
        p_Src = (__int64 *)&v49;
        v49 = v42 + v43;
        goto LABEL_16;
      case 0x20217u:
        v36 = *(_DWORD *)(a1 + 120);
        v37 = *(_DWORD *)(a1 + 1872);
        v45 = v37;
        if ( (v36 & 0x10) != 0 )
        {
          v37 |= 0x1000000u;
          v45 = v37;
        }
        if ( (v36 & 0x20000) != 0 )
        {
          v37 |= 0x400u;
          v45 = v37;
        }
        if ( (v36 & 0x4000000) != 0 )
        {
          v37 |= 0x2000u;
          v45 = v37;
        }
        v38 = *(_DWORD *)(a1 + 124);
        if ( (v38 & 1) != 0 )
        {
          v37 |= 0x8000u;
          v45 = v37;
        }
        if ( (v38 & 0x1000) != 0 )
        {
          v37 |= 0x40000u;
          v45 = v37;
        }
        if ( (v38 & 0x2000) != 0 )
        {
          v37 |= 0x80000u;
          v45 = v37;
        }
        if ( (v38 & 0x200000) != 0 )
        {
          v37 |= 0x400000u;
          v45 = v37;
        }
        if ( (v38 & 0x400000) != 0 )
        {
          v37 |= 2u;
          v45 = v37;
        }
        if ( *(int *)(a1 + 3504) > 0 )
        {
          v37 |= 0x40000000u;
          v45 = v37;
        }
        if ( *(_BYTE *)(a1 + 32) >= 6u )
        {
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 3816) + 200LL) )
            goto LABEL_110;
        }
        else
        {
          if ( !*(_QWORD *)(*(_QWORD *)(a1 + 3816) + 296LL) )
            goto LABEL_111;
LABEL_110:
          v45 = v37 | 0x800000;
        }
LABEL_111:
        if ( ndisCheckForHangSupported(a1) )
        {
          v39 |= 0x80u;
          v45 = v39;
        }
        if ( v40 >= v41 && *(_QWORD *)(*(_QWORD *)(a1 + 3816) + 216LL) )
          v45 = v39 | 8;
        p_Src = (__int64 *)&v45;
        goto LABEL_16;
      case 0x20218u:
        memmove(&ndisFlags, (char *)v11 + v47, 4uLL);
        v18 = 4;
        ndisVerifierInitialization();
        if ( (ndisFlags & 4) == 0 )
          ndisVerifierLevel &= ~4u;
        v62[13] = 4;
        goto LABEL_20;
      case 0xFFFFFFu:
        v53 = MEMORY[0xFFFFF78000000320];
        v53 = MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1 + 1592);
        p_Src = &v53;
        v53 = v53 * KeQueryTimeIncrement() / 10000000;
LABEL_16:
        v18 = 4;
LABEL_17:
        if ( v18 > v12 - v47 )
        {
          v13 = -1073676268;
LABEL_128:
          v23 = v50;
          goto LABEL_24;
        }
        memmove((char *)v11 + v47, p_Src, v18);
        goto LABEL_19;
      case 0xFD010106:
        p_Src = (__int64 *)(a1 + 1292);
        break;
      default:
        goto LABEL_22;
    }
    v18 = 4;
LABEL_57:
    if ( p_Src )
      goto LABEL_17;
LABEL_19:
    p_Src = 0LL;
LABEL_20:
    v21 = v47;
    v22 = v18 + v47;
    *v11 = *(_DWORD *)(v57 + 4 * v54);
    v11[1] = v18;
    if ( !a8 )
      goto LABEL_21;
    v44 = (v22 + 7) & 0xFFFFFFF8;
    if ( v12 - v21 - 4 < v44 )
    {
      v11[2] = v22;
LABEL_21:
      v12 -= v22;
      v11 = (_DWORD *)((char *)v11 + v22);
      v48 += v22;
      goto LABEL_22;
    }
    v12 -= v44;
    v11[2] = v44;
    v11 = (_DWORD *)((char *)v11 + v44);
    v48 += v44;
LABEL_22:
    ++v54;
    if ( ++v51 >= v52 )
    {
      v23 = v50;
      goto LABEL_24;
    }
    v17 = v54;
  }
  v23 = v50;
  v13 = -1073676268;
  *v50 = 0;
LABEL_24:
  *v60 = v48;
  if ( *v23 && v13 == -1073741637 )
    v13 = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qD(0x1Fu, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, a1, v13);
  return v13;
}
