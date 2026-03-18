/*
 * XREFs of DWP_SetHotKey @ 0x1C0087ED8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 * Callees:
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C0087F6C (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     HotKeyToWindow @ 0x1C02315B0 (HotKeyToWindow.c)
 */

__int64 __fastcall DWP_SetHotKey(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v5; // ebx
  __int64 v7; // rcx
  struct tagHOTKEYSTRUCT **v8; // r14
  struct tagHOTKEYSTRUCT *v9; // rsi
  struct tagWND *v11; // rax
  __int64 v12; // rax
  struct tagHOTKEYSTRUCT *v13; // rsi

  v4 = 0;
  v5 = a2;
  if ( (unsigned __int8)a2 <= 0x20u )
  {
    v7 = 0x108000200LL;
    if ( _bittest64(&v7, (unsigned int)a2) )
      return 0xFFFFFFFFLL;
  }
  if ( (_BYTE)a2 == 0xE7 )
    return 0xFFFFFFFFLL;
  if ( (*((_BYTE *)a1 + 55) & 0x40) != 0 )
    return 0LL;
  if ( (_DWORD)a2 )
  {
    v11 = (struct tagWND *)HotKeyToWindow((unsigned int)a2, a2, a3, a4);
    if ( v11 )
    {
      if ( v11 != a1 )
        v4 = 1;
    }
  }
  v8 = HotKeyHelper(a1);
  v9 = *v8;
  if ( *v8 )
  {
    if ( v5 )
    {
      *((_DWORD *)v9 + 2) = v5;
    }
    else
    {
      *v8 = (struct tagHOTKEYSTRUCT *)*((_QWORD *)v9 + 2);
      HMAssignmentUnlock(v9);
      Win32FreePool(v9);
      --gcHotKey;
    }
    return (unsigned int)(v4 != 0) + 1;
  }
  if ( !v5 )
    return 1LL;
  v12 = Win32AllocPool(24LL, 1802007381LL);
  v13 = (struct tagHOTKEYSTRUCT *)v12;
  if ( !v12 )
    return 0LL;
  *(_QWORD *)(v12 + 16) = 0LL;
  *(_QWORD *)v12 = 0LL;
  *(_DWORD *)(v12 + 8) = v5;
  HMAssignmentLock(v12, a1);
  ++gcHotKey;
  *v8 = v13;
  return (unsigned int)(v4 != 0) + 1;
}
