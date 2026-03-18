/*
 * XREFs of xxxEnableWndSBArrows @ 0x1401EFCBC
 * Callers:
 *     xxxSetScrollBar @ 0x140127BBC (xxxSetScrollBar.c)
 *     NtUserEnableScrollBar @ 0x1401EFBE0 (NtUserEnableScrollBar.c)
 * Callees:
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     IsVisible @ 0x140128400 (IsVisible.c)
 *     _InitPwSB @ 0x14018FBCC (_InitPwSB.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDDlll @ 0x1401F002C (WPP_RECORDER_AND_TRACE_SF_qDDlll.c)
 *     xxxDrawScrollBar @ 0x1401F0344 (xxxDrawScrollBar.c)
 */

__int64 __fastcall xxxEnableWndSBArrows(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  int v5; // r12d
  char v7; // r15
  bool v8; // r13
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  unsigned int *inited; // rbx
  unsigned int v13; // edi
  HDC DCEx; // rsi
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  unsigned int v19; // ecx
  __int64 v20; // rcx
  int v21; // [rsp+B0h] [rbp+8h]
  int v22; // [rsp+B8h] [rbp+10h]

  v22 = a2;
  v4 = 0;
  v5 = a3;
  v21 = 0;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_qDDlll(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69152));
  }
  inited = (unsigned int *)a1[19];
  if ( inited )
  {
    v13 = *inited;
  }
  else
  {
    if ( !v5 )
      return 0LL;
    v13 = 0;
    inited = (unsigned int *)InitPwSB(a1, a2, a3, a4);
    if ( !inited )
      return 0LL;
  }
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
  if ( DCEx )
  {
    if ( !v22 || v22 == 3 )
    {
      v19 = *inited & 0xFFFFFFFC;
      if ( v5 )
        v19 = v5 | *inited;
      *inited = v19;
      if ( v19 != v13 )
      {
        v13 = v19;
        v21 = 1;
        v20 = a1[5];
        if ( (*(_BYTE *)(v20 + 16) & 4) != 0 && (*(_BYTE *)(v20 + 31) & 0x20) == 0 )
        {
          if ( (unsigned int)IsVisible((__int64)a1) )
          {
            xxxDrawScrollBar((struct tagWND *)a1, DCEx, 0);
            if ( inited != (unsigned int *)a1[19] )
              goto LABEL_17;
          }
        }
      }
      if ( ((*(_BYTE *)inited ^ (unsigned __int8)v13) & 1) != 0 )
      {
        xxxWindowEvent(0x800Au, (struct tagWND *)a1, -6, 1, 1);
        if ( inited != (unsigned int *)a1[19] )
          goto LABEL_17;
      }
      if ( ((*(_BYTE *)inited ^ (unsigned __int8)v13) & 2) != 0 )
      {
        xxxWindowEvent(0x800Au, (struct tagWND *)a1, -6, 5, 1);
        if ( inited != (unsigned int *)a1[19] )
          goto LABEL_17;
      }
    }
    if ( ((v22 - 1) & 0xFFFFFFFD) == 0 )
    {
      v15 = *inited;
      v16 = v5 ? (4 * v5) | v15 : v15 & 0xFFFFFFF3;
      *inited = v16;
      if ( v16 != v13 )
      {
        v17 = a1[5];
        v21 = 1;
        if ( (*(_BYTE *)(v17 + 16) & 2) != 0 && (*(_BYTE *)(v17 + 31) & 0x20) == 0 )
        {
          if ( (unsigned int)IsVisible((__int64)a1) )
          {
            xxxDrawScrollBar((struct tagWND *)a1, DCEx, 1);
            if ( inited != (unsigned int *)a1[19] )
              goto LABEL_17;
          }
        }
        if ( ((*(_BYTE *)inited ^ (unsigned __int8)v13) & 4) != 0 )
        {
          xxxWindowEvent(0x800Au, (struct tagWND *)a1, -5, 1, 1);
          if ( inited != (unsigned int *)a1[19] )
            goto LABEL_17;
        }
        if ( ((*(_BYTE *)inited ^ (unsigned __int8)v13) & 8) != 0 )
          xxxWindowEvent(0x800Au, (struct tagWND *)a1, -5, 5, 1);
      }
    }
    v4 = v21;
LABEL_17:
    _ReleaseDC(DCEx);
    return v4;
  }
  return 0LL;
}
