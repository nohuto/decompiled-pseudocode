/*
 * XREFs of VrpPostUnloadKey @ 0x140615BC8
 * Callers:
 *     CmpCallCallBacks @ 0x140452A00 (CmpCallCallBacks.c)
 *     RegistryCallback @ 0x140464700 (RegistryCallback.c)
 * Callees:
 *     EtwActivityIdControl @ 0x1400A0BF4 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     VrpUnlockJobContextExclusive @ 0x140613060 (VrpUnlockJobContextExclusive.c)
 *     VrpDestroyNamespaceNode @ 0x140614978 (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpPostUnloadKey(__int64 a1, ULONGLONG *a2)
{
  GUID ActivityId; // [rsp+20h] [rbp-28h] BYREF

  ActivityId.Data1 = 0;
  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  EtwActivityIdControl(3u, &ActivityId);
  if ( *(int *)(a1 + 8) >= 0 )
    VrpDestroyNamespaceNode(a2, *(_QWORD *)(a1 + 32));
  VrpUnlockJobContextExclusive((__int64)a2);
  return 0LL;
}
