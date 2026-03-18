/*
 * XREFs of ?UpdatesReceived@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180142AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CCompositionSurfaceBitmap::UpdatesReceived(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *((_QWORD *)this + 51);
  v2 = 0;
  if ( v1 && (*(_BYTE *)(v1 + 280) || **(_DWORD **)(v1 + 288)) )
    return 1;
  return v2;
}
