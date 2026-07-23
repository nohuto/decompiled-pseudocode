/*
 * XREFs of PopBcdEstablishResumeObject @ 0x14053CC6C
 * Callers:
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x14056C3E8 (PoInitHiberServices.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14053D4D4 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdQueryObject @ 0x14053D87C (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14053DA8C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14053DBA4 (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x14053E1DC (BcdGetElementDataWithFlags.c)
 *     PopBcdRegenerateResumeObject @ 0x1406758B4 (PopBcdRegenerateResumeObject.c)
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
  ULONG BufferSize; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+44h] [rbp-2Ch]
  HANDLE v15; // [rsp+48h] [rbp-28h] BYREF
  GUID Buffer; // [rsp+50h] [rbp-20h] BYREF

  BcdObjectHandle = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  ElementDataWithFlags = BcdOpenObject(BcdStoreHandle, &GUID_CURRENT_BOOT_ENTRY, &BcdObjectHandle);
  if ( ElementDataWithFlags < 0 )
    goto LABEL_10;
  BufferSize = 16;
  ElementDataWithFlags = BcdGetElementDataWithFlags(BcdObjectHandle, 0x23000003u, v6, &Buffer, &BufferSize);
  if ( ElementDataWithFlags >= 0 )
  {
    v7 = BcdOpenObject(BcdStoreHandle, &Buffer, &v15);
    v3 = v15;
    ElementDataWithFlags = v7;
    if ( v7 >= 0 )
    {
      ElementDataWithFlags = BcdQueryObject(v15, 1u, (BCD_OBJECT_DESCRIPTION)&BufferSize, 0LL);
      if ( ElementDataWithFlags >= 0 )
      {
        if ( (v14 & 0xF0000000) == 0x10000000 && (v14 & 0xF00000) == 0x200000 && (v14 & 0xFFFFF) == 4 )
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
      v15 = 0LL;
    }
  }
  if ( !InitIsWinPEMode )
  {
    v10 = PopBcdRegenerateResumeObject(BcdStoreHandle, BcdObjectHandle, &v15);
    v3 = v15;
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
    goto LABEL_16;
  }
  if ( !a2 )
  {
LABEL_16:
    BcdCloseObject(v3);
    return (unsigned int)ElementDataWithFlags;
  }
  *a2 = v3;
  return (unsigned int)ElementDataWithFlags;
}
