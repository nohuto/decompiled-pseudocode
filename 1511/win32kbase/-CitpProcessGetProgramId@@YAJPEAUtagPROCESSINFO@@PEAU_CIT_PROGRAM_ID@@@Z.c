/*
 * XREFs of ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C004DB34
 * Callers:
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C004B304 (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1C004DF94 (-CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C004FCA8 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?CitpParametersCheckHostingProcess@@YAEPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C00500D0 (-CitpParametersCheckHostingProcess@@YAEPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpFileNameFromPath@@YAPEBGPEBG@Z @ 0x1C0050140 (-CitpFileNameFromPath@@YAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E42A8 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProcessGetProgramId(struct tagPROCESSINFO *a1, struct _CIT_PROGRAM_ID *a2)
{
  wchar_t *v3; // rsi
  unsigned __int16 *v4; // r14
  PACCESS_TOKEN v5; // r12
  const char *v6; // rdx
  __int64 v7; // rcx
  void *ProcessSectionBaseAddress; // r13
  NTSTATUS v9; // eax
  int v10; // ebx
  const unsigned __int16 *v11; // rax
  PIMAGE_NT_HEADERS v12; // rax
  DWORD TimeDateStamp; // ebx
  DWORD CheckSum; // r13d
  struct _CIT_PROGRAM_ID *v15; // rcx
  unsigned __int64 v16; // rax
  int v18; // eax
  const char *v19; // rdx
  unsigned __int16 *v20; // rax
  __int64 ProcessPeb; // rax
  __int64 v22; // r8
  _QWORD *v23; // rcx
  int v24; // eax
  const unsigned __int16 *v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned int v28; // r8d
  int v29; // ecx
  char v30; // [rsp+30h] [rbp-248h]
  wchar_t *String; // [rsp+38h] [rbp-240h] BYREF
  unsigned __int16 *v32; // [rsp+40h] [rbp-238h] BYREF
  int v33; // [rsp+48h] [rbp-230h]
  PUNICODE_STRING pImageFileName; // [rsp+50h] [rbp-228h] BYREF
  size_t Size; // [rsp+58h] [rbp-220h] BYREF
  int v36; // [rsp+60h] [rbp-218h]
  DWORD v37; // [rsp+64h] [rbp-214h]
  size_t v38; // [rsp+68h] [rbp-210h] BYREF
  DWORD v39; // [rsp+70h] [rbp-208h]
  PACCESS_TOKEN v40; // [rsp+78h] [rbp-200h]
  struct _CIT_PROGRAM_ID *v41; // [rsp+80h] [rbp-1F8h]
  int v42; // [rsp+88h] [rbp-1F0h]
  const unsigned __int16 *v43; // [rsp+90h] [rbp-1E8h]
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
  v37 = 0;
  v39 = 0;
  if ( (*((_DWORD *)a1 + 3) & 0x1000) != 0 )
  {
    v10 = -1073741431;
    goto LABEL_14;
  }
  ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(*(_QWORD *)a1);
  if ( !ProcessSectionBaseAddress )
  {
    v10 = -1073741637;
    v28 = 3361;
    goto LABEL_50;
  }
  if ( a1 != (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v7) )
  {
    KeAttachProcess(*(PRKPROCESS *)a1);
    v30 = 1;
  }
  if ( (*((_DWORD *)a1 + 194) & 0x30) == 0x10 )
  {
    v5 = PsReferencePrimaryToken(*(PEPROCESS *)a1);
    v40 = v5;
    Size = 256LL;
    v38 = 130LL;
    v18 = RtlQueryPackageIdentity(v5, Src, &Size, v44, &v38, 0LL);
    if ( v18 < 0 )
    {
      CitpLogFailureWorker(v18, v19, 0xD56u);
      goto LABEL_6;
    }
    v3 = (wchar_t *)Win32AllocPool();
    String = v3;
    v20 = (unsigned __int16 *)Win32AllocPool();
    v4 = v20;
    v32 = v20;
    if ( v3 && v20 )
    {
      memmove(v3, Src, Size);
      _wcsupr(v3);
      memmove(v4, v44, v38);
      goto LABEL_6;
    }
    v10 = -1073741670;
    v28 = 3403;
LABEL_50:
    v29 = v10;
LABEL_52:
    CitpLogFailureWorker(v29, v6, v28);
    goto LABEL_14;
  }
LABEL_6:
  if ( v3 )
    goto LABEL_11;
  v9 = SeLocateProcessImageName(*(PEPROCESS *)a1, &pImageFileName);
  v10 = v9;
  if ( v9 < 0 )
  {
    pImageFileName = 0LL;
    v28 = 3427;
    v29 = v9;
    goto LABEL_52;
  }
  if ( !pImageFileName->Length )
  {
    v10 = -1073741637;
    goto LABEL_14;
  }
  v10 = CitpStringDuplicate(&String, pImageFileName->Buffer, (unsigned __int64)pImageFileName->Length >> 1);
  v33 = v10;
  v3 = String;
  if ( v10 < 0 )
    goto LABEL_14;
  _wcsupr(String);
  v11 = CitpFileNameFromPath(v3);
  if ( CitpParametersCheckHostingProcess((struct _CIT_PARAMETERS *)&unk_1C0107118, v11) )
  {
    ProcessPeb = PsGetProcessPeb(*(_QWORD *)a1);
    if ( (ProcessPeb & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = *(_QWORD *)(ProcessPeb + 32);
    if ( (v22 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = (_QWORD *)(v22 + 112);
    if ( v22 + 112 >= (unsigned __int64)W32UserProbeAddress )
      v23 = W32UserProbeAddress;
    v24 = *(_DWORD *)v23;
    v36 = v24;
    v42 = v24;
    v25 = (const unsigned __int16 *)v23[1];
    v43 = v25;
    if ( ((unsigned __int8)v25 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v26 = (unsigned __int64)v25 + (unsigned __int16)v24 + 2;
    if ( v26 >= (unsigned __int64)W32UserProbeAddress
      || (unsigned __int16)v24 > HIWORD(v36)
      || v26 <= (unsigned __int64)v25 )
    {
      *(_BYTE *)W32UserProbeAddress = 0;
    }
    if ( (v24 & 0xFFFEu) > 0x208 )
      v27 = 260LL;
    else
      v27 = (unsigned __int64)(unsigned __int16)v24 >> 1;
    v10 = CitpStringDuplicate(&v32, v25, v27);
    v33 = v10;
    if ( v10 < 0 )
    {
      v3 = String;
      v4 = v32;
      goto LABEL_14;
    }
    v3 = String;
    v4 = v32;
  }
LABEL_11:
  v12 = RtlImageNtHeader(ProcessSectionBaseAddress);
  TimeDateStamp = v12->FileHeader.TimeDateStamp;
  v37 = TimeDateStamp;
  CheckSum = v12->OptionalHeader.CheckSum;
  v39 = CheckSum;
  if ( v4 )
    _wcsupr(v4);
  v15 = v41;
  *(_QWORD *)v41 = v3;
  v3 = 0LL;
  *((_QWORD *)v15 + 1) = v4;
  v4 = 0LL;
  *((_DWORD *)v15 + 6) = TimeDateStamp;
  *((_DWORD *)v15 + 7) = CheckSum;
  *((_DWORD *)v15 + 8) = (*((_DWORD *)a1 + 194) >> 4) & 3;
  v16 = CitpProgramIdCalculateHash(v15);
  *((_QWORD *)v41 + 2) = v16;
  v10 = 0;
LABEL_14:
  if ( v5 )
    PsDereferencePrimaryToken(v5);
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  if ( v3 )
    Win32FreePool();
  if ( v4 )
    Win32FreePool();
  if ( v30 )
    KeDetachProcess();
  return (unsigned int)v10;
}
