/*
 * XREFs of ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00792B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall xxxWrapSendNotifyMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  else
  {
    if ( a1 != (struct tagWND *)-1LL )
    {
      v9[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v9;
      ++*((_DWORD *)a1 + 2);
      v9[1] = a1;
    }
    v7 = (int)xxxSendNotifyMessage(a1, a2, a3, a4, 0);
    if ( a1 != (struct tagWND *)-1LL )
      ThreadUnlock1(v6, v5);
    return v7;
  }
}
