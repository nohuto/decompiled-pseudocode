/*
 * XREFs of rimProcessHidKeyboardInput @ 0x1C00CF7DC
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C006EE0C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     rimHidP_GetUsages @ 0x1C00C36E4 (rimHidP_GetUsages.c)
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C00CF69C (rimInvalidateHidKeyboardDeviceKeys.c)
 *     rimReportHidKeyboardInputData @ 0x1C00CF9BC (rimReportHidKeyboardInputData.c)
 */

void __fastcall rimProcessHidKeyboardInput(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int Usages; // eax
  int v6; // edi
  unsigned __int16 v7; // r9
  __int64 v8; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 424);
  if ( *(_DWORD *)(v2 + 356) )
  {
    PoLatencySensitivityHint(1LL);
    *(_DWORD *)(v2 + 356) = 0;
  }
  memset((void *)v2, 0, 0x28uLL);
  memset((void *)(v2 + 44), 0, 0x28uLL);
  memset((void *)(v2 + 84), 0, 0x28uLL);
  *(_BYTE *)(a1 + 728) = 1;
  *(_DWORD *)(v2 + 40) = 20;
  Usages = rimHidP_GetUsages(
             *(_QWORD *)(a2 + 400),
             7u,
             0,
             (unsigned __int16 *)v2,
             (unsigned int *)(v2 + 40),
             *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 400) + 16LL),
             *(char **)(*(_QWORD *)(a2 + 400) + 24LL),
             *(_DWORD *)(a2 + 264));
  v6 = Usages;
  if ( Usages < 0 )
  {
    v7 = 15;
    LODWORD(v8) = Usages;
  }
  else
  {
    if ( gpfnHidP_UsageListDifference )
      v6 = gpfnHidP_UsageListDifference(
             *(unsigned __int16 **)(v2 + 344),
             (unsigned __int16 *)v2,
             (unsigned __int16 *)(v2 + 84),
             (unsigned __int16 *)(v2 + 44),
             *(_DWORD *)(v2 + 352));
    else
      v6 = -1073741637;
    if ( v6 >= 0 )
    {
      rimReportHidKeyboardInputData(a1, a2, v2);
      goto LABEL_12;
    }
    v7 = 14;
    LODWORD(v8) = v6;
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    3u,
    v7,
    (__int64)&WPP_2bd8efd1c66f7dab78a0b28985ecab13_Traceguids,
    v8);
LABEL_12:
  if ( v6 < 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x10u,
      (__int64)&WPP_2bd8efd1c66f7dab78a0b28985ecab13_Traceguids);
    rimInvalidateHidKeyboardDeviceKeys(a1, a2, v2, 1);
  }
}
