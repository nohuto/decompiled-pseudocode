/*
 * XREFs of ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0007810
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00AE440 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00C3050 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 * Callees:
 *     DmmGetMostImportantActiveVidPnPathTargetsFromSource @ 0x1C00C4C40 (DmmGetMostImportantActiveVidPnPathTargetsFromSource.c)
 */

void __fastcall ADAPTER_DISPLAY::SetContentRect(ADAPTER_DISPLAY *this, __int64 a2, const struct tagRECT *const a3)
{
  __int64 v4; // r8

  *(struct tagRECT *)(1016LL * (unsigned int)a2 + *((_QWORD *)this + 17) + 628) = *a3;
  if ( *((_DWORD *)this + 38) && a3->right > a3->left )
  {
    if ( a3->left || a3->top )
    {
      if ( (_DWORD)a2 == *((_DWORD *)this + 36) )
        *((_DWORD *)this + 38) = 2;
    }
    else
    {
      *((_DWORD *)this + 38) = 1;
      if ( (_DWORD)a2 != *((_DWORD *)this + 36) )
      {
        *((_DWORD *)this + 36) = a2;
        v4 = (unsigned int)a2;
        LOBYTE(a2) = 1;
        if ( (int)DmmGetMostImportantActiveVidPnPathTargetsFromSource(*((_QWORD *)this + 2), a2, v4, (char *)this + 148) < 0 )
          *((_DWORD *)this + 38) = 3;
      }
    }
  }
}
