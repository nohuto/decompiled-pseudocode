/*
 * XREFs of ProcessorpInsertAssignment @ 0x1C006A550
 * Callers:
 *     ProcessorCopyData @ 0x1C006A2C0 (ProcessorCopyData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorpInsertAssignment(PVOID a1, unsigned __int16 *a2, int a3)
{
  __int64 v3; // rdi
  unsigned __int8 v4; // si
  __int64 result; // rax
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v10; // rcx
  PRTL_RANGE v11; // rcx
  PRTL_RANGE Range; // [rsp+20h] [rbp-48h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+28h] [rbp-40h] BYREF
  struct _PROCESSOR_NUMBER v14; // [rsp+78h] [rbp+10h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = 0;
  result = a2[4];
  v14.Group = a2[4];
  for ( v14.Reserved = 0; v3; v3 &= ~(1LL << result) )
  {
    if ( _bittest64(&v3, v4) )
    {
      v14.Number = v4;
      ProcNumber = v14;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      if ( ProcessorIndexFromNumber == -1 || ProcessorIndexFromNumber >= ProcessorInstanceCount )
        v10 = 0LL;
      else
        v10 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
      if ( a3 )
        ++v10;
      RtlGetFirstRange(v10, &Iterator, &Range);
      v11 = Range;
      if ( Range )
      {
        while ( LODWORD(v11->Start) != *((_DWORD *)a2 + 5) || v11->Owner != a1 )
        {
          RtlGetNextRange(&Iterator, &Range, 1u);
          v11 = Range;
          if ( !Range )
            goto LABEL_14;
        }
        v11->UserData = a2;
      }
    }
LABEL_14:
    result = v4++;
  }
  return result;
}
