/*
 * XREFs of KiUmsRestoreUch @ 0x140170D80
 * Callers:
 *     KiParkUmsThread @ 0x1401DC090 (KiParkUmsThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUmsRestoreUch(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rsi
  __int64 i; // rcx

  _disable();
  v1 = (char *)KeGetCurrentThread()->InitialStack - 8;
  v2 = (_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  for ( i = *(_QWORD *)(a1 + 48) >> 3; i; --i )
    *v1-- = *v2--;
  return (*(__int64 (**)(void))(a1 + 56))();
}
