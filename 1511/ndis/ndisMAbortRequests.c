/*
 * XREFs of ndisMAbortRequests @ 0x1C001366C
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C005A97C (ndisMResetCompleteStage1.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E0560 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C0009398 (ndisOidFreeInternalCloneRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0025A0C (ndisMOidRequestCompleteInternal.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003AE50 (Template_jqxq.c)
 *     ndisCompleteLegacyRequest @ 0x1C004124C (ndisCompleteLegacyRequest.c)
 */

void __fastcall ndisMAbortRequests(__int64 a1)
{
  __int64 **v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 **v5; // rcx
  __int64 *v6; // rdi
  __int64 *v7; // rax
  int v8; // ecx
  __int64 *v9; // rdi
  __int128 v10; // xmm0
  unsigned int v11; // r8d
  char *v12; // rdx
  __int128 v13; // xmm1
  __int128 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // r14
  __int128 v20; // xmm0
  unsigned int v21; // r8d
  char *v22; // rdx
  __int64 *v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 **v24; // [rsp+48h] [rbp-38h]
  _QWORD v25[6]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+20h] BYREF

  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(63LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
  if ( *(_BYTE *)(a1 + 32) < 6u )
  {
    *(_DWORD *)(a1 + 4484) &= ~2u;
    if ( *(_QWORD *)(a1 + 2216) || *(_QWORD *)(a1 + 2200) != a1 + 2200 )
    {
      v24 = &v23;
      v2 = (__int64 **)(a1 + 2200);
      v23 = (__int64 *)&v23;
      while ( *v2 != (__int64 *)v2 )
      {
        if ( (unsigned __int8)byte_1C0083712 >= 4u )
          WPP_SF_q(64LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
        v3 = *v2;
        v4 = **v2;
        if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
          __fastfail(3u);
        *v2 = (__int64 *)v4;
        *(_QWORD *)(v4 + 8) = v2;
        v5 = v24;
        *v3 = (__int64)&v23;
        v3[1] = (__int64)v5;
        if ( *v5 != (__int64 *)&v23 )
          __fastfail(3u);
        *v5 = v3;
        v24 = (__int64 **)v3;
      }
      if ( v23 != (__int64 *)&v23 )
      {
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        while ( 1 )
        {
          v6 = v23;
          if ( v23 == (__int64 *)&v23 )
            break;
          v7 = (__int64 *)*v23;
          if ( (__int64 **)v23[1] != &v23 || (__int64 *)v7[1] != v23 )
            __fastfail(3u);
          v23 = (__int64 *)*v23;
          v7[1] = (__int64)&v23;
          memset(v25, 0, sizeof(v25));
          v9 = v6 - 9;
          LODWORD(v25[5]) = -1073676276;
          HIDWORD(v25[5]) |= 1u;
          v25[4] = v9;
          v25[0] = a1;
          if ( (unsigned __int8)byte_1C0083712 >= 4u )
            WPP_SF_qq(65LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, v9);
          if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
            Template_jqxq(
              v8,
              (unsigned int)&AbortingRequestEx,
              a1 + 4064,
              a1 + 4064,
              *(_DWORD *)(a1 + 4112),
              *(_QWORD *)(a1 + 4080),
              *((_DWORD *)v9 + 8));
          KeAcquireSpinLockAtDpcLevel(&ndisAbortedRequestsListLock);
          v10 = *(_OWORD *)v9;
          v12 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
          v11 = ndisAbortedRequestsIndex;
          *(_OWORD *)v12 = v10;
          *((_OWORD *)v12 + 1) = *((_OWORD *)v9 + 1);
          *((_OWORD *)v12 + 2) = *((_OWORD *)v9 + 2);
          *((_OWORD *)v12 + 3) = *((_OWORD *)v9 + 3);
          *((_OWORD *)v12 + 4) = *((_OWORD *)v9 + 4);
          *((_OWORD *)v12 + 5) = *((_OWORD *)v9 + 5);
          *((_OWORD *)v12 + 6) = *((_OWORD *)v9 + 6);
          v12 += 128;
          v13 = *((_OWORD *)v9 + 7);
          v14 = (__int128 *)(v9 + 16);
          *((_OWORD *)v12 - 1) = v13;
          *(_OWORD *)v12 = *v14;
          *((_OWORD *)v12 + 1) = v14[1];
          *((_OWORD *)v12 + 2) = v14[2];
          *((_OWORD *)v12 + 3) = v14[3];
          *((_OWORD *)v12 + 4) = v14[4];
          *((_OWORD *)v12 + 5) = v14[5];
          *((_OWORD *)v12 + 6) = v14[6];
          *((_QWORD *)v12 + 14) = *((_QWORD *)v14 + 14);
          if ( v11 == 16 )
            ndisAbortedRequestsIndex = 0;
          KeReleaseSpinLockFromDpcLevel(&ndisAbortedRequestsListLock);
          ndisOidRequestComplete((__int64)v25, v15, v16, v17);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 725804;
      }
      v18 = *(_QWORD *)(a1 + 2216);
      if ( v18 )
      {
        *(_QWORD *)(a1 + 2216) = 0LL;
        v19 = *(_QWORD *)(a1 + 576);
        *(_QWORD *)(a1 + 576) = 0LL;
        v20 = *(_OWORD *)v18;
        v22 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
        v21 = ndisAbortedRequestsIndex;
        *(_OWORD *)v22 = v20;
        *((_OWORD *)v22 + 1) = *(_OWORD *)(v18 + 16);
        *((_OWORD *)v22 + 2) = *(_OWORD *)(v18 + 32);
        *((_OWORD *)v22 + 3) = *(_OWORD *)(v18 + 48);
        *((_OWORD *)v22 + 4) = *(_OWORD *)(v18 + 64);
        *((_OWORD *)v22 + 5) = *(_OWORD *)(v18 + 80);
        *((_OWORD *)v22 + 6) = *(_OWORD *)(v18 + 96);
        v22 += 128;
        *((_OWORD *)v22 - 1) = *(_OWORD *)(v18 + 112);
        *(_OWORD *)v22 = *(_OWORD *)(v18 + 128);
        *((_OWORD *)v22 + 1) = *(_OWORD *)(v18 + 144);
        *((_OWORD *)v22 + 2) = *(_OWORD *)(v18 + 160);
        *((_OWORD *)v22 + 3) = *(_OWORD *)(v18 + 176);
        *((_OWORD *)v22 + 4) = *(_OWORD *)(v18 + 192);
        *((_OWORD *)v22 + 5) = *(_OWORD *)(v18 + 208);
        *((_OWORD *)v22 + 6) = *(_OWORD *)(v18 + 224);
        *((_QWORD *)v22 + 14) = *(_QWORD *)(v18 + 240);
        if ( v21 == 16 )
          ndisAbortedRequestsIndex = 0;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        if ( *(_BYTE *)(a1 + 32) < 6u )
        {
          ndisCompleteLegacyRequest(a1, 3221291020LL, v19);
        }
        else
        {
          if ( (*(_DWORD *)(v18 + 88) & 0x8000000) != 0 )
          {
            ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, v18, 0LL, (KSPIN_LOCK *)&v26);
            v18 = v26;
          }
          if ( v18 )
            ndisMOidRequestCompleteInternal(a1, v18, 3221291020LL, v18);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 725862;
      }
    }
  }
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_q(66LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
}
