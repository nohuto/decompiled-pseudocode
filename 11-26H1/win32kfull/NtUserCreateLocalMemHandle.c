/*
 * XREFs of NtUserCreateLocalMemHandle @ 0x140208270
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserCreateLocalMemHandle(__int64 a1, volatile void *a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  unsigned int v9; // eax

  EnterCrit(0LL, 0LL);
  v7 = HMValidateHandleWithDescriptor(a1, 6u);
  v8 = 0;
  if ( v7 )
  {
    if ( a2 )
      ProbeForWrite(a2, a3, 1u);
    if ( a4 )
      RtlWriteULongToUser(a4, *(unsigned int *)(v7 + 16));
    if ( a2 && (v9 = *(_DWORD *)(v7 + 16), a3 >= v9) )
      memmove((void *)a2, (const void *)(v7 + 20), v9);
    else
      v8 = -1073741789;
  }
  else
  {
    v8 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
