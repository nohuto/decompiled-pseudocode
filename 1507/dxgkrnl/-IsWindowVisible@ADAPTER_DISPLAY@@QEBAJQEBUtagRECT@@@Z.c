/*
 * XREFs of ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C00B62C8
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00B1D80 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C00B738C (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C00B6E28 (DmmIsSourceInActiveVidPnTopology.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::IsWindowVisible(
        ADAPTER_DISPLAY *this,
        const struct tagRECT *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // esi
  unsigned int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // rsi
  LONG left; // edx
  LONG right; // ecx
  LONG top; // edx
  LONG bottom; // ecx
  __int64 v19; // rcx
  __int64 v20; // rax

  v5 = *((_QWORD *)this + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 144) )
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 128));
  if ( !a2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v5, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = 11392LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( a2->left == a2->right )
    return 0LL;
  if ( a2->top == a2->bottom )
    return 0LL;
  Current = DXGPROCESS::GetCurrent(v5);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
    return 0LL;
  v10 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( *(_DWORD *)(1008LL * v10 + *((_QWORD *)this + 14) + 680) != 1
         || !(unsigned __int8)DmmIsSourceInActiveVidPnTopology(*((_QWORD *)this + 2), v10, v8, v9) )
    {
      if ( ++v10 >= *((_DWORD *)this + 20) )
        goto LABEL_13;
    }
    return 0LL;
  }
LABEL_13:
  v12 = 0;
  if ( !*((_DWORD *)this + 20) )
    return 261LL;
  while ( 1 )
  {
    v13 = *((_QWORD *)this + 14);
    v14 = 1008LL * v12;
    left = *(_DWORD *)(v14 + v13 + 628);
    right = *(_DWORD *)(v14 + v13 + 636);
    if ( a2->left > left )
      left = a2->left;
    if ( a2->right < right )
      right = a2->right;
    if ( left < right )
    {
      top = *(_DWORD *)(v14 + v13 + 632);
      bottom = *(_DWORD *)(v14 + v13 + 640);
      if ( a2->top > top )
        top = a2->top;
      if ( a2->bottom < bottom )
        bottom = a2->bottom;
      if ( top < bottom )
      {
        if ( !*(_DWORD *)(v14 + v13 + 680)
          && (unsigned __int8)DmmIsSourceInActiveVidPnTopology(*((_QWORD *)this + 2), v12, v13, v9) )
        {
          return 0LL;
        }
        v19 = *((_QWORD *)this + 14);
        if ( a2->left >= *(_DWORD *)(v14 + v19 + 628)
          && a2->right <= *(_DWORD *)(v14 + v19 + 636)
          && a2->top >= *(_DWORD *)(v14 + v19 + 632)
          && a2->bottom <= *(_DWORD *)(v14 + v19 + 640) )
        {
          break;
        }
      }
    }
    if ( ++v12 >= *((_DWORD *)this + 20) )
      return 261LL;
  }
  return 3221225473LL;
}
