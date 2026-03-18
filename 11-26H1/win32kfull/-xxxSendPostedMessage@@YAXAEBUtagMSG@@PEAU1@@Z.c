/*
 * XREFs of ?xxxSendPostedMessage@@YAXAEBUtagMSG@@PEAU1@@Z @ 0x140036ADC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 */

void __fastcall xxxSendPostedMessage(const struct tagMSG *a1, struct tagMSG *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  ULONG_PTR *v9; // rax
  ULONG_PTR v10; // rcx
  ULONG_PTR *v11; // rdx
  ULONG_PTR v12; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)a2 = *(_OWORD *)a1;
  *((_OWORD *)a2 + 1) = *((_OWORD *)a1 + 1);
  *((_OWORD *)a2 + 2) = *((_OWORD *)a1 + 2);
  v5 = ValidateHwnd(*(_QWORD *)a1);
  if ( v5 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v4);
    if ( CurrentThreadWin32Thread )
      v7 = *CurrentThreadWin32Thread;
    else
      v7 = 0LL;
    BugCheckParameter3[0] = *(_QWORD *)(v7 + 448);
    *(_QWORD *)(v7 + 448) = BugCheckParameter3;
    BugCheckParameter3[1] = v5;
    HMLockObject(v5);
    xxxSendMessage(v5, *((unsigned int *)a1 + 2), *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3));
    *((_QWORD *)a2 + 2) |= 0x80000000uLL;
    v9 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v8);
    if ( v9 )
      v10 = *v9;
    else
      v10 = 0LL;
    v11 = *(ULONG_PTR **)(v10 + 448);
    if ( v11 != BugCheckParameter3 )
      KeBugCheckEx(0x164u, 0x3BuLL, v10, (ULONG_PTR)BugCheckParameter3, 0LL);
    *(_QWORD *)(v10 + 448) = *v11;
    v12 = v11[1];
    if ( v12 )
      HMUnlockObject(v12);
  }
}
