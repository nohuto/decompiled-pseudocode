/*
 * XREFs of ClassLock @ 0x140150FE0
 * Callers:
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x140150B00 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxSetClassData @ 0x140151060 (xxxSetClassData.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxRecreateSmallIcons @ 0x1402608E0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall ClassLock(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdx
  struct tagTHREADINFO *v6; // rax
  __int64 result; // rax
  int v8; // eax

  v3 = *(unsigned int *)(a1 + 72);
  if ( (int)v3 < 131068 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 72) = v3 + 1;
    if ( a1 == v5 )
    {
LABEL_3:
      v6 = PtiCurrent(v3);
      *a2 = *((_QWORD *)v6 + 47);
      *((_QWORD *)v6 + 47) = a2;
      a2[2] = ClassUnlockWorker;
      result = 1LL;
      a2[1] = a1;
      return result;
    }
    v8 = *(_DWORD *)(v5 + 72);
    if ( v8 < 131068 )
    {
      *(_DWORD *)(v5 + 72) = v8 + 1;
      goto LABEL_3;
    }
    *(_DWORD *)(a1 + 72) = v3;
  }
  return 0LL;
}
