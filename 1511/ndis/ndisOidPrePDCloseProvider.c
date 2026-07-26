/*
 * XREFs of ndisOidPrePDCloseProvider @ 0x1C00DB3A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisGetOidSourceHandle @ 0x1C0010ADC (ndisGetOidSourceHandle.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qqqqq @ 0x1C003F4F0 (WPP_SF_qqqqq.c)
 *     WPP_SF_qqdqq @ 0x1C006CFB4 (WPP_SF_qqdqq.c)
 *     WPP_SF_qqqqDd @ 0x1C006D10C (WPP_SF_qqqqDd.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C00CBB78 (ndisMInvokeBlockingOidRequest.c)
 *     ??_GNDIS_PD_ASSOCIATION@@QEAAPEAXI@Z @ 0x1C00D77AC (--_GNDIS_PD_ASSOCIATION@@QEAAPEAXI@Z.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C00DA1DC (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C00DA2E0 (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDCloseProvider(__int64 a1)
{
  __int64 v1; // r12
  __int64 v3; // rdi
  unsigned __int8 v4; // r14
  __int64 v5; // r15
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  struct NDIS_PD_CLIENT *PDClientViaClientDriverHandle; // rax
  struct NDIS_PD_CLIENT *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct KPushLockBase *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-E0h]
  __int64 v22; // [rsp+30h] [rbp-D0h]
  int v23; // [rsp+38h] [rbp-C8h]
  KLockHolder v24; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v25[32]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 1;
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_qqqqq(
      0x1Cu,
      &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids,
      v1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v3);
  if ( !*(_QWORD *)a1 )
  {
    v4 = 0;
    goto LABEL_38;
  }
  if ( *(_DWORD *)(v3 + 4) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_38;
  }
  if ( (*(_DWORD *)(v3 + 88) & 0x4000) == 0 && (*(_BYTE *)(v3 + 1) < 2u || *(_WORD *)(v3 + 2) < 0xF8u)
    || (*(_DWORD *)(v3 + 244) & 1) == 0
    || *(_DWORD *)(v3 + 236)
    || *(_DWORD *)(v3 + 240) == -1 )
  {
    goto LABEL_37;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x10u )
  {
    *(_DWORD *)(v3 + 56) = 16;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    v5 = *(_QWORD *)(v3 + 40);
    if ( *(_BYTE *)v5 == 0x80 && *(_BYTE *)(v5 + 1) == 1 && *(_WORD *)(v5 + 2) >= 0x10u && !*(_DWORD *)(v5 + 4) )
    {
      OidSourceHandle = (_QWORD *)ndisGetOidSourceHandle(v3);
      if ( OidSourceHandle
        && (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) != 0LL
        && (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle),
            (v9 = PDClientViaClientDriverHandle) != 0LL)
        && (v10 = *(_QWORD *)(v5 + 8), *(struct NDIS_PD_CLIENT **)(v10 + 64) == PDClientViaClientDriverHandle)
        && *(_QWORD *)(v10 + 56) == v1
        && *(_DWORD *)(v10 + 72) == *(_DWORD *)(v3 + 240) )
      {
        *(_QWORD *)(v5 + 8) = *(_QWORD *)(v10 + 80);
        memset(v25, 0, 0xF8uLL);
        LODWORD(v25[11]) |= 8u;
        LODWORD(v25[0]) = 15466902;
        v25[13] = &ndisIntReqGeneric;
        LODWORD(v25[4]) = *(_DWORD *)(v3 + 32);
        HIDWORD(v25[0]) = *(_DWORD *)(v3 + 4);
        LODWORD(v25[1]) = *(_DWORD *)(v3 + 8);
        v25[5] = *(_QWORD *)(v3 + 40);
        LODWORD(v25[6]) = *(_DWORD *)(v3 + 48);
        WORD1(v25[0]) = 248;
        BYTE1(v25[0]) = 2;
        HIDWORD(v25[30]) = 1;
        LODWORD(v25[30]) = *(_DWORD *)(v3 + 240);
        *(_DWORD *)(a1 + 40) = ndisMInvokeBlockingOidRequest(v1, (__int64)v25);
        *(_QWORD *)(v5 + 8) = v10;
        if ( !*(_DWORD *)(a1 + 40) )
        {
          if ( (unsigned __int8)byte_1C0083724 >= 4u )
          {
            LODWORD(v21) = *(_DWORD *)(v10 + 72);
            WPP_SF_qqdqq(v12, v11, v9, v1, v21, v10, *(_QWORD *)(v10 + 80));
          }
          v13 = (struct KPushLockBase *)(qword_1C00837E0 + 8);
          *(_QWORD *)(v10 + 80) = 0LL;
          *(_QWORD *)(v10 + 64) = 0LL;
          KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v24, v13);
          v14 = (_QWORD *)(v10 + 8);
          v15 = *(_QWORD *)(v10 + 8);
          v16 = *(_QWORD **)(v10 + 16);
          if ( *(_QWORD *)(v15 + 8) != v10 + 8 || (_QWORD *)*v16 != v14 )
            __fastfail(3u);
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          *v14 = 0LL;
          v17 = (_QWORD *)(v10 + 40);
          v18 = *(_QWORD *)(v10 + 40);
          v19 = *(_QWORD **)(v10 + 48);
          if ( *(_QWORD *)(v18 + 8) != v10 + 40 || (_QWORD *)*v19 != v17 )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
          *v17 = 0LL;
          KLockHolder::~KLockHolder(&v24);
          ndisDereferenceMiniport(*(_QWORD *)(v10 + 56), 0x62u);
          *(_QWORD *)(v10 + 56) = 0LL;
          NDIS_PD_ASSOCIATION::`scalar deleting destructor'((NDIS_PD_ASSOCIATION *)v10);
        }
      }
      else
      {
        *(_DWORD *)(a1 + 40) = -1073741808;
      }
      goto LABEL_38;
    }
LABEL_37:
    *(_DWORD *)(a1 + 40) = -1073741811;
  }
LABEL_38:
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
  {
    v23 = *(_DWORD *)(a1 + 40);
    LODWORD(v22) = v4;
    WPP_SF_qqqqDd(
      0x1Eu,
      *(_QWORD *)(a1 + 8),
      v1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v22,
      v23);
  }
  return v4;
}
