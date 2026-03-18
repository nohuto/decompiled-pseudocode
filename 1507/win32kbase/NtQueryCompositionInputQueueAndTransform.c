/*
 * XREFs of NtQueryCompositionInputQueueAndTransform @ 0x1C00DEAB0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0013050 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0021ED0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C00DE950 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00DE9A8 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 */

__int64 __fastcall NtQueryCompositionInputQueueAndTransform(void *a1, int a2, _OWORD *a3, _OWORD *a4)
{
  __int64 v8; // r8
  int InputQueueForInputType; // ebx
  PVOID Object; // [rsp+20h] [rbp-B8h] BYREF
  struct CInputSink *v12; // [rsp+28h] [rbp-B0h] BYREF
  __int128 v13; // [rsp+30h] [rbp-A8h]
  __int128 v14; // [rsp+40h] [rbp-98h]
  __int128 v15; // [rsp+50h] [rbp-88h]
  __int128 v16; // [rsp+60h] [rbp-78h]
  _OWORD v17[3]; // [rsp+70h] [rbp-68h] BYREF

  InputQueueForInputType = 0;
  if ( !UserIsCurrentProcessDwm() )
    InputQueueForInputType = -1073741790;
  if ( InputQueueForInputType >= 0 )
  {
    LOBYTE(v8) = 1;
    InputQueueForInputType = CompositionInputObject::ResolveHandle(
                               a1,
                               1LL,
                               v8,
                               (struct CompositionInputObject **)&Object);
    if ( InputQueueForInputType >= 0 )
      InputQueueForInputType = CompositionInputObject::QueryInputQueueForInputType((char *)Object, a2, (__int64)v17);
    if ( InputQueueForInputType >= 0 )
    {
      InputQueueForInputType = CompositionInputObject::LockForRead((char *)Object, &v12);
      if ( InputQueueForInputType >= 0 )
      {
        v13 = *(_OWORD *)((char *)v12 + 88);
        v14 = *(_OWORD *)((char *)v12 + 104);
        v15 = *(_OWORD *)((char *)v12 + 120);
        v16 = *(_OWORD *)((char *)v12 + 136);
        CInputSink::UnlockAndRelease(v12);
      }
    }
    if ( Object )
      ObfDereferenceObject(Object);
    if ( InputQueueForInputType >= 0 )
    {
      if ( a3 + 3 < a3 || (unsigned __int64)(a3 + 3) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a3 = v17[0];
      a3[1] = v17[1];
      a3[2] = v17[2];
      if ( a4 + 4 < a4 || (unsigned __int64)(a4 + 4) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v13;
      a4[1] = v14;
      a4[2] = v15;
      a4[3] = v16;
    }
  }
  return (unsigned int)InputQueueForInputType;
}
