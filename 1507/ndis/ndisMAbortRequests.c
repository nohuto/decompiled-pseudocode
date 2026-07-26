/*
 * XREFs of ndisMAbortRequests @ 0x1C000F50C
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C005A9DC (ndisMResetCompleteStage1.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E6698 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C0007DAC (ndisOidFreeInternalCloneRequest.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003A110 (Template_jqxq.c)
 *     ndisCompleteLegacyRequest @ 0x1C003FB50 (ndisCompleteLegacyRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0040E6C (ndisMOidRequestCompleteInternal.c)
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
  __int64 v9; // rdi
  __int128 v10; // xmm0
  unsigned int v11; // r8d
  char *v12; // rdx
  __int128 v13; // xmm1
  __int64 v14; // rdi
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
  __int64 v25[6]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+20h] BYREF

  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_q(60LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
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
        if ( (unsigned __int8)byte_1C0085312 >= 4u )
          WPP_SF_q(61LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
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
          v9 = (__int64)(v6 - 9);
          LODWORD(v25[5]) = -1073676276;
          HIDWORD(v25[5]) |= 1u;
          v25[4] = v9;
          v25[0] = a1;
          if ( (unsigned __int8)byte_1C0085312 >= 4u )
            WPP_SF_qq(62LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, v9);
          if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
            Template_jqxq(
              v8,
              (unsigned int)&AbortingRequestEx,
              a1 + 4064,
              a1 + 4064,
              *(_DWORD *)(a1 + 4112),
              *(_QWORD *)(a1 + 4080),
              *(_DWORD *)(v9 + 32));
          KeAcquireSpinLockAtDpcLevel(&ndisAbortedRequestsListLock);
          v10 = *(_OWORD *)v9;
          v12 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
          v11 = ndisAbortedRequestsIndex;
          *(_OWORD *)v12 = v10;
          *((_OWORD *)v12 + 1) = *(_OWORD *)(v9 + 16);
          *((_OWORD *)v12 + 2) = *(_OWORD *)(v9 + 32);
          *((_OWORD *)v12 + 3) = *(_OWORD *)(v9 + 48);
          *((_OWORD *)v12 + 4) = *(_OWORD *)(v9 + 64);
          *((_OWORD *)v12 + 5) = *(_OWORD *)(v9 + 80);
          *((_OWORD *)v12 + 6) = *(_OWORD *)(v9 + 96);
          v12 += 128;
          v13 = *(_OWORD *)(v9 + 112);
          v14 = v9 + 128;
          *((_OWORD *)v12 - 1) = v13;
          *(_OWORD *)v12 = *(_OWORD *)v14;
          *((_OWORD *)v12 + 1) = *(_OWORD *)(v14 + 16);
          *((_OWORD *)v12 + 2) = *(_OWORD *)(v14 + 32);
          *((_OWORD *)v12 + 3) = *(_OWORD *)(v14 + 48);
          *((_OWORD *)v12 + 4) = *(_OWORD *)(v14 + 64);
          *((_OWORD *)v12 + 5) = *(_OWORD *)(v14 + 80);
          *((_OWORD *)v12 + 6) = *(_OWORD *)(v14 + 96);
          *((_QWORD *)v12 + 14) = *(_QWORD *)(v14 + 112);
          if ( v11 == 16 )
            ndisAbortedRequestsIndex = 0;
          KeReleaseSpinLockFromDpcLevel(&ndisAbortedRequestsListLock);
          ndisOidRequestComplete(v25, v15, v16, v17);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 725752;
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
            ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, v18, 0, (KSPIN_LOCK *)&v26);
            v18 = v26;
          }
          if ( v18 )
            ndisMOidRequestCompleteInternal(a1, v18, 3221291020LL, v18);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 725810;
      }
    }
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_q(63LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
}
