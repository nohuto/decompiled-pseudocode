/*
 * XREFs of xxxCheckFocus @ 0x1C0069950
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C0069824 (xxxDW_SendDestroyMessages.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 * Callees:
 *     xxxSetFocus @ 0x1C0080BD4 (xxxSetFocus.c)
 *     zzzDestroyCaret @ 0x1C00CA0D0 (zzzDestroyCaret.c)
 */

__int64 __fastcall xxxCheckFocus(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) )
  {
    if ( (*(_BYTE *)(a1 + 55) & 0xC0) == 0x40 )
    {
      v4 = *(_QWORD *)(a1 + 88);
      v7[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v7;
      v7[1] = v4;
      if ( v4 )
        ++*(_DWORD *)(v4 + 8);
      xxxSetFocus(*(struct tagWND **)(a1 + 88));
      ThreadUnlock1(v6, v5);
    }
    else
    {
      xxxSetFocus(0LL);
    }
  }
  result = *(_QWORD *)(gptiCurrent + 384LL);
  if ( a1 == *(_QWORD *)(result + 248) )
    return zzzDestroyCaret(a1, a2);
  return result;
}
