/*
 * XREFs of xxxHandleWindowPosChanged @ 0x1C010B33C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendSizeMessage @ 0x1C010B400 (xxxSendSizeMessage.c)
 */

__int64 __fastcall xxxHandleWindowPosChanged(struct tagWND *a1, __int64 a2)
{
  __int64 result; // rax
  char v5; // al
  unsigned __int64 v6; // rdx
  __int64 DesktopWindow; // rax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r10
  int v11; // [rsp+68h] [rbp+10h]
  int v12; // [rsp+6Ch] [rbp+14h]

  if ( (*(_DWORD *)(a2 + 32) & 0x1000) == 0 )
  {
    v11 = *((_DWORD *)a1 + 32);
    v12 = *((_DWORD *)a1 + 33);
    DesktopWindow = GetDesktopWindow((__int64)a1);
    if ( v10 != DesktopWindow )
    {
      v12 = v9 - *(_DWORD *)(v10 + 132);
      v11 = v8 - *(_DWORD *)(v10 + 128);
    }
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(
      a1,
      3LL,
      0LL,
      (unsigned __int16)v11 | ((unsigned __int16)v12 << 16),
      0,
      0,
      0LL,
      1,
      0);
  }
  result = *(_DWORD *)(a2 + 32) & 0x8800;
  if ( (_DWORD)result != 2048 )
  {
    v5 = *((_BYTE *)a1 + 55);
    if ( (v5 & 0x20) != 0 )
    {
      v6 = 1LL;
    }
    else if ( (v5 & 1) != 0 )
    {
      v6 = 2LL;
    }
    else
    {
      v6 = 0LL;
    }
    return xxxSendSizeMessage(a1, v6);
  }
  return result;
}
