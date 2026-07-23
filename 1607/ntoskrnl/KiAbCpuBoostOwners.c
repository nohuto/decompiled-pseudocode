/*
 * XREFs of KiAbCpuBoostOwners @ 0x14006BB0C
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14006B728 (KiAbProcessThreadLocks.c)
 * Callees:
 *     KiAbSetMinimumThreadPriority @ 0x14006BC64 (KiAbSetMinimumThreadPriority.c)
 */

void __fastcall KiAbCpuBoostOwners(__int64 a1, char a2, int a3, int a4, __int64 a5)
{
  unsigned __int64 v6; // rbx
  __int64 v8; // r15
  _QWORD **v11; // rcx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rax
  char v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0;
  v6 = *(_QWORD *)(a1 + 56);
  v8 = a5;
  LOBYTE(v15) = a2;
  while ( v6 && *(char *)(v6 + 48) < a2 )
  {
    KiAbSetMinimumThreadPriority(v6, (unsigned int)&v15, a3, a4, v8, (__int64)&v14);
    v11 = *(_QWORD ***)(v6 + 8);
    v12 = v6;
    *(_BYTE *)(v6 + 48) = a2;
    if ( v11 )
    {
      v13 = *v11;
      v6 = (unsigned __int64)v11;
      while ( v13 )
      {
        v6 = (unsigned __int64)v13;
        v13 = (_QWORD *)*v13;
      }
    }
    else
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)v6 == v12 )
          break;
        v12 = v6;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 25) & 1) == 0 )
    KiAbSetMinimumThreadPriority(a1, (unsigned int)&v15, a3, a4, v8, (__int64)&v14);
}
