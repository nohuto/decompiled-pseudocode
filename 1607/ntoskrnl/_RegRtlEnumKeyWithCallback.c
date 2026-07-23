/*
 * XREFs of _RegRtlEnumKeyWithCallback @ 0x1405629F4
 * Callers:
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1405634B4 (_PnpCtxRegEnumKeyWithCallback.c)
 * Callees:
 *     IoGetStackLimits @ 0x14004EEE0 (IoGetStackLimits.c)
 *     _SysCtxInternalEnumSubkeyCallback @ 0x140140FBC (_SysCtxInternalEnumSubkeyCallback.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _RegRtlQueryInfoKey @ 0x1404C5308 (_RegRtlQueryInfoKey.c)
 *     _RegRtlEnumKey @ 0x140562BA4 (_RegRtlEnumKey.c)
 */

__int64 __fastcall RegRtlEnumKeyWithCallback(HANDLE KeyHandle, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  void *v5; // rsi
  unsigned int v7; // eax
  unsigned __int64 v8; // rdi
  char *v9; // rbp
  int v10; // r14d
  unsigned int v11; // eax
  int v12; // edx
  PVOID PoolWithTag; // rax
  PVOID v15; // rax
  unsigned __int64 HighLimit; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 LowLimit; // [rsp+38h] [rbp-A0h] BYREF
  char v18; // [rsp+40h] [rbp-98h] BYREF

  v4 = 0;
  v5 = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
    return (unsigned int)-1073741670;
  if ( (unsigned int)RegRtlQueryInfoKey(KeyHandle, 0LL, (unsigned int *)&HighLimit, 0LL, 0LL, 0LL) )
  {
    LODWORD(v8) = 0;
    goto LABEL_7;
  }
  v7 = HighLimit;
  if ( (_DWORD)HighLimit )
  {
    if ( (int)HighLimit + 1 < (unsigned int)HighLimit )
      return (unsigned int)-1073741675;
    v7 = HighLimit + 1;
  }
  v8 = 2LL * v7;
  if ( v8 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
LABEL_7:
  if ( (unsigned int)v8 > 0x50 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v8, 0x4C474552u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v9 = (char *)PoolWithTag;
  }
  else
  {
    v9 = &v18;
    LODWORD(v8) = 80;
  }
  v10 = 0;
  while ( 1 )
  {
    LODWORD(HighLimit) = (unsigned int)v8 >> 1;
    v11 = RegRtlEnumKey(KeyHandle);
    if ( v11 == -2147483622 || v11 == -1073741444 )
      break;
    if ( v11 == -1073741789 )
    {
      v8 = 2LL * (unsigned int)HighLimit;
      if ( v8 > 0xFFFFFFFF )
      {
        v4 = -1073741675;
        break;
      }
      v4 = 0;
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      v15 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v8, 0x4C474552u);
      v5 = v15;
      if ( !v15 )
        return (unsigned int)-1073741801;
      v9 = (char *)v15;
    }
    else
    {
      if ( v11 )
      {
        v4 = v11;
        break;
      }
      *(_WORD *)&v9[2 * ((unsigned __int64)(unsigned int)v8 >> 1) - 2] = 0;
      if ( SysCtxInternalEnumSubkeyCallback )
        v12 = SysCtxInternalEnumSubkeyCallback((__int64)KeyHandle, (__int64)v9, a3);
      else
        v12 = 0;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          v10 = 0;
        }
        else if ( v12 != 2 )
        {
          if ( v12 == 3 )
            v4 = -1073741248;
          else
            v4 = -1073741595;
          break;
        }
      }
      else
      {
        ++v10;
      }
      if ( v12 == 2 )
        break;
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v4;
}
