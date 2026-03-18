/*
 * XREFs of ?LPMStart@LPMDisplayCtrl@@QEAAJXZ @ 0x1C016AF50
 * Callers:
 *     DxgkLPMDisplayControl @ 0x1C016B3D0 (DxgkLPMDisplayControl.c)
 *     LPMSetTTMDisplayPowerState @ 0x1C016B648 (LPMSetTTMDisplayPowerState.c)
 * Callees:
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C016AACC (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
 */

__int64 __fastcall LPMDisplayCtrl::LPMStart(LPMDisplayCtrl *this)
{
  PFILE_OBJECT *v1; // rbx
  NTSTATUS v3; // edi
  LPMDisplayCtrl *InputBuffer; // [rsp+50h] [rbp+8h] BYREF

  InputBuffer = this;
  v1 = FileObject;
  if ( !*((_DWORD *)FileObject + 8) )
    return 3221225659LL;
  LODWORD(InputBuffer) = 1;
  FileObject[15] = 0LL;
  v1[16] = 0LL;
  v3 = LPMDisplayCtrl::CallDriver(v1, 0x83212018, &InputBuffer, 4u, v1 + 15, 0x10u, 0LL);
  if ( v3 >= 0 )
  {
    *((_DWORD *)v1 + 9) = 1;
    qword_1C00573B8 = (__int64)PsGetCurrentProcessId();
  }
  return (unsigned int)v3;
}
