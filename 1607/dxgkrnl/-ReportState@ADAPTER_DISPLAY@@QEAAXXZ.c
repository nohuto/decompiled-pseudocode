/*
 * XREFs of ?ReportState@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C014837C
 * Callers:
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C0145F88 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006BF4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     Template_pqqqqqqqqqqqq @ 0x1C001EFAC (Template_pqqqqqqqqqqqq.c)
 */

void __fastcall ADAPTER_DISPLAY::ReportState(DXGADAPTER **this)
{
  unsigned int i; // ebx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-88h]
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]
  __int64 v8; // [rsp+38h] [rbp-70h]
  __int64 v9; // [rsp+40h] [rbp-68h]
  __int64 v10; // [rsp+48h] [rbp-60h]
  __int64 v11; // [rsp+50h] [rbp-58h]
  __int64 v12; // [rsp+58h] [rbp-50h]
  __int64 v13; // [rsp+60h] [rbp-48h]
  __int64 v14; // [rsp+68h] [rbp-40h]
  __int64 v15; // [rsp+70h] [rbp-38h]
  __int64 v16; // [rsp+78h] [rbp-30h]

  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(this, i);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
      {
        LODWORD(v16) = *((_DWORD *)DisplayModeInfo + 12);
        LODWORD(v15) = *((_DWORD *)DisplayModeInfo + 11);
        LODWORD(v14) = *((_BYTE *)DisplayModeInfo + 36) & 1;
        LODWORD(v13) = *((_DWORD *)DisplayModeInfo + 8);
        LODWORD(v12) = *((_DWORD *)DisplayModeInfo + 7);
        LODWORD(v11) = *((_DWORD *)DisplayModeInfo + 6);
        LODWORD(v10) = *((_DWORD *)DisplayModeInfo + 5);
        LODWORD(v9) = *((_DWORD *)DisplayModeInfo + 4);
        LODWORD(v8) = *((_DWORD *)DisplayModeInfo + 2);
        LODWORD(v7) = *((_DWORD *)DisplayModeInfo + 1);
        LODWORD(v6) = *(_DWORD *)DisplayModeInfo;
        LODWORD(v5) = i;
        Template_pqqqqqqqqqqqq(
          v4,
          (unsigned int)v16,
          (unsigned int)v15,
          this[2],
          v5,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
    }
  }
}
