/*
 * XREFs of ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C0087BB8
 * Callers:
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C00A3AC4 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00DC1A0 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     DmmIsSourceInActiveVidPnTopology @ 0x1C0088C5C (DmmIsSourceInActiveVidPnTopology.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::IsWindowVisible(ADAPTER_DISPLAY *this, const struct tagRECT *const a2)
{
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  unsigned int v8; // esi
  unsigned int v10; // ebp
  __int64 v11; // r8
  __int64 v12; // rsi
  LONG left; // edx
  LONG right; // ecx
  LONG top; // edx
  LONG bottom; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax

  v3 = *((_QWORD *)this + 2);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v3 + 160) )
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v3 + 144));
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v18 + 24) = 1499LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a2->left == a2->right )
    return 0LL;
  if ( a2->top == a2->bottom )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(ProcessDxgProcess + 72) + 224LL))(0LL) )
    return 0LL;
  v8 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( *(_DWORD *)(1016LL * v8 + *((_QWORD *)this + 14) + 680) != 1
         || !(unsigned __int8)DmmIsSourceInActiveVidPnTopology(*((_QWORD *)this + 2), v8) )
    {
      if ( ++v8 >= *((_DWORD *)this + 20) )
        goto LABEL_13;
    }
    return 0LL;
  }
LABEL_13:
  v10 = 0;
  if ( !*((_DWORD *)this + 20) )
    return 261LL;
  while ( 1 )
  {
    v11 = *((_QWORD *)this + 14);
    v12 = 1016LL * v10;
    left = *(_DWORD *)(v12 + v11 + 628);
    right = *(_DWORD *)(v12 + v11 + 636);
    if ( a2->left > left )
      left = a2->left;
    if ( a2->right < right )
      right = a2->right;
    if ( left < right )
    {
      top = *(_DWORD *)(v12 + v11 + 632);
      bottom = *(_DWORD *)(v12 + v11 + 640);
      if ( a2->top > top )
        top = a2->top;
      if ( a2->bottom < bottom )
        bottom = a2->bottom;
      if ( top < bottom )
      {
        if ( !*(_DWORD *)(v12 + v11 + 680)
          && (unsigned __int8)DmmIsSourceInActiveVidPnTopology(*((_QWORD *)this + 2), v10) )
        {
          return 0LL;
        }
        v17 = *((_QWORD *)this + 14);
        if ( a2->left >= *(_DWORD *)(v12 + v17 + 628)
          && a2->right <= *(_DWORD *)(v12 + v17 + 636)
          && a2->top >= *(_DWORD *)(v12 + v17 + 632)
          && a2->bottom <= *(_DWORD *)(v12 + v17 + 640) )
        {
          break;
        }
      }
    }
    if ( ++v10 >= *((_DWORD *)this + 20) )
      return 261LL;
  }
  return 3221225473LL;
}
