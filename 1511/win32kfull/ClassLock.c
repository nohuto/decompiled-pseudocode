/*
 * XREFs of ClassLock @ 0x1C00F1844
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C0103C44 (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E8530 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C022A494 (xxxRecreateSmallIcons.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 */

__int64 __fastcall ClassLock(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  __int64 v4; // rdx
  int v5; // eax
  int v7; // r8d

  v2 = *(_DWORD *)(a1 + 80);
  if ( v2 < 131068 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    v5 = v2 + 1;
    *(_DWORD *)(a1 + 80) = v5;
    if ( a1 == v4 )
    {
LABEL_3:
      PushW32ThreadLock(a1, a2, (__int64)ClassUnlockWorker);
      return 1LL;
    }
    v7 = *(_DWORD *)(v4 + 80);
    if ( v7 < 131068 )
    {
      *(_DWORD *)(v4 + 80) = v7 + 1;
      goto LABEL_3;
    }
    *(_DWORD *)(a1 + 80) = v5 - 1;
  }
  return 0LL;
}
