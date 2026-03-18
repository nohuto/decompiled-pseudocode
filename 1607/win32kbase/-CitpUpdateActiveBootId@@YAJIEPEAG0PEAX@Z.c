/*
 * XREFs of ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0050A38
 * Callers:
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F078 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F8AC (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     ?CitpBytesToString@@YAXPEBXIPEAG@Z @ 0x1C0050C14 (-CitpBytesToString@@YAXPEBXIPEAG@Z.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0050C80 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z @ 0x1C0050CE8 (-CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z.c)
 *     ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x1C0051528 (-CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z.c)
 *     ?CitIsBufferSmallStatus@@YAEJ@Z @ 0x1C0051904 (-CitIsBufferSmallStatus@@YAEJ@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00F6204 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpUpdateActiveBootId(int a1, char a2, unsigned __int16 *a3, unsigned __int16 *a4)
{
  unsigned int v4; // r14d
  unsigned int v8; // esi
  int v9; // ebx
  bool v10; // zf
  void *v11; // rdi
  NTSTATUS v12; // eax
  unsigned int v13; // eax
  NTSTATUS v14; // eax
  const char *v15; // rdx
  unsigned __int16 v16; // ax
  NTSTATUS v18; // eax
  const char *v19; // rdx
  int v20; // ecx
  unsigned int v21; // r8d
  int v22; // esi
  ULONG v23; // r15d
  NTSTATUS v24; // eax
  USHORT v25; // ax
  NTSTATUS v26; // eax
  const char *v27; // rdx
  unsigned int Data; // [rsp+30h] [rbp-A1h] BYREF
  struct _UNICODE_STRING Handle; // [rsp+38h] [rbp-99h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-89h] BYREF
  int v31; // [rsp+50h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-71h] BYREF
  _DWORD KeyInformation[12]; // [rsp+70h] [rbp-61h] BYREF
  WCHAR SourceString[12]; // [rsp+A0h] [rbp-31h] BYREF
  _BYTE KeyValueInformation[16]; // [rsp+B8h] [rbp-19h] BYREF
  USHORT v37; // [rsp+C8h] [rbp-9h]
  char v38; // [rsp+CCh] [rbp-5h] BYREF

  v4 = 0;
  v31 = a1;
  *(_QWORD *)&Handle.Length = 0LL;
  Data = 0;
  v30 = 0;
  v8 = 0;
  if ( a2 )
  {
    Data = MEMORY[0xFFFFF780000002C4];
    if ( !MEMORY[0xFFFFF780000002C4] )
      return (unsigned int)-1073741637;
  }
  v9 = CitpEnsureDataKey((void **)&Handle);
  if ( v9 >= 0 )
  {
    ZwClose(*(HANDLE *)&Handle.Length);
    *(_QWORD *)&Handle.Length = 0LL;
    v9 = CitpEnsureKey(
           (void **)&Handle,
           L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT\\System\\Active",
           1);
    if ( v9 >= 0 )
    {
      CitpBytesToString(&v31, 4u, SourceString);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v10 = a2 == 0;
      v11 = *(void **)&Handle.Length;
      if ( v10 )
      {
        v18 = ZwDeleteValueKey(*(HANDLE *)&Handle.Length, &DestinationString);
        if ( v18 == -1073741772 )
          v18 = 0;
        if ( v18 < 0 )
          CitpLogFailureWorker(v18, v19, 0x81Eu);
      }
      else
      {
        CitpParameterGetInt32(*(HANDLE *)&Handle.Length, SourceString, &v30);
        memset(KeyInformation, 0, sizeof(KeyInformation));
        v12 = ZwQueryKey(v11, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
        v9 = v12;
        if ( v12 < 0 && !CitIsBufferSmallStatus(v12) )
        {
          v21 = 2010;
LABEL_30:
          CitpLogFailureWorker(v20, v15, v21);
          goto LABEL_19;
        }
        v13 = KeyInformation[8];
        if ( KeyInformation[8] > 8u )
        {
          v22 = KeyInformation[8] - 8;
          v23 = 0;
          while ( v4 < v13 )
          {
            v24 = ZwEnumerateValueKey(v11, v23, KeyValueFullInformation, KeyValueInformation, 0x2Au, &ResultLength);
            v9 = v24;
            if ( v24 < 0 && !CitIsBufferSmallStatus(v24) )
            {
              if ( v20 == -2147483622 )
                break;
              v21 = 2031;
              goto LABEL_30;
            }
            Handle.Buffer = (PWSTR)&v38;
            v25 = v37;
            if ( v37 <= 0x12u )
            {
              Handle.Length = v37;
            }
            else
            {
              v25 = 18;
              Handle.Length = 18;
            }
            Handle.MaximumLength = v25;
            v26 = ZwDeleteValueKey(v11, &Handle);
            if ( v26 < 0 )
            {
              ++v23;
              CitpLogFailureWorker(v26, v27, 0x803u);
            }
            else
            {
              --v22;
            }
            ++v4;
            if ( !v22 )
              break;
            v13 = KeyInformation[8];
          }
        }
        v14 = ZwSetValueKey(v11, &DestinationString, 0, 4u, &Data, 4u);
        v9 = v14;
        if ( v14 < 0 )
        {
          v21 = 2062;
          v20 = v14;
          goto LABEL_30;
        }
        v8 = v30;
      }
      if ( a3 )
      {
        if ( v8 > 0xFFFF )
          LOWORD(v8) = -1;
        *a3 = v8;
      }
      if ( a4 )
      {
        v16 = Data;
        if ( Data > 0xFFFF )
          v16 = -1;
        *a4 = v16;
      }
      v9 = 0;
      goto LABEL_19;
    }
  }
  v11 = *(void **)&Handle.Length;
LABEL_19:
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v9;
}
