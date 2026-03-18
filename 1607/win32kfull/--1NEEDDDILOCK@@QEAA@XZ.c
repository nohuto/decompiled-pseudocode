/*
 * XREFs of ??1NEEDDDILOCK@@QEAA@XZ @ 0x1C01BF5FC
 * Callers:
 *     GreGetDIBitsInternal @ 0x1C0049A50 (GreGetDIBitsInternal.c)
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
