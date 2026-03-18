/*
 * XREFs of ?GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C012707C
 * Callers:
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 * Callees:
 *     FBadWindow @ 0x1C00AB590 (FBadWindow.c)
 */

struct tagWND *__fastcall GetImmersiveRealmFallbackWindow(const struct tagWND *a1)
{
  int v1; // eax
  struct tagWND *v2; // rbx

  if ( a1 )
  {
    v1 = *((_DWORD *)a1 + 76);
    if ( v1 == 2 || v1 == 16 )
      return 0LL;
  }
  v2 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 288LL);
  if ( (unsigned int)FBadWindow(v2) )
    return 0LL;
  else
    return v2;
}
