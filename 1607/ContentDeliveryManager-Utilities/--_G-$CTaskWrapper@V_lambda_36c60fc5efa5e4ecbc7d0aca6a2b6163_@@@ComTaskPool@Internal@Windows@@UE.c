/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180044B40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete((void *)a1);
  return a1;
}
