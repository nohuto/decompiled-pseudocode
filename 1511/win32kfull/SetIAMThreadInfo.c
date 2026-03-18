/*
 * XREFs of SetIAMThreadInfo @ 0x1C01126C0
 * Callers:
 *     NtUserAcquireIAMKey @ 0x1C01125F0 (NtUserAcquireIAMKey.c)
 * Callees:
 *     <none>
 */

void __fastcall SetIAMThreadInfo(__int64 a1, __int64 a2)
{
  if ( a2 )
  {
    *(_QWORD *)(a1 + 280) = a2;
    *(_DWORD *)(a1 + 264) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 280) = 0LL;
  }
}
