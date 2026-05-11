/*
 * XREFs of DriverCopyRegistryString @ 0x1C0013B08
 * Callers:
 *     DriverEntry @ 0x1C00137A0 (DriverEntry.c)
 * Callees:
 *     memmove @ 0x1C0007CC0 (memmove.c)
 */

__int64 __fastcall DriverCopyRegistryString(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rdi
  PVOID v6; // rax

  v2 = 0;
  if ( !a2 )
  {
    g_RegistryPath = 0LL;
    return v2;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x41627845u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *(_WORD *)PoolWithTag = *a2;
  *((_WORD *)PoolWithTag + 1) = a2[1];
  if ( !*((_QWORD *)a2 + 1) )
  {
    PoolWithTag[1] = 0LL;
    goto LABEL_8;
  }
  v6 = ExAllocatePoolWithTag(PagedPool, 2 * ((unsigned __int64)a2[1] >> 1), 0x41627845u);
  v5[1] = v6;
  if ( v6 )
  {
    memmove(v6, *((const void **)a2 + 1), *a2);
LABEL_8:
    g_RegistryPath = v5;
    return v2;
  }
  v2 = -1073741670;
  ExFreePool(v5);
  return v2;
}
