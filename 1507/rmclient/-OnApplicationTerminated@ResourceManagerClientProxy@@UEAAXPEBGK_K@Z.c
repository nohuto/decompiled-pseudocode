/*
 * XREFs of ?OnApplicationTerminated@ResourceManagerClientProxy@@UEAAXPEBGK_K@Z @ 0x180013890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

void __fastcall ResourceManagerClientProxy::OnApplicationTerminated(
        ResourceManagerClientProxy *this,
        const unsigned __int16 *a2,
        int a3,
        __int64 a4)
{
  (*(void (__fastcall **)(ResourceManagerClientProxy *, const unsigned __int16 *, _QWORD, _QWORD, int, __int64))(*(_QWORD *)this + 208LL))(
    this,
    a2,
    0LL,
    0LL,
    a3,
    a4);
}
