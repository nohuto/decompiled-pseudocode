/*
 * XREFs of TppSetupNextWait @ 0x18000B9E4
 * Callers:
 *     TppWaitCompletion @ 0x1800097A0 (TppWaitCompletion.c)
 *     TpSetWaitEx @ 0x18000A960 (TpSetWaitEx.c)
 * Callees:
 *     TppSetTimer @ 0x18000B34C (TppSetTimer.c)
 *     ZwAssociateWaitCompletionPacket @ 0x1800A6230 (ZwAssociateWaitCompletionPacket.c)
 *     TppRaiseHandleStatus @ 0x1800F55A8 (TppRaiseHandleStatus.c)
 */

__int64 __fastcall TppSetupNextWait(__int64 a1, void *a2, __int64 *a3)
{
  _RTL_SRWLOCK *v3; // rbp
  NTSTATUS v7; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  int v12; // eax
  BOOLEAN v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_RTL_SRWLOCK **)(a1 + 136);
  *(_QWORD *)(a1 + 352) = a2;
  v7 = ZwAssociateWaitCompletionPacket(*(HANDLE *)(a1 + 360), v3[8].Ptr, a2, (PVOID)(a1 + 384), (PVOID)a1, 0, 0LL, &v13);
  if ( v7 < 0 )
  {
    *(_QWORD *)(a1 + 352) = 0LL;
    TppRaiseHandleStatus((unsigned int)v7, a2, a1);
    return 0LL;
  }
  else if ( !a3 || v13 )
  {
    return 1LL;
  }
  else
  {
    v9 = *a3;
    if ( *a3 >= 0 )
    {
      if ( v9 > MEMORY[0x7FFE0014] )
        v10 = v9 - MEMORY[0x7FFE0014];
      else
        v10 = 0LL;
    }
    else
    {
      v10 = -v9;
    }
    v11 = v10 >> 16;
    v12 = 300;
    if ( v11 <= 0x12C )
      v12 = v11;
    TppSetTimer(a1, v3 + 14, a3, 0, v12);
    return 2LL;
  }
}
