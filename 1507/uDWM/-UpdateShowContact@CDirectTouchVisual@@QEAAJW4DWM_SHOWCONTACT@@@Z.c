/*
 * XREFs of ?UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z @ 0x1800820CC
 * Callers:
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x180005648 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001D130 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::UpdateShowContact(__int64 a1, int a2)
{
  __int64 v2; // rax
  float v3; // xmm0_4
  double v4; // xmm1_8

  *(_DWORD *)(a1 + 352) = a2;
  if ( *(_BYTE *)(a1 + 384) )
    goto LABEL_8;
  if ( !*(_QWORD *)(a1 + 360) && !*(_QWORD *)(a1 + 376) )
  {
    if ( (a2 & 8) != 0 )
    {
      v2 = *(_QWORD *)(a1 + 368);
      v3 = FLOAT_1_0;
      if ( v2 )
        v3 = *(double *)(v2 + 48);
      v4 = v3;
      goto LABEL_9;
    }
LABEL_8:
    v4 = 0.0;
LABEL_9:
    CVisual::SetOpacity((CVisual *)a1, v4);
  }
  return 0LL;
}
