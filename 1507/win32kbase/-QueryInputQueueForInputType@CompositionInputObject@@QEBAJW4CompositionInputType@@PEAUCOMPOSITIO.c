/*
 * XREFs of ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00DE9A8
 * Callers:
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00DEAB0 (NtQueryCompositionInputQueueAndTransform.c)
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0021ED0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C00DE950 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::QueryInputQueueForInputType(char *a1, int a2, __int64 a3)
{
  int v5; // ebp
  CInputSink *v6; // rdi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  __int64 v10; // rcx
  CInputSink *v12; // [rsp+48h] [rbp+20h] BYREF

  v5 = CompositionInputObject::LockForRead(a1, &v12);
  if ( v5 >= 0 )
  {
    v6 = v12;
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 1 )
          {
LABEL_11:
            CInputSink::UnlockAndRelease(v6);
            return (unsigned int)v5;
          }
          v10 = *((_QWORD *)v12 + 9);
        }
        else
        {
          v10 = *((_QWORD *)v12 + 8);
        }
      }
      else
      {
        v10 = *((_QWORD *)v12 + 7);
      }
    }
    else
    {
      v10 = *((_QWORD *)v12 + 6);
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 40LL))(v10, a3);
    goto LABEL_11;
  }
  return (unsigned int)v5;
}
