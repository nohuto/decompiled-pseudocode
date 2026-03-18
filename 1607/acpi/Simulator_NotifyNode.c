/*
 * XREFs of Simulator_NotifyNode @ 0x1C0059F04
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0059AB0 (Simulator_CallbackWorker.c)
 * Callees:
 *     GetNameSpaceObject @ 0x1C00140F8 (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Simulator_NotifyNode(__int64 a1)
{
  int NameSpaceObject; // ebx

  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a1 + 16));
  if ( NameSpaceObject >= 0 )
  {
    if ( ghNotify )
      NameSpaceObject = ghNotify(2LL, *(unsigned int *)(a1 + 24), 120LL, qword_1C0074F48, 0LL, *(_QWORD *)(a1 + 16));
    else
      NameSpaceObject = -1073741224;
  }
  DereferenceObjectEx(0LL);
  return (unsigned int)NameSpaceObject;
}
