/*
 * XREFs of ?DoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@KPEAH@Z @ 0x1C01F1204
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F0F68 (-CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F1414 (-FindOrAssignPrimary@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUta.c)
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01F16F8 (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 */

void __fastcall DoTPShellProcessing(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        unsigned int a4,
        int *a5)
{
  int v5; // esi
  struct tagPOINTERINFONODE *v6; // rax
  struct tagHID_POINTER_DEVICE_INFO *v11; // r8

  v5 = 0;
  v6 = 0LL;
  if ( *((_DWORD *)a2 + 330) != 6 )
  {
    v5 = 1;
    *((_DWORD *)a2 + 330) = 6;
    CancelInertiaState(a2, 1);
    v6 = FindOrAssignPrimary(a1, a2, v11);
    if ( !v6 )
      return;
    if ( (*((_DWORD *)a2 + 386) & 0x400) != 0 )
      *((_DWORD *)v6 + 17) |= 0x2000u;
  }
  GestureContactProcessing(a1, v6, a2, a3, v5, 1, a4, a5);
}
