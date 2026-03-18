/*
 * XREFs of UsbhGetControllerName @ 0x1C003C23C
 * Callers:
 *     UsbhFdoReturnControllerName @ 0x1C003F20C (UsbhFdoReturnControllerName.c)
 *     UsbhAcquireControllerName @ 0x1C004DC40 (UsbhAcquireControllerName.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00295C0 (memmove.c)
 *     memset @ 0x1C0029900 (memset.c)
 */

__int64 __fastcall UsbhGetControllerName(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v4; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rdi
  int v8; // ebx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(_QWORD, __int64, _DWORD *, size_t *, _DWORD *); // rax
  _DWORD *v11; // rax
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(_QWORD, __int64, _DWORD *, size_t *, _DWORD *); // rax
  unsigned __int64 v14; // rcx
  _DWORD v16[10]; // [rsp+30h] [rbp-28h] BYREF
  size_t Size; // [rsp+78h] [rbp+20h] BYREF

  v16[0] = 0;
  v4 = a3;
  LODWORD(Size) = 16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x42554855u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, (unsigned int)Size);
  v8 = -1073741670;
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 64);
    v10 = *(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, size_t *, _DWORD *))(v9 + 4608);
    if ( !v10 )
    {
LABEL_5:
      v8 = -1073741822;
LABEL_16:
      ExFreePoolWithTag(v7, 0);
      return (unsigned int)v8;
    }
    v8 = v10(*(_QWORD *)(v9 + 4560), 1LL, v7, &Size, v16);
    if ( v8 != -1073741789 )
    {
LABEL_10:
      if ( v8 >= 0 )
      {
        if ( (unsigned int)v4 < 4 )
        {
          v8 = -1073741789;
        }
        else
        {
          *a2 = v7[2];
          v14 = (unsigned int)v7[2];
          if ( v4 - 4 < v14 )
            LODWORD(v14) = v4 - 4;
          memmove(a2 + 1, v7 + 3, (unsigned int)v14);
        }
      }
      goto LABEL_16;
    }
    LODWORD(Size) = v16[0];
    ExFreePoolWithTag(v7, 0);
    v11 = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x42554855u);
    v7 = v11;
    if ( v11 )
    {
      memset(v11, 0, (unsigned int)Size);
      v12 = *(_QWORD *)(a1 + 64);
      v13 = *(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, size_t *, _DWORD *))(v12 + 4608);
      if ( !v13 )
        goto LABEL_5;
      v8 = v13(*(_QWORD *)(v12 + 4560), 1LL, v7, &Size, v16);
      goto LABEL_10;
    }
  }
  return (unsigned int)v8;
}
