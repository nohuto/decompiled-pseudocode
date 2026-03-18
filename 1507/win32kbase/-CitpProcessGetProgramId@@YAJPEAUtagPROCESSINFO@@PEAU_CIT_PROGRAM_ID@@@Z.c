/*
 * XREFs of ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0058100
 * Callers:
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C0058020 (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1C0058578 (-CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C0058890 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?CitpParametersCheckHostingProcess@@YAEPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C005891C (-CitpParametersCheckHostingProcess@@YAEPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpFileNameFromPath@@YAPEBGPEBG@Z @ 0x1C005898C (-CitpFileNameFromPath@@YAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E3144 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProcessGetProgramId(struct tagPROCESSINFO *a1, struct _CIT_PROGRAM_ID *a2)
{
  wchar_t *v3; // rsi
  unsigned __int16 *v4; // r14
  PACCESS_TOKEN v5; // r12
  int v6; // ebx
  const char *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *ProcessSectionBaseAddress; // r13
  unsigned int v12; // r8d
  int v13; // ecx
  int v14; // eax
  const char *v15; // rdx
  unsigned __int16 *v16; // rax
  NTSTATUS v17; // eax
  const unsigned __int16 *v18; // rax
  __int64 ProcessPeb; // rax
  __int64 v20; // r8
  _QWORD *v21; // rcx
  int v22; // eax
  const unsigned __int16 *v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  PIMAGE_NT_HEADERS v26; // rax
  DWORD TimeDateStamp; // ebx
  DWORD CheckSum; // r13d
  struct _CIT_PROGRAM_ID *v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v32; // [rsp+20h] [rbp-258h]
  __int64 v33; // [rsp+28h] [rbp-250h]
  char v34; // [rsp+30h] [rbp-248h]
  wchar_t *String; // [rsp+38h] [rbp-240h] BYREF
  unsigned __int16 *v36; // [rsp+40h] [rbp-238h] BYREF
  int v37; // [rsp+48h] [rbp-230h]
  PUNICODE_STRING pImageFileName; // [rsp+50h] [rbp-228h] BYREF
  size_t Size; // [rsp+58h] [rbp-220h] BYREF
  int v40; // [rsp+60h] [rbp-218h]
  DWORD v41; // [rsp+64h] [rbp-214h]
  size_t v42; // [rsp+68h] [rbp-210h] BYREF
  DWORD v43; // [rsp+70h] [rbp-208h]
  PACCESS_TOKEN v44; // [rsp+78h] [rbp-200h]
  struct _CIT_PROGRAM_ID *v45; // [rsp+80h] [rbp-1F8h]
  int v46; // [rsp+88h] [rbp-1F0h]
  const unsigned __int16 *v47; // [rsp+90h] [rbp-1E8h]
  _BYTE v48[144]; // [rsp+B0h] [rbp-1C8h] BYREF
  _BYTE Src[256]; // [rsp+140h] [rbp-138h] BYREF

  v45 = a2;
  v34 = 0;
  pImageFileName = 0LL;
  v3 = 0LL;
  String = 0LL;
  v4 = 0LL;
  v36 = 0LL;
  v5 = 0LL;
  v44 = 0LL;
  v41 = 0;
  v43 = 0;
  if ( (*((_DWORD *)a1 + 3) & 0x1000) != 0 )
  {
    v6 = -1073741431;
    goto LABEL_45;
  }
  ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(*(_QWORD *)a1);
  if ( !ProcessSectionBaseAddress )
  {
    v6 = -1073741637;
    v12 = 3164;
LABEL_5:
    v13 = v6;
LABEL_6:
    CitpLogFailureWorker(v13, v7, v12);
    goto LABEL_45;
  }
  if ( a1 != (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v8, v7, v9, v10, v32, v33) )
  {
    KeAttachProcess(*(PRKPROCESS *)a1);
    v34 = 1;
  }
  if ( (*((_DWORD *)a1 + 194) & 0x30) == 0x10 )
  {
    v5 = PsReferencePrimaryToken(*(PEPROCESS *)a1);
    v44 = v5;
    Size = 256LL;
    v42 = 130LL;
    v14 = RtlQueryPackageIdentity(v5, Src, &Size, v48, &v42, 0LL);
    if ( v14 < 0 )
    {
      CitpLogFailureWorker(v14, v15, 0xC91u);
    }
    else
    {
      v3 = (wchar_t *)Win32AllocPool();
      String = v3;
      v16 = (unsigned __int16 *)Win32AllocPool();
      v4 = v16;
      v36 = v16;
      if ( !v3 || !v16 )
      {
        v6 = -1073741670;
        v12 = 3206;
        goto LABEL_5;
      }
      memmove(v3, Src, Size);
      _wcsupr(v3);
      memmove(v4, v48, v42);
    }
  }
  if ( v3 )
  {
LABEL_42:
    v26 = RtlImageNtHeader(ProcessSectionBaseAddress);
    TimeDateStamp = v26->FileHeader.TimeDateStamp;
    v41 = TimeDateStamp;
    CheckSum = v26->OptionalHeader.CheckSum;
    v43 = CheckSum;
    if ( v4 )
      _wcsupr(v4);
    v29 = v45;
    *(_QWORD *)v45 = v3;
    v3 = 0LL;
    *((_QWORD *)v29 + 1) = v4;
    v4 = 0LL;
    *((_DWORD *)v29 + 6) = TimeDateStamp;
    *((_DWORD *)v29 + 7) = CheckSum;
    *((_DWORD *)v29 + 8) = (*((_DWORD *)a1 + 194) >> 4) & 3;
    v30 = CitpProgramIdCalculateHash(v29);
    *((_QWORD *)v45 + 2) = v30;
    v6 = 0;
    goto LABEL_45;
  }
  v17 = SeLocateProcessImageName(*(PEPROCESS *)a1, &pImageFileName);
  v6 = v17;
  if ( v17 < 0 )
  {
    pImageFileName = 0LL;
    v12 = 3230;
    v13 = v17;
    goto LABEL_6;
  }
  if ( !pImageFileName->Length )
  {
    v6 = -1073741637;
    goto LABEL_45;
  }
  v6 = CitpStringDuplicate(&String, pImageFileName->Buffer, (unsigned __int64)pImageFileName->Length >> 1);
  v37 = v6;
  v3 = String;
  if ( v6 >= 0 )
  {
    _wcsupr(String);
    v18 = CitpFileNameFromPath(v3);
    if ( CitpParametersCheckHostingProcess((struct _CIT_PARAMETERS *)&unk_1C0101F88, v18) )
    {
      ProcessPeb = PsGetProcessPeb(*(_QWORD *)a1);
      if ( (ProcessPeb & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = *(_QWORD *)(ProcessPeb + 32);
      if ( (v20 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (_QWORD *)(v20 + 112);
      if ( v20 + 112 >= (unsigned __int64)W32UserProbeAddress )
        v21 = W32UserProbeAddress;
      v22 = *(_DWORD *)v21;
      v40 = v22;
      v46 = v22;
      v23 = (const unsigned __int16 *)v21[1];
      v47 = v23;
      if ( ((unsigned __int8)v23 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = (unsigned __int64)v23 + (unsigned __int16)v22 + 2;
      if ( v24 >= (unsigned __int64)W32UserProbeAddress
        || (unsigned __int16)v22 > HIWORD(v40)
        || (v22 & 1) != 0
        || v24 <= (unsigned __int64)v23 )
      {
        *(_BYTE *)W32UserProbeAddress = 0;
      }
      if ( (v22 & 0xFFFEu) <= 0x208 )
        v25 = (unsigned __int64)(unsigned __int16)v22 >> 1;
      else
        v25 = 260LL;
      v6 = CitpStringDuplicate(&v36, v23, v25);
      v37 = v6;
      if ( v6 < 0 )
      {
        v3 = String;
        v4 = v36;
        goto LABEL_45;
      }
      v3 = String;
      v4 = v36;
    }
    goto LABEL_42;
  }
LABEL_45:
  if ( v5 )
    PsDereferencePrimaryToken(v5);
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  if ( v3 )
    Win32FreePool();
  if ( v4 )
    Win32FreePool();
  if ( v34 )
    KeDetachProcess();
  return (unsigned int)v6;
}
