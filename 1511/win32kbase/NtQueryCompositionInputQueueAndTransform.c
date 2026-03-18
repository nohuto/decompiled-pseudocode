/*
 * XREFs of NtQueryCompositionInputQueueAndTransform @ 0x1C00E0880
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00763A0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C00E0700 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?QueryInputQueueForInputType@CInputSink@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00E0758 (-QueryInputQueueForInputType@CInputSink@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEU.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00E07A4 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputQueueAndTransform(void *a1, __int64 a2, _OWORD *a3, _OWORD *a4)
{
  int v6; // r15d
  int Transform; // ebx
  PVOID Object; // [rsp+20h] [rbp-B8h] BYREF
  CInputSink *v11; // [rsp+28h] [rbp-B0h] BYREF
  _OWORD v12[4]; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v13[3]; // [rsp+70h] [rbp-68h] BYREF

  v6 = a2;
  Transform = 0;
  if ( !UserIsCurrentProcessDwm((__int64)a1, a2) )
    Transform = -1073741790;
  if ( Transform >= 0 )
  {
    Transform = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
    if ( Transform >= 0 )
    {
      Transform = CompositionInputObject::LockForRead((char *)Object, &v11);
      if ( Transform >= 0 )
      {
        CInputSink::QueryInputQueueForInputType(v11, v6, (__int64)v13);
        CInputSink::UnlockAndRelease(v11);
      }
    }
    if ( Transform >= 0 )
      Transform = CompositionInputObject::QueryTransform(
                    (CompositionInputObject *)Object,
                    (struct tagINPUT_TRANSFORM *)v12);
    if ( Object )
      ObfDereferenceObject(Object);
    if ( Transform >= 0 )
    {
      if ( a3 + 3 < a3 || (unsigned __int64)(a3 + 3) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a3 = v13[0];
      a3[1] = v13[1];
      a3[2] = v13[2];
      if ( a4 + 4 < a4 || (unsigned __int64)(a4 + 4) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v12[0];
      a4[1] = v12[1];
      a4[2] = v12[2];
      a4[3] = v12[3];
    }
  }
  return (unsigned int)Transform;
}
