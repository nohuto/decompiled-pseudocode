/*
 * XREFs of MmLogSystemShareablePfnInfo @ 0x140628988
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140500568 (EtwpKernelTraceRundown.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiGetWorkingSetInfoEx @ 0x1401DF5F4 (MiGetWorkingSetInfoEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwLogPfnInfoRundown @ 0x1406650E8 (EtwLogPfnInfoRundown.c)
 */

void __fastcall MmLogSystemShareablePfnInfo(unsigned int a1)
{
  volatile LONG *v1; // r14
  __int64 v2; // rbp
  _QWORD *PoolWithTag; // rdi
  unsigned __int64 v4; // r15
  SIZE_T v5; // rsi
  unsigned __int64 v7; // rbx
  _DWORD v8[4]; // [rsp+20h] [rbp-48h]

  v1 = &dword_1402FF880;
  v2 = 0LL;
  PoolWithTag = 0LL;
  v8[0] = 2;
  v4 = 0LL;
  v8[1] = 3;
  v5 = 0LL;
  v8[2] = 4;
  if ( qword_1402FF8F8 <= (unsigned __int64)qword_1402FF900 )
    v7 = 64LL;
  else
    v7 = qword_1402FF8F8 - qword_1402FF900 + 64;
  do
  {
    switch ( v8[v2] )
    {
      case 2:
        v1 = &dword_1402FF880;
        break;
      case 3:
        v1 = &dword_1402FF980;
        break;
      case 4:
        v1 = &dword_1402FFA80;
        break;
    }
    if ( v4 < v7 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      v5 = 32 * v7 + 16;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x4D777445u);
      if ( !PoolWithTag )
        return;
      v4 = v7;
    }
    memset(PoolWithTag, 0, v5);
    if ( (int)MiGetWorkingSetInfoEx(v1, PoolWithTag, v5, 0) >= 0 )
    {
      if ( PoolWithTag[1] )
        EtwLogPfnInfoRundown(0LL, a1, PoolWithTag);
      v2 = (unsigned int)(v2 + 1);
    }
    else
    {
      v7 = PoolWithTag[1] + 64LL;
    }
  }
  while ( (unsigned int)v2 < 3 );
  ExFreePoolWithTag(PoolWithTag, 0);
}
