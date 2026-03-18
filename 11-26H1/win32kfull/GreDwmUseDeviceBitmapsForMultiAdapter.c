/*
 * XREFs of GreDwmUseDeviceBitmapsForMultiAdapter @ 0x14017EC88
 * Callers:
 *     ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z @ 0x140180280 (-MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDwmUseDeviceBitmapsForMultiAdapter(Gre::Base *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  v1 = 0;
  if ( *((_QWORD *)Gre::Base::Globals(a1) + 28) )
    return *(unsigned int *)(*(_QWORD *)(W32GetSessionState(v3, v2, v4) + 96) + 100LL);
  return v1;
}
