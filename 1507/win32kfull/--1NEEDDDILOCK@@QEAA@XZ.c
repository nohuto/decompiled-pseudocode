/*
 * XREFs of ??1NEEDDDILOCK@@QEAA@XZ @ 0x1C01C14F8
 * Callers:
 *     GreGetDIBitsInternal @ 0x1C0016330 (GreGetDIBitsInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall NEEDDDILOCK::~NEEDDDILOCK(NEEDDDILOCK *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    GreUnlockDisplayDevice(*(_QWORD *)(v2 + 48));
    *(_QWORD *)this = 0LL;
  }
}
