/*
 * XREFs of CmEtwRunDown @ 0x140652CF0
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14054A6C8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpGetNextActiveHive @ 0x140445EE8 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLogHiveRundownEvent @ 0x1406532A8 (CmpLogHiveRundownEvent.c)
 */

__int64 __fastcall CmEtwRunDown(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
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
  char v18; // [rsp+38h] [rbp-D0h]
  char v19; // [rsp+39h] [rbp-CFh]
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

  v19 = a3;
  v18 = a2;
  v4 = a3;
  v20 = 0;
  v5 = a2;
  if ( !(_BYTE)a4 )
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
      NextActiveHive = CmpGetNextActiveHive(v7, a2, a3, a4);
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
                EtwpLogKernelEvent((__int64)&v31, a1, 3u, 0x919u, 4200450);
                ExFreePoolWithTag(v13, 0x624E4D43u);
              }
            }
            v9 += 3;
            --v10;
          }
          while ( v10 );
          v15 = NextActiveHive;
          v4 = v19;
        }
        v5 = v18;
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
        EtwpLogKernelEvent((__int64)&v31, a1, 1u, 0x923u, 4200450);
      }
    }
  }
  v32 = 88LL;
  v31 = &CmPerfCounters;
  EtwpLogKernelEvent((__int64)&v31, a1, 1u, 0x922u, 4200450);
  return 0LL;
}
