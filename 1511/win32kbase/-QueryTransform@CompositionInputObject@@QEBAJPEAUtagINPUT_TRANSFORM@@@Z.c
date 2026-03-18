/*
 * XREFs of ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00E07A4
 * Callers:
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00E0880 (NtQueryCompositionInputQueueAndTransform.c)
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C00E0700 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 */

__int64 __fastcall CompositionInputObject::QueryTransform(CompositionInputObject *this, struct tagINPUT_TRANSFORM *a2)
{
  int v3; // ebx
  CInputSink *v4; // rcx
  CInputSink *v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = CompositionInputObject::LockForRead((char *)this, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    *(_OWORD *)a2 = *((_OWORD *)v6 + 6);
    *((_OWORD *)a2 + 1) = *((_OWORD *)v4 + 7);
    *((_OWORD *)a2 + 2) = *((_OWORD *)v4 + 8);
    *((_OWORD *)a2 + 3) = *((_OWORD *)v4 + 9);
    CInputSink::UnlockAndRelease(v4);
  }
  return (unsigned int)v3;
}
