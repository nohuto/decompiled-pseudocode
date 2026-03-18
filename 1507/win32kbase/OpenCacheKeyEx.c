/*
 * XREFs of OpenCacheKeyEx @ 0x1C0032120
 * Callers:
 *     CheckDesktopPolicy @ 0x1C0012BC0 (CheckDesktopPolicy.c)
 *     FastGetProfileStringW @ 0x1C00317C0 (FastGetProfileStringW.c)
 *     FastWriteProfileStringW @ 0x1C0070150 (FastWriteProfileStringW.c)
 *     FastGetProfileDwordW @ 0x1C007CAF0 (FastGetProfileDwordW.c)
 *     FastGetProfileKeysW @ 0x1C007E5C0 (FastGetProfileKeysW.c)
 *     FastGetProfileValue @ 0x1C007E890 (FastGetProfileValue.c)
 *     CheckDesktopPolicyChange @ 0x1C00A6250 (CheckDesktopPolicyChange.c)
 *     FastWriteProfileValue @ 0x1C00A6400 (FastWriteProfileValue.c)
 * Callees:
 *     AccessCheckObject @ 0x1C0013C50 (AccessCheckObject.c)
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C0031568 (-InitPreviousUserString@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C007E44C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

void *__fastcall OpenCacheKeyEx(const UNICODE_STRING *a1, __int64 a2, ACCESS_MASK a3, int *a4)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  const UNICODE_STRING *v8; // rbx
  PVOID v9; // r15
  int v10; // esi
  const UNICODE_STRING *v11; // rdx
  NTSTATUS v12; // eax
  int v13; // ebx
  wchar_t *v15; // rdx
  NTSTATUS v16; // eax
  PVOID v17; // r15
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 CurrentProcess; // [rsp+48h] [rbp-B8h]
  const UNICODE_STRING *v21; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Dest[32]; // [rsp+90h] [rbp-70h] BYREF
  char v25; // [rsp+D0h] [rbp-30h] BYREF

  v4 = 0LL;
  v5 = (unsigned int)a2;
  KeyHandle = 0LL;
  v21 = a1;
  v8 = a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  v9 = (PVOID)CurrentProcess;
  if ( a3 == 131097 && ((_DWORD)v5 == 4 || (_DWORD)v5 == 23) )
  {
    v10 = *a4;
    while ( 1 )
    {
LABEL_7:
      *(_DWORD *)&Destination.Length = 0x2000000;
      Destination.Buffer = (PWSTR)&v25;
      if ( (v10 & 4) != 0 )
      {
        v10 &= ~4u;
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
        goto LABEL_29;
      }
      if ( *off_1C00E9B50[dword_1C00E97E0[4 * v5]] == 77 )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
      }
      else
      {
        if ( v8 )
        {
          v11 = v8;
        }
        else
        {
          InitPreviousUserString();
          v11 = &PreviousUserString;
        }
        RtlAppendUnicodeStringToString(&Destination, v11);
      }
      if ( (v10 & 2) != 0 )
        break;
      if ( (v10 & 8) != 0 )
      {
        v10 &= ~8u;
        RtlAppendUnicodeToString(&Destination, L"Remote\\");
        RtlStringCchPrintfW(Dest, 0x20uLL, L"%ld\\", (unsigned int)gSessionId);
        v15 = Dest;
        goto LABEL_30;
      }
      if ( a4 && (*a4 & 0x10) != 0 )
        goto LABEL_42;
      v10 &= ~1u;
LABEL_17:
      RtlAppendUnicodeToString(&Destination, off_1C00E9B50[dword_1C00E97E0[4 * v5]] + 1);
      RtlAppendUnicodeToString(&Destination, (&off_1C00E97E8)[2 * v5]);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v12 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
      v13 = v12;
      if ( a3 != 131097 && v9 != gpepCSRSS && v9 != (PVOID)gpepInit )
      {
        if ( v12 < 0 )
          goto LABEL_19;
        v16 = ObReferenceObjectByHandle(KeyHandle, a3, 0LL, 0, &Object, 0LL);
        v17 = Object;
        if ( v16 < 0 )
        {
          ZwClose(KeyHandle);
          v13 = -1073741790;
        }
        else
        {
          if ( !AccessCheckObject((__int64)Object, a3, 1, &KeyMapping) )
          {
            ZwClose(KeyHandle);
            v13 = -1073741790;
          }
          ObfDereferenceObject(v17);
        }
        v9 = (PVOID)CurrentProcess;
      }
      if ( v13 >= 0 )
        goto LABEL_21;
LABEL_19:
      if ( !v10 )
      {
LABEL_21:
        if ( a4 )
          *a4 = v10;
        if ( v13 >= 0 )
          return KeyHandle;
        return (void *)v4;
      }
      v8 = v21;
    }
    v10 &= ~2u;
LABEL_29:
    v15 = (wchar_t *)L"Software\\Policies\\Microsoft\\Windows\\";
LABEL_30:
    RtlAppendUnicodeToString(&Destination, v15);
    goto LABEL_17;
  }
  if ( !a4 || (*a4 & 0x10) == 0 )
  {
    v10 = 1;
    goto LABEL_7;
  }
LABEL_42:
  *a4 = 0;
  return 0LL;
}
