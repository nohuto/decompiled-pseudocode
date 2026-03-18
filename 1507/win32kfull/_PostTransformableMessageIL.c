/*
 * XREFs of _PostTransformableMessageIL @ 0x1C004E7D4
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C004D864 (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C004E3B8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C004E9A0 (_PostTransformableMessage.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00E247C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00E274C (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00E27BC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ValidateDDEConvPair @ 0x1C01EBAF4 (ValidateDDEConvPair.c)
 */

__int64 __fastcall PostTransformableMessageIL(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  int v9; // r9d
  __int64 v10; // rbp
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v12; // r15
  int v14; // edi
  unsigned int v15; // edx
  int v16; // r8d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int16 v19; // ax
  int v20; // eax
  int v21; // r8d
  __int64 v22; // rdx

  if ( a2 - 992 <= 8 )
  {
    v20 = ValidateDDEConvPair(a3, a1, 1LL);
    v9 = a5;
    if ( v20 )
      v9 = 1;
  }
  else
  {
    v9 = a5;
  }
  if ( a2 == 274 && a3 == 61488 && (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    v9 = v21;
  if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  if ( v9 )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  v12 = CurrentProcessWin32Process;
  if ( (struct tagPROCESSINFO *)v10 == CurrentProcessWin32Process )
    return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
  if ( a2 != 717 )
  {
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                         CurrentProcessWin32Process,
                         (struct tagPROCESSINFO *)v10,
                         a1,
                         a2,
                         a3,
                         a4,
                         0) )
      return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
    v14 = IsMessageAlwaysAllowedAcrossIL(a2);
    if ( v14 )
    {
      v19 = 2;
    }
    else
    {
      if ( a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
      {
        MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, 2);
        return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
      }
      if ( *(_QWORD *)v10 == gpepCSRSS )
      {
        v15 = 0x2000;
        v16 = 0;
      }
      else
      {
        v15 = *(_DWORD *)(v10 + 832);
        v16 = *(_DWORD *)(v10 + 836);
      }
      v17 = *((_QWORD *)v12 + 104);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v17 <= v15 )
        {
          if ( (_DWORD)v17 != v15 || (v18 = HIDWORD(v17), (_DWORD)v18 != v16) && (_DWORD)v18 != -1 && v16 != -1 )
          {
            v14 = 0;
            if ( a2 == 793 )
            {
              v22 = *((_QWORD *)a1 + 2);
              if ( *(struct tagWND **)(v22 + 1232) == a1 && *(_QWORD *)(v22 + 392) == *(_QWORD *)(gptiCurrent + 392LL) )
                return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
            }
            EtwTraceUIPIMsgError(v12, v10, a2, a3, a4);
            UserSetLastError(5LL);
            MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, 0);
LABEL_20:
            if ( !v14 )
              return 0LL;
            return PostTransformableMessage((_DWORD)a1, a2, a3, a4, 1);
          }
        }
      }
      v14 = 1;
      v19 = gbEnforceUIPI != 0 ? 5 : 1;
    }
    MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, a4, 0, v19);
    goto LABEL_20;
  }
  return 0LL;
}
