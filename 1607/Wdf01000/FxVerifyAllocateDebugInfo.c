/*
 * XREFs of FxVerifyAllocateDebugInfo @ 0x1C007C160
 * Callers:
 *     FxVerifierGetObjectDebugInfo @ 0x1C007BF90 (FxVerifierGetObjectDebugInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

FxObjectDebugInfo *__fastcall FxVerifyAllocateDebugInfo(wchar_t *HandleNameList, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned int v4; // edi
  _WORD *PoolWithTag; // rax
  _WORD *v6; // rbx
  bool v7; // r12
  unsigned int i; // r14d
  const char *v9; // rdx
  const wchar_t *v10; // r15
  _UNICODE_STRING objectName; // [rsp+20h] [rbp-69h] BYREF
  _UNICODE_STRING handleName; // [rsp+30h] [rbp-59h] BYREF
  _STRING string; // [rsp+40h] [rbp-49h] BYREF
  wchar_t ubuffer[40]; // [rsp+50h] [rbp-39h] BYREF

  if ( !*HandleNameList )
    return 0LL;
  v4 = 4 * FxObjectsInfoCount;
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 4 * FxObjectsInfoCount, FxDriverGlobals->Tag);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  v7 = *HandleNameList == 42;
  memset(PoolWithTag, 0, v4);
  for ( i = 0; i < FxObjectsInfoCount; ++i )
  {
    v6[2 * i] = FxObjectsInfo[i].ObjectType;
    v9 = FxObjectsInfo[i].HandleName;
    if ( v9 )
    {
      if ( v7 )
      {
        v6[2 * i + 1] |= 1u;
      }
      else
      {
        RtlInitAnsiString(&string, v9);
        memset(ubuffer, 0, sizeof(ubuffer));
        *(_DWORD *)&objectName.Length = 5242880;
        objectName.Buffer = ubuffer;
        if ( RtlAnsiStringToUnicodeString(&objectName, &string, 0) >= 0 )
        {
          v10 = HandleNameList;
          if ( *HandleNameList )
          {
            while ( 1 )
            {
              RtlInitUnicodeString(&handleName, v10);
              v10 += ((unsigned __int64)handleName.Length >> 1) + 1;
              if ( !RtlCompareUnicodeString(&handleName, &objectName, 1u) )
                break;
              if ( !*v10 )
                goto LABEL_14;
            }
            v6[2 * i + 1] |= 1u;
          }
        }
      }
    }
LABEL_14:
    ;
  }
  return (FxObjectDebugInfo *)v6;
}
