/*
 * XREFs of ?vUnLockShadow@PANSURFLOCK@@QEAAXXZ @ 0x1C028A3F8
 * Callers:
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x1C02879B0 (--1PANSURFLOCK@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall PANSURFLOCK::vUnLockShadow(PANSURFLOCK *this)
{
  __int64 i; // rbx
  __int64 v3; // rdi
  char *v4; // r14

  for ( i = 88LL; i >= 16; i -= 9LL )
  {
    v3 = 8LL;
    v4 = (char *)this + i;
    do
    {
      if ( v4[v3 + 8] == 1 )
      {
        EngReleaseSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 2) + 8 * (i + v3)));
        v4[v3 + 8] = 0;
      }
      --v3;
    }
    while ( v3 >= 0 );
  }
  ShadowUnLock(*((struct _PANDEV **)this + 2));
}
