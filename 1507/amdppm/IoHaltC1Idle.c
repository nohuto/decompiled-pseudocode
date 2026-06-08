/*
 * XREFs of IoHaltC1Idle @ 0x1C00025E0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0004A60 (ReadGenAddr.c)
 *     C1Halt @ 0x1C0005F00 (C1Halt.c)
 */

void __fastcall __noreturn IoHaltC1Idle(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( (_DWORD)a2 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  ReadGenAddr(a1, a2);
  C1Halt(v3, v2);
}
