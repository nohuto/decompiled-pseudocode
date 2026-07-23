/*
 * XREFs of KiAbIoBoostOwners @ 0x14006BA1C
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14006B728 (KiAbProcessThreadLocks.c)
 * Callees:
 *     KiAbSetMinimumThreadPriority @ 0x14006BC64 (KiAbSetMinimumThreadPriority.c)
 */

__int64 __fastcall KiAbIoBoostOwners(__int64 a1, char a2, int a3, int a4, __int64 a5)
{
  char v5; // al
  __int64 v7; // r14
  _QWORD *v10; // rbx
  __int64 result; // rax
  __int64 *v12; // rcx
  char v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0;
  v5 = 0;
  v7 = a5;
  v10 = *(_QWORD **)(a1 + 56);
  if ( (a2 & 1) != 0 )
    v5 = 2;
  BYTE1(v14) = v5;
  result = BYTE2(v14);
  if ( (a2 & 2) != 0 )
    result = 1LL;
  BYTE2(v14) = result;
  while ( v10 )
  {
    KiAbSetMinimumThreadPriority((_DWORD)v10, (unsigned int)&v14, a3, a4, v7, (__int64)&v13);
    v12 = (__int64 *)v10[1];
    result = (__int64)v10;
    if ( v12 )
    {
      result = *v12;
      v10 = (_QWORD *)v10[1];
      while ( result )
      {
        v10 = (_QWORD *)result;
        result = *(_QWORD *)result;
      }
    }
    else
    {
      while ( 1 )
      {
        v10 = (_QWORD *)(v10[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v10 || *v10 == result )
          break;
        result = (__int64)v10;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 25) & 1) == 0 )
    return KiAbSetMinimumThreadPriority(a1, (unsigned int)&v14, a3, a4, v7, (__int64)&v13);
  return result;
}
