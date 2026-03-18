/*
 * XREFs of ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C007A47C
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C007A378 (-CitpInitialize@@YAJPEBG@Z.c)
 * Callees:
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x1C00170BC (-CitpIsInteractiveSession@@YAEXZ.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C005A3DC (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x1C007A6F8 (-CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z.c)
 *     ?CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z @ 0x1C007A80C (-CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z.c)
 *     WinSqmIsOptedInEx @ 0x1C007B870 (WinSqmIsOptedInEx.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E3144 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

void __fastcall CitpParametersLoad(struct _CIT_PARAMETERS *a1, const unsigned __int16 *a2)
{
  UCHAR v3; // dl
  NTSTATUS v4; // eax
  const char *v5; // rdx
  _DWORD *v6; // rbx
  unsigned int v7; // ebx
  bool v8; // cf
  unsigned int v9; // edx
  void *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  void *v14; // rcx
  int v15; // eax
  void *v16; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  const unsigned __int16 *v19; // [rsp+88h] [rbp+28h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  v19 = a2;
  KeyHandle = 0LL;
  if ( CitpIsInteractiveSession() )
  {
    *((_BYTE *)a1 + 76) = (unsigned int)WinSqmIsOptedInEx(4LL) != 0;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v4 < 0 )
    {
      CitpLogFailureWorker(v4, v5, 0xAB3u);
    }
    else
    {
      CitpParameterGetInt32(KeyHandle, L"Override", (unsigned int *)a1);
      v6 = (_DWORD *)((char *)a1 + 4);
      CitpParameterGetInt32(KeyHandle, L"EntryCount", (unsigned int *)a1 + 1);
      if ( *((_DWORD *)a1 + 1) < 4u )
        *v6 = 4;
      if ( *v6 > 0x7FFFu )
        *v6 = 0x7FFF;
      LODWORD(v19) = 604800;
      CitpParameterGetInt32(KeyHandle, L"PerSpan", (unsigned int *)&v19);
      v7 = (unsigned int)v19;
      v8 = (unsigned int)v19 < 0xE10;
      LODWORD(v19) = 3600;
      if ( v8 )
        v7 = 3600;
      if ( v7 > 0x24EA00 )
        v7 = 2419200;
      CitpParameterGetInt32(KeyHandle, L"BitSpan", (unsigned int *)&v19);
      v9 = (unsigned int)v19;
      if ( (unsigned int)v19 > v7 || !(_DWORD)v19 )
        v9 = v7;
      *((_QWORD *)a1 + 3) = 10000000LL * v7;
      LODWORD(v19) = 14400;
      *((_QWORD *)a1 + 4) = 10000000LL * v9;
      v10 = KeyHandle;
      *((_DWORD *)a1 + 10) = 1000 * v9;
      CitpParameterGetInt32(v10, L"FlUSpan", (unsigned int *)&v19);
      v11 = (unsigned int)v19;
      LODWORD(v19) = 86400;
      if ( (unsigned int)v11 < 0x384 )
        v11 = 900LL;
      *((_QWORD *)a1 + 1) = 10000000 * v11;
      CitpParameterGetInt32(KeyHandle, L"FlUSpan", (unsigned int *)&v19);
      v12 = (unsigned int)v19;
      if ( (unsigned int)v19 < 0x384 )
        v12 = 900LL;
      *((_QWORD *)a1 + 2) = 10000000 * v12;
      CitpParameterGetInt32(KeyHandle, L"DTCnt", (unsigned int *)a1 + 11);
      CitpParameterGetInt32(KeyHandle, L"DTAge", (unsigned int *)a1 + 12);
      CitpParameterGetInt32(KeyHandle, L"DTTot", (unsigned int *)a1 + 13);
      LODWORD(v19) = 60;
      CitpParameterGetInt32(KeyHandle, L"UATO", (unsigned int *)&v19);
      v13 = (int)v19;
      v8 = (_DWORD)v19 == 0;
      LODWORD(v19) = 3600;
      if ( v8 )
        v13 = 1;
      v14 = KeyHandle;
      *((_DWORD *)a1 + 14) = 1000 * v13;
      CitpParameterGetInt32(v14, L"PUUPeriod", (unsigned int *)&v19);
      v15 = (int)v19;
      v16 = KeyHandle;
      if ( (unsigned int)v19 < 0x3C )
        v15 = 60;
      *((_DWORD *)a1 + 15) = 1000 * v15;
      CitpParameterGetString(v16, L"HPList", (const unsigned __int16 **)a1 + 8);
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  CitpParametersCompute(a1, v3);
}
