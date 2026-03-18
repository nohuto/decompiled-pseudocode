/*
 * XREFs of LinkNodeWriteStateToHardware @ 0x1C006DEF0
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C006C260 (IrqArbCommitAllocation.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     LinkNodepRunSrsAsync @ 0x1C004A76C (LinkNodepRunSrsAsync.c)
 */

__int64 LinkNodeWriteStateToHardware()
{
  __int64 i; // rcx
  _QWORD *v1; // rsi
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // rdi
  __int64 *v5; // rax
  volatile signed __int32 *v6; // rbx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+48h] [rbp-10h]

  for ( i = LinkNodeListHead - 56; ; i = *v1 - 56LL )
  {
    v1 = (_QWORD *)(i + 56);
    if ( &LinkNodeListHead == (__int64 *)(i + 56) )
      break;
    if ( *(_DWORD *)(i + 28) )
    {
      if ( !*(_DWORD *)(i + 24) || *(_DWORD *)(i + 36) != *(_DWORD *)(i + 32) )
      {
        v3 = *(_DWORD *)(i + 36);
        v4 = *(_QWORD *)(i + 552);
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v8 = -1073741275;
        result = LinkNodepRunSrsAsync(v4, v3, (__int64)AmlisuppCompletePassive, (__int64)&Event);
        if ( (_DWORD)result == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          result = v8;
        }
        if ( (int)result < 0 )
          return result;
      }
    }
    else if ( *(_DWORD *)(i + 24) )
    {
      v5 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(i + 552), 1397310559);
      v6 = (volatile signed __int32 *)v5;
      if ( v5 )
      {
        AMLIEvalNameSpaceObject(v5, 0LL, 0, 0LL);
        AMLIDereferenceHandleEx(v6);
      }
    }
  }
  return 0LL;
}
