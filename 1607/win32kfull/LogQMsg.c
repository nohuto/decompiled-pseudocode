/*
 * XREFs of LogQMsg @ 0x1C01CB178
 * Callers:
 *     StoreQMessage @ 0x1C0080C10 (StoreQMessage.c)
 *     IPostQuitMessage @ 0x1C00ED274 (IPostQuitMessage.c)
 * Callees:
 *     ?EnsureQMsgLog@@YAHXZ @ 0x1C01CAD6C (-EnsureQMsgLog@@YAHXZ.c)
 *     InitLogQMsgEntry @ 0x1C01CB064 (InitLogQMsgEntry.c)
 */

__int64 __fastcall LogQMsg(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(unsigned int *)(a1 + 24);
  if ( (unsigned int)result >= dword_1C03267D4 && (unsigned int)result <= dword_1C03267D8 )
  {
    result = EnsureQMsgLog();
    if ( (_DWORD)result )
    {
      v3 = qword_1C03267F0 + 680LL * (unsigned int)dword_1C03267DC++;
      InitLogQMsgEntry(a1, v3);
      result = (unsigned int)dword_1C03267E0;
      if ( dword_1C03267DC >= (unsigned int)dword_1C03267E0 )
        dword_1C03267DC = 0;
      if ( dword_1C03267EC )
        __debugbreak();
    }
  }
  return result;
}
