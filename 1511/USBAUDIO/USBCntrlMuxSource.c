/*
 * XREFs of USBCntrlMuxSource @ 0x1C001F5E0
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetSetProperty @ 0x1C001B4E8 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBCntrlMuxSource(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 *a4)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 result; // rax
  unsigned __int8 v9; // [rsp+70h] [rbp+18h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v9 = 0;
  v7 = a3 & 0x80;
  if ( (a3 & 0x80) == 0 )
    v9 = *a4;
  result = USBHwGetSetProperty(
             a1,
             27,
             (a3 >> 7) & 1,
             a3,
             0,
             0,
             *(_WORD *)(a2 + 80),
             *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 2LL),
             (__int64)&v9,
             1);
  if ( (int)result >= 0 )
  {
    if ( v7 )
      *(_DWORD *)a4 = v9;
  }
  return result;
}
