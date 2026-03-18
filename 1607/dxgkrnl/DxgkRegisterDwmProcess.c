/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1C00DB650
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0004394 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkRegisterDwmProcess(__int64 a1)
{
  __int64 CurrentProcess; // rax
  __int64 v2; // rdx
  int v3; // edi
  __int64 v4; // rcx
  __int64 i; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rbx
  __int64 v9; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax

  CurrentProcess = PsGetCurrentProcess(a1);
  v3 = 0;
  *(_BYTE *)(PsGetProcessDxgProcess(CurrentProcess, v2) + 290) = 1;
  for ( i = 120LL; ; i += 8LL )
  {
    DXGGLOBAL::GetGlobal(v4);
    if ( *(_QWORD *)((char *)&DXGGLOBAL::m_pDxgmmsExport + i - 120) )
    {
      v6 = PsGetCurrentProcess(v4);
      ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(v6, v7);
      Global = DXGGLOBAL::GetGlobal(v9);
      result = VIDSCH_EXPORT::VidSchRegisterAsDwm(*(VIDSCH_EXPORT **)((char *)Global + i), ProcessDxgProcess);
      if ( (int)result < 0 )
        break;
    }
    if ( (unsigned int)++v3 >= 2 )
      return 0LL;
  }
  return result;
}
