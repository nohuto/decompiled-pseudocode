/*
 * XREFs of xxxSendMenuSelect @ 0x1C0139480
 * Callers:
 *     xxxMNCancel @ 0x1C01385D8 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0138900 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0138CE0 (xxxMNSelectItem.c)
 *     xxxMNInvertItem @ 0x1C0139128 (xxxMNInvertItem.c)
 *     xxxMNDoubleClick @ 0x1C0216AA0 (xxxMNDoubleClick.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     xxxCallMsgFilter @ 0x1C01E75E4 (xxxCallMsgFilter.c)
 */

__int64 __fastcall xxxSendMenuSelect(struct tagWND *a1, __int64 *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 v9; // rcx
  int v10; // ebx
  unsigned int v11; // ebx
  int v12; // edx
  __int64 result; // rax
  unsigned int v14; // ebx
  _QWORD v15[6]; // [rsp+30h] [rbp-38h] BYREF

  v6 = a4;
  memset(v15, 0, sizeof(v15));
  if ( (int)v6 < 0 || *(_DWORD *)(a3 + 52) <= (unsigned int)v6 )
  {
    v11 = 0;
    if ( a3 == -1 )
      v11 = 0xFFFF;
    LOWORD(v12) = 0;
    a3 = 0LL;
    LODWORD(v6) = -1;
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 80) + 152 * v6;
    v10 = *(_DWORD *)v9 & 0x6B64 | *(_DWORD *)(v9 + 4) & 0x8B;
    if ( *(_QWORD *)(v9 + 16) )
      v10 |= 0x10u;
    v11 = v10 & 0xFFFF5FFF;
    LOWORD(v12) = v6;
    if ( (v11 & 0x10) == 0 )
      v12 = *(_DWORD *)(v9 + 8);
    if ( a5 )
    {
      if ( *(_DWORD *)(a5 + 20) == -1 )
        v11 |= 0x8000u;
      if ( (*(_DWORD *)(a5 + 8) & 2) != 0 )
        v11 |= 0x2000u;
    }
  }
  if ( a1 )
    v15[0] = *(_QWORD *)a1;
  else
    v15[0] = 0LL;
  LODWORD(v15[1]) = 287;
  v15[2] = (unsigned __int16)v12 | (unsigned __int64)((unsigned __int16)v11 << 16);
  if ( a3 )
    v15[3] = *(_QWORD *)a3;
  else
    v15[3] = 0LL;
  result = xxxCallMsgFilter(v15, 2LL);
  if ( !(_DWORD)result )
    result = xxxSendNotifyMessage(a1, 0x11Fu, v15[2], (struct _LARGE_STRING *)v15[3], 1);
  if ( a2 )
  {
    if ( a2 == (__int64 *)a1 )
      v14 = (v11 >> 12) | 0xFFFFFFFD;
    else
      v14 = -4;
    return xxxWindowEvent(0x8005u, a2, v14, (int)v6 + 1, 0);
  }
  return result;
}
