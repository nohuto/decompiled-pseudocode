/*
 * XREFs of CmEtwRunDown @ 0x1405DD7C4
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140500568 (EtwpKernelTraceRundown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpGetNextActiveHive @ 0x1403DE2DC (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLogHiveRundownEvent @ 0x1405DDD7C (CmpLogHiveRundownEvent.c)
 */

__int64 __fastcall CmEtwRunDown(unsigned int a1, char a2, char a3, char a4)
{
  char v4; // di
  char v5; // si
  struct _EX_RUNDOWN_REF *v7; // rcx
  unsigned int v8; // eax
  __int64 *v9; // rsi
  __int64 v10; // r12
  __int64 i; // rdi
  _QWORD *v12; // rax
  void *v13; // r15
  int v14; // edx
  __int64 *v15; // rbx
  NTSTATUS v16; // ebx
  __int16 v20; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *NextActiveHive; // [rsp+50h] [rbp-B8h]
  ULONG ResultLength; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v28[4]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+D0h] [rbp-38h] BYREF
  int v30; // [rsp+DCh] [rbp-2Ch]
  __int64 *v31; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  int v34; // [rsp+F8h] [rbp-10h]
  int v35; // [rsp+FCh] [rbp-Ch]
  __int16 *v36; // [rsp+100h] [rbp-8h]
  __int64 v37; // [rsp+108h] [rbp+0h]

  v4 = a3;
  v20 = 0;
  v5 = a2;
  if ( !a4 )
  {
    v28[1] = 0LL;
    v31 = v28;
    v7 = 0LL;
    v28[0] = 0LL;
    v36 = &v20;
    v32 = 24LL;
    v37 = 2LL;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v7);
      v15 = NextActiveHive;
      if ( !NextActiveHive )
        break;
      CmpLockRegistryExclusive();
      if ( v4 )
        CmpLogHiveRundownEvent(v15, a1);
      if ( v5 )
      {
        v8 = *((_DWORD *)v15 + 702);
        if ( v8 )
        {
          v9 = (__int64 *)(v15[350] + 16);
          v10 = v8;
          do
          {
            for ( i = *v9; i; i = *(_QWORD *)(i + 8) )
            {
              v12 = CmpConstructName(i - 16);
              v13 = v12;
              if ( v12 )
              {
                v14 = *(unsigned __int16 *)v12;
                v33 = v12[1];
                v34 = v14;
                v35 = 0;
                v28[2] = i - 16;
                EtwpLogKernelEvent((__int64)&v31, a1, 3LL, 0x919u, 0x401802u);
                ExFreePoolWithTag(v13, 0x624E4D43u);
              }
            }
            v9 += 3;
            --v10;
          }
          while ( v10 );
          v15 = NextActiveHive;
          v4 = a3;
        }
        v5 = a2;
      }
      CmpUnlockRegistry();
      v7 = (struct _EX_RUNDOWN_REF *)v15;
    }
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Select");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"Current");
      v16 = ZwQueryValueKey(
              KeyHandle,
              &ValueName,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x10u,
              &ResultLength);
      ZwClose(KeyHandle);
      if ( v16 >= 0 )
      {
        LODWORD(v21) = v30;
        v32 = 4LL;
        v31 = &v21;
        EtwpLogKernelEvent((__int64)&v31, a1, 1LL, 0x923u, 0x401802u);
      }
    }
  }
  v32 = 88LL;
  v31 = &CmPerfCounters;
  EtwpLogKernelEvent((__int64)&v31, a1, 1LL, 0x922u, 0x401802u);
  return 0LL;
}
