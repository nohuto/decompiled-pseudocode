/*
 * XREFs of ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C007D080
 * Callers:
 *     <none>
 * Callees:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C009B338 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C009B810 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C009B960 (MSGSQMAddMessage.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall xxxWrapRealDefWindowProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v9; // rbp
  __int64 v10; // rsi
  int v12; // edi
  int v13; // r11d
  unsigned int v14; // edx
  int v15; // r8d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int16 v18; // ax
  __int64 v19; // rdx

  v6 = a2;
  if ( a1 != (struct tagWND *)-1LL )
  {
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2);
    v9 = CurrentProcessWin32Process;
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL);
    if ( (struct tagPROCESSINFO *)v10 == CurrentProcessWin32Process )
      return xxxRealDefWindowProc(a1);
    if ( v6 != 717 )
    {
      if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                           CurrentProcessWin32Process,
                           (struct tagPROCESSINFO *)v10,
                           a1,
                           v6,
                           a3,
                           a4,
                           1) )
        return xxxRealDefWindowProc(a1);
      v12 = IsMessageAlwaysAllowedAcrossIL(v6);
      if ( v12 )
      {
        v18 = 2;
      }
      else
      {
        if ( v6 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
        {
          MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, a4, 1, 2);
          return xxxRealDefWindowProc(a1);
        }
        if ( *(_QWORD *)v10 == gpepCSRSS )
        {
          v14 = 0x2000;
          v15 = v13;
        }
        else
        {
          v14 = *(_DWORD *)(v10 + 824);
          v15 = *(_DWORD *)(v10 + 828);
        }
        v16 = *((_QWORD *)v9 + 103);
        if ( !gbEnforceUIPI
          || (unsigned int)v16 > v14
          || (_DWORD)v16 == v14 && ((v17 = HIDWORD(v16), (_DWORD)v17 == v15) || v15 == -1 || (_DWORD)v17 == -1) )
        {
          v12 = 1;
          v18 = gbEnforceUIPI != 0 ? 5 : 1;
        }
        else
        {
          v12 = v13;
          if ( v6 == 793 )
          {
            v19 = *((_QWORD *)a1 + 2);
            if ( *(struct tagWND **)(v19 + 1248) == a1 && *(_QWORD *)(v19 + 384) == *(_QWORD *)(gptiCurrent + 384LL) )
              return xxxRealDefWindowProc(a1);
          }
          EtwTraceUIPIMsgError(v9, v10, v6, a3, a4);
          UserSetLastError(5LL);
          v18 = 0;
        }
      }
      MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, a4, 1, v18);
      if ( v12 )
        return xxxRealDefWindowProc(a1);
    }
    if ( *(_QWORD *)v9 == gpepCSRSS )
      return xxxRealDefWindowProc(a1);
  }
  UserSetLastError(5LL);
  return 0LL;
}
