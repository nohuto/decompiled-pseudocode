/*
 * XREFs of _RegRtlEnumKeyWithCallback @ 0x1405A8A4C
 * Callers:
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1405A9620 (_PnpCtxRegEnumKeyWithCallback.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 *     _SysCtxInternalEnumSubkeyCallback @ 0x140166190 (_SysCtxInternalEnumSubkeyCallback.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _RegRtlEnumKey @ 0x1405A8C6C (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x1405A928C (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall RegRtlEnumKeyWithCallback(HANDLE KeyHandle, __int64 a2, __int64 a3)
{
  int v4; // r15d
  unsigned int v5; // ebx
  void *v6; // rsi
  char StackLimits; // al
  unsigned int v9; // eax
  unsigned __int64 v10; // rdi
  PVOID PoolWithTag; // rax
  char *v12; // r14
  unsigned int v13; // eax
  PVOID v14; // rax
  int v15; // edx
  __int64 v17; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-41h] BYREF
  char v19; // [rsp+40h] [rbp-39h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  StackLimits = RtlpGetStackLimits((__int64)&v17, (__int64)v18);
  if ( (unsigned __int64)&v18[-(v17 & -(__int64)(StackLimits != 0))] < 0x400 )
    return (unsigned int)-1073741670;
  if ( (unsigned int)RegRtlQueryInfoKey((_DWORD)KeyHandle, 0, (unsigned int)&v17, 0, 0LL, 0LL) )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    v9 = v17;
    if ( (_DWORD)v17 )
    {
      if ( (int)v17 + 1 < (unsigned int)v17 )
        return (unsigned int)-1073741675;
      v9 = v17 + 1;
    }
    v10 = 2LL * v9;
    if ( v10 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
  }
  if ( (unsigned int)v10 <= 0x50 )
  {
    v12 = &v19;
    LODWORD(v10) = 80;
    goto LABEL_15;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x4C474552u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    v12 = (char *)PoolWithTag;
LABEL_15:
    while ( 1 )
    {
      LODWORD(v17) = (unsigned int)v10 >> 1;
      v13 = RegRtlEnumKey(KeyHandle);
      if ( v13 == -2147483622 || v13 == -1073741444 )
        break;
      if ( v13 == -1073741789 )
      {
        v10 = 2LL * (unsigned int)v17;
        if ( v10 > 0xFFFFFFFF )
        {
          v5 = -1073741675;
          break;
        }
        v5 = 0;
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        v14 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x4C474552u);
        v6 = v14;
        if ( !v14 )
          return (unsigned int)-1073741801;
        v12 = (char *)v14;
      }
      else
      {
        if ( v13 )
        {
          v5 = v13;
          break;
        }
        *(_WORD *)&v12[2 * ((unsigned __int64)(unsigned int)v10 >> 1) - 2] = 0;
        if ( SysCtxInternalEnumSubkeyCallback )
          v15 = SysCtxInternalEnumSubkeyCallback((__int64)KeyHandle, (__int64)v12, a3);
        else
          v15 = 0;
        if ( v15 )
        {
          if ( v15 == 1 )
          {
            v4 = 0;
          }
          else if ( v15 != 2 )
          {
            if ( v15 == 3 )
              v5 = -1073741248;
            else
              v5 = -1073741595;
            break;
          }
        }
        else
        {
          ++v4;
        }
        if ( v15 == 2 )
          break;
      }
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
