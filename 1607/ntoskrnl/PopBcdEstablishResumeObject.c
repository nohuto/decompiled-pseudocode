/*
 * XREFs of PopBcdEstablishResumeObject @ 0x14053C72C
 * Callers:
 *     PopAllocateHiberContext @ 0x14052F5C4 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x14056BEA8 (PoInitHiberServices.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14053CF94 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdQueryObject @ 0x14053D33C (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14053D54C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14053D664 (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x14053DC9C (BcdGetElementDataWithFlags.c)
 *     PopBcdRegenerateResumeObject @ 0x1406757D0 (PopBcdRegenerateResumeObject.c)
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
  int v13; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+44h] [rbp-2Ch]
  HANDLE v15; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-20h] BYREF

  Handle = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  ElementDataWithFlags = BcdOpenObject(a1, &GUID_CURRENT_BOOT_ENTRY, &Handle);
  if ( ElementDataWithFlags < 0 )
    goto LABEL_10;
  v13 = 16;
  ElementDataWithFlags = BcdGetElementDataWithFlags(Handle, 587202563LL, v6, v16, &v13);
  if ( ElementDataWithFlags >= 0 )
  {
    v7 = BcdOpenObject(a1, v16, &v15);
    v3 = v15;
    ElementDataWithFlags = v7;
    if ( v7 >= 0 )
    {
      ElementDataWithFlags = BcdQueryObject(v15, 1LL, &v13, 0LL);
      if ( ElementDataWithFlags >= 0 )
      {
        if ( (v14 & 0xF0000000) == 0x10000000 && (v14 & 0xF00000) == 0x200000 && (v14 & 0xFFFFF) == 4 )
        {
          v13 = 2;
          ElementDataWithFlags = BcdGetElementDataWithFlags(v3, 637534211LL, v8, v11, &v13);
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
      v15 = 0LL;
    }
  }
  if ( !InitIsWinPEMode )
  {
    v10 = PopBcdRegenerateResumeObject(a1, Handle, &v15);
    v3 = v15;
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
