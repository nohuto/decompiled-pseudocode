/*
 * XREFs of ?IsValid@CD3DResource@@UEBA_NXZ @ 0x1800C19B0
 * Callers:
 *     ?IsValid@CHwBitmapCache@@WIA@EBA_NXZ @ 0x1800C19C0 (-IsValid@CHwBitmapCache@@WIA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD3DResource::IsValid(CD3DResource *this)
{
  return *((_BYTE *)this + 77);
}
