/*
 * XREFs of sub_180020088 @ 0x180020088
 * Callers:
 *     sub_18001FFE8 @ 0x18001FFE8 (sub_18001FFE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180020088(HANDLE TokenHandle, _QWORD *a2)
{
  int v4; // eax
  signed int v5; // ebx
  signed int LastError; // eax
  PSID *v7; // rdi
  signed int v8; // eax
  DWORD LengthSid; // ebp
  HLOCAL v10; // rax
  void *v11; // rsi
  signed int v12; // eax
  SIZE_T uBytes; // [rsp+60h] [rbp+18h] BYREF

  v4 = -GetTokenInformation(TokenHandle, TokenAppContainerSid, 0LL, 0, (PDWORD)&uBytes);
  v5 = v4 != 0 ? 0x8000FFFF : 0;
  if ( !v4 )
  {
    LastError = GetLastError();
    if ( LastError == 122 )
      goto LABEL_6;
    v5 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v5 = LastError;
    if ( v5 >= 0 )
    {
LABEL_6:
      v7 = (PSID *)LocalAlloc(0x40u, (unsigned int)uBytes);
      v5 = v7 == 0LL ? 0x8007000E : 0;
      if ( v7 )
      {
        if ( GetTokenInformation(TokenHandle, TokenAppContainerSid, v7, uBytes, (PDWORD)&uBytes) )
        {
          if ( *v7 )
          {
            LengthSid = GetLengthSid(*v7);
            v10 = LocalAlloc(0x40u, LengthSid);
            v11 = v10;
            v5 = v10 == 0LL ? 0x8007000E : 0;
            if ( v10 )
            {
              if ( CopySid(LengthSid, v10, *v7) )
              {
                v5 = 0;
                *a2 = v11;
              }
              else
              {
                v12 = GetLastError();
                v5 = (unsigned __int16)v12 | 0x80070000;
                if ( v12 <= 0 )
                  v5 = v12;
                if ( v5 >= 0 )
                  v5 = -2147467259;
                LocalFree(v11);
              }
            }
          }
          else
          {
            v5 = -2147023728;
          }
          LocalFree(v7);
        }
        else
        {
          v8 = GetLastError();
          v5 = (unsigned __int16)v8 | 0x80070000;
          if ( v8 <= 0 )
            v5 = v8;
          if ( v5 >= 0 )
            return (unsigned int)-2147467259;
        }
      }
    }
  }
  return (unsigned int)v5;
}
