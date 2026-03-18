/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x1404FD784
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1404F4C48 (BcdForciblyUnloadStore.c)
 *     BcdOpenSystemStore @ 0x1404FB6B8 (BcdOpenSystemStore.c)
 *     PopBcdClearPendingResume @ 0x1404FBDA4 (PopBcdClearPendingResume.c)
 *     BcdCloseStore @ 0x1404FBE3C (BcdCloseStore.c)
 *     BcdQueryObject @ 0x1404FC68C (BcdQueryObject.c)
 *     BcdDeleteElement @ 0x1404FC728 (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x1404FCC2C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1404FCD44 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1404FD0D8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1404FD444 (BcdGetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14068D774 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14068D7EC (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14068D82C (BcdEnumerateObjects.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1401506A0 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenMutant @ 0x140152880 (ZwOpenMutant.c)
 */

NTSTATUS __fastcall BiAcquireBcdSyncMutant(char a1)
{
  HANDLE v1; // rcx
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  HANDLE MutantHandle; // [rsp+68h] [rbp+10h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+18h] BYREF

  if ( a1 )
    return 0;
  v1 = BcdMutantHandle;
  if ( !BcdMutantHandle )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenMutant(&MutantHandle, 0x100000u, &ObjectAttributes);
    if ( result == -1073741772 )
    {
      _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, -1LL, 0LL);
    }
    else
    {
      if ( result < 0 )
        return result;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)MutantHandle, 0LL) )
        ZwClose(MutantHandle);
    }
    v1 = BcdMutantHandle;
  }
  if ( v1 == (HANDLE)-1LL )
    return 0;
  Timeout.QuadPart = -600000000LL;
  result = ZwWaitForSingleObject(v1, 0, &Timeout);
  if ( result == 258 )
    return -1073741823;
  return result;
}
