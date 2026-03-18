/*
 * XREFs of NtUserShellHandwritingDelegateInput @ 0x14023E7A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x14005991C (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 */

__int64 __fastcall NtUserShellHandwritingDelegateInput(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // r8

  EnterCrit(0LL, 0LL);
  v6 = 0LL;
  if ( !a1 )
    goto LABEL_2;
  v11 = PtiFromThreadId(a1);
  if ( !v11 )
    goto LABEL_2;
  v12 = PtiCurrent(v10);
  if ( !v12 || v12 == (struct tagTHREADINFO *)v11 )
    goto LABEL_2;
  if ( *((_QWORD *)v12 + 187) == v11 && *(_QWORD *)(v11 + 1480) == a2 && *(_QWORD *)(v11 + 1472) == a3 )
  {
    v7 = 1242;
    goto LABEL_3;
  }
  if ( *((_QWORD *)v12 + 57) == *(_QWORD *)(v11 + 456)
    && !tagQ::AreMultipleThreadsAttached(*(tagQ **)(v11 + 464))
    && *(_QWORD *)(v13 + 488) == *(_QWORD *)(v11 + 488) )
  {
    if ( !*(_QWORD *)(v13 + 1480) && (*(_DWORD *)(v11 + 1360) & 0x2000LL) == 0 )
    {
      *(_QWORD *)(v13 + 1496) = v11;
      *(_DWORD *)(v13 + 1488) = 4096;
      *(_QWORD *)(v11 + 1360) |= 0x2000000000uLL;
      _InterlockedOr((volatile signed __int32 *)(v11 + 520), 0x40u);
      *(_QWORD *)(v11 + 1480) = a2;
      v6 = 1LL;
      *(_QWORD *)(v11 + 1472) = a3;
      goto LABEL_4;
    }
    v7 = 5;
  }
  else
  {
LABEL_2:
    v7 = 87;
  }
LABEL_3:
  UserSetLastError(v7);
LABEL_4:
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
