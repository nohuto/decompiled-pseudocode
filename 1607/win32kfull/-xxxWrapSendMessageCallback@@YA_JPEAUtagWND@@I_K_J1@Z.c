/*
 * XREFs of ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00AA5B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxSendMessageCallback @ 0x1C00AA6E0 (xxxSendMessageCallback.c)
 */

__int64 __fastcall xxxWrapSendMessageCallback(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  _BYTE *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v12[2]; // [rsp+58h] [rbp-40h]
  _QWORD v13[6]; // [rsp+68h] [rbp-30h] BYREF

  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  else
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (_BYTE *)a5;
    if ( a5 >= W32UserProbeAddress )
      v7 = (_BYTE *)W32UserProbeAddress;
    *v7 = *v7;
    v7[15] = v7[15];
    *(_OWORD *)v12 = *(_OWORD *)a5;
    if ( a1 != (struct tagWND *)-1LL )
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v13;
      v13[1] = a1;
      ++*((_DWORD *)a1 + 2);
    }
    v10 = (int)xxxSendMessageCallback(a1, a2, v12[0], v12[1], 1, 0, 1);
    if ( a1 != (struct tagWND *)-1LL )
      ThreadUnlock1(v9, v8);
    return v10;
  }
}
