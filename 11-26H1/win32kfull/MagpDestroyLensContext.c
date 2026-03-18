/*
 * XREFs of MagpDestroyLensContext @ 0x1401E7AA4
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 * Callees:
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z @ 0x1401EBE5C (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z.c)
 *     ChangeComposableCursor @ 0x14024CDC4 (ChangeComposableCursor.c)
 *     DwmAsyncMagnDestroy @ 0x140346C28 (DwmAsyncMagnDestroy.c)
 */

void __fastcall MagpDestroyLensContext(struct _MAG_THREAD_CONTEXT **a1, __int64 a2, struct tagWND *a3)
{
  struct _MAG_THREAD_CONTEXT *i; // rdi
  struct _MAG_LENS_CONTEXT *LensContext; // rax
  __int64 v5; // rdx
  struct _MAG_LENS_CONTEXT *v6; // rbx
  __int64 v7; // rcx
  struct _MAG_LENS_CONTEXT **v8; // rax
  int v9; // eax
  void *v10; // rax
  __int64 v11; // rax
  void *v12; // rcx
  void *v13; // rcx

  for ( i = *a1; i != (struct _MAG_THREAD_CONTEXT *)a1; i = *(struct _MAG_THREAD_CONTEXT **)i )
  {
    if ( a2 == *((_QWORD *)i + 2) )
    {
      if ( i )
      {
        LensContext = MagpFindLensContext(i, a3);
        v6 = LensContext;
        if ( LensContext )
        {
          v7 = *(_QWORD *)LensContext;
          if ( *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)LensContext + 8LL) != LensContext
            || (v8 = (struct _MAG_LENS_CONTEXT **)*((_QWORD *)LensContext + 1), *v8 != v6) )
          {
            __fastfail(3u);
          }
          *v8 = (struct _MAG_LENS_CONTEXT *)v7;
          *(_QWORD *)(v7 + 8) = v8;
          v9 = *((_DWORD *)v6 + 4);
          if ( (v9 & 0x40) != 0 )
          {
            ChangeComposableCursor(0LL);
            *((_DWORD *)v6 + 4) &= ~0x40u;
            v9 = *((_DWORD *)v6 + 4);
          }
          if ( (v9 & 0x20) == 0 )
          {
            v10 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)i + 2) + 488LL) + 8LL), v5);
            DwmAsyncMagnDestroy(v10);
          }
          v11 = *((_QWORD *)v6 + 3);
          if ( v11 && v11 != -1 )
            HMAssignmentUnlock((char *)v6 + 24);
          v12 = (void *)*((_QWORD *)v6 + 29);
          if ( v12 )
            Win32FreePool(v12);
          v13 = (void *)*((_QWORD *)v6 + 32);
          if ( v13 )
            Win32FreePool(v13);
          Win32FreePool(v6);
        }
      }
      return;
    }
  }
}
