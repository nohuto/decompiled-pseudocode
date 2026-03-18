/*
 * XREFs of ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0099E24
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C0099D38 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C007CE28 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ??$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z @ 0x1C0098DBC (--$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C009991C (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0099960 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x1C0099F20 (-AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AttachInputQueueToWindow(struct tagWND *a1, struct IInputQueue *a2)
{
  CWindowProp *v4; // rbx
  int v5; // edi
  struct tagWND *v7; // rdx
  CWindowProp *v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>((__int64)a1, &v8) )
  {
    v4 = v8;
LABEL_3:
    v5 = CInputQueueProp::AttachInputQueue(v4, a2);
    if ( v5 < 0 && !*((_DWORD *)v4 + 6) )
      CWindowProp::RemoveAndDeleteProp((void (__fastcall ***)(CWindowProp *))v4);
    return (unsigned int)v5;
  }
  v5 = CWindowProp::CreateWindowProp<CInputQueueProp>(&v8);
  if ( v5 >= 0 )
  {
    v7 = a1;
    v4 = v8;
    if ( !(unsigned int)CWindowProp::SetProp(v8, (unsigned __int64)v7) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v4)(v4);
      v4 = 0LL;
      v5 = -1073741790;
    }
    if ( v5 >= 0 )
      goto LABEL_3;
  }
  return (unsigned int)v5;
}
