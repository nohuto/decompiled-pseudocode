/*
 * XREFs of ?bClipEngRenderingsToSurfaceBounds@SURFACE@@QEAA_NXZ @ 0x1C00B1E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall SURFACE::bClipEngRenderingsToSurfaceBounds(SURFACE *this)
{
  char v1; // dl
  __int64 v3; // rax

  v1 = 0;
  if ( !*((_WORD *)this + 50) )
    return 1;
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    return (*(_DWORD *)(v3 + 56) & 0x8000) == 0;
  return v1;
}
