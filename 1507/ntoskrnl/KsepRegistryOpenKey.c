/*
 * XREFs of KsepRegistryOpenKey @ 0x1405785E4
 * Callers:
 *     KsepRegistryQueryDriverShims @ 0x140578550 (KsepRegistryQueryDriverShims.c)
 *     KsepDbQueryRegistryDeviceData @ 0x140578D3C (KsepDbQueryRegistryDeviceData.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14069C2FC (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepEngineReadFlags @ 0x1407DE684 (KsepEngineReadFlags.c)
 *     KsepMatchInitBiosInfo @ 0x1407E1D2C (KsepMatchInitBiosInfo.c)
 * Callees:
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     RtlAssert @ 0x140248194 (RtlAssert.c)
 *     KsepStringDuplicate @ 0x14054B5E0 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x1405788C8 (KsepStringFree.c)
 *     KsepStringConcatenate @ 0x140578998 (KsepStringConcatenate.c)
 */

__int64 __fastcall KsepRegistryOpenKey(_WORD *a1, __int64 a2, HANDLE *a3)
{
  int v6; // eax
  NTSTATUS v7; // ebx
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  LODWORD(v13) = 0;
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
    v6 = KsepStringConcatenate(&v13, a1, a2, 1LL, v13, v14);
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
      _InterlockedIncrement(&dword_140332758);
    }
  }
  KsepStringFree(&v13);
  return (unsigned int)v7;
}
