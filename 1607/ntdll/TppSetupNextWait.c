/*
 * XREFs of TppSetupNextWait @ 0x18003C714
 * Callers:
 *     TppWaitCompletion @ 0x18003AC60 (TppWaitCompletion.c)
 *     TpSetWaitEx @ 0x18003BD60 (TpSetWaitEx.c)
 * Callees:
 *     TppSetTimer @ 0x18003C388 (TppSetTimer.c)
 *     ZwAssociateWaitCompletionPacket @ 0x1800A7590 (ZwAssociateWaitCompletionPacket.c)
 *     TppRaiseHandleStatus @ 0x1800FE514 (TppRaiseHandleStatus.c)
 */

__int64 __fastcall TppSetupNextWait(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbp
  int v7; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  int v12; // eax
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[18];
  a1[45] = a2;
  v7 = ZwAssociateWaitCompletionPacket(a1[46], *(_QWORD *)(v3 + 64), a2, a1 + 49, a1, 0, 0LL, &v13);
  if ( v7 < 0 )
  {
    a1[45] = 0LL;
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
    TppSetTimer((__int64)a1, (char *)(v3 + 112), a3, 0LL, v12);
    return 2LL;
  }
}
