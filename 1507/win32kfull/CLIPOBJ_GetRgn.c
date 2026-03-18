/*
 * XREFs of CLIPOBJ_GetRgn @ 0x1C025B370
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0016138 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 */

HANDLE __stdcall CLIPOBJ_GetRgn(CLIPOBJ *pco)
{
  struct RGNOBJ *p_top; // rdi
  struct HOBJ__ *v2; // rbx
  struct OBJECT *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  if ( pco )
    p_top = (struct RGNOBJ *)&pco[2].rclBounds.top;
  else
    p_top = 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v4);
  v2 = 0LL;
  if ( !v4 || !RGNOBJ::bCopy((RGNOBJ *)&v4, p_top) || (v2 = RGNOBJ::hrgnAssociate(&v4)) == 0LL )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
  if ( v5 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
  return v2;
}
