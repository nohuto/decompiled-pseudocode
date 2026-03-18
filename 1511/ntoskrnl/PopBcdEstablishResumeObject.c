/*
 * XREFs of PopBcdEstablishResumeObject @ 0x1404FBEB0
 * Callers:
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x1405466A8 (PoInitHiberServices.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x1404FC68C (BcdQueryObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1404FC834 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdOpenObject @ 0x1404FCC2C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1404FCD44 (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x1404FD444 (BcdGetElementDataWithFlags.c)
 *     PopBcdRegenerateResumeObject @ 0x14063D040 (PopBcdRegenerateResumeObject.c)
 */

__int64 __fastcall PopBcdEstablishResumeObject(__int64 a1, _QWORD *a2)
{
  HANDLE v3; // rbx
  int ElementDataWithFlags; // edi
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // r8
  int v10; // eax
  _BYTE v11[8]; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  HANDLE v13; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+48h] [rbp-28h] BYREF
  int v15; // [rsp+4Ch] [rbp-24h]
  _BYTE v16[16]; // [rsp+50h] [rbp-20h] BYREF

  Handle = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  ElementDataWithFlags = BcdOpenObject(a1, &GUID_CURRENT_BOOT_ENTRY, &Handle);
  if ( ElementDataWithFlags < 0 )
    goto LABEL_10;
  v14 = 16;
  ElementDataWithFlags = BcdGetElementDataWithFlags(Handle, 587202563LL, v6, v16, &v14);
  if ( ElementDataWithFlags >= 0 )
  {
    v7 = BcdOpenObject(a1, v16, &v13);
    v3 = v13;
    ElementDataWithFlags = v7;
    if ( v7 >= 0 )
    {
      ElementDataWithFlags = BcdQueryObject(v13, 1LL, &v14, 0LL);
      if ( ElementDataWithFlags >= 0 )
      {
        if ( (v15 & 0xF0000000) == 0x10000000 && (v15 & 0xF00000) == 0x200000 && (v15 & 0xFFFFF) == 4 )
        {
          v14 = 2;
          ElementDataWithFlags = BcdGetElementDataWithFlags(v3, 637534211LL, v8, v11, &v14);
          if ( ElementDataWithFlags < 0 || !v11[0] )
            ElementDataWithFlags = PopBcdSetDefaultResumeObjectElements(v3, Handle);
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
    v10 = PopBcdRegenerateResumeObject(a1, Handle, &v13);
    v3 = v13;
    ElementDataWithFlags = v10;
  }
  if ( ElementDataWithFlags >= 0 )
    ElementDataWithFlags = 0;
  else
    v3 = 0LL;
LABEL_10:
  if ( Handle )
    BcdCloseObject(Handle);
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
