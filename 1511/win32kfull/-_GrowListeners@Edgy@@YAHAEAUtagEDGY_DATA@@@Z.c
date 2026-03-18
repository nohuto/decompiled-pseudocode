/*
 * XREFs of ?_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z @ 0x1C00FE1C0
 * Callers:
 *     ?_AllocListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z @ 0x1C00FE168 (-_AllocListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall Edgy::_GrowListeners(Edgy *this, struct tagEDGY_DATA *a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // esi
  void *v5; // rax
  const void *v6; // rdi
  size_t v7; // r8

  v3 = *(_DWORD *)this;
  if ( *((_DWORD *)this + 1) > v3 )
    return 1LL;
  if ( v3 <= 0x20 )
  {
    v4 = 2 * v3;
    if ( v3 + 4 > 2 * v3 )
      v4 = v3 + 4;
    v5 = (void *)Win32AllocPoolZInit(32LL * v4, 1684370261LL);
    if ( v5 )
    {
      v6 = (const void *)*((_QWORD *)this + 1);
      v7 = 32LL * *(unsigned int *)this;
      *((_QWORD *)this + 1) = v5;
      *((_DWORD *)this + 1) = v4;
      memmove(v5, v6, v7);
      if ( v6 )
        Win32FreePool(v6);
      return 1LL;
    }
  }
  return 0LL;
}
