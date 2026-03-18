/*
 * XREFs of DecVisWindows @ 0x1C007A068
 * Callers:
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     SetMinimize @ 0x1C00C9468 (SetMinimize.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C0055F24 (_GetWindowCompositionInfo.c)
 *     FVisCountable @ 0x1C007A3B0 (FVisCountable.c)
 */

__int64 __fastcall DecVisWindows(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  _DWORD v6[14]; // [rsp+20h] [rbp-38h] BYREF

  result = FVisCountable(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 376);
    --*(_DWORD *)(v3 + 776);
    --*(_DWORD *)(v4 + 976);
    if ( (unsigned int)GetWindowCompositionInfo(a1, (__int64)v6) && ((v6[0] & 0x400) != 0 || (v6[0] & 0x800) != 0) )
      --*(_DWORD *)(*(_QWORD *)(v3 + 376) + 980LL);
    v5 = *(_QWORD *)(v3 + 376);
    result = *(unsigned int *)(v5 + 980);
    if ( *(_DWORD *)(v5 + 976) <= (unsigned int)result && (*(_BYTE *)(v5 + 778) & 1) != 0 )
    {
      GreDxgkSetProcessStatus(v5, 2LL);
      result = *(_QWORD *)(v3 + 376);
      *(_DWORD *)(result + 776) &= ~0x10000u;
    }
  }
  return result;
}
