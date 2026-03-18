/*
 * XREFs of xxxUpdateShadowZorder @ 0x1C02242A0
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0054A5C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     SetWindowGroupBand @ 0x1C0076224 (SetWindowGroupBand.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00F15DC (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall xxxUpdateShadowZorder(__int64 a1)
{
  struct tagSHADOW *result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  char v5; // cl
  int v6; // ecx
  unsigned int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

  result = FindShadow((struct tagWND *)a1);
  if ( !result )
    return result;
  v4 = *((_QWORD *)result + 1);
  v5 = *(_BYTE *)(v3 + 48) & 8;
  if ( v5 && (*(_BYTE *)(v4 + 48) & 8) == 0 )
  {
    v6 = 1;
LABEL_8:
    SetOrClrWF(v6, *((_DWORD **)result + 1), 0x808u, 1);
    goto LABEL_9;
  }
  if ( !v5 && (*(_BYTE *)(v4 + 48) & 8) != 0 )
  {
    v6 = 0;
    goto LABEL_8;
  }
LABEL_9:
  v7 = *(_DWORD *)(a1 + 304);
  if ( *(_DWORD *)(v4 + 304) != v7 )
    SetWindowGroupBand((struct tagWND *)v4, v7, 0);
  v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v10;
  v10[1] = v4;
  ++*(_DWORD *)(v4 + 8);
  xxxSetWindowPos((struct tagWND *)v4, a1, 0, 0, 0, 0, 19);
  return (struct tagSHADOW *)ThreadUnlock1(v9, v8);
}
