/*
 * XREFs of _RegRtlDeleteTreeInternal @ 0x14056260C
 * Callers:
 *     _PnpCtxRegDeleteTree @ 0x140550B58 (_PnpCtxRegDeleteTree.c)
 *     _RegRtlDeleteTreeInternal @ 0x14056260C (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x1406E0808 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     IoGetStackLimits @ 0x14004EEE0 (IoGetStackLimits.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _RegRtlQueryInfoKey @ 0x1404C5308 (_RegRtlQueryInfoKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404E0B64 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlDeleteTreeInternal @ 0x14056260C (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140562748 (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x140562BA4 (_RegRtlEnumKey.c)
 */

__int64 __fastcall RegRtlDeleteTreeInternal(char *a1, const WCHAR *a2, void *a3)
{
  PVOID PoolWithTag; // rsi
  int v6; // ebx
  int InfoKey; // eax
  int v8; // ecx
  unsigned int v9; // eax
  unsigned __int64 v10; // rdi
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
  }
  else
  {
    v6 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x3001Fu, &Handle, a3);
    if ( v6 < 0 )
      goto LABEL_7;
    InfoKey = RegRtlQueryInfoKey(Handle, 0LL, (unsigned int *)&HighLimit, 0LL, 0LL, 0LL);
    v8 = 0;
    if ( InfoKey )
    {
      LODWORD(v10) = 0;
    }
    else
    {
      v9 = HighLimit;
      if ( (_DWORD)HighLimit )
      {
        if ( (int)HighLimit + 1 < (unsigned int)HighLimit )
          goto LABEL_6;
        v9 = HighLimit + 1;
        v8 = 0;
      }
      v10 = 2LL * v9;
      if ( v10 > 0xFFFFFFFF )
      {
LABEL_6:
        v6 = -1073741675;
        goto LABEL_7;
      }
      v6 = 0;
    }
    if ( !(_DWORD)v10
      || (v13 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x4C474552u), v8 = 0, (PoolWithTag = v13) != 0LL) )
    {
LABEL_14:
      LODWORD(LowLimit) = v8;
      while ( 1 )
      {
        LODWORD(HighLimit) = (unsigned int)v10 >> 1;
        v12 = RegRtlEnumKey(Handle);
        LODWORD(LowLimit) = LowLimit + 1;
        if ( v12 == -2147483622 || v12 == -1073741444 )
          break;
        if ( v12 == -1073741789 )
        {
          v14 = 2LL * (unsigned int)HighLimit;
          HighLimit = v14;
          if ( v14 > 0xFFFFFFFF )
            goto LABEL_6;
          LODWORD(v10) = v14;
          v6 = 0;
          if ( PoolWithTag )
          {
            ExFreePoolWithTag(PoolWithTag, 0);
            LODWORD(v14) = HighLimit;
          }
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v14, 0x4C474552u);
          if ( PoolWithTag )
          {
            v8 = LowLimit - 1;
            goto LABEL_14;
          }
          v6 = -1073741801;
          break;
        }
        if ( v12 )
          break;
        *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v10 >> 1) - 1) = 0;
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
  }
LABEL_7:
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v6;
}
