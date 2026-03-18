/*
 * XREFs of IcAddSecondaryIcInstance @ 0x1C006FD80
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C00866DC (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 IcAddSecondaryIcInstance()
{
  int v0; // esi
  __int64 result; // rax
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax
  __int64 v4; // rdi
  __int64 **v5; // rax
  _DWORD v6[16]; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+80h] [rbp+8h] BYREF

  v0 = 0;
  v7 = 56;
  memset(v6, 0, 0x38uLL);
  result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, int *))HalDispatchTable->HalQuerySystemInformation)(
             28LL,
             56LL,
             v6,
             &v7);
  if ( (int)result < 0 )
  {
    v2 = v7;
  }
  else
  {
    v2 = v6[1];
    v0 = v6[2];
  }
  if ( (int)result >= 0 )
  {
    if ( v0 && v2 )
    {
      if ( v2 + v0 < v2 )
        return 3221225621LL;
      if ( v2 + v0 >= 0xFFF00000 )
        return 3221225485LL;
      result = 0LL;
    }
    else
    {
      result = 3221225485LL;
    }
    if ( (int)result >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(184 * (v0 - 1) + 216), 0x49706341u);
      v4 = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, (unsigned int)(184 * (v0 - 1) + 216));
        *(_DWORD *)(v4 + 16) = v2;
        *(_DWORD *)(v4 + 28) = 4;
        *(_DWORD *)(v4 + 20) = v2 + v0 - 1;
        v5 = (__int64 **)qword_1C00590B8;
        *(_QWORD *)v4 = &IcListHead;
        *(_QWORD *)(v4 + 8) = v5;
        if ( *v5 != &IcListHead )
          __fastfail(3u);
        *v5 = (__int64 *)v4;
        result = 0LL;
        qword_1C00590B8 = v4;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
