/*
 * XREFs of OpenCacheKeyEx @ 0x1C0020130
 * Callers:
 *     FastGetProfileStringW @ 0x1C001F400 (FastGetProfileStringW.c)
 *     FastGetProfileDwordW @ 0x1C006AB50 (FastGetProfileDwordW.c)
 *     CheckDesktopPolicy @ 0x1C006C1A0 (CheckDesktopPolicy.c)
 *     FastGetProfileValue @ 0x1C006C300 (FastGetProfileValue.c)
 *     FastGetProfileKeysW @ 0x1C0075B10 (FastGetProfileKeysW.c)
 *     FastWriteProfileStringW @ 0x1C007E900 (FastWriteProfileStringW.c)
 *     CheckDesktopPolicyChange @ 0x1C00AAA30 (CheckDesktopPolicyChange.c)
 *     FastWriteProfileValue @ 0x1C00AABE0 (FastWriteProfileValue.c)
 * Callees:
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C0021220 (-InitPreviousUserString@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00715F0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     AccessCheckObject @ 0x1C0076B60 (AccessCheckObject.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
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
  __int64 v17; // r8
  PVOID v18; // r15
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 CurrentProcess; // [rsp+48h] [rbp-B8h]
  const UNICODE_STRING *v22; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Dest[32]; // [rsp+90h] [rbp-70h] BYREF
  char v26; // [rsp+D0h] [rbp-30h] BYREF

  v4 = 0LL;
  v5 = (unsigned int)a2;
  KeyHandle = 0LL;
  v22 = a1;
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
      Destination.Buffer = (PWSTR)&v26;
      if ( (v10 & 4) != 0 )
      {
        v10 &= ~4u;
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
        goto LABEL_29;
      }
      if ( *(&off_1C00ECB50)[dword_1C00EC7E0[4 * v5]] == 77 )
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
      RtlAppendUnicodeToString(&Destination, (&off_1C00ECB50)[dword_1C00EC7E0[4 * v5]] + 1);
      RtlAppendUnicodeToString(&Destination, (&off_1C00EC7E8)[2 * v5]);
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
        v18 = Object;
        if ( v16 < 0 )
        {
          ZwClose(KeyHandle);
          v13 = -1073741790;
        }
        else
        {
          LOBYTE(v17) = 1;
          if ( !(unsigned int)AccessCheckObject(Object, a3, v17, &KeyMapping) )
          {
            ZwClose(KeyHandle);
            v13 = -1073741790;
          }
          ObfDereferenceObject(v18);
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
      v8 = v22;
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
