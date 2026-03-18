/*
 * XREFs of ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C000ED30
 * Callers:
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C00106DC (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?CitpParametersCheckHostingProcess@@YAEPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C000E7D8 (-CitpParametersCheckHostingProcess@@YAEPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C000E848 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1C000F1C4 (-CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00F6204 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProcessGetProgramId(struct tagPROCESSINFO *a1, struct _CIT_PROGRAM_ID *a2)
{
  wchar_t *v3; // rsi
  unsigned __int16 *v4; // r14
  PACCESS_TOKEN v5; // r12
  int v6; // ebx
  const char *v7; // rdx
  void *ProcessSectionBaseAddress; // r13
  unsigned int v9; // r8d
  int v10; // ecx
  int v11; // eax
  const char *v12; // rdx
  unsigned __int16 *v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rax
  const unsigned __int16 *i; // rdx
  __int64 ProcessPeb; // rax
  __int64 v18; // r8
  ULONGLONG v19; // rcx
  int v20; // eax
  const unsigned __int16 *v21; // rdx
  unsigned __int64 v22; // rcx
  size_t v23; // r8
  PIMAGE_NT_HEADERS v24; // rax
  DWORD TimeDateStamp; // ebx
  DWORD CheckSum; // r13d
  struct _CIT_PROGRAM_ID *v27; // rcx
  unsigned __int64 v28; // rax
  char v30; // [rsp+30h] [rbp-248h]
  wchar_t *String; // [rsp+38h] [rbp-240h] BYREF
  unsigned __int16 *v32; // [rsp+40h] [rbp-238h] BYREF
  int v33; // [rsp+48h] [rbp-230h]
  PUNICODE_STRING pImageFileName; // [rsp+50h] [rbp-228h] BYREF
  int v35; // [rsp+58h] [rbp-220h]
  DWORD v36; // [rsp+5Ch] [rbp-21Ch]
  DWORD v37; // [rsp+60h] [rbp-218h]
  size_t Size; // [rsp+68h] [rbp-210h] BYREF
  size_t v39; // [rsp+70h] [rbp-208h] BYREF
  PACCESS_TOKEN v40; // [rsp+78h] [rbp-200h]
  struct _CIT_PROGRAM_ID *v41; // [rsp+80h] [rbp-1F8h]
  int v42; // [rsp+98h] [rbp-1E0h]
  const unsigned __int16 *v43; // [rsp+A0h] [rbp-1D8h]
  _BYTE v44[144]; // [rsp+B0h] [rbp-1C8h] BYREF
  _BYTE Src[256]; // [rsp+140h] [rbp-138h] BYREF

  v41 = a2;
  v30 = 0;
  pImageFileName = 0LL;
  v3 = 0LL;
  String = 0LL;
  v4 = 0LL;
  v32 = 0LL;
  v5 = 0LL;
  v40 = 0LL;
  v36 = 0;
  v37 = 0;
  if ( (*((_DWORD *)a1 + 3) & 0x1000) != 0 )
  {
    v6 = -1073741431;
    goto LABEL_53;
  }
  ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(*(_QWORD *)a1);
  if ( !ProcessSectionBaseAddress )
  {
    v6 = -1073741637;
    v9 = 3276;
LABEL_5:
    v10 = v6;
LABEL_6:
    CitpLogFailureWorker(v10, v7, v9);
    goto LABEL_53;
  }
  if ( a1 != (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process() )
  {
    KeAttachProcess(*(PRKPROCESS *)a1);
    v30 = 1;
  }
  if ( (*((_DWORD *)a1 + 192) & 0x30) == 0x10 )
  {
    v5 = PsReferencePrimaryToken(*(PEPROCESS *)a1);
    v40 = v5;
    Size = 256LL;
    v39 = 130LL;
    v11 = RtlQueryPackageIdentity(v5, Src, &Size, v44, &v39, 0LL);
    if ( v11 < 0 )
    {
      CitpLogFailureWorker(v11, v12, 0xD01u);
    }
    else
    {
      v3 = (wchar_t *)Win32AllocPool(Size, 1231254357LL);
      String = v3;
      v13 = (unsigned __int16 *)Win32AllocPool(v39, 1231254357LL);
      v4 = v13;
      v32 = v13;
      if ( !v3 || !v13 )
      {
        v6 = -1073741670;
        v9 = 3318;
        goto LABEL_5;
      }
      memmove(v3, Src, Size);
      _wcsupr(v3);
      memmove(v4, v44, v39);
    }
  }
  if ( v3 )
  {
LABEL_50:
    v24 = RtlImageNtHeader(ProcessSectionBaseAddress);
    TimeDateStamp = v24->FileHeader.TimeDateStamp;
    v36 = TimeDateStamp;
    CheckSum = v24->OptionalHeader.CheckSum;
    v37 = CheckSum;
    if ( v4 )
      _wcsupr(v4);
    v27 = v41;
    *(_QWORD *)v41 = v3;
    v3 = 0LL;
    *((_QWORD *)v27 + 1) = v4;
    v4 = 0LL;
    *((_DWORD *)v27 + 6) = TimeDateStamp;
    *((_DWORD *)v27 + 7) = CheckSum;
    *((_DWORD *)v27 + 8) = (*((_DWORD *)a1 + 192) >> 4) & 3;
    v28 = CitpProgramIdCalculateHash(v27);
    *((_QWORD *)v41 + 2) = v28;
    v6 = 0;
    goto LABEL_53;
  }
  v14 = SeLocateProcessImageName(*(PEPROCESS *)a1, &pImageFileName);
  v6 = v14;
  if ( v14 < 0 )
  {
    pImageFileName = 0LL;
    v9 = 3342;
    v10 = v14;
    goto LABEL_6;
  }
  if ( !pImageFileName->Length )
  {
    v6 = -1073741637;
    goto LABEL_53;
  }
  v6 = CitpStringDuplicate(&String, pImageFileName->Buffer, (unsigned __int64)pImageFileName->Length >> 1);
  v33 = v6;
  v3 = String;
  if ( v6 >= 0 )
  {
    _wcsupr(String);
    v15 = -1LL;
    do
      ++v15;
    while ( v3[v15] );
    for ( i = &v3[v15]; i > v3; --i )
    {
      if ( *i == 92 )
      {
        ++i;
        break;
      }
    }
    if ( CitpParametersCheckHostingProcess((struct _CIT_PARAMETERS *)&unk_1C011E568, i) )
    {
      ProcessPeb = PsGetProcessPeb(*(_QWORD *)a1);
      if ( (ProcessPeb & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = *(_QWORD *)(ProcessPeb + 32);
      if ( (v18 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = v18 + 112;
      if ( v18 + 112 >= W32UserProbeAddress )
        v19 = W32UserProbeAddress;
      v20 = *(_DWORD *)v19;
      v35 = v20;
      v42 = v20;
      v21 = *(const unsigned __int16 **)(v19 + 8);
      v43 = v21;
      if ( ((unsigned __int8)v21 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = (unsigned __int64)v21 + (unsigned __int16)v20 + 2;
      if ( v22 >= W32UserProbeAddress
        || (unsigned __int16)v20 > HIWORD(v35)
        || (v20 & 1) != 0
        || v22 <= (unsigned __int64)v21 )
      {
        *(_BYTE *)W32UserProbeAddress = 0;
      }
      if ( (v20 & 0xFFFEu) <= 0x208 )
        v23 = (unsigned __int64)(unsigned __int16)v20 >> 1;
      else
        v23 = 260LL;
      v6 = CitpStringDuplicate(&v32, v21, v23);
      v33 = v6;
      if ( v6 < 0 )
      {
        v3 = String;
        v4 = v32;
        goto LABEL_53;
      }
      v3 = String;
      v4 = v32;
    }
    goto LABEL_50;
  }
LABEL_53:
  if ( v5 )
    PsDereferencePrimaryToken(v5);
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  if ( v3 )
    Win32FreePool(v3);
  if ( v4 )
    Win32FreePool(v4);
  if ( v30 )
    KeDetachProcess();
  return (unsigned int)v6;
}
