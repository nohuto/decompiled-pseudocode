/*
 * XREFs of NtUserSendEventMessage @ 0x1C000DDC0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSendEventMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rcx
  _QWORD v17[4]; // [rsp+40h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v11 = 0;
  if ( v8 )
  {
    v10 = (*(_WORD *)(v8 + 66) & 0x3FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v17;
      v17[1] = v8;
      ++*(_DWORD *)(v8 + 8);
      if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
      {
        if ( ((a2 - 624) & 0xFFFFFFFC) == 0 && a2 != 626 )
        {
          v11 = PostEventMessageEx(
                  *(_QWORD *)(v12 + 16),
                  *(_QWORD *)(*(_QWORD *)(v12 + 16) + 384LL),
                  9,
                  v12,
                  a2,
                  a3,
                  a4,
                  0LL);
LABEL_7:
          ThreadUnlock1(v14, v13);
          goto LABEL_8;
        }
        v16 = 87LL;
      }
      else
      {
        v16 = 5LL;
      }
      UserSetLastError(v16);
      goto LABEL_7;
    }
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
