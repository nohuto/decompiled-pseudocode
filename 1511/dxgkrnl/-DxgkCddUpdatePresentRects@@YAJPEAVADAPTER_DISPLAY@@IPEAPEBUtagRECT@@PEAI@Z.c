/*
 * XREFs of ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C00C4BB0
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C008593C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 * Callees:
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C00075BC (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0007C34 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0099E74 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C0136DA0 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 */

__int64 __fastcall DxgkCddUpdatePresentRects(DXGADAPTER **this, unsigned int a2, struct tagRECT **a3, unsigned int *a4)
{
  __int64 v6; // rbx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  DXGADAPTER *v10; // r15
  LONG right; // ecx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  struct tagRECT *v13; // rax
  unsigned int v14; // [rsp+40h] [rbp-20h] BYREF
  struct tagRECT *v15; // [rsp+48h] [rbp-18h] BYREF
  struct tagRECT v16; // [rsp+50h] [rbp-10h] BYREF

  v15 = 0LL;
  v14 = -1;
  v6 = a2;
  CddInterface = ADAPTER_DISPLAY::GetCddInterface(this, a2);
  if ( CddInterface )
  {
    (*((void (__fastcall **)(_QWORD, struct tagRECT **, unsigned int *))CddInterface + 3))(
      *(_QWORD *)CddInterface,
      &v15,
      &v14);
    if ( v14 )
    {
      if ( v14 != -1 )
      {
        v10 = this[17];
        v16 = *ADAPTER_DISPLAY::GetDwmClipBox(this, v6);
        if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)this, v6, 1) - 2) & 0xFFFFFFFD) == 0 )
        {
          right = v16.right;
          v16.right = v16.bottom;
          v16.bottom = right;
        }
        CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)this, v6, 0);
        DxgkpConvertRects(
          *((_DWORD *)v10 + 254 * v6 + 161),
          *((_DWORD *)v10 + 254 * v6 + 162),
          CurrentOrientation,
          &v16,
          v14,
          v15,
          v15);
        v13 = v15;
        *a4 = v14;
        *a3 = v13;
      }
    }
    else
    {
      *a4 = 0;
    }
  }
  return 0LL;
}
