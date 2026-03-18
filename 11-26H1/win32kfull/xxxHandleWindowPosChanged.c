/*
 * XREFs of xxxHandleWindowPosChanged @ 0x140224344
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     xxxSendSizeMessage @ 0x1401D8A40 (xxxSendSizeMessage.c)
 */

__int64 __fastcall xxxHandleWindowPosChanged(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v5; // cl
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 DesktopWindow; // rax
  int v9; // edx
  int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // [rsp+68h] [rbp+10h]
  int v14; // [rsp+6Ch] [rbp+14h]

  if ( (*(_DWORD *)(a2 + 32) & 0x1000) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 40);
    v13 = *(_DWORD *)(v7 + 104);
    v14 = *(_DWORD *)(v7 + 108);
    DesktopWindow = GetDesktopWindow(a1);
    if ( v11 != DesktopWindow )
    {
      v12 = *(_QWORD *)(v11 + 40);
      v14 = v9 - *(_DWORD *)(v12 + 108);
      v13 = v10 - *(_DWORD *)(v12 + 104);
    }
    xxxSendTransformableMessageTimeout(
      (struct tagTHREADINFO **)a1,
      3LL,
      0LL,
      (unsigned __int16)v13 | ((unsigned __int16)v14 << 16),
      0,
      0,
      0LL,
      1u,
      0);
  }
  result = *(_DWORD *)(a2 + 32) & 0x8800;
  if ( (_DWORD)result != 2048 )
  {
    v5 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
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
