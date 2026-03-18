/*
 * XREFs of ?ReturnResourceLifetimeTag@CNotifiedDeletionResource@DirectComposition@@UEAAXPEAVCDeletedNotificationList@2@@Z @ 0x1C00293B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

void __fastcall DirectComposition::CNotifiedDeletionResource::ReturnResourceLifetimeTag(
        DirectComposition::CNotifiedDeletionResource *this,
        struct DirectComposition::CDeletedNotificationList *a2)
{
  size_t v4; // r8
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 5) )
  {
    v4 = *((_QWORD *)a2 + 5);
    Src = *((_QWORD *)this + 5);
    memmove(
      (void *)(*((_QWORD *)a2 + 1)
             + v4
             * ((unsigned __int64)(unsigned int)(*((_DWORD *)a2 + 13) + *((_DWORD *)a2 + 12)) % *((_QWORD *)a2 + 4))),
      &Src,
      v4);
    ++*((_DWORD *)a2 + 13);
    --*((_DWORD *)a2 + 14);
    *((_QWORD *)this + 5) = 0LL;
  }
}
