/*
 * XREFs of ?GetContentType@CWindowNode@@UEAAKXZ @ 0x180123750
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContentType@CVisual@@UEAAKXZ @ 0x1801202A0 (-GetContentType@CVisual@@UEAAKXZ.c)
 */

__int64 __fastcall CWindowNode::GetContentType(CWindowNode *this)
{
  int v1; // ebx
  BOOL v2; // edi

  v1 = 1;
  if ( !*((_QWORD *)this + 141) )
  {
    v1 = 0;
    if ( *((_QWORD *)this + 144) )
      v1 = 2;
  }
  v2 = *((_QWORD *)this + 124) != 0LL;
  return ((v2 | (v1 << 8)) << 8) | (unsigned int)CVisual::GetContentType(this);
}
