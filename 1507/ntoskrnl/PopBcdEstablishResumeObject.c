/*
 * XREFs of PopBcdEstablishResumeObject @ 0x14056E4D8
 * Callers:
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x1405BD528 (PoInitHiberServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x14056F12C (BcdQueryObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14056F2D4 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdOpenObject @ 0x14056F6CC (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14056F7E4 (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x14056FEE4 (BcdGetElementDataWithFlags.c)
 *     PopBcdRegenerateResumeObject @ 0x1406BD5E4 (PopBcdRegenerateResumeObject.c)
 */

__int64 __fastcall PopBcdEstablishResumeObject(HANDLE BcdStoreHandle, _QWORD *a2)
{
  HANDLE v3; // rbx
  NTSTATUS ElementDataWithFlags; // edi
  BCD_FLAGS v6; // r8d
  NTSTATUS v7; // eax
  BCD_FLAGS v8; // r8d
  NTSTATUS v10; // eax
  _BYTE v11[8]; // [rsp+30h] [rbp-40h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-38h] BYREF
  HANDLE v13; // [rsp+40h] [rbp-30h] BYREF
  ULONG BufferSize; // [rsp+48h] [rbp-28h] BYREF
  int v15; // [rsp+4Ch] [rbp-24h]
  GUID Buffer; // [rsp+50h] [rbp-20h] BYREF

  BcdObjectHandle = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  ElementDataWithFlags = BcdOpenObject(BcdStoreHandle, &GUID_CURRENT_BOOT_ENTRY, &BcdObjectHandle);
  if ( ElementDataWithFlags < 0 )
    goto LABEL_10;
  BufferSize = 16;
  ElementDataWithFlags = BcdGetElementDataWithFlags(BcdObjectHandle, 0x23000003u, v6, &Buffer, &BufferSize);
  if ( ElementDataWithFlags >= 0 )
  {
    v7 = BcdOpenObject(BcdStoreHandle, &Buffer, &v13);
    v3 = v13;
    ElementDataWithFlags = v7;
    if ( v7 >= 0 )
    {
      ElementDataWithFlags = BcdQueryObject(v13, 1u, (BCD_OBJECT_DESCRIPTION)&BufferSize, 0LL);
      if ( ElementDataWithFlags >= 0 )
      {
        if ( (v15 & 0xF0000000) == 0x10000000 && (v15 & 0xF00000) == 0x200000 && (v15 & 0xFFFFF) == 4 )
        {
          BufferSize = 2;
          ElementDataWithFlags = BcdGetElementDataWithFlags(v3, 0x26000003u, v8, v11, &BufferSize);
          if ( ElementDataWithFlags < 0 || !v11[0] )
            ElementDataWithFlags = PopBcdSetDefaultResumeObjectElements(v3, BcdObjectHandle);
          goto LABEL_10;
        }
        ElementDataWithFlags = -1073741275;
      }
    }
    if ( v3 )
    {
      BcdCloseObject(v3);
      v3 = 0LL;
      v13 = 0LL;
    }
  }
  if ( !InitIsWinPEMode )
  {
    v10 = PopBcdRegenerateResumeObject(BcdStoreHandle, BcdObjectHandle, &v13);
    v3 = v13;
    ElementDataWithFlags = v10;
  }
  if ( ElementDataWithFlags >= 0 )
    ElementDataWithFlags = 0;
  else
    v3 = 0LL;
LABEL_10:
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  if ( ElementDataWithFlags < 0 )
  {
    if ( !v3 )
      return (unsigned int)ElementDataWithFlags;
  }
  else if ( a2 )
  {
    *a2 = v3;
    return (unsigned int)ElementDataWithFlags;
  }
  BcdCloseObject(v3);
  return (unsigned int)ElementDataWithFlags;
}
