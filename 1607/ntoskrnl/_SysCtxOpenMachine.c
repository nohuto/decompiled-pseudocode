/*
 * XREFs of _SysCtxOpenMachine @ 0x140579C44
 * Callers:
 *     _PnpCtxOpenMachine @ 0x140579A88 (_PnpCtxOpenMachine.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _RegRtlOpenKeyTransacted @ 0x1404E0B64 (_RegRtlOpenKeyTransacted.c)
 *     _SysCtxOpenControlSet @ 0x140579DF4 (_SysCtxOpenControlSet.c)
 */

__int64 __fastcall SysCtxOpenMachine(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  _BYTE *PoolWithTag; // rax
  _BYTE *v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rcx
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  HANDLE v15; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v16; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v17; // [rsp+50h] [rbp-10h]

  Handle = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  *a7 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x53504E50u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    *(_DWORD *)v9 = 167772160;
    v11 = RegRtlOpenKeyTransacted((char *)0x80000002LL, L"SYSTEM", 0, 0x2000000u, &Handle, 0LL);
    if ( !v11 && (!Handle || (v11 = SysCtxOpenControlSet(v10, Handle, 0LL, &v16)) == 0) )
    {
      if ( a4 )
      {
        if ( a4 == -1 )
          goto LABEL_8;
        v12 = a4;
      }
      else
      {
        v12 = 2147483651LL;
      }
      v11 = RegRtlOpenKeyTransacted((char *)v12, 0LL, 0, 0x2000000u, &v15, 0LL);
      if ( !v11 )
      {
LABEL_8:
        v9[16] = 1;
        *((_QWORD *)v9 + 1) = 0LL;
        *((_QWORD *)v9 + 3) = Handle;
        *((_QWORD *)v9 + 4) = v17;
        *((_QWORD *)v9 + 6) = v16;
        *((_QWORD *)v9 + 5) = v15;
        Handle = 0LL;
        v17 = 0LL;
        v16 = 0LL;
        *a7 = v9;
        v9 = 0LL;
        v15 = 0LL;
      }
    }
  }
  else
  {
    v11 = -1073741801;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v17 )
    ZwClose(v17);
  if ( v16 )
    ZwClose(v16);
  if ( v15 )
    ZwClose(v15);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v11;
}
