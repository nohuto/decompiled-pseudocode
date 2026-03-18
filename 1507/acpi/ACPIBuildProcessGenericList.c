/*
 * XREFs of ACPIBuildProcessGenericList @ 0x1C001BD0C
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C001B6A0 (ACPIBuildDeviceDpc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIBuildProcessGenericList(volatile signed __int32 **a1, __int64 a2, unsigned __int16 a3)
{
  volatile signed __int32 *v3; // rdi
  unsigned int v4; // esi
  char v7; // bp
  unsigned __int32 v8; // r12d
  volatile signed __int32 *v9; // r15
  unsigned __int32 v10; // eax
  void (__fastcall *v11)(volatile signed __int32 *); // rdx
  signed __int32 v12; // ebx

  v3 = *a1;
  v4 = 0;
  v7 = 1;
  if ( *a1 == (volatile signed __int32 *)a1 )
    return v4;
  v8 = a3;
  do
  {
    v9 = *(volatile signed __int32 **)v3;
    v10 = _InterlockedCompareExchange(v3 + 6, 1, 1);
    if ( v10 >= v8 )
      KeBugCheckEx(0xA3u, 1uLL, 0x10202AuLL, 0LL, 0LL);
    v11 = *(void (__fastcall **)(volatile signed __int32 *))(a2 + 8LL * v10);
    if ( !v11 )
    {
      v7 = 0;
LABEL_12:
      v3 = v9;
      continue;
    }
    if ( v10 != 2 )
      *((_DWORD *)v3 + 7) = v10;
    v12 = _InterlockedCompareExchange(v3 + 6, 1, v10);
    v11(v3);
    if ( (v12 & 0xFFFFFFFD) == 0 )
      goto LABEL_12;
  }
  while ( v3 != (volatile signed __int32 *)a1 );
  if ( !v7 )
    return 259;
  return v4;
}
