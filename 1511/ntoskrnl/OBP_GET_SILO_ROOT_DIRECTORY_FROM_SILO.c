/*
 * XREFs of OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140079DFC
 * Callers:
 *     OBP_GET_CURRENT_SILO_ROOT_DIRECTORY @ 0x140079DA4 (OBP_GET_CURRENT_SILO_ROOT_DIRECTORY.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x140042B20 (ObpIncrPointerCount.c)
 *     PsIsHostSilo @ 0x140079E50 (PsIsHostSilo.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     PsGetSiloObjectByPointer @ 0x14063F7B8 (PsGetSiloObjectByPointer.c)
 */

volatile signed __int64 *__fastcall OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(__int64 a1)
{
  volatile signed __int64 *v2; // rbx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned __int8)PsIsHostSilo() )
  {
    v2 = (volatile signed __int64 *)ObpRootDirectoryObject;
    if ( ObpRootDirectoryObject )
    {
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)ObpRootDirectoryObject - 48);
      ObpIncrPointerCount(v2 - 6);
    }
  }
  else if ( (int)PsGetSiloObjectByPointer(a1, &ObpDirectoryObjectType, &v4) >= 0 )
  {
    return (volatile signed __int64 *)v4;
  }
  else
  {
    return 0LL;
  }
  return v2;
}
