/*
 * XREFs of __C_specific_handler @ 0x140143640
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x14015026C (__GSHandlerCheck_SEH.c)
 * Callees:
 *     RtlUnwindEx @ 0x140024DF0 (RtlUnwindEx.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     _NLG_Notify @ 0x140143BD0 (_NLG_Notify.c)
 *     __NLG_Return2 @ 0x140143C00 (__NLG_Return2.c)
 */

EXCEPTION_DISPOSITION __cdecl _C_specific_handler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  DWORD64 ImageBase; // r15
  unsigned __int64 v7; // rbp
  DWORD *HandlerData; // rbx
  DWORD v11; // esi
  __int64 v12; // rax
  int v13; // eax
  DWORD ScopeIndex; // edi
  unsigned __int64 v16; // rsi
  __int64 v17; // rcx
  DWORD i; // r9d
  __int64 v19; // rax
  DWORD v20; // edx
  _QWORD v21[2]; // [rsp+30h] [rbp-38h] BYREF

  ImageBase = DispatcherContext->ImageBase;
  v7 = DispatcherContext->ControlPc - ImageBase;
  HandlerData = (DWORD *)DispatcherContext->HandlerData;
  PopPoCoalescinCallback();
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    ScopeIndex = DispatcherContext->ScopeIndex;
    v16 = DispatcherContext->TargetIp - ImageBase;
    while ( 1 )
    {
      v20 = *HandlerData;
      if ( ScopeIndex >= *HandlerData )
        break;
      v17 = 2LL * ScopeIndex;
      if ( v7 >= HandlerData[4 * ScopeIndex + 1] && v7 < HandlerData[4 * ScopeIndex + 2] )
      {
        if ( (ExceptionRecord->ExceptionFlags & 0x20) != 0 )
        {
          for ( i = 0; i < v20; ++i )
          {
            if ( v16 >= HandlerData[4 * i + 1]
              && v16 < HandlerData[4 * i + 2]
              && HandlerData[4 * i + 4] == HandlerData[4 * ScopeIndex + 4]
              && HandlerData[4 * i + 3] == HandlerData[4 * ScopeIndex + 3] )
            {
              break;
            }
          }
          if ( i != v20 )
            return 1;
        }
        v19 = HandlerData[4 * ScopeIndex + 4];
        if ( (_DWORD)v19 )
        {
          if ( v16 == v19 )
            return 1;
        }
        else
        {
          DispatcherContext->ScopeIndex = ScopeIndex + 1;
          LOBYTE(v17) = 1;
          ((void (__fastcall *)(__int64, void *))(ImageBase + HandlerData[4 * ScopeIndex + 3]))(v17, EstablisherFrame);
        }
      }
      ++ScopeIndex;
    }
  }
  else
  {
    v11 = DispatcherContext->ScopeIndex;
    v21[0] = ExceptionRecord;
    v21[1] = ContextRecord;
    while ( v11 < *HandlerData )
    {
      if ( v7 >= HandlerData[4 * v11 + 1] && v7 < HandlerData[4 * v11 + 2] && HandlerData[4 * v11 + 4] )
      {
        v12 = HandlerData[4 * v11 + 3];
        if ( (_DWORD)v12 == 1 )
          goto LABEL_10;
        v13 = ((__int64 (__fastcall *)(_QWORD *, void *))(ImageBase + v12))(v21, EstablisherFrame);
        if ( v13 < 0 )
          return 0;
        if ( v13 > 0 )
        {
LABEL_10:
          NLG_Notify(ImageBase + HandlerData[4 * v11 + 4], EstablisherFrame, 1LL);
          RtlUnwindEx(
            EstablisherFrame,
            (PVOID)(ImageBase + HandlerData[4 * v11 + 4]),
            ExceptionRecord,
            (PVOID)ExceptionRecord->ExceptionCode,
            DispatcherContext->ContextRecord,
            DispatcherContext->HistoryTable);
          _NLG_Return2();
        }
      }
      ++v11;
    }
  }
  return 1;
}
