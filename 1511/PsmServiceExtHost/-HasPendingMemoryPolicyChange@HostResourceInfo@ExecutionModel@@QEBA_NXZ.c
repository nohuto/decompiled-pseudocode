/*
 * XREFs of ?HasPendingMemoryPolicyChange@HostResourceInfo@ExecutionModel@@QEBA_NXZ @ 0x18004DD30
 * Callers:
 *     ?HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z @ 0x18004DD50 (-HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z.c)
 *     ?QueuePendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@2@_K@Z @ 0x18004DEC4 (-QueuePendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExecutionModel::HostResourceInfo::HasPendingMemoryPolicyChange(
        ExecutionModel::HostResourceInfo *this)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax

  v1 = *((_QWORD *)this + 24);
  result = 0LL;
  if ( v1 )
    return *(_BYTE *)(v1 + 16) != 0;
  return result;
}
