/*
 * XREFs of ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C012E49C
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0146794 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C0011778 (Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     Template_pqqq @ 0x1C001C26C (Template_pqqq.c)
 *     Template_pqqqqjzqqx @ 0x1C001C2F4 (Template_pqqqqjzqqx.c)
 *     Template_pqqqxx @ 0x1C001C56C (Template_pqqqxx.c)
 *     Template_pdqqq @ 0x1C0028DF0 (Template_pdqqq.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C007A2D4 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DpiReportAdapter @ 0x1C00D4280 (DpiReportAdapter.c)
 *     ?ReportState@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C012E2E8 (-ReportState@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C012E3CC (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DpiBrightnessReportState@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C01711B8 (-DpiBrightnessReportState@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 */

void __fastcall DXGADAPTER::ReportState(DXGADAPTER *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdi
  int *AdapterType; // rax
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // r8
  wchar_t *v9; // r14
  unsigned int i; // esi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int j; // ebp
  unsigned int k; // esi
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int *v18; // rdi
  int v19; // r14d
  unsigned int m; // ebp
  DXGADAPTER **v21; // rcx
  ADAPTER_RENDER *v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-128h]
  __int64 v24; // [rsp+28h] [rbp-120h]
  __int64 v25; // [rsp+30h] [rbp-118h]
  __int64 v26; // [rsp+38h] [rbp-110h]
  __int64 v27; // [rsp+50h] [rbp-F8h]
  __int64 v28; // [rsp+58h] [rbp-F0h]
  int v29; // [rsp+C0h] [rbp-88h]
  int v30; // [rsp+D8h] [rbp-70h]
  struct _UNICODE_STRING v31; // [rsp+100h] [rbp-48h] BYREF
  struct _STRING DestinationString; // [rsp+110h] [rbp-38h] BYREF
  BOOL v33; // [rsp+150h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 21495LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( bTracingEnabled )
  {
    v4 = *((_QWORD *)this + 28);
    AdapterType = DXGADAPTER::GetAdapterType(this, &v33);
    v6 = *((_DWORD *)this + 343);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      v7 = (unsigned int)v6 >> 14;
      LOBYTE(v7) = v7 & 7;
      Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
        v7,
        &EventReportAdapter,
        v6 < 0,
        *((_QWORD *)this + 22),
        (char)this,
        *((_DWORD *)this + 230),
        *((_QWORD *)this + 165),
        *((_DWORD *)this + 332),
        *((_QWORD *)this + 167),
        *((_DWORD *)this + 336),
        *((_DWORD *)this + 337),
        *((_DWORD *)this + 339),
        *((_DWORD *)this + 340),
        *((_DWORD *)this + 341),
        *((_DWORD *)this + 344),
        *((_DWORD *)this + 338),
        *((_DWORD *)this + 342),
        v6,
        ((unsigned int)v6 >> 10) & 0xF,
        v7,
        ((unsigned int)v6 >> 17) & 7,
        v6 < 0,
        *((_DWORD *)this + 345),
        *((_DWORD *)this + 346),
        v29,
        *((_DWORD *)this + 348),
        *((_DWORD *)this + 349),
        v30,
        *((_DWORD *)this + 542),
        *AdapterType,
        v4);
    }
  }
  DpiReportAdapter(*((_QWORD *)this + 22), (__int64)this);
  if ( bTracingEnabled && *((_DWORD *)this + 542) )
  {
    v9 = (wchar_t *)operator new[](0x50uLL, 0x4B677844u, PagedPool);
    if ( v9 )
    {
      for ( i = 0; i < *((_DWORD *)this + 542); ++i )
      {
        v11 = *((_QWORD *)this + 253) + 520LL * i;
        RtlInitAnsiString(&DestinationString, (PCSZ)(v11 + 236));
        *(_DWORD *)&v31.Length = 5242880;
        v31.Buffer = v9;
        if ( RtlAnsiStringToUnicodeString(&v31, &DestinationString, 0) < 0 )
          RtlInitUnicodeString(&v31, L"Unknown");
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        {
          LODWORD(v28) = *(_DWORD *)(v11 + 344);
          LODWORD(v27) = *(_DWORD *)(v11 + 216);
          LODWORD(v26) = *(_DWORD *)(v11 + 8);
          LODWORD(v25) = *(_DWORD *)(v11 + 212);
          LODWORD(v24) = *(_DWORD *)(v11 + 208);
          LODWORD(v23) = i;
          Template_pqqqqjzqqx(
            v11 + 220,
            v12,
            v13,
            this,
            v23,
            v24,
            v25,
            v26,
            v11 + 220,
            v31.Buffer,
            v27,
            v28,
            *(_QWORD *)(v11 + 368));
        }
        for ( j = 0; j < *(_DWORD *)(v11 + 8); ++j )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          {
            LODWORD(v25) = *(_DWORD *)(v11 + 24LL * j + 32);
            LODWORD(v24) = j;
            LODWORD(v23) = i;
            Template_pqqqxx(
              3LL * j,
              v12,
              v13,
              this,
              v23,
              v24,
              v25,
              *(_QWORD *)(v11 + 24LL * j + 16),
              *(_QWORD *)(v11 + 24LL * j + 24));
          }
        }
      }
      operator delete(v9);
    }
    for ( k = 0; k < *((_DWORD *)this + 542); ++k )
    {
      v16 = 520LL * k;
      v17 = *((_QWORD *)this + 253);
      v18 = *(unsigned int **)(v16 + v17 + 512);
      if ( v18 )
      {
        v19 = *(_DWORD *)(v16 + v17 + 212);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        {
          LODWORD(v26) = v18[48];
          LODWORD(v25) = *v18;
          LODWORD(v24) = *(_DWORD *)(v16 + v17 + 212);
          LODWORD(v23) = k;
          Template_pdqqq(v16, &Dxgk_PowerPStateComponent, v8, this, v23, v24, v25, v26);
        }
        for ( m = 0; m < *v18; ++m )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          {
            LODWORD(v25) = v18[m + 1];
            LODWORD(v24) = m;
            LODWORD(v23) = v19;
            Template_pqqq((unsigned int)v25, &Dxgk_PowerPState, v8, this, v23, v24, v25);
          }
        }
      }
    }
  }
  DpiBrightnessReportState(*((struct _DEVICE_OBJECT **)this + 22));
  v21 = (DXGADAPTER **)*((_QWORD *)this + 248);
  if ( v21 )
    ADAPTER_DISPLAY::ReportState(v21);
  v22 = (ADAPTER_RENDER *)*((_QWORD *)this + 249);
  if ( v22 )
    ADAPTER_RENDER::ReportState(v22);
  DXGADAPTER::ReportNodeMetadata(this);
}
