/*
 * XREFs of NtUserSendEventMessage @ 0x1C0008E30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 */

__int64 __fastcall NtUserSendEventMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v14; // rcx
  _QWORD v15[4]; // [rsp+40h] [rbp-28h] BYREF

  EnterCrit(1LL);
  v8 = ValidateHwnd(a1);
  v11 = 0;
  if ( v8 )
  {
    v10 = (*(_WORD *)(v8 + 66) & 0x3FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      v15[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v15;
      v15[1] = v8;
      ++*(_DWORD *)(v8 + 8);
      if ( (unsigned int)IAMThreadAccessGranted() )
      {
        if ( ((a2 - 624) & 0xFFFFFFFC) == 0 && a2 != 626 )
        {
          v11 = PostEventMessageEx(
                  *(_QWORD *)(v12 + 16),
                  *(_QWORD *)(*(_QWORD *)(v12 + 16) + 392LL),
                  9,
                  v12,
                  a2,
                  a3,
                  a4,
                  0LL);
LABEL_7:
          ThreadUnlock1();
          goto LABEL_8;
        }
        v14 = 87LL;
      }
      else
      {
        v14 = 5LL;
      }
      UserSetLastError(v14);
      goto LABEL_7;
    }
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
