/*
 * XREFs of xxxCheckFocus @ 0x1C00715AC
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C007147C (xxxDW_SendDestroyMessages.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 * Callees:
 *     xxxSetFocus @ 0x1C00A8300 (xxxSetFocus.c)
 *     zzzDestroyCaret @ 0x1C0123130 (zzzDestroyCaret.c)
 */

__int64 __fastcall xxxCheckFocus(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL) )
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
  if ( a1 == *(_QWORD *)(result + 256) )
    return zzzDestroyCaret(a1, a2);
  return result;
}
