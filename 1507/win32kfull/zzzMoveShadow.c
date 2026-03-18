/*
 * XREFs of zzzMoveShadow @ 0x1C0223B94
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00665FC (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x1C0058F3C (zzzUpdateLayeredWindow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0081990 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall zzzMoveShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v2; // rcx
  LONG v3; // edx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+50h] [rbp-28h] BYREF
  struct tagPOINT v8; // [rsp+88h] [rbp+10h] BYREF

  result = FindShadow(a1);
  if ( result )
  {
    v3 = *(_DWORD *)(v2 + 112);
    v4 = *((_QWORD *)result + 1);
    v8.y = *(_DWORD *)(v2 + 116);
    v8.x = v3;
    v7[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v7;
    v7[1] = v4;
    if ( v4 )
      ++*(_DWORD *)(v4 + 8);
    zzzUpdateLayeredWindow(*((__m128i **)result + 1), 0LL, &v8, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
    return (struct tagSHADOW *)ThreadUnlock1(v6, v5);
  }
  return result;
}
