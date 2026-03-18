/*
 * XREFs of ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C009B154
 * Callers:
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C0097078 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00C70DC (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C0097CD8 (DmmIsSourceInActiveVidPnTopology.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::IsWindowVisible(DXGADAPTER **this, const struct tagRECT *const a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v6; // esi
  __int64 v8; // rax
  unsigned int v9; // ebp
  DXGADAPTER *v10; // r8
  __int64 v11; // rsi
  LONG left; // edx
  LONG right; // ecx
  LONG top; // edx
  LONG bottom; // ecx
  DXGADAPTER *v16; // rcx

  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v8 + 24) = 11737LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a2->left == a2->right )
    return 0LL;
  if ( a2->top == a2->bottom )
    return 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
    return 0LL;
  v6 = 0;
  if ( *((_DWORD *)this + 26) )
  {
    while ( *((_DWORD *)this[17] + 254 * v6 + 170) != 1 || !DmmIsSourceInActiveVidPnTopology((__int64)this[2], v6) )
    {
      if ( ++v6 >= *((_DWORD *)this + 26) )
        goto LABEL_11;
    }
    return 0LL;
  }
LABEL_11:
  v9 = 0;
  if ( !*((_DWORD *)this + 26) )
    return 261LL;
  while ( 1 )
  {
    v10 = this[17];
    v11 = 1016LL * v9;
    left = *(_DWORD *)((char *)v10 + v11 + 628);
    right = *(_DWORD *)((char *)v10 + v11 + 636);
    if ( a2->left > left )
      left = a2->left;
    if ( a2->right < right )
      right = a2->right;
    if ( left < right )
    {
      top = *(_DWORD *)((char *)v10 + v11 + 632);
      bottom = *(_DWORD *)((char *)v10 + v11 + 640);
      if ( a2->top > top )
        top = a2->top;
      if ( a2->bottom < bottom )
        bottom = a2->bottom;
      if ( top < bottom )
      {
        if ( !*(_DWORD *)((char *)v10 + v11 + 680) && DmmIsSourceInActiveVidPnTopology((__int64)this[2], v9) )
          return 0LL;
        v16 = this[17];
        if ( a2->left >= *(_DWORD *)((char *)v16 + v11 + 628)
          && a2->right <= *(_DWORD *)((char *)v16 + v11 + 636)
          && a2->top >= *(_DWORD *)((char *)v16 + v11 + 632)
          && a2->bottom <= *(_DWORD *)((char *)v16 + v11 + 640) )
        {
          break;
        }
      }
    }
    if ( ++v9 >= *((_DWORD *)this + 26) )
      return 261LL;
  }
  return 3221225473LL;
}
