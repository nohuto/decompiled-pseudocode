/*
 * XREFs of ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C013A180
 * Callers:
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C0138C9C (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     NtGdiFrameRgn @ 0x1C0139550 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0139B60 (NtGdiFillRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSyncBrushObj(struct BRUSH *a1)
{
  unsigned int v1; // edi
  _DWORD *v2; // rbx

  v1 = 1;
  if ( a1 )
  {
    v2 = (_DWORD *)*((_QWORD *)a1 + 7);
    if ( (*v2 & 4) != 0 )
    {
      if ( (unsigned int)GreSetSolidBrushLight(a1, (unsigned int)v2[1], *((_DWORD *)a1 + 12) & 0x400) )
        *v2 &= ~4u;
      else
        return 0;
    }
  }
  return v1;
}
