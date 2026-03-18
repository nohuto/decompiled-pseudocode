/*
 * XREFs of _RegRtlDeleteTreeInternal @ 0x140531140
 * Callers:
 *     _PnpCtxRegDeleteTree @ 0x140522444 (_PnpCtxRegDeleteTree.c)
 *     _RegRtlDeleteTreeInternal @ 0x140531140 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x14069A424 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400282E0 (IoGetStackLimits.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _RegRtlOpenKeyTransacted @ 0x14043BEB8 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlQueryInfoKey @ 0x1404B7820 (_RegRtlQueryInfoKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140531140 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140531290 (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x140531B40 (_RegRtlEnumKey.c)
 */

__int64 __fastcall RegRtlDeleteTreeInternal(char *a1, const WCHAR *a2, void *a3)
{
  PVOID PoolWithTag; // rsi
  int v6; // ebx
  int InfoKey; // eax
  int v9; // ecx
  unsigned int v10; // eax
  unsigned __int64 v11; // rdi
  int v12; // eax
  PVOID v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 LowLimit; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 HighLimit; // [rsp+38h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-18h] BYREF

  Handle = 0LL;
  PoolWithTag = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v6 = -1073741670;
    goto LABEL_3;
  }
  v6 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x3001Fu, &Handle, a3);
  if ( v6 < 0 )
    goto LABEL_3;
  InfoKey = RegRtlQueryInfoKey(Handle, 0LL, (unsigned int *)&HighLimit, 0LL, 0LL, 0LL);
  v9 = 0;
  if ( InfoKey )
  {
    LODWORD(v11) = 0;
    goto LABEL_12;
  }
  v10 = HighLimit;
  if ( (_DWORD)HighLimit )
  {
    if ( (int)HighLimit + 1 < (unsigned int)HighLimit )
      goto LABEL_17;
    v10 = HighLimit + 1;
    v9 = 0;
  }
  v11 = 2LL * v10;
  if ( v11 > 0xFFFFFFFF )
  {
LABEL_17:
    v6 = -1073741675;
    goto LABEL_3;
  }
  v6 = 0;
LABEL_12:
  if ( !(_DWORD)v11
    || (v13 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v11, 0x4C474552u), v9 = 0, (PoolWithTag = v13) != 0LL) )
  {
LABEL_13:
    LODWORD(LowLimit) = v9;
    while ( 1 )
    {
      LODWORD(HighLimit) = (unsigned int)v11 >> 1;
      v12 = RegRtlEnumKey(Handle);
      LODWORD(LowLimit) = LowLimit + 1;
      if ( v12 == -2147483622 || v12 == -1073741444 )
        break;
      if ( v12 == -1073741789 )
      {
        v14 = 2LL * (unsigned int)HighLimit;
        HighLimit = v14;
        if ( v14 > 0xFFFFFFFF )
          goto LABEL_17;
        LODWORD(v11) = v14;
        v6 = 0;
        if ( PoolWithTag )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
          LODWORD(v14) = HighLimit;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v14, 0x4C474552u);
        if ( PoolWithTag )
        {
          v9 = LowLimit - 1;
          goto LABEL_13;
        }
        v6 = -1073741801;
        break;
      }
      if ( v12 )
        break;
      *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v11 >> 1) - 1) = 0;
      if ( !(unsigned int)RegRtlDeleteTreeInternal(Handle, PoolWithTag, a3) )
        LODWORD(LowLimit) = 0;
    }
    if ( v6 >= 0 )
      v6 = RegRtlDeleteKeyTransacted(a1, a2, a3);
  }
  else
  {
    v6 = -1073741801;
  }
LABEL_3:
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v6;
}
