/*
 * XREFs of ?CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z @ 0x1C006626C
 * Callers:
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0065E04 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z @ 0x1C006887C (-CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E42A8 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpPostUpdateUseInfoGetUpdateKey(unsigned int *a1)
{
  unsigned __int16 *v2; // rdi
  NTSTATUS v3; // eax
  const char *v4; // rdx
  unsigned int v5; // ebx
  int String; // eax
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned __int8 *v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  unsigned int v21; // r8d
  int v22; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 *v25; // [rsp+88h] [rbp+28h] BYREF
  void *KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  v25 = 0LL;
  v2 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v5 = v3;
  if ( v3 < 0 )
  {
    v21 = 5735;
    v22 = v3;
  }
  else
  {
    String = CitpParameterGetString(KeyHandle, L"BuildLabEx", (const unsigned __int16 **)&v25);
    v5 = String;
    if ( String < 0 )
    {
      CitpLogFailureWorker(String, v4, 0x166Eu);
      v2 = v25;
      goto LABEL_23;
    }
    v2 = v25;
    v7 = -1LL;
    do
      ++v7;
    while ( v25[v7] );
    if ( v7 )
    {
      v8 = 2 * v7;
      v9 = (unsigned __int8 *)v25;
      v10 = 314159LL;
      if ( v8 >= 8 )
      {
        v11 = (unsigned __int64)v8 >> 3;
        v8 -= 8 * ((unsigned __int64)v8 >> 3);
        do
        {
          v12 = v9[7];
          v13 = 37
              * (v9[6] + 37
                       * (v9[5] + 37 * (v9[4] + 37 * (v9[3] + 37 * (v9[2] + 37 * (v9[1] + 37 * (*v9 + 37 * v10)))))));
          v9 += 8;
          v10 = v12 + v13;
          --v11;
        }
        while ( v11 );
      }
      if ( (unsigned __int64)(v8 - 1) > 6 )
        goto LABEL_22;
      v14 = v8 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  if ( v19 != 1 )
                    goto LABEL_22;
                  LODWORD(v10) = *v9++ + 37 * v10;
                }
                LODWORD(v10) = *v9++ + 37 * v10;
              }
              LODWORD(v10) = *v9++ + 37 * v10;
            }
            LODWORD(v10) = *v9++ + 37 * v10;
          }
          LODWORD(v10) = *v9++ + 37 * v10;
        }
        LODWORD(v10) = *v9++ + 37 * v10;
      }
      LODWORD(v10) = *v9 + 37 * v10;
LABEL_22:
      *a1 = v10;
      v5 = 0;
      goto LABEL_23;
    }
    v5 = -1073739509;
    v21 = 5750;
    v22 = -1073739509;
  }
  CitpLogFailureWorker(v22, v4, v21);
LABEL_23:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v2 )
    Win32FreePool();
  return v5;
}
