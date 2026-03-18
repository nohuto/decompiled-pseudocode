/*
 * XREFs of OpenCacheKeyEx @ 0x1C0055BA0
 * Callers:
 *     FastWriteProfileStringW @ 0x1C00540B0 (FastWriteProfileStringW.c)
 *     FastGetProfileKeysW @ 0x1C0054A10 (FastGetProfileKeysW.c)
 *     CheckDesktopPolicy @ 0x1C0054FF0 (CheckDesktopPolicy.c)
 *     FastGetProfileDwordW @ 0x1C00550B0 (FastGetProfileDwordW.c)
 *     FastGetProfileValue @ 0x1C0055250 (FastGetProfileValue.c)
 *     FastGetProfileStringW @ 0x1C00559C0 (FastGetProfileStringW.c)
 *     CheckDesktopPolicyChange @ 0x1C00B3F70 (CheckDesktopPolicyChange.c)
 *     FastWriteProfileValue @ 0x1C00B4120 (FastWriteProfileValue.c)
 * Callees:
 *     AccessCheckObject @ 0x1C0054250 (AccessCheckObject.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C005499C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C0054E24 (-InitPreviousUserString@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

void *__fastcall OpenCacheKeyEx(PCUNICODE_STRING Source, unsigned int a2, ACCESS_MASK a3, int *a4)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  PCUNICODE_STRING v8; // rbx
  PVOID v9; // r15
  int v10; // esi
  NTSTATUS v11; // eax
  int v12; // ebx
  const UNICODE_STRING *v14; // rdx
  wchar_t *v15; // rdx
  NTSTATUS v16; // eax
  PVOID v17; // r15
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 CurrentProcess; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  PCUNICODE_STRING v22; // [rsp+58h] [rbp-A8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Dest[32]; // [rsp+90h] [rbp-70h] BYREF
  char v25; // [rsp+D0h] [rbp-30h] BYREF

  v4 = 0LL;
  v5 = a2;
  KeyHandle = 0LL;
  v22 = Source;
  v8 = Source;
  CurrentProcess = PsGetCurrentProcess(Source);
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
      if ( *off_1C00FF6E0[dword_1C00FF360[4 * v5]] == 77 )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\");
      }
      else
      {
        if ( v8 )
        {
          v14 = v8;
        }
        else
        {
          InitPreviousUserString();
          v14 = &PreviousUserString;
        }
        RtlAppendUnicodeStringToString(&Destination, v14);
      }
      if ( (v10 & 2) != 0 )
        break;
      if ( (v10 & 8) != 0 )
      {
        v10 &= ~8u;
        RtlAppendUnicodeToString(&Destination, L"Remote\\");
        RtlStringCchPrintfW(Dest, 32LL, L"%ld\\", (unsigned int)gSessionId);
        v15 = Dest;
        goto LABEL_30;
      }
      if ( a4 && (*a4 & 0x10) != 0 )
        goto LABEL_42;
      v10 &= ~1u;
LABEL_15:
      RtlAppendUnicodeToString(&Destination, off_1C00FF6E0[dword_1C00FF360[4 * v5]] + 1);
      RtlAppendUnicodeToString(&Destination, (&off_1C00FF368)[2 * v5]);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
      v12 = v11;
      if ( a3 != 131097 && v9 != gpepCSRSS && v9 != (PVOID)gpepInit )
      {
        if ( v11 < 0 )
          goto LABEL_22;
        v16 = ObReferenceObjectByHandle(KeyHandle, a3, 0LL, 0, &Object, 0LL);
        v17 = Object;
        if ( v16 < 0 )
        {
          ZwClose(KeyHandle);
          v12 = -1073741790;
        }
        else
        {
          if ( !AccessCheckObject((__int64)Object, a3, 1, &KeyMapping) )
          {
            ZwClose(KeyHandle);
            v12 = -1073741790;
          }
          ObfDereferenceObject(v17);
        }
        v9 = (PVOID)CurrentProcess;
      }
      if ( v12 >= 0 )
        goto LABEL_17;
LABEL_22:
      if ( !v10 )
      {
LABEL_17:
        if ( a4 )
          *a4 = v10;
        if ( v12 >= 0 )
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
    goto LABEL_15;
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
