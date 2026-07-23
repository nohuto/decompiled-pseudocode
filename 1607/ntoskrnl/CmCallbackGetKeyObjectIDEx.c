/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x140402E14
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackShared @ 0x140431E30 (CmpLockKcbStackShared.c)
 *     CmpConstructNameWithStatus @ 0x1404365E0 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, int a5)
{
  __int64 v9; // rdi
  int started; // ebx
  _WORD v12[20]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  memset(v12, 0, 0x20uLL);
  v13 = 0LL;
  v12[1] = -1;
  if ( !a2 || *(_DWORD *)a2 != 1803104306 || !a1 || a5 )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD *)(a2 + 8);
  if ( a3 )
    *a3 = v9;
  if ( !a4 )
    return 0;
  if ( (v9 & 1) != 0 )
    return (unsigned int)-1073741811;
  CmpLockRegistry();
  started = CmpStartKcbStackForTopLayerKcb(v12, v9);
  if ( started >= 0 )
  {
    CmpLockKcbStackShared(v12);
    if ( *(_QWORD *)(v9 + 72) && (int)CmpConstructNameWithStatus(v9, &v13) >= 0 )
    {
      started = 0;
      *a4 = v13;
    }
    else
    {
      started = -1073741670;
    }
    CmpUnlockKcbStack(v12);
  }
  CmpUnlockRegistry();
  return (unsigned int)started;
}
