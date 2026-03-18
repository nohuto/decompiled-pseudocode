/*
 * XREFs of PopBcdRegenerateResumeObject @ 0x1406BD5E4
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x14056E4D8 (PopBcdEstablishResumeObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     BcdQueryObject @ 0x14056F12C (BcdQueryObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14056F2D4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x14056F618 (PopBcdReadElement.c)
 *     BcdCloseObject @ 0x14056F7E4 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14070D28C (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14070D304 (BcdDeleteObject.c)
 */

__int64 __fastcall PopBcdRegenerateResumeObject(__int64 a1, __int64 a2, _QWORD *a3)
{
  PVOID v3; // rsi
  int v6; // ebx
  HANDLE v7; // rdi
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  unsigned int v14; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-4Ch] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  PVOID v18; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v19[2]; // [rsp+50h] [rbp-30h] BYREF
  GUID v20; // [rsp+58h] [rbp-28h] BYREF
  GUID v21; // [rsp+68h] [rbp-18h] BYREF

  P = 0LL;
  v14 = 0;
  v3 = 0LL;
  v19[0] = 1;
  v15 = 0;
  Handle = 0LL;
  v19[1] = 270532612;
  v18 = 0LL;
  v6 = BcdCreateObject(a1, 0LL, v19, &Handle);
  if ( v6 < 0 )
  {
    v7 = Handle;
  }
  else
  {
    v6 = PopBcdReadElement(a2, 301989892LL, &P, &v14);
    if ( v6 < 0 )
    {
      v7 = Handle;
    }
    else
    {
      PopBcdReadElement(a2, 301989893LL, &v18, &v15);
      v7 = Handle;
      v9 = BcdSetElementDataWithFlags((__int64)Handle, 0x12000004u, v8, (__int64)P, v14);
      v3 = v18;
      v6 = v9;
      if ( v9 >= 0 )
      {
        if ( !v18 || (v6 = BcdSetElementDataWithFlags((__int64)v7, 0x12000005u, v10, (__int64)v18, v15), v6 >= 0) )
        {
          v6 = PopBcdSetDefaultResumeObjectElements((__int64)v7, a2);
          if ( v6 >= 0 )
          {
            v20 = GUID_RESUME_LOADER_SETTINGS_GROUP;
            v6 = BcdSetElementDataWithFlags((__int64)v7, 0x14000006u, v11, (__int64)&v20, 0x10u);
            if ( v6 >= 0 )
            {
              v6 = BcdQueryObject(v7, 0, 0LL, &v21);
              if ( v6 >= 0 )
              {
                v6 = BcdSetElementDataWithFlags(a2, 0x23000003u, v12, (__int64)&v21, 0x10u);
                if ( v6 >= 0 )
                {
                  *a3 = v7;
                  v7 = 0LL;
                }
              }
            }
          }
        }
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  if ( v7 )
  {
    if ( v6 < 0 )
      BcdDeleteObject(v7);
    else
      BcdCloseObject(v7);
  }
  return (unsigned int)v6;
}
