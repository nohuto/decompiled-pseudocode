/*
 * XREFs of PiDmCacheDataEncode @ 0x1404C3F78
 * Callers:
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1404E2C6C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E832C (PiDmObjectProcessPropertyChange.c)
 *     PiDmObjectCreate @ 0x14056471C (PiDmObjectCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpStringFromGuid @ 0x1404CB360 (_PnpStringFromGuid.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 */

__int64 __fastcall PiDmCacheDataEncode(int a1, __int128 *a2, unsigned int a3, int a4, unsigned int a5, __int64 a6)
{
  unsigned int v6; // edi
  SIZE_T v7; // r14
  __int128 *v8; // rbp
  int Object; // eax
  PVOID PoolWithTag; // rax
  __int128 v13; // xmm0
  _BYTE v14[80]; // [rsp+20h] [rbp-88h] BYREF

  v6 = 0;
  v7 = a3;
  v8 = a2;
  if ( !a1 )
  {
    *(_DWORD *)a6 = 2;
    return v6;
  }
  if ( !a5 || a1 != a4 )
    goto LABEL_3;
  if ( a1 == 13 )
  {
    v6 = PnpStringFromGuid(a2, v14);
    if ( (v6 & 0x80000000) != 0 )
      return v6;
    a2 = (__int128 *)v14;
  }
  else if ( a1 != 18 )
  {
LABEL_3:
    if ( a1 == 13 )
    {
      v13 = *v8;
      *(_DWORD *)a6 = 4;
      *(_OWORD *)(a6 + 8) = v13;
      return v6;
    }
    if ( (unsigned int)v7 > 8 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x5A706E50u);
      *(_QWORD *)(a6 + 16) = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memmove(PoolWithTag, v8, v7);
      *(_DWORD *)a6 = 5;
    }
    else
    {
      memmove((void *)(a6 + 16), v8, v7);
      *(_DWORD *)a6 = 3;
    }
    *(_DWORD *)(a6 + 12) = v7;
    goto LABEL_7;
  }
  if ( !a2 )
    goto LABEL_3;
  Object = PiDmGetObject(a5, a2, a6 + 16);
  v6 = Object;
  if ( Object == -1073741772 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  if ( Object < 0 )
    return v6;
  *(_DWORD *)a6 = 6;
LABEL_7:
  *(_DWORD *)(a6 + 8) = a1;
  return v6;
}
