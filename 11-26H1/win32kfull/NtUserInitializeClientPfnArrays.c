/*
 * XREFs of NtUserInitializeClientPfnArrays @ 0x1402544B0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeClientPfnArrays @ 0x1402545BC (InitializeClientPfnArrays.c)
 */

__int64 __fastcall NtUserInitializeClientPfnArrays(
        volatile void *Address,
        volatile void *a2,
        volatile void *a3,
        __int64 a4)
{
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-38h]

  EnterCrit(0LL, 0LL);
  if ( Address )
    ProbeForRead(Address, 1uLL, 4u);
  if ( a2 )
    ProbeForRead(a2, 1uLL, 4u);
  if ( a3 )
    ProbeForRead(a3, 1uLL, 4u);
  v10 = InitializeClientPfnArrays(Address, a2, a3, a4);
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
