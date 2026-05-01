/*
 * XREFs of RmCoreRpcSrvRegisterActivityHostByProcessHandle @ 0x18002E610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RmCoreRpcSrvRegisterActivityHostByProcessHandle(
        int a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  return RmpCoreApiRegisterActivityHostByProcessHandle(a1, a2, a3, a4, a5, a6);
}
