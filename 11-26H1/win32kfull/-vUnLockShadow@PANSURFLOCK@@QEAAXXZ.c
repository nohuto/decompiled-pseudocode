/*
 * XREFs of ?vUnLockShadow@PANSURFLOCK@@QEAAXXZ @ 0x140323594
 * Callers:
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x140288790 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x140296454 (--1PANSURFLOCK@@QEAA@XZ.c)
 * Callees:
 *     ?ShadowUnLock@@YAXPEAU_PANDEV@@@Z @ 0x140322870 (-ShadowUnLock@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall PANSURFLOCK::vUnLockShadow(PANSURFLOCK *this, __int64 a2)
{
  _BYTE *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp

  v3 = (char *)this + 104;
  v4 = 760LL;
  do
  {
    v5 = 9LL;
    do
    {
      if ( *v3 == 1 )
      {
        EngReleaseSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 2) + v4));
        *v3 = 0;
      }
      v4 -= 8LL;
      --v3;
      --v5;
    }
    while ( v5 );
  }
  while ( v4 >= 184 );
  ShadowUnLock(*((struct _PANDEV **)this + 2), a2);
}
