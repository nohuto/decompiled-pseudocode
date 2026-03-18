/*
 * XREFs of FxVerifyAllocateDebugInfo @ 0x1C0080650
 * Callers:
 *     FxVerifierReadObjectDebugInfo @ 0x1C008050C (FxVerifierReadObjectDebugInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     memset @ 0x1C0040480 (memset.c)
 */

__int64 __fastcall FxVerifyAllocateDebugInfo(
        FxObjectDebugInfo **Info,
        wchar_t *HandleNameList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObjectDebugInfoFlags DebugFlag)
{
  FxObjectDebugInfo *v4; // rbx
  __int16 v5; // r13
  FxObjectDebugInfo **v7; // r12
  SIZE_T v9; // rdi
  FxObjectDebugInfo *PoolWithTag; // rax
  unsigned int v11; // esi
  wchar_t v12; // r8
  const char *v13; // rdx
  const wchar_t *v14; // r15
  wchar_t v15; // [rsp+20h] [rbp-79h]
  _UNICODE_STRING objectName; // [rsp+28h] [rbp-71h] BYREF
  FxObjectDebugInfo **v17; // [rsp+38h] [rbp-61h]
  _UNICODE_STRING handleName; // [rsp+40h] [rbp-59h] BYREF
  _STRING string; // [rsp+50h] [rbp-49h] BYREF
  wchar_t ubuffer[40]; // [rsp+60h] [rbp-39h] BYREF

  v4 = *Info;
  v5 = DebugFlag;
  v7 = Info;
  v17 = Info;
  if ( !*HandleNameList )
    return 3221225485LL;
  if ( !v4 )
  {
    v9 = 4 * FxObjectsInfoCount;
    PoolWithTag = (FxObjectDebugInfo *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v9, FxDriverGlobals->Tag);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225632LL;
    memset(PoolWithTag, 0, v9);
  }
  v11 = 0;
  v12 = *HandleNameList;
  v15 = *HandleNameList;
  if ( FxObjectsInfoCount )
  {
    do
    {
      v4[v11].ObjectType = FxObjectsInfo[v11].ObjectType;
      v13 = FxObjectsInfo[v11].HandleName;
      if ( v13 )
      {
        if ( v12 == 42 )
        {
          v4[v11].u.DebugFlags |= v5;
        }
        else
        {
          RtlInitAnsiString(&string, v13);
          memset(ubuffer, 0, sizeof(ubuffer));
          *(_DWORD *)&objectName.Length = 5242880;
          objectName.Buffer = ubuffer;
          if ( RtlAnsiStringToUnicodeString(&objectName, &string, 0) >= 0 )
          {
            v14 = HandleNameList;
            if ( *HandleNameList )
            {
              while ( 1 )
              {
                RtlInitUnicodeString(&handleName, v14);
                v14 += ((unsigned __int64)handleName.Length >> 1) + 1;
                if ( !RtlCompareUnicodeString(&handleName, &objectName, 1u) )
                  break;
                if ( !*v14 )
                  goto LABEL_17;
              }
              v4[v11].u.DebugFlags |= v5;
            }
          }
LABEL_17:
          v12 = v15;
        }
      }
      ++v11;
    }
    while ( v11 < FxObjectsInfoCount );
    v7 = v17;
  }
  if ( !*v7 )
    *v7 = v4;
  return 0LL;
}
