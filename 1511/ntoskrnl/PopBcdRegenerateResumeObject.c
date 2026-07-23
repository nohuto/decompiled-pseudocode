/*
 * XREFs of PopBcdRegenerateResumeObject @ 0x14063D040
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x1404FBEB0 (PopBcdEstablishResumeObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BcdQueryObject @ 0x1404FC68C (BcdQueryObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1404FC834 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x1404FCB78 (PopBcdReadElement.c)
 *     BcdCloseObject @ 0x1404FCD44 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1404FD0D8 (BcdSetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14068D774 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14068D7EC (BcdDeleteObject.c)
 */

__int64 __fastcall PopBcdRegenerateResumeObject(void *a1, void *a2, _QWORD *a3)
{
  PVOID v3; // rsi
  int v6; // ebx
  HANDLE v7; // rdi
  BCD_FLAGS v8; // r8d
  NTSTATUS v9; // eax
  BCD_FLAGS v10; // r8d
  BCD_FLAGS v11; // r8d
  BCD_FLAGS v12; // r8d
  ULONG BufferSize; // [rsp+30h] [rbp-50h] BYREF
  ULONG v15; // [rsp+34h] [rbp-4Ch] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-48h] BYREF
  PVOID Buffer; // [rsp+40h] [rbp-40h] BYREF
  PVOID P; // [rsp+48h] [rbp-38h] BYREF
  _BCD_OBJECT_DESCRIPTION Description; // [rsp+50h] [rbp-30h] BYREF
  GUID v20; // [rsp+58h] [rbp-28h] BYREF
  GUID Identifier; // [rsp+68h] [rbp-18h] BYREF

  Buffer = 0LL;
  BufferSize = 0;
  v3 = 0LL;
  Description.Version = 1;
  v15 = 0;
  BcdObjectHandle = 0LL;
  Description.Type = 270532612;
  P = 0LL;
  v6 = BcdCreateObject(a1, 0LL, &Description, &BcdObjectHandle);
  if ( v6 < 0 )
  {
    v7 = BcdObjectHandle;
  }
  else
  {
    v6 = PopBcdReadElement(a2, 0x12000004u, &Buffer, &BufferSize);
    if ( v6 < 0 )
    {
      v7 = BcdObjectHandle;
    }
    else
    {
      PopBcdReadElement(a2, 0x12000005u, &P, &v15);
      v7 = BcdObjectHandle;
      v9 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x12000004u, v8, Buffer, BufferSize);
      v3 = P;
      v6 = v9;
      if ( v9 >= 0 )
      {
        if ( !P || (v6 = BcdSetElementDataWithFlags(v7, 0x12000005u, v10, P, v15), v6 >= 0) )
        {
          v6 = PopBcdSetDefaultResumeObjectElements(v7, a2);
          if ( v6 >= 0 )
          {
            v20 = GUID_RESUME_LOADER_SETTINGS_GROUP;
            v6 = BcdSetElementDataWithFlags(v7, 0x14000006u, v11, &v20, 0x10u);
            if ( v6 >= 0 )
            {
              v6 = BcdQueryObject(v7, 0, 0LL, &Identifier);
              if ( v6 >= 0 )
              {
                v6 = BcdSetElementDataWithFlags(a2, 0x23000003u, v12, &Identifier, 0x10u);
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
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
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
