/*
 * XREFs of DecVisWindows @ 0x1C0081EF0
 * Callers:
 *     SetMinimize @ 0x1C003F74C (SetMinimize.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C00633C4 (_GetWindowCompositionInfo.c)
 *     FVisCountable @ 0x1C0082240 (FVisCountable.c)
 */

__int64 __fastcall DecVisWindows(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  _DWORD v6[14]; // [rsp+20h] [rbp-38h] BYREF

  result = FVisCountable();
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 384);
    --*(_DWORD *)(v3 + 784);
    --*(_DWORD *)(v4 + 992);
    if ( (unsigned int)GetWindowCompositionInfo(a1, (__int64)v6) && ((v6[0] & 0x400) != 0 || (v6[0] & 0x800) != 0) )
      --*(_DWORD *)(*(_QWORD *)(v3 + 384) + 996LL);
    v5 = *(_QWORD *)(v3 + 384);
    result = *(unsigned int *)(v5 + 996);
    if ( *(_DWORD *)(v5 + 992) <= (unsigned int)result && (*(_BYTE *)(v5 + 778) & 1) != 0 )
    {
      GreDxgkSetProcessStatus(v5, 2LL, 0LL);
      result = *(_QWORD *)(v3 + 384);
      *(_DWORD *)(result + 776) &= ~0x10000u;
    }
  }
  return result;
}
