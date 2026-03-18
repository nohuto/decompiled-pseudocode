/*
 * XREFs of CiConfigInitializeFromRegistry @ 0x1C000D640
 * Callers:
 *     CiConfigInitialize @ 0x1C000D2E0 (CiConfigInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     memmove @ 0x1C0002D80 (memmove.c)
 *     memset @ 0x1C00030C0 (memset.c)
 *     WPP_SF_Sd @ 0x1C000423C (WPP_SF_Sd.c)
 *     WPP_SF_d @ 0x1C00045BC (WPP_SF_d.c)
 *     CiConfigTaskPolicy @ 0x1C000D820 (CiConfigTaskPolicy.c)
 *     CiTaskDump @ 0x1C000D8A0 (CiTaskDump.c)
 *     CiTaskAllocate @ 0x1C000D910 (CiTaskAllocate.c)
 *     CiConfigQueryTaskFromRegistry @ 0x1C000D9C0 (CiConfigQueryTaskFromRegistry.c)
 */

__int64 __fastcall CiConfigInitializeFromRegistry(HANDLE KeyHandle)
{
  ULONG i; // esi
  NTSTATUS v3; // eax
  unsigned int v4; // ebx
  WCHAR *PoolWithTag; // rax
  WCHAR *v6; // rbx
  NTSTATUS v7; // r9d
  int TaskFromRegistry; // edi
  int v9; // ecx
  ULONG Length[2]; // [rsp+28h] [rbp-E0h]
  void *KeyHandlea; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ResultLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+48h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v17[120]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE KeyInformation[12]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int Size; // [rsp+114h] [rbp+Ch]
  size_t Size_4; // [rsp+118h] [rbp+10h] BYREF

  memset(&v17[56], 0, 0x40uLL);
  for ( i = 0; ; ++i )
  {
    v3 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0x98u, ResultLength);
    v4 = v3;
    if ( v3 < 0 )
      break;
    if ( Size < 0x80 )
    {
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag((POOL_TYPE)512, 2LL * (Size + 1), 0x74727641u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, &Size_4, Size);
        v6[(unsigned __int64)Size >> 1] = 0;
        if ( RtlInitUnicodeStringEx(&DestinationString, v6) < 0 )
          goto LABEL_20;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v7 = ZwOpenKey(&KeyHandlea, 0x101u, &ObjectAttributes);
        if ( v7 < 0 )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            WPP_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xEu,
              (__int64)&WPP_a0dee8c3b2673bbedaa186a94f32f503_Traceguids,
              v7);
LABEL_20:
          ExFreePoolWithTag(v6, 0);
          continue;
        }
        TaskFromRegistry = CiConfigQueryTaskFromRegistry(KeyHandlea);
        ZwClose(KeyHandlea);
        if ( TaskFromRegistry < 0 )
          goto LABEL_20;
        CiConfigTaskPolicy(v17);
        v9 = CiTaskAllocate(v6);
        if ( v9 < 0 )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            Length[0] = v9;
            WPP_SF_Sd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xDu,
              (__int64)&WPP_a0dee8c3b2673bbedaa186a94f32f503_Traceguids,
              0LL,
              *(_QWORD *)Length);
          }
        }
        else
        {
          CiConfigTaskPolicy(v14);
          CiTaskDump();
        }
      }
    }
LABEL_10:
    ;
  }
  if ( v3 == -1073741789 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xFu,
        (__int64)&WPP_a0dee8c3b2673bbedaa186a94f32f503_Traceguids,
        -1073741789);
    goto LABEL_10;
  }
  if ( v3 == -2147483622 )
    return 0LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x10u,
      (__int64)&WPP_a0dee8c3b2673bbedaa186a94f32f503_Traceguids,
      v3);
  return v4;
}
