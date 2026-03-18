/*
 * XREFs of ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0078300
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00D34A0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C017C80C (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C017CCCC (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0181F10 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPointerPositionChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 VidPnSourceId; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  OUTPUTDUPL_CONTEXT **v9; // rdi
  unsigned int v10; // ebx
  int v11; // r15d
  __int64 v12; // rax
  OUTPUTDUPL_MGR *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbp
  _QWORD *v17; // rax
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 13) )
  {
    v12 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v12 + 32) = this;
    WdLogEvent5_WdWarning(v12);
  }
  else
  {
    v7 = *((_QWORD *)this + 2);
    v8 = 3 * VidPnSourceId;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, *(struct DXGFASTMUTEX *const *)(v7 + 24 * VidPnSourceId));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    v9 = *(OUTPUTDUPL_CONTEXT ***)(v7 + 8 * v8 + 8);
    v10 = 0;
    v11 = 1;
    if ( *((_DWORD *)this + 2) )
    {
      while ( 1 )
      {
        if ( *v9 && *((_DWORD *)*v9 + 79) )
        {
          if ( v11 )
          {
            if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
              OUTPUTDUPL_MGR::LogPointerPositionChangeParams(v13, a2);
            v11 = 0;
          }
          v14 = OUTPUTDUPL_CONTEXT::ProcessPointerPosition(*v9, a2);
          v16 = v14;
          if ( v14 < 0 )
            break;
        }
        ++v10;
        ++v9;
        if ( v10 >= *((_DWORD *)this + 2) )
          goto LABEL_5;
      }
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v17[3] = a2->VidPnSourceId;
      v17[4] = v10;
      v17[5] = v16;
      WdLogEvent5_WdError(v17);
    }
LABEL_5:
    if ( v18[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  }
}
