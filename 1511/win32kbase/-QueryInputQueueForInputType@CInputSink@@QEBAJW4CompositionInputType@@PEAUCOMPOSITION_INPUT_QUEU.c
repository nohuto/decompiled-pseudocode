/*
 * XREFs of ?QueryInputQueueForInputType@CInputSink@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00E0758
 * Callers:
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00E0880 (NtQueryCompositionInputQueueAndTransform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputSink::QueryInputQueueForInputType(_QWORD *a1, int a2, __int64 a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 v8; // rcx

  v3 = a2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 != 1 )
            return 3221225485LL;
          v8 = a1[10];
        }
        else
        {
          v8 = a1[9];
        }
      }
      else
      {
        v8 = a1[8];
      }
    }
    else
    {
      v8 = a1[7];
    }
  }
  else
  {
    v8 = a1[6];
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, a3);
}
