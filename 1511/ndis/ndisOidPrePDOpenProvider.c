/*
 * XREFs of ndisOidPrePDOpenProvider @ 0x1C00DB6E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisGetOidSourceHandle @ 0x1C0010ADC (ndisGetOidSourceHandle.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qqqqq @ 0x1C003F4F0 (WPP_SF_qqqqq.c)
 *     ndisIovFindVPortByVPortId @ 0x1C0064364 (ndisIovFindVPortByVPortId.c)
 *     WPP_SF_qqdqqS @ 0x1C006D020 (WPP_SF_qqdqqS.c)
 *     WPP_SF_qqqqDd @ 0x1C006D10C (WPP_SF_qqqqDd.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C00CBB78 (ndisMInvokeBlockingOidRequest.c)
 *     ??_GNDIS_PD_ASSOCIATION@@QEAAPEAXI@Z @ 0x1C00D77AC (--_GNDIS_PD_ASSOCIATION@@QEAAPEAXI@Z.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C00DA1DC (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C00DA2E0 (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDOpenProvider(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rsi
  char *v3; // rdi
  unsigned __int8 v5; // r14
  __int64 v6; // r15
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  struct NDIS_PD_CLIENT *PDClientViaClientDriverHandle; // rax
  int v10; // r10d
  struct NDIS_PD_CLIENT *v11; // r12
  unsigned int v12; // edx
  __int64 *VPortByVPortId; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  char *PoolWithTag; // rax
  _QWORD *v17; // rax
  int v18; // eax
  struct KPushLockBase *v19; // rdx
  struct NDIS_PD_CLIENT **v20; // rdx
  char *v21; // rax
  char *v22; // rcx
  __int64 v23; // rax
  char **v24; // rdx
  __int64 v25; // rdx
  const wchar_t *v26; // rax
  KPushLockBase *v27; // rax
  __int64 v29; // [rsp+20h] [rbp-E0h]
  __int64 v30; // [rsp+30h] [rbp-D0h]
  __int64 v31; // [rsp+38h] [rbp-C8h]
  KLockHolder v32; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v33[32]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  v5 = 1;
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_qqqqq(
      0x17u,
      &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids,
      v1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v2);
  if ( !*(_QWORD *)a1 )
  {
    v5 = 0;
    goto LABEL_62;
  }
  if ( *(_DWORD *)(v2 + 4) != 12 )
    goto LABEL_6;
  if ( (*(_DWORD *)(v2 + 88) & 0x4000) == 0 && (*(_BYTE *)(v2 + 1) < 2u || *(_WORD *)(v2 + 2) < 0xF8u) )
    goto LABEL_10;
  if ( (*(_DWORD *)(v2 + 244) & 1) == 0 || *(_DWORD *)(v2 + 236) || *(_DWORD *)(v2 + 240) == -1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741811;
    goto LABEL_56;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v2 + 48) >= 0x18u )
  {
    if ( *(_DWORD *)(v2 + 52) < 0x18u )
    {
      *(_DWORD *)(v2 + 68) = 24;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v2 + 68) = 24;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    v6 = *(_QWORD *)(v2 + 40);
    if ( *(_BYTE *)v6 != 0x80
      || *(_BYTE *)(v6 + 1) != 1
      || *(_WORD *)(v6 + 2) < 0x18u
      || (*(_DWORD *)(v6 + 4) & 0xFFFFFFFE) != 0 )
    {
      goto LABEL_10;
    }
    OidSourceHandle = (_QWORD *)ndisGetOidSourceHandle(v2);
    if ( !OidSourceHandle
      || (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) == 0LL
      || (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle),
          v10 = 0,
          (v11 = PDClientViaClientDriverHandle) == 0LL) )
    {
      *(_DWORD *)(a1 + 40) = -1073741808;
      goto LABEL_62;
    }
    v12 = *(_DWORD *)(v2 + 240);
    if ( v12 )
    {
      VPortByVPortId = ndisIovFindVPortByVPortId(v1, v12);
      if ( !VPortByVPortId || (VPortByVPortId[8] & 2) != 0 )
      {
LABEL_10:
        *(_DWORD *)(a1 + 40) = -1073741811;
        goto LABEL_62;
      }
    }
    v14 = *(_QWORD *)(v1 + 5488);
    if ( !v14
      || *(_BYTE *)(v14 + 12) == (_BYTE)v10
      || *(_DWORD *)(v14 + 32) == v10
      || (v15 = *(_QWORD *)(v14 + 24), *(_DWORD *)(v15 + 16) == v10)
      || *(_BYTE *)(v15 + 8) == (_BYTE)v10 )
    {
LABEL_6:
      *(_DWORD *)(a1 + 40) = -1073741637;
      goto LABEL_62;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xC8uLL, 0x6141444Eu);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 18) = -1;
      *((_QWORD *)PoolWithTag + 7) = 0LL;
      *((_QWORD *)PoolWithTag + 8) = 0LL;
      *((_QWORD *)PoolWithTag + 10) = 0LL;
      *((_QWORD *)PoolWithTag + 11) = 0LL;
      *((_WORD *)PoolWithTag + 48) = 0;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      *((_QWORD *)PoolWithTag + 1) = 0LL;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      *((_QWORD *)PoolWithTag + 3) = 0LL;
      *((_QWORD *)PoolWithTag + 6) = 0LL;
      *((_QWORD *)PoolWithTag + 5) = 0LL;
      v17 = PoolWithTag + 104;
      v17[1] = v17;
      *v17 = v17;
      *((_QWORD *)v3 + 16) = v3 + 120;
      *((_QWORD *)v3 + 15) = v3 + 120;
      *((_QWORD *)v3 + 18) = v3 + 136;
      *((_QWORD *)v3 + 17) = v3 + 136;
      *((_QWORD *)v3 + 20) = v3 + 152;
      *((_QWORD *)v3 + 19) = v3 + 152;
      *((_QWORD *)v3 + 22) = v3 + 168;
      *((_QWORD *)v3 + 21) = v3 + 168;
      *((_QWORD *)v3 + 24) = v3 + 184;
      *((_QWORD *)v3 + 23) = v3 + 184;
    }
    else
    {
      v3 = 0LL;
    }
    if ( !v3 )
    {
      *(_DWORD *)(a1 + 40) = -1073741670;
      goto LABEL_62;
    }
    if ( !ndisReferenceMiniport(v1) )
    {
      *(_DWORD *)(a1 + 40) = -1073741436;
      goto LABEL_56;
    }
    *((_QWORD *)v3 + 7) = v1;
    *((_DWORD *)v3 + 18) = *(_DWORD *)(v2 + 240);
    memset(v33, 0, 0xF8uLL);
    LODWORD(v33[11]) |= 8u;
    v33[0] = 0xC00EC0196LL;
    v33[13] = &ndisIntReqGeneric;
    LODWORD(v33[1]) = *(_DWORD *)(v2 + 8);
    LODWORD(v33[4]) = *(_DWORD *)(v2 + 32);
    LODWORD(v33[7]) = *(_DWORD *)(v2 + 56);
    v33[5] = *(_QWORD *)(v2 + 40);
    v33[6] = *(_QWORD *)(v2 + 48);
    WORD1(v33[0]) = 248;
    BYTE1(v33[0]) = 2;
    HIDWORD(v33[30]) = 1;
    LODWORD(v33[30]) = *(_DWORD *)(v2 + 240);
    v18 = ndisMInvokeBlockingOidRequest(v1, (__int64)v33);
    *(_DWORD *)(a1 + 40) = v18;
    if ( v18 )
    {
LABEL_56:
      if ( v3 )
      {
        v27 = (KPushLockBase *)*((_QWORD *)v3 + 10);
        if ( v27 )
        {
          *(_QWORD *)((char *)&v32.m_State + 1) = 0LL;
          v32.m_State = 1048960;
          v32.m_Lock = v27;
          memset(v33, 0, 0xF8uLL);
          LODWORD(v33[11]) |= 8u;
          v33[13] = &ndisIntReqGeneric;
          v33[0] = 0x100EC0196LL;
          LODWORD(v33[4]) = 66818;
          LODWORD(v33[1]) = *(_DWORD *)(v2 + 8);
          v33[5] = &v32;
          WORD1(v33[0]) = 248;
          LODWORD(v33[6]) = 16;
          BYTE1(v33[0]) = 2;
          HIDWORD(v33[30]) = 1;
          LODWORD(v33[30]) = *(_DWORD *)(v2 + 240);
          ndisMInvokeBlockingOidRequest(v1, (__int64)v33);
          *((_QWORD *)v3 + 10) = 0LL;
        }
        if ( *((_QWORD *)v3 + 7) )
        {
          ndisDereferenceMiniport(v1, 0x62u);
          *((_QWORD *)v3 + 7) = 0LL;
        }
        NDIS_PD_ASSOCIATION::`scalar deleting destructor'((NDIS_PD_ASSOCIATION *)v3);
      }
      goto LABEL_62;
    }
    v19 = (struct KPushLockBase *)qword_1C00837E0;
    *((_QWORD *)v3 + 10) = *(_QWORD *)(v6 + 8);
    *((_QWORD *)v3 + 11) = *(_QWORD *)(v6 + 16);
    KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v32, v19 + 1);
    *((_QWORD *)v3 + 8) = v11;
    v20 = (struct NDIS_PD_CLIENT **)*((_QWORD *)v11 + 4);
    v21 = v3 + 8;
    *((_QWORD *)v3 + 1) = (char *)v11 + 24;
    *((_QWORD *)v3 + 2) = v20;
    if ( *v20 != (struct NDIS_PD_CLIENT *)((char *)v11 + 24) )
      __fastfail(3u);
    *v20 = (struct NDIS_PD_CLIENT *)v21;
    *((_QWORD *)v11 + 4) = v21;
    v22 = v3 + 40;
    v23 = *(_QWORD *)(v1 + 5488) + 40LL;
    v24 = *(char ***)(*(_QWORD *)(v1 + 5488) + 48LL);
    *((_QWORD *)v3 + 5) = v23;
    *((_QWORD *)v3 + 6) = v24;
    if ( *v24 != (char *)v23 )
      __fastfail(3u);
    *v24 = v22;
    *(_QWORD *)(v23 + 8) = v22;
    KLockHolder::~KLockHolder(&v32);
    if ( *((_UNKNOWN **)v3 + 11) == &unk_1C0074ED0 )
      v3[96] = 1;
    if ( (unsigned __int8)byte_1C0083724 >= 4u )
    {
      v26 = L"PASS_THROUGH";
      if ( !v3[96] )
        v26 = L" ";
      LODWORD(v29) = *((_DWORD *)v3 + 18);
      WPP_SF_qqdqqS((__int64)L" ", v25, v11, v1, v29, v3, *(_QWORD *)(v6 + 8), v26);
    }
    *(_QWORD *)(v6 + 8) = v3;
    *(_QWORD *)(v6 + 16) = &unk_1C0074ED0;
  }
LABEL_62:
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
  {
    LODWORD(v31) = *(_DWORD *)(a1 + 40);
    LODWORD(v30) = v5;
    WPP_SF_qqqqDd(
      0x19u,
      *(_QWORD *)(a1 + 8),
      v1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v30,
      v31);
  }
  return v5;
}
