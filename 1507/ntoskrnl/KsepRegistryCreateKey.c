/*
 * XREFs of KsepRegistryCreateKey @ 0x14069D9B4
 * Callers:
 *     KseSetDeviceFlags @ 0x14069BDFC (KseSetDeviceFlags.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     RtlAssert @ 0x140248194 (RtlAssert.c)
 *     KsepStringDuplicate @ 0x14054B5E0 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x1405788C8 (KsepStringFree.c)
 */

__int64 __fastcall KsepRegistryCreateKey(_WORD *a1, _WORD *a2, HANDLE *a3)
{
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rcx
  char v11; // al
  int v12; // ebx
  _QWORD v14[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE v18; // [rsp+C8h] [rbp+6Fh] BYREF

  LODWORD(v14[0]) = 0;
  v14[1] = 0LL;
  LODWORD(v15[0]) = 0;
  v15[1] = 0LL;
  KeyHandle = 0LL;
  v18 = 0LL;
  if ( !a1 )
  {
    v6 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v7 = KsepDebugFlag;
    KsepHistoryErrors[2 * v6 + 1] = -1073740768;
    KsepHistoryErrors[2 * v6] = 262647;
    if ( (v7 & 4) != 0 )
      RtlAssert("EnginePath != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1F7u, 0LL);
  }
  if ( !a2 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v9 = KsepDebugFlag;
    KsepHistoryErrors[2 * v8 + 1] = -1073740768;
    KsepHistoryErrors[2 * v8] = 262648;
    if ( (v9 & 4) != 0 )
      RtlAssert("SearchKey != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1F8u, 0LL);
  }
  if ( !a3 )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v11 = KsepDebugFlag;
    KsepHistoryErrors[2 * v10 + 1] = -1073740768;
    KsepHistoryErrors[2 * v10] = 262649;
    if ( (v11 & 4) != 0 )
      RtlAssert("Handle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1F9u, 0LL);
  }
  KsepStringDuplicate((__int64)v14, a1);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v12 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v12 >= 0 )
  {
    v12 = KsepStringDuplicate((__int64)v15, a2);
    if ( v12 >= 0 )
    {
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v12 = ZwCreateKey(&v18, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( v12 >= 0 )
      {
        *a3 = v18;
        _InterlockedIncrement(&dword_140332758);
      }
    }
  }
  KsepStringFree(v14);
  KsepStringFree(v15);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v12;
}
