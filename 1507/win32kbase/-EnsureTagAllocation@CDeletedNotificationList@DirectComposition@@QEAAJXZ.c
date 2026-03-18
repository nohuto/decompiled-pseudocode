/*
 * XREFs of ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C002946C
 * Callers:
 *     ?Initialize@CNotifiedDeletionResource@DirectComposition@@UEAAJPEAVCDeletedNotificationList@2@@Z @ 0x1C0029440 (-Initialize@CNotifiedDeletionResource@DirectComposition@@UEAAJPEAVCDeletedNotificationList@2@@Z.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0028CB8 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall DirectComposition::CDeletedNotificationList::EnsureTagAllocation(
        DirectComposition::CDeletedNotificationList *this)
{
  unsigned __int64 v1; // r8
  __int64 v3; // rcx
  int v4; // edi
  bool v5; // si
  __int64 v6; // rdx
  size_t v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((unsigned int *)this + 13);
  v3 = *((_QWORD *)this + 4);
  v4 = 0;
  if ( (_DWORD)v1 + *((_DWORD *)this + 14) != v3 )
  {
LABEL_5:
    ++*((_DWORD *)this + 14);
    return (unsigned int)v4;
  }
  v5 = v1 > v3 - (unsigned __int64)*((unsigned int *)this + 12);
  v4 = DirectComposition::CDCompDynamicArrayBase::Grow(this, 1LL, 0x626E4344u);
  if ( v4 >= 0 )
  {
    if ( v5 )
    {
      v6 = *((unsigned int *)this + 12);
      v7 = *((_QWORD *)this + 5);
      v8 = *((_QWORD *)this + 1);
      *((_DWORD *)this + 12) = v6 + 1;
      v9 = v7 * (*((_QWORD *)this + 4) - 1LL);
      Src = *(_QWORD *)(v6 * v7 + v8);
      memmove((void *)(v8 + v9), &Src, v7);
    }
    goto LABEL_5;
  }
  return (unsigned int)v4;
}
