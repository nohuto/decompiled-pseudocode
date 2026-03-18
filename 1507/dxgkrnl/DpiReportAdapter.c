/*
 * XREFs of DpiReportAdapter @ 0x1C00C3D40
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00C323C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0123780 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C0127FA4 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x1C0010826 (__chkstk_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     Template_pqCR1qqtqqqqqqx @ 0x1C0023A2C (Template_pqCR1qqtqqqqqqx.c)
 */

void __fastcall DpiReportAdapter(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 *PoolWithTag; // rdi
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 *v10; // rsi
  unsigned int v11; // r14d
  __int64 v12; // rbx
  _OWORD *v13; // rax
  __int64 v14; // rdx
  _OWORD *v15; // rcx
  __int128 v16; // xmm1
  __int64 (__fastcall *v17)(_QWORD, _QWORD, _BYTE *, _QWORD, unsigned int); // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // [rsp+20h] [rbp-E0h]
  __int64 v21; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+38h] [rbp-C8h]
  __int64 v23; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  _BYTE v30[4096]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+1080h] [rbp+F80h]
  __int64 v32; // [rsp+1088h] [rbp+F88h]

  v3 = *(_QWORD *)(a1 + 64);
  if ( bTracingEnabled )
  {
    v4 = 1;
    if ( *(_DWORD *)(v3 + 1480) )
      v4 = *(_DWORD *)(v3 + 1480);
    v5 = v4;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * v4, 0x74727044u);
    if ( PoolWithTag )
    {
      if ( *(_DWORD *)(v3 + 1480) )
      {
        v8 = 0LL;
        do
        {
          PoolWithTag[v8] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 1472) + 8 * v8) + 64LL);
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < *(_DWORD *)(v3 + 1480) );
      }
      else
      {
        *PoolWithTag = v3;
      }
      v10 = PoolWithTag;
      do
      {
        v11 = 0;
        memset(v30, 0, sizeof(v30));
        v12 = *v10;
        v32 = 0LL;
        v31 = 0LL;
        HIDWORD(v31) = *(_DWORD *)(v12 + 468);
        LODWORD(v32) = *(_DWORD *)(v12 + 472);
        BYTE4(v32) = *(_BYTE *)(v12 + 476);
        v13 = (_OWORD *)(v12 + 1016);
        if ( *(_QWORD *)(v12 + 1016) )
        {
          v14 = 2LL;
          v8 = 128LL;
          v15 = v30;
          do
          {
            *v15 = *v13;
            v15[1] = v13[1];
            v15[2] = v13[2];
            v15[3] = v13[3];
            v15[4] = v13[4];
            v15[5] = v13[5];
            v15[6] = v13[6];
            v15 += 8;
            v16 = v13[7];
            v13 += 8;
            *(v15 - 1) = v16;
            --v14;
          }
          while ( v14 );
          LODWORD(v31) = 256;
          v11 = 256;
        }
        v17 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, unsigned int))(v12 + 584);
        if ( v17 )
        {
          v18 = v17(*(_QWORD *)(v12 + 536), 0LL, &v30[v11], v11, 4096 - v11);
          v19 = (unsigned int)(v18 + v31);
        }
        else
        {
          v19 = 0LL;
        }
        LODWORD(v31) = v19;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          {
            LODWORD(v29) = *(_DWORD *)(v12 + 1044);
            LODWORD(v28) = *(_DWORD *)(v12 + 1040);
            LODWORD(v27) = *(_DWORD *)(v12 + 1036);
            LODWORD(v26) = *(_DWORD *)(v12 + 1032);
            LODWORD(v25) = *(_DWORD *)(v12 + 1028);
            LODWORD(v24) = *(_DWORD *)(v12 + 1024);
            LODWORD(v23) = BYTE4(v32);
            LODWORD(v22) = v32;
            LODWORD(v21) = HIDWORD(v31);
            LODWORD(v20) = v19;
            Template_pqCR1qqtqqqqqqx(
              BYTE4(v32),
              v19,
              v8,
              a2,
              v20,
              v30,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29,
              *(_QWORD *)(a2 + 252));
          }
        }
        ++v10;
        --v5;
      }
      while ( v5 );
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdLowResource(v6);
      v9[3] = DpiReportAdapter;
      v9[4] = ExAllocatePoolWithTag;
      v9[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v9);
    }
  }
}
