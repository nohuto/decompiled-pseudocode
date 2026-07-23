/*
 * XREFs of __C_specific_handler @ 0x180095A90
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x1800A4BCC (__GSHandlerCheck_SEH.c)
 * Callees:
 *     RtlUnwindEx @ 0x1800355D0 (RtlUnwindEx.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     _NLG_Notify @ 0x18009BA20 (_NLG_Notify.c)
 *     __NLG_Return2 @ 0x18009BA50 (__NLG_Return2.c)
 */

EXCEPTION_DISPOSITION __cdecl _C_specific_handler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  DWORD64 ImageBase; // r15
  DWORD *HandlerData; // rbx
  unsigned __int64 v7; // rbp
  DWORD v11; // esi
  int v12; // eax
  DWORD ScopeIndex; // edi
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  DWORD i; // r9d
  __int64 v18; // rax
  DWORD v19; // edx
  _QWORD v20[2]; // [rsp+30h] [rbp-38h] BYREF

  ImageBase = DispatcherContext->ImageBase;
  HandlerData = (DWORD *)DispatcherContext->HandlerData;
  v7 = DispatcherContext->ControlPc - ImageBase;
  RtlEndStrongEnumerationHashTable(
    (PRTL_DYNAMIC_HASH_TABLE)ContextRecord,
    (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)EstablisherFrame);
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    ScopeIndex = DispatcherContext->ScopeIndex;
    v15 = DispatcherContext->TargetIp - ImageBase;
    while ( 1 )
    {
      v19 = *HandlerData;
      if ( ScopeIndex >= *HandlerData )
        break;
      v16 = 2LL * ScopeIndex;
      if ( v7 >= HandlerData[4 * ScopeIndex + 1] && v7 < HandlerData[4 * ScopeIndex + 2] )
      {
        if ( (ExceptionRecord->ExceptionFlags & 0x20) != 0 )
        {
          for ( i = 0; i < v19; ++i )
          {
            if ( v15 >= HandlerData[4 * i + 1]
              && v15 < HandlerData[4 * i + 2]
              && HandlerData[4 * i + 4] == HandlerData[4 * ScopeIndex + 4]
              && HandlerData[4 * i + 3] == HandlerData[4 * ScopeIndex + 3] )
            {
              break;
            }
          }
          if ( i != v19 )
            return 1;
        }
        v18 = HandlerData[4 * ScopeIndex + 4];
        if ( (_DWORD)v18 )
        {
          if ( v15 == v18 )
            return 1;
        }
        else
        {
          DispatcherContext->ScopeIndex = ScopeIndex + 1;
          LOBYTE(v16) = 1;
          ((void (__fastcall *)(__int64, void *))(ImageBase + HandlerData[4 * ScopeIndex + 3]))(v16, EstablisherFrame);
        }
      }
      ++ScopeIndex;
    }
  }
  else
  {
    v11 = DispatcherContext->ScopeIndex;
    v20[0] = ExceptionRecord;
    v20[1] = ContextRecord;
    while ( v11 < *HandlerData )
    {
      if ( v7 >= HandlerData[4 * v11 + 1] && v7 < HandlerData[4 * v11 + 2] && HandlerData[4 * v11 + 4] )
      {
        if ( HandlerData[4 * v11 + 3] == 1 )
          goto LABEL_10;
        v12 = ((__int64 (__fastcall *)(_QWORD *, void *))(ImageBase + HandlerData[4 * v11 + 3]))(v20, EstablisherFrame);
        if ( v12 < 0 )
          return 0;
        if ( v12 > 0 )
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
