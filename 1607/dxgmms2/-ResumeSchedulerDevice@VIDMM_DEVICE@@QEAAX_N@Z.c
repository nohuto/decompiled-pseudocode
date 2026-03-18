/*
 * XREFs of ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C005C074
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005B9A0 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ResumeDevicesOnAllocationCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C009A210 (-ResumeDevicesOnAllocationCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x1C000F0F0 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VIDMM_DEVICE::ResumeSchedulerDevice(VIDMM_DEVICE *this, char a2)
{
  char v2; // r8
  __int64 v3; // rcx
  char v4; // al

  v2 = 1;
  if ( a2 )
  {
    v4 = *((_BYTE *)this + 50);
    if ( (v4 & 8) != 0 )
      *((_BYTE *)this + 50) = v4 & 0xF7;
    else
      v2 = 0;
  }
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    if ( v2 )
      VidSchSuspendResumeDevice(v3, 0, 0, 0);
  }
}
