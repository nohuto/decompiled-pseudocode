/*
 * XREFs of SetGestureConfigSettings @ 0x1401E4CF4
 * Callers:
 *     NtUserSetGestureConfig @ 0x1401E47F0 (NtUserSetGestureConfig.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     FreeWindowGCData @ 0x1401C0EF0 (FreeWindowGCData.c)
 *     ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x1401C11D8 (-FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1401E4E5C (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1401E5074 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z @ 0x1401E5108 (-SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1401E5364 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall SetGestureConfigSettings(struct tagWND *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rsi
  _BYTE *v9; // rax
  unsigned __int64 v10; // rdx
  struct tagVWPLGESTUREDATA *GCData; // rsi
  __int64 v12; // r8
  int v13; // r9d
  int v15; // ecx
  int v16; // ecx
  void *v17; // rbx
  int v18; // [rsp+20h] [rbp-18h]

  if ( !(unsigned int)SortGestureConfigArray((struct tagGESTURECONFIG *)a4, a3) )
    goto LABEL_10;
  if ( !GetGCData(a1) )
  {
    v7 = Win32AllocPoolWithQuotaZInit(24LL, 1684501333LL);
    v8 = (_QWORD *)v7;
    if ( !v7
      || (*(_QWORD *)(v7 + 8) = 0LL, v9 = (_BYTE *)Win32AllocPoolWithQuotaZInit(1LL, 1835168597LL), (*v8 = v9) == 0LL) )
    {
      v15 = 14;
LABEL_9:
      UserSetLastError(v15);
      return 0LL;
    }
    *v9 = 0;
    v8[2] = 0LL;
    VWPLAddBase(
      (struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 856LL),
      (unsigned __int64)v8,
      a1,
      5u,
      v18);
  }
  GCData = GetGCData(a1);
  if ( *(_DWORD *)a4 )
    return _StoreGestureConfig(a1, a3, (struct tagGESTURECONFIG *)a4);
  if ( !*(_DWORD *)(a4 + 4) && !*(_DWORD *)(a4 + 8) )
    FreeWindowGCData(a1, v10, v12, v13);
  v16 = *(_DWORD *)(a4 + 4);
  if ( (v16 | *(_DWORD *)(a4 + 8)) != 1 || v16 == *(_DWORD *)(a4 + 8) )
  {
LABEL_10:
    v15 = 87;
    goto LABEL_9;
  }
  *((_DWORD *)GCData + 2) = v16;
  *((_DWORD *)GCData + 3) = *(_DWORD *)(a4 + 8);
  **(_BYTE **)GCData = 0;
  v17 = (void *)*((_QWORD *)GCData + 2);
  if ( v17 )
  {
    FreeWindowGCList(*((struct tagGESTURECONFIGLIST ***)GCData + 2));
    Win32FreePool(v17);
    *((_QWORD *)GCData + 2) = 0LL;
  }
  return 1LL;
}
