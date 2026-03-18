/*
 * XREFs of PopCloneRange @ 0x14039FAC4
 * Callers:
 *     PoSetHiberRange @ 0x1401188B0 (PoSetHiberRange.c)
 *     PopSetRange @ 0x140118AC4 (PopSetRange.c)
 * Callees:
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall PopCloneRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v8; // rsi
  _QWORD *i; // rbx
  _DWORD *result; // rax
  _QWORD *v11; // rcx

  RtlSetBits((PRTL_BITMAP)(a1 + 32), a2, a3);
  v8 = a2 + a3;
  for ( i = *(_QWORD **)(a1 + 64); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a1 + 64) )
    {
LABEL_11:
      result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x70616D48u);
      if ( result )
      {
        result[4] = a4;
        *((_QWORD *)result + 3) = a2;
        *((_QWORD *)result + 4) = v8;
        v11 = (_QWORD *)i[1];
        *(_QWORD *)result = i;
        *((_QWORD *)result + 1) = v11;
        if ( (_QWORD *)*v11 != i )
          __fastfail(3u);
        *v11 = result;
        i[1] = result;
        ++*(_DWORD *)(a1 + 80);
      }
      else if ( *(int *)(a1 + 188) >= 0 )
      {
        *(_DWORD *)(a1 + 188) = -1073741670;
      }
      return result;
    }
    result = (_DWORD *)i[3];
    if ( a2 >= (unsigned __int64)result && a2 <= i[4] )
      break;
    if ( v8 >= (unsigned __int64)result && v8 <= i[4] )
      break;
    if ( (unsigned __int64)result >= a2 )
    {
      if ( v8 >= i[4] )
        break;
      if ( (unsigned __int64)result >= a2 )
        goto LABEL_11;
    }
  }
  if ( a2 < (unsigned __int64)result )
    i[3] = a2;
  if ( v8 > i[4] )
    i[4] = v8;
  return result;
}
