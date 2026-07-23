/*
 * XREFs of LdrpApplyFileNameRedirection @ 0x180015A24
 * Callers:
 *     LdrpPreprocessDllName @ 0x180015880 (LdrpPreprocessDllName.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x18000E8EC (LdrpFreeUnicodeString.c)
 *     LdrpGetFullPath @ 0x18000EEF4 (LdrpGetFullPath.c)
 *     ApiSetResolveToHost @ 0x180015BEC (ApiSetResolveToHost.c)
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 *     LdrpBuildSystem32FileName @ 0x180018BF8 (LdrpBuildSystem32FileName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     LdrpLogEtwEvent @ 0x1800D15F8 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpApplyFileNameRedirection(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  _BYTE *v5; // r12
  _UNICODE_STRING *v6; // rdi
  struct _PEB *v7; // r13
  int v9; // ebx
  char v10; // si
  void *ApiSetMap; // r14
  int v12; // eax
  __int16 v13; // r14
  int v14; // ebx
  char v15; // r15
  __int64 v16; // r8
  _UNICODE_STRING *v17; // rdx
  NTSTATUS v18; // edi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  _WORD v21[8]; // [rsp+50h] [rbp-48h] BYREF
  _UNICODE_STRING DynamicString; // [rsp+60h] [rbp-38h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+18h] BYREF

  v23 = a3;
  v5 = a5;
  v6 = (_UNICODE_STRING *)a2;
  v7 = NtCurrentPeb();
  v9 = 0;
  v10 = 1;
  *a5 = 0;
  if ( a1 )
    v9 = a1 + 88;
  ApiSetMap = v7->ApiSetMap;
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    LdrpLogEtwEvent(5328, 0, 0, 0, a2, 0LL);
  v12 = ApiSetResolveToHost((_DWORD)ApiSetMap, (_DWORD)v6, v9, (unsigned int)&v23, (__int64)v21);
  v13 = v21[0];
  v14 = v12;
  v15 = v23;
  if ( v12 >= 0 && (_BYTE)v23 )
  {
    v17 = v6;
    if ( v21[0] )
      v16 = 5329LL;
    else
      v16 = 5330LL;
  }
  else
  {
    v16 = 5331LL;
    v17 = v6;
  }
  LdrpLogDllState(0LL, v17, v16);
  if ( !v15 )
    goto LABEL_8;
  if ( !v13 )
    return (unsigned int)-1073740671;
  v14 = LdrpBuildSystem32FileName(a4, v21);
  if ( v14 >= 0 )
  {
    ProcessParameters = v7->ProcessParameters;
    if ( !ProcessParameters || (v10 = 1, (ProcessParameters->Flags & 0x1000) == 0) )
      v10 = 0;
    v6 = (_UNICODE_STRING *)a4;
LABEL_8:
    if ( v14 >= 0 && v10 && !LdrpIsSecureProcess )
    {
      v18 = RtlDosApplyFileIsolationRedirection_Ustr(
              1u,
              v6,
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
        LdrpGetFullPath((__int64)&DynamicString, a4);
        LdrpFreeUnicodeString((__int64)&DynamicString);
      }
      if ( v18 != -1072365560 )
        return (unsigned int)v18;
    }
  }
  return (unsigned int)v14;
}
