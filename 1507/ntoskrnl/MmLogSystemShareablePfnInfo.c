/*
 * XREFs of MmLogSystemShareablePfnInfo @ 0x1406A7C70
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14054A6C8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MiGetWorkingSetInfoEx @ 0x14014EE78 (MiGetWorkingSetInfoEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwLogPfnInfoRundown @ 0x1406E81E4 (EtwLogPfnInfoRundown.c)
 */

void __fastcall MmLogSystemShareablePfnInfo(unsigned int a1)
{
  signed __int32 *v1; // r14
  __int64 v2; // rbp
  _QWORD *PoolWithTag; // rdi
  unsigned __int64 v4; // r15
  SIZE_T v5; // rsi
  unsigned __int64 v7; // rbx
  _DWORD v8[4]; // [rsp+20h] [rbp-48h]

  v1 = dword_14034FD40;
  v2 = 0LL;
  PoolWithTag = 0LL;
  v8[0] = 2;
  v4 = 0LL;
  v8[1] = 3;
  v5 = 0LL;
  v8[2] = 4;
  if ( qword_14034FDB8 <= (unsigned __int64)qword_14034FDC0 )
    v7 = 64LL;
  else
    v7 = qword_14034FDB8 - qword_14034FDC0 + 64;
  do
  {
    switch ( v8[v2] )
    {
      case 2:
        v1 = dword_14034FD40;
        break;
      case 3:
        v1 = dword_14034FE40;
        break;
      case 4:
        v1 = dword_14034FF40;
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
    if ( (int)MiGetWorkingSetInfoEx((__int64)v1, PoolWithTag, v5, 0) >= 0 )
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
