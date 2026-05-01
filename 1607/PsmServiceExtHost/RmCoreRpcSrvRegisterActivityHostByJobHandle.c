/*
 * XREFs of RmCoreRpcSrvRegisterActivityHostByJobHandle @ 0x18002E600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RmCoreRpcSrvRegisterActivityHostByJobHandle(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  return RmpCoreApiRegisterActivityHostByJobHandle(a1, a2, a3, a4, a5, a6);
}
