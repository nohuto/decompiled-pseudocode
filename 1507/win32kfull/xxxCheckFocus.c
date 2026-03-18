/*
 * XREFs of xxxCheckFocus @ 0x1C00880B8
 * Callers:
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0087F88 (xxxDW_SendDestroyMessages.c)
 * Callees:
 *     xxxSetFocus @ 0x1C0046624 (xxxSetFocus.c)
 *     zzzDestroyCaret @ 0x1C0077EF0 (zzzDestroyCaret.c)
 */

__int64 __fastcall xxxCheckFocus(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 72LL) )
  {
    if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40 )
    {
      v3 = *(_QWORD *)(a1 + 88);
      v6[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v6;
      v6[1] = v3;
      if ( v3 )
        ++*(_DWORD *)(v3 + 8);
      xxxSetFocus(*(struct tagWND **)(a1 + 88), 0LL);
      ThreadUnlock1(v5, v4);
    }
    else
    {
      xxxSetFocus(0LL, 0LL);
    }
  }
  result = *(_QWORD *)(gptiCurrent + 392LL);
  if ( a1 == *(_QWORD *)(result + 248) )
    return zzzDestroyCaret();
  return result;
}
