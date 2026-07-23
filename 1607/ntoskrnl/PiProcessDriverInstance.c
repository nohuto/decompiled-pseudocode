/*
 * XREFs of PiProcessDriverInstance @ 0x140538D04
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14015BB50 (ZwDeleteValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     PipOpenServiceEnumKeys @ 0x140539324 (PipOpenServiceEnumKeys.c)
 *     PiFindDevInstMatch @ 0x14053951C (PiFindDevInstMatch.c)
 *     PiRearrangeDeviceInstances @ 0x14064B824 (PiRearrangeDeviceInstances.c)
 */

__int64 __fastcall PiProcessDriverInstance(unsigned __int16 *a1, __int64 a2, _BYTE *a3)
{
  int DevInstMatch; // ebx
  HANDLE v6; // rdi
  wchar_t *Buffer; // rax
  void *v8; // r15
  _WORD *v9; // rbx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rsi
  _WORD *PoolWithTag; // rax
  signed __int64 v13; // rax
  int Data; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-31h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+58h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-9h] BYREF
  wchar_t pszDest[12]; // [rsp+78h] [rbp-1h] BYREF

  DevInstMatch = PipOpenServiceEnumKeys(a2, 983103LL, 0LL, &KeyHandle, 1);
  if ( DevInstMatch >= 0 )
  {
    v6 = KeyHandle;
    DevInstMatch = PiFindDevInstMatch(
                     (_DWORD)KeyHandle,
                     (_DWORD)a1,
                     (unsigned int)&Data,
                     (unsigned int)&UnicodeString,
                     (__int64)&ppszDestEnd);
    if ( DevInstMatch < 0 )
    {
LABEL_17:
      ZwClose(v6);
      return (unsigned int)DevInstMatch;
    }
    Buffer = UnicodeString.Buffer;
    if ( UnicodeString.Buffer )
    {
      if ( *a3 )
      {
LABEL_14:
        if ( Buffer )
          RtlFreeAnsiString(&UnicodeString);
        goto LABEL_16;
      }
      ZwDeleteValueKey(v6, &UnicodeString);
      if ( --Data )
        PiRearrangeDeviceInstances(v6);
    }
    else
    {
      if ( !*a3 )
      {
LABEL_16:
        DevInstMatch = 0;
        goto LABEL_17;
      }
      v8 = (void *)*((_QWORD *)a1 + 1);
      v9 = 0LL;
      v10 = *a1;
      v11 = v10 >> 1;
      if ( *((_WORD *)v8 + (v10 >> 1) - 1) )
      {
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(LODWORD(UnicodeString.Buffer) + 1), v10 + 2, 0x20207050u);
        v9 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, v8, (unsigned int)v10);
          LODWORD(v10) = v10 + 2;
          v9[v11] = 0;
          v8 = v9;
        }
      }
      ppszDestEnd = pszDest;
      RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", Data);
      v13 = ppszDestEnd - pszDest;
      ValueName.MaximumLength = 20;
      if ( (_DWORD)v13 == -1 )
        ValueName.Length = 20;
      else
        ValueName.Length = 2 * v13;
      ValueName.Buffer = pszDest;
      ZwSetValueKey(v6, &ValueName, 0, 1u, v8, v10);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      ++Data;
    }
    *(_DWORD *)&ValueName.Length = 786442;
    ValueName.Buffer = L"Count";
    ZwSetValueKey(v6, &ValueName, 0, 4u, &Data, 4u);
    ValueName.Buffer = L"NextInstance";
    *(_DWORD *)&ValueName.Length = 1703960;
    ZwSetValueKey(v6, &ValueName, 0, 4u, &Data, 4u);
    Buffer = UnicodeString.Buffer;
    goto LABEL_14;
  }
  return (unsigned int)DevInstMatch;
}
