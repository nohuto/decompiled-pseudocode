/*
 * XREFs of CmpPostApcRunDown @ 0x140606B60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     CmpFreePostBlock @ 0x1403E38A8 (CmpFreePostBlock.c)
 *     CmpFreeSubordinatePost @ 0x1403E3BA4 (CmpFreeSubordinatePost.c)
 */

__int64 __fastcall CmpPostApcRunDown(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  _QWORD *v2; // rbx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rdx
  struct _KEVENT *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v2 = *(_QWORD **)(a1 + 72);
  v3 = (_QWORD *)v2[8];
  if ( (_QWORD *)v3[13] == v3 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v3);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v4 = v2[8];
  if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
  {
    **(_DWORD **)(v4 + 104) = 267;
    *(_DWORD *)(*(_QWORD *)(v2[8] + 104LL) + 4LL) = 0;
  }
  else
  {
    **(_DWORD **)(v4 + 104) = 267;
    *(_QWORD *)(*(_QWORD *)(v2[8] + 104LL) + 8LL) = 0LL;
  }
  v5 = (_QWORD *)v2[8];
  if ( (_QWORD *)v5[13] == v5 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v5);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v6 = *(struct _KEVENT **)(v2[8] + 8LL);
  if ( v6 )
  {
    KeSetEvent(v6, 0, 0);
    ObfDereferenceObject(*(PVOID *)(v2[8] + 8LL));
  }
  v7 = v2[2];
  v8 = (_QWORD *)v2[3];
  if ( *(_QWORD **)(v7 + 8) != v2 + 2 || (_QWORD *)*v8 != v2 + 2 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  CmpFreeSubordinatePost((__int64)v2);
  CmpFreePostBlock((__int64)v2);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
