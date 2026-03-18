/*
 * XREFs of ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180009660
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x180008B40 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800597C0 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CVisual::GetInputLuid(CVisual *this, _DWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  *a2 = 0;
  a2[1] = 0;
  v2 = *((_QWORD *)this + 50);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 72);
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 48);
    else
      v4 = 0LL;
    *(_QWORD *)a2 = v4;
  }
  return (struct _LUID)a2;
}
