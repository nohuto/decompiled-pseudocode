/*
 * XREFs of ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0227EFC
 * Callers:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F072C (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompositionInputObject::QueryTransform(CompositionInputObject *this, struct tagINPUT_TRANSFORM *a2)
{
  int v3; // ebx
  const struct CInputSink *v4; // rcx
  const struct CInputSink *v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = CompositionInputObject::LockForRead(this, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    *(_OWORD *)a2 = *(_OWORD *)((char *)v6 + 88);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)v4 + 104);
    *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)v4 + 120);
    *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)v4 + 136);
    CInputSink::UnlockAndRelease(v4);
  }
  return (unsigned int)v3;
}
