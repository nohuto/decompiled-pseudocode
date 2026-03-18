/*
 * XREFs of DxgkSetHighPrecisionBrightness @ 0x1C016B4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C0025618 (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     ?HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ @ 0x1C0025648 (-HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ.c)
 *     ?Initialize@LPMDisplayCtrl@@QEAAJXZ @ 0x1C016AD48 (-Initialize@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C016B068 (-SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z.c)
 */

__int64 __fastcall DxgkSetHighPrecisionBrightness(
        struct _D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS *a1,
        struct _ERESOURCE *a2)
{
  LPMDisplayCtrl *v3; // rcx
  NTSTATUS v4; // ebx
  __int64 v5; // rdx
  LPMDisplayCtrl *v6; // rcx
  PERESOURCE Resource; // [rsp+30h] [rbp+8h] BYREF

  AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
  if ( a1 )
  {
    if ( FileObject && LPMDisplayCtrl::HasRegisteredInternalDisplay(v3) )
    {
      if ( *(_DWORD *)(v5 + 28) || (v4 = LPMDisplayCtrl::Initialize(v6), v4 >= 0) )
        v4 = LPMDisplayCtrl::SetCurrentBrightnessLevel(v6, a1);
    }
    else
    {
      v4 = -1073741661;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
