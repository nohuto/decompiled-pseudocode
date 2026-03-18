/*
 * XREFs of xxxHandleWindowPosChanged @ 0x1C00E56F4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendSizeMessage @ 0x1C00E57B8 (xxxSendSizeMessage.c)
 */

__int64 __fastcall xxxHandleWindowPosChanged(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v5; // al
  __int64 v6; // rdx
  __int64 DesktopWindow; // rax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r10
  int v11; // [rsp+68h] [rbp+10h]
  int v12; // [rsp+6Ch] [rbp+14h]

  if ( (*(_DWORD *)(a2 + 32) & 0x1000) == 0 )
  {
    v11 = *(_DWORD *)(a1 + 128);
    v12 = *(_DWORD *)(a1 + 132);
    DesktopWindow = GetDesktopWindow(a1);
    if ( v10 != DesktopWindow )
    {
      v12 = v9 - *(_DWORD *)(v10 + 132);
      v11 = v8 - *(_DWORD *)(v10 + 128);
    }
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(
      (struct tagWND *)a1,
      3u,
      0LL,
      (struct _LARGE_STRING *)((unsigned __int16)v11 | ((unsigned __int16)v12 << 16)),
      0,
      0,
      0LL,
      1,
      0);
  }
  result = *(_DWORD *)(a2 + 32) & 0x8800;
  if ( (_DWORD)result != 2048 )
  {
    v5 = *(_BYTE *)(a1 + 55);
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
