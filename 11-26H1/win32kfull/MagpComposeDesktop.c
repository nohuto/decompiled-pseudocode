/*
 * XREFs of MagpComposeDesktop @ 0x140203264
 * Callers:
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 * Callees:
 *     DwmAsyncMagnSetWindowFilterList @ 0x1401EBE80 (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x14028D1F8 (DwmAsyncMagnSetWindowSharedTextures.c)
 *     DwmAsyncMagnCreate @ 0x140346B50 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x140346CD8 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x140346F4C (DwmAsyncMagnSetWindowColorTransform.c)
 */

void __fastcall MagpComposeDesktop(_QWORD *a1, __int64 a2)
{
  void *v4; // rax
  _QWORD *i; // rdi
  int *j; // rbx
  __int64 v7; // rdx
  void *v8; // rax
  __int64 v9; // rdx
  void *v10; // rax
  __int64 *v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // r12
  __int64 v14; // rbp
  void *v15; // rax
  void *v16; // rax

  if ( *(_QWORD *)(a2 + 240) )
  {
    v4 = (void *)ReferenceDwmApiPort(a1, a2);
    DwmAsyncMagnSetDesktopColorTransform(v4);
  }
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    for ( j = (int *)i[5]; j != (int *)(i + 5); j = *(int **)j )
    {
      v7 = *((_QWORD *)j + 3);
      if ( v7 != -1 )
      {
        v8 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8), v7);
        DwmAsyncMagnCreate(v8);
        if ( (j[4] & 4) != 0 )
        {
          v10 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8), v9);
          DwmAsyncMagnSetWindowColorTransform(v10);
        }
        if ( (j[4] & 8) != 0 )
        {
          v11 = **(__int64 ***)(a2 + 8);
          v12 = (__int64 *)*((_QWORD *)j + 3);
          v13 = *v11;
          if ( v12 )
            v14 = *v12;
          else
            v14 = 0LL;
          v15 = (void *)ReferenceDwmApiPort(v11, v9);
          DwmAsyncMagnSetWindowFilterList(v15, v14, v13, j + 56);
        }
        if ( (j[4] & 0x10) != 0 )
        {
          v16 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8), v9);
          DwmAsyncMagnSetWindowSharedTextures(v16);
        }
      }
      j[4] &= ~0x20u;
    }
  }
}
