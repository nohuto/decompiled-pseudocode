/*
 * XREFs of KsepRegistryOpenKey @ 0x140514C9C
 * Callers:
 *     KsepRegistryQueryDriverShims @ 0x140514A24 (KsepRegistryQueryDriverShims.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1405353E8 (KsepDbQueryRegistryDeviceData.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140652A78 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepEngineReadFlags @ 0x1407B3218 (KsepEngineReadFlags.c)
 *     KsepMatchInitBiosInfo @ 0x1407B775C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
 *     KsepStringDuplicate @ 0x140514AB8 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x140514B64 (KsepStringConcatenate.c)
 *     KsepStringFree @ 0x140514F80 (KsepStringFree.c)
 */

__int64 __fastcall KsepRegistryOpenKey(_WORD *a1, _WORD *a2, HANDLE *a3)
{
  int v6; // eax
  NTSTATUS v7; // ebx
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rcx
  char v12; // al
  int v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  v13 = 0;
  v14 = 0LL;
  if ( !a1 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v10 = KsepDebugFlag;
    KsepHistoryErrors[2 * v9 + 1] = -1073740768;
    KsepHistoryErrors[2 * v9] = 262566;
    if ( (v10 & 4) != 0 )
      RtlAssert("EnginePath != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1A6u, 0LL);
  }
  if ( !a3 )
  {
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v12 = KsepDebugFlag;
    KsepHistoryErrors[2 * v11 + 1] = -1073740768;
    KsepHistoryErrors[2 * v11] = 262567;
    if ( (v12 & 4) != 0 )
      RtlAssert("Handle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1A7u, 0LL);
  }
  if ( a2 )
    v6 = KsepStringConcatenate((__int64)&v13, a1, a2, 1);
  else
    v6 = KsepStringDuplicate((__int64)&v13, a1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v7 >= 0 )
    {
      *a3 = KeyHandle;
      _InterlockedIncrement(&dword_1403073F8);
    }
  }
  KsepStringFree(&v13);
  return (unsigned int)v7;
}
