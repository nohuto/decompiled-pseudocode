/*
 * XREFs of IncVisWindows @ 0x1C0082188
 * Callers:
 *     SetMinimize @ 0x1C003F74C (SetMinimize.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C00633C4 (_GetWindowCompositionInfo.c)
 *     FVisCountable @ 0x1C0082240 (FVisCountable.c)
 */

__int64 __fastcall IncVisWindows(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  _DWORD v7[14]; // [rsp+20h] [rbp-38h] BYREF

  result = FVisCountable();
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 384);
    ++*(_DWORD *)(v3 + 784);
    ++*(_DWORD *)(v4 + 992);
    if ( (unsigned int)GetWindowCompositionInfo(a1, (__int64)v7) && ((v7[0] & 0x400) != 0 || (v7[0] & 0x800) != 0) )
      ++*(_DWORD *)(*(_QWORD *)(v3 + 384) + 996LL);
    v6 = *(_QWORD *)(v3 + 384);
    result = *(unsigned int *)(v6 + 996);
    if ( *(_DWORD *)(v6 + 992) > (unsigned int)result && (*(_BYTE *)(v6 + 778) & 1) == 0 )
    {
      LOBYTE(v5) = 1;
      GreDxgkSetProcessStatus(v6, 2LL, v5);
      result = *(_QWORD *)(v3 + 384);
      *(_DWORD *)(result + 776) |= 0x10000u;
    }
    *(_DWORD *)(v3 + 1080) |= 0x40000000u;
  }
  return result;
}
