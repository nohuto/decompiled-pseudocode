/*
 * XREFs of NtQueryCompositionInputQueueAndTransform @ 0x1C00F28C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C001B9E0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00485F0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C00F2740 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?QueryInputQueueForInputType@CInputSink@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00F2798 (-QueryInputQueueForInputType@CInputSink@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEU.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00F27E4 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputQueueAndTransform(void *a1, int a2, _OWORD *a3, _OWORD *a4)
{
  __int64 v8; // r8
  int Transform; // ebx
  PVOID Object; // [rsp+20h] [rbp-B8h] BYREF
  CInputSink *v12; // [rsp+28h] [rbp-B0h] BYREF
  _OWORD v13[4]; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v14[3]; // [rsp+70h] [rbp-68h] BYREF

  Transform = 0;
  if ( !UserIsCurrentProcessDwm((__int64)a1) )
    Transform = -1073741790;
  if ( Transform >= 0 )
  {
    LOBYTE(v8) = 1;
    Transform = CompositionInputObject::ResolveHandle(a1, 1LL, v8, (struct CompositionInputObject **)&Object);
    if ( Transform >= 0 )
    {
      Transform = CompositionInputObject::LockForRead((char *)Object, &v12);
      if ( Transform >= 0 )
      {
        CInputSink::QueryInputQueueForInputType(v12, a2, (__int64)v14);
        CInputSink::UnlockAndRelease(v12);
      }
    }
    if ( Transform >= 0 )
      Transform = CompositionInputObject::QueryTransform(
                    (CompositionInputObject *)Object,
                    (struct tagINPUT_TRANSFORM *)v13);
    if ( Object )
      ObfDereferenceObject(Object);
    if ( Transform >= 0 )
    {
      if ( a3 + 3 < a3 || (unsigned __int64)(a3 + 3) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a3 = v14[0];
      a3[1] = v14[1];
      a3[2] = v14[2];
      if ( a4 + 4 < a4 || (unsigned __int64)(a4 + 4) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v13[0];
      a4[1] = v13[1];
      a4[2] = v13[2];
      a4[3] = v13[3];
    }
  }
  return (unsigned int)Transform;
}
