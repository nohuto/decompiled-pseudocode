/*
 * XREFs of KiAbCpuBoostOwners @ 0x140031714
 * Callers:
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 * Callees:
 *     KiAbSetMinimumThreadPriority @ 0x140032518 (KiAbSetMinimumThreadPriority.c)
 */

_QWORD *__fastcall KiAbCpuBoostOwners(__int64 a1, char a2, int a3, int a4, __int64 a5)
{
  _QWORD *result; // rax
  unsigned __int64 v6; // rbx
  __int64 v8; // r15
  _QWORD *v12; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  char v14; // [rsp+58h] [rbp+10h] BYREF
  char v15; // [rsp+59h] [rbp+11h]

  result = &retaddr;
  v6 = *(_QWORD *)(a1 + 56);
  v8 = a5;
  v14 = a2;
  v15 = 0;
  while ( v6 && *(char *)(v6 + 48) < a2 )
  {
    KiAbSetMinimumThreadPriority(v6, (unsigned int)&v14, a3, a4, v8);
    v12 = *(_QWORD **)(v6 + 8);
    result = (_QWORD *)v6;
    *(_BYTE *)(v6 + 48) = a2;
    if ( v12 )
    {
      result = (_QWORD *)*v12;
      v6 = (unsigned __int64)v12;
      while ( result )
      {
        v6 = (unsigned __int64)result;
        result = (_QWORD *)*result;
      }
    }
    else
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD **)v6 == result )
          break;
        result = (_QWORD *)v6;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 25) & 1) == 0 )
    return (_QWORD *)KiAbSetMinimumThreadPriority(a1, (unsigned int)&v14, a3, a4, v8);
  return result;
}
