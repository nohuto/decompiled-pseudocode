/*
 * XREFs of ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00E9C58
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C00E9B28 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0064FD8 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x1C00E9D04 (-AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00E9EA0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00E9F18 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AttachInputQueueToWindow(struct tagWND *a1, struct IInputQueue *a2)
{
  CInputQueueProp *v4; // rbx
  int v5; // edi
  CInputQueueProp *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>((__int64)a1, &v7) )
  {
    v4 = v7;
LABEL_3:
    v5 = CInputQueueProp::AttachInputQueue(v4, a2);
    if ( v5 < 0 && !*((_DWORD *)v4 + 6) )
      CWindowProp::RemoveAndDeleteProp(v4);
    return (unsigned int)v5;
  }
  v4 = (CInputQueueProp *)Win32AllocPoolZInit(48LL, 1902736213LL);
  if ( !v4 )
    return (unsigned int)-1073741801;
  *(_QWORD *)v4 = &CInputQueueProp::`vftable';
  *((_QWORD *)v4 + 2) = 0LL;
  v5 = 0;
  *((_DWORD *)v4 + 6) = 0;
  *((_DWORD *)v4 + 7) = 0;
  if ( !(unsigned int)CWindowProp::SetProp(v4, a1) )
  {
    (**(void (__fastcall ***)(CInputQueueProp *))v4)(v4);
    v4 = 0LL;
    v5 = -1073741790;
  }
  if ( v5 >= 0 )
    goto LABEL_3;
  return (unsigned int)v5;
}
