/*
 * XREFs of KiProcessProfileList @ 0x1401D6EB8
 * Callers:
 *     KeProfileInterruptWithSource @ 0x1401D6B2C (KeProfileInterruptWithSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiProcessProfileList(__int64 a1, int a2, __int64 **a3)
{
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r14
  __int64 *i; // rbx
  unsigned __int64 v9; // rax
  char v10; // cl
  unsigned __int64 v11; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  for ( i = *a3; i != (__int64 *)a3; i = (__int64 *)*i )
  {
    result = (unsigned int)*((__int16 *)i + 116);
    if ( (_DWORD)result == a2 )
    {
      if ( *((_WORD *)i - 4) == 17 )
      {
        result = ((__int64 (__fastcall *)(__int64, __int64))i[3])(a1, i[4]);
      }
      else
      {
        v9 = (unsigned int)KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
        v10 = v9 & 0x3F;
        result = v9 >> 6;
        if ( (((unsigned __int64)i[result + 9] >> v10) & 1) != 0 )
        {
          result = *(_QWORD *)(a1 + 360);
          v11 = i[3];
          if ( result >= v11 && result < i[4] )
          {
            result = i[6] + (((result - v11) >> *((_DWORD *)i + 10)) & 0xFFFFFFFC);
            _InterlockedIncrement((volatile signed __int32 *)result);
          }
        }
      }
    }
  }
  return result;
}
