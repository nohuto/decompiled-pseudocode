/*
 * XREFs of NtUserBuildHimcList @ 0x1402AFDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?_BuildHimcList@@YAIPEBUtagTHREADINFO@@IV?$UserModePointer@PEAUHIMC__@@@@@Z @ 0x1402A103C (-_BuildHimcList@@YAIPEBUtagTHREADINFO@@IV-$UserModePointer@PEAUHIMC__@@@@@Z.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserBuildHimcList(unsigned int a1, unsigned int a2, volatile void *a3, volatile void *a4)
{
  __int64 v6; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rsi
  unsigned int v15; // esi
  __int64 v16; // rcx
  _QWORD v18[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-28h]
  char v20; // [rsp+44h] [rbp-24h]
  _BYTE v21[24]; // [rsp+48h] [rbp-20h] BYREF

  v6 = a2;
  EnterLeaveCritShared::EnterLeaveCritShared(v18, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v21);
  if ( (**(_DWORD **)(W32GetUserSessionState(v9, v8) + 19904) & 4) != 0 )
  {
    if ( a1 )
    {
      if ( a1 == -1 )
      {
        v14 = 0LL;
      }
      else
      {
        v12 = PtiFromThreadId(a1);
        v14 = (struct tagTHREADINFO *)v12;
        if ( !v12 || !*(_QWORD *)(v12 + 488) )
        {
          v11 = -1073741811;
          goto LABEL_13;
        }
        if ( *(_QWORD *)(v12 + 488) != *((_QWORD *)PtiCurrent(v13) + 61) )
        {
          v11 = -1073741790;
          goto LABEL_13;
        }
      }
    }
    else
    {
      v14 = PtiCurrent(v10);
    }
    ProbeForWrite(a3, 8 * v6, 4u);
    ProbeForWrite(a4, 4uLL, 1u);
    v15 = _BuildHimcList((__int64)v14, v6, (__int64)a3);
    v11 = (unsigned int)v6 < v15 ? 0xC0000023 : 0;
    LODWORD(v18[0]) = v11;
    v18[3] = a4;
    v20 = 0;
    RtlWriteULongToUser(a4, v15);
    v19 = v15;
    v20 = 1;
    goto LABEL_13;
  }
  UserSetLastError(120);
  v11 = -1073741823;
LABEL_13:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v21);
  UserSessionSwitchLeaveCrit(v16);
  return v11;
}
