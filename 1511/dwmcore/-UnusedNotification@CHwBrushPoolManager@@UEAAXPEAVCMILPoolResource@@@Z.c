/*
 * XREFs of ?UnusedNotification@CHwBrushPoolManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180012AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CHwBrushPoolManager::UnusedNotification(CHwBrushPoolManager *this, struct _SLIST_ENTRY *a2)
{
  if ( a2 )
    a2 = (struct _SLIST_ENTRY *)((char *)a2 - 8);
  InterlockedPushEntrySList((PSLIST_HEADER)this + 1, a2 + 3);
  if ( _InterlockedDecrement((volatile signed __int32 *)this + 18) == -1 )
  {
    if ( this )
      (*(void (__fastcall **)(CHwBrushPoolManager *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
  }
}
