/*
 * XREFs of CmpPostApc @ 0x1403E354C
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     CmpFreePostBlock @ 0x1403E38A8 (CmpFreePostBlock.c)
 *     CmpFreeSubordinatePost @ 0x1403E3BA4 (CmpFreeSubordinatePost.c)
 */

__int64 __fastcall CmpPostApc(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  bool v8; // zf
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // rdx
  struct _KEVENT *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdx

  v6 = *(_QWORD **)a5;
  v7 = *(_QWORD **)(*(_QWORD *)a5 + 64LL);
  if ( (_QWORD *)v7[13] == v7 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v7);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] == 0;
  **(_DWORD **)(v6[8] + 104LL) = *a4;
  v9 = *(_QWORD *)(v6[8] + 104LL);
  if ( v8 )
    *(_QWORD *)(v9 + 8) = 0LL;
  else
    *(_DWORD *)(v9 + 4) = 0;
  v10 = (_QWORD *)v6[8];
  if ( (_QWORD *)v10[13] == v10 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v10);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  *(_QWORD *)a4 = *(_QWORD *)(v6[8] + 104LL);
  v11 = (_QWORD *)v6[8];
  if ( (_QWORD *)v11[13] == v11 + 13 )
  {
    DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v11);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v12 = *(struct _KEVENT **)(v6[8] + 8LL);
  if ( v12 )
  {
    KeSetEvent(v12, 0, 0);
    ObfDereferenceObject(*(PVOID *)(v6[8] + 8LL));
  }
  v13 = v6[2];
  v14 = (_QWORD *)v6[3];
  if ( *(_QWORD **)(v13 + 8) != v6 + 2 || (_QWORD *)*v14 != v6 + 2 )
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  CmpFreeSubordinatePost(v6);
  return CmpFreePostBlock(v6);
}
