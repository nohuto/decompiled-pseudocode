/*
 * XREFs of DpiReportAdapter @ 0x1C00D4280
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D4498 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0129444 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C012E49C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x1C0011F96 (__chkstk_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     Template_pqCR1qqtqqqqqqx @ 0x1C002356C (Template_pqCR1qqtqqqqqqx.c)
 */

void __fastcall DpiReportAdapter(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *PoolWithTag; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 *v12; // rsi
  unsigned int v13; // r14d
  __int64 v14; // rbx
  _OWORD *v15; // rax
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  __int64 (__fastcall *v19)(_QWORD, _QWORD, _BYTE *, _QWORD, unsigned int); // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-E0h]
  __int64 v23; // [rsp+30h] [rbp-D0h]
  __int64 v24; // [rsp+38h] [rbp-C8h]
  __int64 v25; // [rsp+40h] [rbp-C0h]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  _BYTE v32[4096]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+1080h] [rbp+F80h]
  __int64 v34; // [rsp+1088h] [rbp+F88h]

  v3 = *(_QWORD *)(a1 + 64);
  if ( bTracingEnabled )
  {
    v4 = 1;
    if ( *(_DWORD *)(v3 + 1520) )
      v4 = *(_DWORD *)(v3 + 1520);
    v5 = v4;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * v4, 0x74727044u);
    if ( PoolWithTag )
    {
      if ( *(_DWORD *)(v3 + 1520) )
      {
        v9 = 0LL;
        do
        {
          PoolWithTag[v9] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 1512) + 8 * v9) + 64LL);
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < *(_DWORD *)(v3 + 1520) );
      }
      else
      {
        *PoolWithTag = v3;
      }
      v12 = PoolWithTag;
      do
      {
        v13 = 0;
        memset(v32, 0, sizeof(v32));
        v14 = *v12;
        v34 = 0LL;
        v33 = 0LL;
        HIDWORD(v33) = *(_DWORD *)(v14 + 500);
        LODWORD(v34) = *(_DWORD *)(v14 + 504);
        BYTE4(v34) = *(_BYTE *)(v14 + 508);
        v15 = (_OWORD *)(v14 + 1048);
        if ( *(_QWORD *)(v14 + 1048) )
        {
          v16 = 2LL;
          v9 = 128LL;
          v17 = v32;
          do
          {
            *v17 = *v15;
            v17[1] = v15[1];
            v17[2] = v15[2];
            v17[3] = v15[3];
            v17[4] = v15[4];
            v17[5] = v15[5];
            v17[6] = v15[6];
            v17 += 8;
            v18 = v15[7];
            v15 += 8;
            *(v17 - 1) = v18;
            --v16;
          }
          while ( v16 );
          LODWORD(v33) = 256;
          v13 = 256;
        }
        v19 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, unsigned int))(v14 + 616);
        if ( v19 )
        {
          v20 = v19(*(_QWORD *)(v14 + 568), 0LL, &v32[v13], v13, 4096 - v13);
          v21 = (unsigned int)(v20 + v33);
        }
        else
        {
          v21 = 0LL;
        }
        LODWORD(v33) = v21;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          {
            LODWORD(v31) = *(_DWORD *)(v14 + 1076);
            LODWORD(v30) = *(_DWORD *)(v14 + 1072);
            LODWORD(v29) = *(_DWORD *)(v14 + 1068);
            LODWORD(v28) = *(_DWORD *)(v14 + 1064);
            LODWORD(v27) = *(_DWORD *)(v14 + 1060);
            LODWORD(v26) = *(_DWORD *)(v14 + 1056);
            LODWORD(v25) = BYTE4(v34);
            LODWORD(v24) = v34;
            LODWORD(v23) = HIDWORD(v33);
            LODWORD(v22) = v21;
            Template_pqCR1qqtqqqqqqx(
              BYTE4(v34),
              v21,
              v9,
              a2,
              v22,
              v32,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31,
              *(_QWORD *)(a2 + 252));
          }
        }
        ++v12;
        --v5;
      }
      while ( v5 );
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdLowResource(v7, v6, v9, v10);
      v11[3] = DpiReportAdapter;
      v11[4] = ExAllocatePoolWithTag;
      v11[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v11);
    }
  }
}
