/*
 * XREFs of ?RemoveWindowNode@CGdiSpriteBitmap@@UEAAXPEAVCWindowNode@@@Z @ 0x18002AD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::RemoveWindowNode(CGdiSpriteBitmap *this, struct CWindowNode *a2)
{
  __int64 v2; // r10
  unsigned int v4; // ecx
  __int64 i; // r8
  __int64 v6; // rcx

  v2 = *((_QWORD *)this + 53);
  v4 = *((_DWORD *)this + 112);
  for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
  {
    if ( a2 == *(struct CWindowNode **)(v2 + 8 * i) )
      break;
  }
  if ( (unsigned int)i < v4 )
  {
    if ( (unsigned int)i < v4 - 1 )
    {
      do
      {
        v6 = (unsigned int)i;
        LODWORD(i) = i + 1;
        *(_QWORD *)(v2 + 8 * v6) = *(_QWORD *)(v2 + 8LL * (unsigned int)i);
      }
      while ( (unsigned int)i < *((_DWORD *)this + 112) - 1 );
    }
    --*((_DWORD *)this + 112);
  }
}
