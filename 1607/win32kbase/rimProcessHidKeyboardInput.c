/*
 * XREFs of rimProcessHidKeyboardInput @ 0x1C00DF3B4
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     rimHidP_GetUsages @ 0x1C00D2F40 (rimHidP_GetUsages.c)
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C00DF274 (rimInvalidateHidKeyboardDeviceKeys.c)
 *     rimReportHidKeyboardInputData @ 0x1C00DF59C (rimReportHidKeyboardInputData.c)
 */

void __fastcall rimProcessHidKeyboardInput(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int Usages; // eax
  int v6; // edi
  int v7; // edx
  unsigned __int16 v8; // r9
  __int64 v9; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 488);
  if ( *(_DWORD *)(v2 + 356) )
  {
    PoLatencySensitivityHint(1LL);
    *(_DWORD *)(v2 + 356) = 0;
  }
  memset((void *)v2, 0, 0x28uLL);
  memset((void *)(v2 + 44), 0, 0x28uLL);
  memset((void *)(v2 + 84), 0, 0x28uLL);
  *(_BYTE *)(a1 + 712) = 1;
  *(_DWORD *)(v2 + 40) = 20;
  Usages = rimHidP_GetUsages(
             HidP_Input,
             7u,
             0,
             (unsigned __int16 *)v2,
             (unsigned int *)(v2 + 40),
             *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL),
             *(char **)(*(_QWORD *)(a2 + 464) + 24LL),
             *(_DWORD *)(a2 + 264));
  v6 = Usages;
  if ( Usages < 0 )
  {
    v8 = 15;
    LODWORD(v9) = Usages;
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
    v8 = 14;
    LODWORD(v9) = v6;
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    3u,
    v8,
    (__int64)&WPP_fb05c5d40ba937655f1b253c69785164_Traceguids,
    v9);
LABEL_12:
  if ( v6 < 0 )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      2,
      16,
      (__int64)&WPP_fb05c5d40ba937655f1b253c69785164_Traceguids);
    rimInvalidateHidKeyboardDeviceKeys(a1, a2, v2, 1);
  }
}
