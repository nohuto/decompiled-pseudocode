/*
 * XREFs of NtUserDestroyAcceleratorTable @ 0x140231E00
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 */

__int64 __fastcall NtUserDestroyAcceleratorTable(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi

  EnterCrit(0LL, 0LL);
  v2 = HMValidateHandleWithDescriptor(a1, 8u);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    if ( (unsigned int)HMMarkObjectDestroy(v2) )
      HMFreeObject(v5);
    v4 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
