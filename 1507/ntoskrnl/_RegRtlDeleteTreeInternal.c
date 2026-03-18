/*
 * XREFs of _RegRtlDeleteTreeInternal @ 0x1405A8114
 * Callers:
 *     _PnpCtxRegDeleteTree @ 0x14058F9B0 (_PnpCtxRegDeleteTree.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405A8114 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x14071A3E4 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _RegRtlOpenKeyTransacted @ 0x140435A8C (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405A8114 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x1405A834C (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x1405A8C6C (_RegRtlEnumKey.c)
 *     _RegRtlQueryInfoKey @ 0x1405A928C (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall RegRtlDeleteTreeInternal(char *a1, const WCHAR *a2, void *a3)
{
  PVOID PoolWithTag; // rsi
  char StackLimits; // al
  int v7; // ebx
  unsigned int v8; // eax
  unsigned __int64 v9; // rdi
  int v10; // eax
  unsigned __int64 v11; // rax
  int v12; // ecx
  int v13; // eax
  int v15; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-18h] BYREF

  Handle = 0LL;
  PoolWithTag = 0LL;
  StackLimits = RtlpGetStackLimits((__int64)&v16, (__int64)&v15);
  if ( (unsigned __int64)&v15 - (v16 & -(__int64)(StackLimits != 0)) < 0x400 )
  {
    v7 = -1073741670;
    goto LABEL_30;
  }
  v7 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x3001Fu, &Handle, a3);
  if ( v7 >= 0 )
  {
    if ( (unsigned int)RegRtlQueryInfoKey((_DWORD)Handle, 0, (unsigned int)&v16, 0, 0LL, 0LL) )
    {
      LODWORD(v9) = 0;
      goto LABEL_12;
    }
    v8 = v16;
    if ( (_DWORD)v16 )
    {
      if ( (int)v16 + 1 < (unsigned int)v16 )
        goto LABEL_10;
      v8 = v16 + 1;
    }
    v9 = 2LL * v8;
    if ( v9 <= 0xFFFFFFFF )
    {
      v7 = 0;
LABEL_12:
      if ( !(_DWORD)v9 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v9, 0x4C474552u)) != 0LL )
      {
        LODWORD(v16) = (unsigned int)v9 >> 1;
        v10 = RegRtlEnumKey(Handle);
        v15 = 1;
        while ( v10 != -2147483622 && v10 != -1073741444 )
        {
          if ( v10 == -1073741789 )
          {
            v11 = 2LL * (unsigned int)v16;
            v16 = v11;
            if ( v11 > 0xFFFFFFFF )
              goto LABEL_10;
            LODWORD(v9) = v11;
            v7 = 0;
            if ( PoolWithTag )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              LODWORD(v11) = v16;
            }
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v11, 0x4C474552u);
            if ( !PoolWithTag )
            {
              v7 = -1073741801;
              break;
            }
            v12 = v15 - 1;
          }
          else
          {
            if ( v10 )
              break;
            *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)v9 >> 1) - 1) = 0;
            v13 = RegRtlDeleteTreeInternal(Handle, PoolWithTag, a3);
            v12 = v13 != 0 ? v15 : 0;
          }
          v15 = v12;
          LODWORD(v16) = (unsigned int)v9 >> 1;
          v10 = RegRtlEnumKey(Handle);
          ++v15;
        }
        if ( v7 >= 0 )
          v7 = RegRtlDeleteKeyTransacted(a1, a2, a3);
      }
      else
      {
        v7 = -1073741801;
      }
      goto LABEL_30;
    }
LABEL_10:
    v7 = -1073741675;
  }
LABEL_30:
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v7;
}
