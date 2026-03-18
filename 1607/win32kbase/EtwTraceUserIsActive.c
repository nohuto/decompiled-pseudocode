/*
 * XREFs of EtwTraceUserIsActive @ 0x1C0079D90
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqm @ 0x1C00B7D44 (Template_qqm.c)
 */

__int64 __fastcall EtwTraceUserIsActive(_DWORD *a1, LONGLONG *a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // r8
  __int64 v8; // rax
  int v9; // ebx
  LONGLONG TimeQuadPart; // rax
  LONGLONG v11; // [rsp+50h] [rbp+18h] BYREF

  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (unsigned int)(v6 - LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject)) < 0xEA60 )
    return 0LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = v6;
  if ( !gptiForeground )
  {
    v9 = 0;
    v11 = 0LL;
LABEL_13:
    TimeQuadPart = v11;
    goto LABEL_6;
  }
  v8 = *((_QWORD *)gptiForeground + 47);
  v9 = *(_DWORD *)(v8 + 56);
  if ( !*(_QWORD *)v8 )
  {
    v11 = 0LL;
    goto LABEL_13;
  }
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)v8);
  v11 = TimeQuadPart;
LABEL_6:
  if ( a1 )
    *a1 = v9;
  if ( a2 )
    *a2 = TimeQuadPart;
  if ( ((unsigned __int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x8000000000020000uLL) != 0
    && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
    && (qword_1C0118B10 & 0x8000000000020000uLL) != 0
    && (qword_1C0118B18 & 0x8000000000020000uLL) == qword_1C0118B18
    && (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
  {
    Template_qqm((unsigned int)&v11, (_DWORD)a2, 0x20000, a4, v9, (__int64)&v11);
  }
  return 1LL;
}
