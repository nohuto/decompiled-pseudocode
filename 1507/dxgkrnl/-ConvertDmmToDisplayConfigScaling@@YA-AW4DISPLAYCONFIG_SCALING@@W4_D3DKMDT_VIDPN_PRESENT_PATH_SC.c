/*
 * XREFs of ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C005FFC0
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C005FFDC (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0064FA0 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDmmToDisplayConfigScaling(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  if ( (int)a1 <= 0 )
    goto LABEL_5;
  if ( (int)a1 <= 5 )
    return (unsigned int)a1;
  if ( (_DWORD)a1 != 255 )
  {
LABEL_5:
    if ( (_DWORD)a1 == 253 )
    {
      v5 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v5 + 24) = 1060LL;
      WdLogEvent5_WdAssertion(v5);
    }
  }
  return 128LL;
}
