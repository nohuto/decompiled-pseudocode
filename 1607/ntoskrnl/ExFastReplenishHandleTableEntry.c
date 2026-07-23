/*
 * XREFs of ExFastReplenishHandleTableEntry @ 0x1400AB7B4
 * Callers:
 *     ObpReferenceObjectByHandle @ 0x140445F10 (ObpReferenceObjectByHandle.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExFastReplenishHandleTableEntry(volatile signed __int64 *a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r11
  unsigned __int64 v5; // r10
  unsigned int v6; // r8d
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int128 v9; // rt0
  unsigned __int8 v10; // tt
  __int128 v12; // [rsp+0h] [rbp-18h]

  v3 = *a2;
  v4 = a3;
  v5 = *a2 >> 20;
  while ( 1 )
  {
    v6 = 0;
    v7 = v4 + (unsigned __int16)(v3 >> 1);
    v12 = *(_OWORD *)a2;
    if ( v7 > 0xFFFF )
    {
      v6 = v7 - 0xFFFF;
      LODWORD(v7) = 0xFFFF;
    }
    *(_QWORD *)&v12 = ((unsigned int)v12 ^ (2 * (_DWORD)v7)) & 0x1FFFE ^ (unsigned __int64)v12;
    v9 = *(_OWORD *)a2;
    v10 = _InterlockedCompareExchange128(a1, *((signed __int64 *)&v12 + 1), v12, (signed __int64 *)&v9);
    v8 = v9;
    *(_OWORD *)a2 = v9;
    if ( v10 )
      break;
    v3 = v8;
    if ( v8 >> 20 != v5 || (v8 & 1) == 0 )
    {
      v6 = v4;
      *(_OWORD *)a2 = v12;
      return v6;
    }
  }
  return v6;
}
