/*
 * XREFs of KeProfileInterruptWithSource @ 0x140204C0C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KeProfileInterruptWithSource(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r14
  __int64 **v6; // rsi
  __int64 *i; // rbx
  unsigned __int64 v8; // rcx
  struct _KPRCB *v9; // rsi
  __int64 j; // rbx
  unsigned __int64 v11; // rax
  char v12; // cl
  unsigned __int64 v13; // rcx

  result = (unsigned __int64)KeGetCurrentThread();
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (__int64 **)(*(_QWORD *)(result + 184) + 24LL);
  for ( i = *v6; i != (__int64 *)v6; i = (__int64 *)*i )
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
        result = (unsigned int)KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] >> 6;
        if ( (((unsigned __int64)i[result + 9] >> (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F)) & 1) != 0 )
        {
          result = *(_QWORD *)(a1 + 360);
          v8 = i[3];
          if ( result >= v8 && result < i[4] )
          {
            result = i[6] + (((result - v8) >> *((_DWORD *)i + 10)) & 0xFFFFFFFC);
            _InterlockedIncrement((volatile signed __int32 *)result);
          }
        }
      }
    }
  }
  v9 = KeGetCurrentPrcb();
  for ( j = KiProfileListHead; (__int64 *)j != &KiProfileListHead; j = *(_QWORD *)j )
  {
    result = (unsigned int)*(__int16 *)(j + 232);
    if ( (_DWORD)result == a2 )
    {
      if ( *(_WORD *)(j - 8) == 17 )
      {
        result = (*(__int64 (__fastcall **)(__int64, _QWORD))(j + 24))(a1, *(_QWORD *)(j + 32));
      }
      else
      {
        v11 = (unsigned int)KiProcessorIndexToNumberMappingTable[v9->Number];
        v12 = v11 & 0x3F;
        result = v11 >> 6;
        if ( ((*(_QWORD *)(j + 8 * result + 72) >> v12) & 1) != 0 )
        {
          result = *(_QWORD *)(a1 + 360);
          v13 = *(_QWORD *)(j + 24);
          if ( result >= v13 && result < *(_QWORD *)(j + 32) )
          {
            result = *(_QWORD *)(j + 48) + (((result - v13) >> *(_DWORD *)(j + 40)) & 0xFFFFFFFC);
            _InterlockedIncrement((volatile signed __int32 *)result);
          }
        }
      }
    }
  }
  return result;
}
