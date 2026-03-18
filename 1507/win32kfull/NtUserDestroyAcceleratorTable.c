/*
 * XREFs of NtUserDestroyAcceleratorTable @ 0x1C00FC970
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserDestroyAcceleratorTable(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdi

  EnterCrit(1LL);
  v2 = HMValidateHandle(a1, 8);
  v5 = 0;
  v6 = v2;
  if ( v2 )
  {
    if ( (unsigned int)HMMarkObjectDestroy(v2) )
      HMFreeObject(v6);
    v5 = 1;
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
