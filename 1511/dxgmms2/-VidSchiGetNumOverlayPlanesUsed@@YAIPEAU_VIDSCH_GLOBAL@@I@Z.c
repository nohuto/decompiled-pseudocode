/*
 * XREFs of ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0023800
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C008C470 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetNumOverlayPlanesUsed(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 result; // rax
  _QWORD *v6; // rcx

  v2 = a2;
  v3 = *((unsigned int *)a1 + 31);
  v4 = *((_QWORD *)a1 + v2 + 324);
  result = 0LL;
  if ( (_DWORD)v3 )
  {
    v6 = (_QWORD *)(v4 + 24);
    do
    {
      if ( *v6 )
        result = (unsigned int)(result + 1);
      ++v6;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
