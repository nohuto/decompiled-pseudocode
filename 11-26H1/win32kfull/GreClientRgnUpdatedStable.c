/*
 * XREFs of GreClientRgnUpdatedStable @ 0x140013468
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400801CC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x1400B75A0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x140013E20 (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreClientRgnUpdatedStable(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx
  HSEMAPHORE v2; // rdi
  struct _GRETHREAD *v3; // rax

  v1 = Gre::Base::Globals(a1);
  v2 = (HSEMAPHORE)(*(_QWORD *)v1 + 832LL);
  GreAcquireSemaphoreInternal(v2);
  GrepAcquireLockValidate<14>();
  *((_DWORD *)v1 + 1099) = *((_DWORD *)v1 + 1098);
  if ( v2 )
  {
    EtwTraceGreLockReleaseSemaphore(L"VisRgnUniqueness", v2);
    v3 = GreGetCurrentThreadCrossSessionCheck();
    if ( v3 )
    {
      if ( (*((_BYTE *)v3 + 22))-- == 1 )
        *(_QWORD *)v3 &= ~0x4000uLL;
      if ( !*(_QWORD *)v3 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v2);
  }
}
