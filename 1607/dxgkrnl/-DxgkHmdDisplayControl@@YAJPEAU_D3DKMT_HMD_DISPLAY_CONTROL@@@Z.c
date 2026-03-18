/*
 * XREFs of ?DxgkHmdDisplayControl@@YAJPEAU_D3DKMT_HMD_DISPLAY_CONTROL@@@Z @ 0x1C014DD80
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01789D8 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 */

__int64 __fastcall DxgkHmdDisplayControl(struct _D3DKMT_HMD_DISPLAY_CONTROL *a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax

  v1 = DxgkHMDDisplayControlInternal(a1, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), (char *)a1 + 16);
  v3 = v1;
  if ( v1 < 0 )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = v3;
    WdLogEvent5_WdError(v4);
  }
  return (unsigned int)v3;
}
