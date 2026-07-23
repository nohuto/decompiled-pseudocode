/*
 * XREFs of ResCKeGetCacheIndices @ 0x1800FF240
 * Callers:
 *     ResCKeCreateRuntimeView @ 0x1800FF07C (ResCKeCreateRuntimeView.c)
 * Callees:
 *     ResCKeOpenRuntimeView @ 0x18005A004 (ResCKeOpenRuntimeView.c)
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     ResCKeGetBaseFolder @ 0x18005A648 (ResCKeGetBaseFolder.c)
 *     ResCGetRegistryLatestIndex @ 0x18005D658 (ResCGetRegistryLatestIndex.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ResCCloseRuntimeView @ 0x1800FEF5C (ResCCloseRuntimeView.c)
 *     ResCGetHighestCacheIndex @ 0x180104DDC (ResCGetHighestCacheIndex.c)
 *     ResCGetHighestConsecutiveCacheIndex @ 0x180104F74 (ResCGetHighestConsecutiveCacheIndex.c)
 */

__int64 __fastcall ResCKeGetCacheIndices(int *a1, int *a2)
{
  int v3; // ebx
  int v4; // ebp
  unsigned __int16 *v6; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  int v14[4]; // [rsp+20h] [rbp-258h] BYREF
  unsigned __int16 v15[264]; // [rsp+30h] [rbp-248h] BYREF

  v3 = -1;
  v14[0] = -1;
  v4 = -1;
  v6 = v15;
  if ( (unsigned int)ResCKeGetBaseFolder(v15) - 1 > 0x102 )
    v6 = 0LL;
  if ( a1 )
  {
    v8 = ResCKeOpenRuntimeView();
    if ( v8 )
    {
      v10 = v8[2];
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 24);
        if ( v11 )
          v3 = *(_DWORD *)(v11 + 12);
      }
      ResCCloseRuntimeView(v8);
    }
    if ( (unsigned int)ResCGetRegistryLatestIndex(v9, v14) && v14[0] >= 0 && v14[0] != v3 )
    {
      if ( v3 >= 0 )
      {
        v4 = v14[0];
      }
      else
      {
        v3 = v14[0];
        if ( v6 )
        {
          v12 = ResCGetHighestConsecutiveCacheIndex(v6, (unsigned int)v14[0]);
          if ( v12 >= 0 && v12 != v3 )
            v4 = v12;
        }
      }
    }
    if ( v3 < 0 )
    {
      if ( v6 )
      {
        v3 = ResCGetHighestCacheIndex(v6);
        if ( v3 == 9999 )
        {
          v13 = ResCGetHighestConsecutiveCacheIndex(v6, 9999LL);
          if ( v13 >= 0 )
            v3 = v13;
        }
      }
    }
    *a1 = v3;
    if ( a2 )
      *a2 = v4;
    return 1LL;
  }
  else
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(87);
    return 0LL;
  }
}
