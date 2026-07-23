/*
 * XREFs of LdrpApplyFileNameRedirection @ 0x180012354
 * Callers:
 *     LdrpPreprocessDllName @ 0x1800121A0 (LdrpPreprocessDllName.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x18000A308 (LdrpFreeUnicodeString.c)
 *     LdrpGetFullPath @ 0x18000C3E0 (LdrpGetFullPath.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180012044 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     ApiSetResolveToHost @ 0x180012560 (ApiSetResolveToHost.c)
 *     LdrpLogDllState @ 0x180012678 (LdrpLogDllState.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800155C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     LdrpLogEtwEvent @ 0x1800CA054 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpApplyFileNameRedirection(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4, _BYTE *a5)
{
  _BYTE *v5; // r12
  struct _PEB *v6; // r13
  _UNICODE_STRING *v8; // rdi
  int v9; // ebx
  char v10; // bp
  void *ApiSetMap; // r14
  int v12; // eax
  unsigned __int16 v13; // r14
  int appended; // ebx
  char v15; // r15
  __int64 v16; // r8
  _UNICODE_STRING *v17; // rdx
  NTSTATUS v18; // edi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  unsigned __int16 v21[8]; // [rsp+50h] [rbp-58h] BYREF
  _UNICODE_STRING DynamicString; // [rsp+60h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-38h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+18h] BYREF

  v24 = a3;
  v5 = a5;
  v6 = NtCurrentPeb();
  v8 = (_UNICODE_STRING *)a2;
  v9 = 0;
  v10 = 1;
  *a5 = 0;
  if ( a1 )
    v9 = a1 + 88;
  ApiSetMap = v6->ApiSetMap;
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    LdrpLogEtwEvent(5328, 0, 0, 0, a2);
  v12 = ApiSetResolveToHost((_DWORD)ApiSetMap, (_DWORD)v8, v9, (unsigned int)&v24, (__int64)v21);
  v13 = v21[0];
  appended = v12;
  v15 = v24;
  if ( v12 >= 0 && (_BYTE)v24 )
  {
    v17 = v8;
    if ( v21[0] )
      v16 = 5329LL;
    else
      v16 = 5330LL;
  }
  else
  {
    v16 = 5331LL;
    v17 = v8;
  }
  LdrpLogDllState(0LL, v17, v16);
  if ( !v15 )
    goto LABEL_8;
  if ( !v13 )
    return (unsigned int)-1073740671;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)0x7FFE0030);
  appended = LdrpAppendUnicodeStringToFilenameBuffer(a4, &DestinationString.Length);
  if ( appended >= 0 )
  {
    appended = LdrpAppendUnicodeStringToFilenameBuffer(a4, &SlashSystem32SlashString.Length);
    if ( appended >= 0 )
    {
      appended = LdrpAppendUnicodeStringToFilenameBuffer(a4, v21);
      ProcessParameters = v6->ProcessParameters;
      if ( !ProcessParameters || (v10 = 1, (ProcessParameters->Flags & 0x1000) == 0) )
        v10 = 0;
      v8 = (_UNICODE_STRING *)a4;
LABEL_8:
      if ( appended >= 0 && v10 && !LdrpIsSecureProcess )
      {
        v18 = RtlDosApplyFileIsolationRedirection_Ustr(
                1u,
                v8,
                (PUNICODE_STRING)&LdrpDefaultExtension,
                0LL,
                &DynamicString,
                0LL,
                0LL,
                0LL,
                0LL);
        if ( v18 >= 0 )
        {
          *v5 = 1;
          LdrpGetFullPath((__int64)&DynamicString, (__int64)a4);
          LdrpFreeUnicodeString((__int64)&DynamicString);
        }
        if ( v18 != -1072365560 )
          return (unsigned int)v18;
      }
    }
  }
  return (unsigned int)appended;
}
