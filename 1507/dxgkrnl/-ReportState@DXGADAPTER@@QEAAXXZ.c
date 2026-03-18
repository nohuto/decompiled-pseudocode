/*
 * XREFs of ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C0127FA4
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0140238 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C0010008 (Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     Template_pqqq @ 0x1C001B894 (Template_pqqq.c)
 *     Template_pqqqqjzqqx @ 0x1C001B91C (Template_pqqqqjzqqx.c)
 *     Template_pqqqxx @ 0x1C001BB94 (Template_pqqqxx.c)
 *     Template_pdqqq @ 0x1C0028238 (Template_pdqqq.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0078CB8 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiReportAdapter @ 0x1C00C3D40 (DpiReportAdapter.c)
 *     ?ReportState@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0127DF0 (-ReportState@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0127ED4 (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DpiBrightnessReportState@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C016C9A8 (-DpiBrightnessReportState@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 */

void __fastcall DXGADAPTER::ReportState(DXGADAPTER *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdi
  int *AdapterType; // rax
  int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // r8
  wchar_t *v12; // r14
  unsigned int i; // esi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int j; // ebp
  unsigned int k; // esi
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int *v21; // rdi
  int v22; // r14d
  unsigned int m; // ebp
  DXGADAPTER **v24; // rcx
  ADAPTER_RENDER *v25; // rcx
  __int64 v26; // [rsp+20h] [rbp-128h]
  __int64 v27; // [rsp+28h] [rbp-120h]
  __int64 v28; // [rsp+30h] [rbp-118h]
  __int64 v29; // [rsp+38h] [rbp-110h]
  __int64 v30; // [rsp+50h] [rbp-F8h]
  __int64 v31; // [rsp+58h] [rbp-F0h]
  int v32; // [rsp+C0h] [rbp-88h]
  int v33; // [rsp+D8h] [rbp-70h]
  struct _UNICODE_STRING v34; // [rsp+100h] [rbp-48h] BYREF
  struct _STRING DestinationString; // [rsp+110h] [rbp-38h] BYREF
  BOOL v36; // [rsp+150h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v6 + 24) = 20978LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( bTracingEnabled )
  {
    v7 = *((_QWORD *)this + 28);
    AdapterType = DXGADAPTER::GetAdapterType(this, &v36);
    v9 = *((_DWORD *)this + 341);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      v10 = (unsigned int)v9 >> 14;
      LOBYTE(v10) = v10 & 7;
      Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
        v10,
        &EventReportAdapter,
        v9 < 0,
        *((_QWORD *)this + 22),
        (char)this,
        *((_DWORD *)this + 228),
        *((_QWORD *)this + 164),
        *((_DWORD *)this + 330),
        *((_QWORD *)this + 166),
        *((_DWORD *)this + 334),
        *((_DWORD *)this + 335),
        *((_DWORD *)this + 337),
        *((_DWORD *)this + 338),
        *((_DWORD *)this + 339),
        *((_DWORD *)this + 342),
        *((_DWORD *)this + 336),
        *((_DWORD *)this + 340),
        v9,
        ((unsigned int)v9 >> 10) & 0xF,
        v10,
        ((unsigned int)v9 >> 17) & 7,
        v9 < 0,
        *((_DWORD *)this + 343),
        *((_DWORD *)this + 344),
        v32,
        *((_DWORD *)this + 346),
        *((_DWORD *)this + 347),
        v33,
        *((_DWORD *)this + 538),
        *AdapterType,
        v7);
    }
  }
  DpiReportAdapter(*((_QWORD *)this + 22), (__int64)this);
  if ( bTracingEnabled && *((_DWORD *)this + 538) )
  {
    v12 = (wchar_t *)operator new[](0x50uLL, 0x4B677844u, PagedPool);
    if ( v12 )
    {
      for ( i = 0; i < *((_DWORD *)this + 538); ++i )
      {
        v14 = *((_QWORD *)this + 251) + 520LL * i;
        RtlInitAnsiString(&DestinationString, (PCSZ)(v14 + 236));
        *(_DWORD *)&v34.Length = 5242880;
        v34.Buffer = v12;
        if ( RtlAnsiStringToUnicodeString(&v34, &DestinationString, 0) < 0 )
          RtlInitUnicodeString(&v34, L"Unknown");
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        {
          LODWORD(v31) = *(_DWORD *)(v14 + 344);
          LODWORD(v30) = *(_DWORD *)(v14 + 216);
          LODWORD(v29) = *(_DWORD *)(v14 + 8);
          LODWORD(v28) = *(_DWORD *)(v14 + 212);
          LODWORD(v27) = *(_DWORD *)(v14 + 208);
          LODWORD(v26) = i;
          Template_pqqqqjzqqx(
            v14 + 220,
            v15,
            v16,
            this,
            v26,
            v27,
            v28,
            v29,
            v14 + 220,
            v34.Buffer,
            v30,
            v31,
            *(_QWORD *)(v14 + 368));
        }
        for ( j = 0; j < *(_DWORD *)(v14 + 8); ++j )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          {
            LODWORD(v28) = *(_DWORD *)(v14 + 24LL * j + 32);
            LODWORD(v27) = j;
            LODWORD(v26) = i;
            Template_pqqqxx(
              3LL * j,
              v15,
              v16,
              this,
              v26,
              v27,
              v28,
              *(_QWORD *)(v14 + 24LL * j + 16),
              *(_QWORD *)(v14 + 24LL * j + 24));
          }
        }
      }
      operator delete(v12);
    }
    for ( k = 0; k < *((_DWORD *)this + 538); ++k )
    {
      v19 = 520LL * k;
      v20 = *((_QWORD *)this + 251);
      v21 = *(unsigned int **)(v19 + v20 + 512);
      if ( v21 )
      {
        v22 = *(_DWORD *)(v19 + v20 + 212);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        {
          LODWORD(v29) = v21[48];
          LODWORD(v28) = *v21;
          LODWORD(v27) = *(_DWORD *)(v19 + v20 + 212);
          LODWORD(v26) = k;
          Template_pdqqq(v19, &Dxgk_PowerPStateComponent, v11, this, v26, v27, v28, v29);
        }
        for ( m = 0; m < *v21; ++m )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          {
            LODWORD(v28) = v21[m + 1];
            LODWORD(v27) = m;
            LODWORD(v26) = v22;
            Template_pqqq((unsigned int)v28, &Dxgk_PowerPState, v11, this, v26, v27, v28);
          }
        }
      }
    }
  }
  DpiBrightnessReportState(*((struct _DEVICE_OBJECT **)this + 22));
  v24 = (DXGADAPTER **)*((_QWORD *)this + 247);
  if ( v24 )
    ADAPTER_DISPLAY::ReportState(v24);
  v25 = (ADAPTER_RENDER *)*((_QWORD *)this + 248);
  if ( v25 )
    ADAPTER_RENDER::ReportState(v25);
  DXGADAPTER::ReportNodeMetadata(this);
}
