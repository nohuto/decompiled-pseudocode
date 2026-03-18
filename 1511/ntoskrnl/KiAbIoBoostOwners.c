/*
 * XREFs of KiAbIoBoostOwners @ 0x1400E60F8
 * Callers:
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 * Callees:
 *     KiAbSetMinimumThreadPriority @ 0x140032518 (KiAbSetMinimumThreadPriority.c)
 */

void __fastcall KiAbIoBoostOwners(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD **v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int16 v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD **)(a1 + 56);
  v12 = 512;
  while ( v4 )
  {
    KiAbSetMinimumThreadPriority((__int64)v4, (char *)&v12, a2, a3, a4);
    v9 = (_QWORD **)v4[1];
    v10 = v4;
    if ( v9 )
    {
      v11 = *v9;
      v4 = (_QWORD *)v4[1];
      while ( v11 )
      {
        v4 = v11;
        v11 = (_QWORD *)*v11;
      }
    }
    else
    {
      while ( 1 )
      {
        v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v4 || (_QWORD *)*v4 == v10 )
          break;
        v10 = v4;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 25) & 1) == 0 )
    KiAbSetMinimumThreadPriority(a1, (char *)&v12, a2, a3, a4);
}
