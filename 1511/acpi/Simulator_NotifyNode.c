/*
 * XREFs of Simulator_NotifyNode @ 0x1C0042838
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0042410 (Simulator_CallbackWorker.c)
 * Callees:
 *     GetNameSpaceObject @ 0x1C000DDCC (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Simulator_NotifyNode(__int64 a1)
{
  int NameSpaceObject; // ebx

  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a1 + 16));
  if ( NameSpaceObject >= 0 )
  {
    if ( ghNotify )
      NameSpaceObject = ghNotify(2LL, *(unsigned int *)(a1 + 24), 112LL, qword_1C005AAC8, 0LL, *(_QWORD *)(a1 + 16));
    else
      NameSpaceObject = -1073741224;
  }
  DereferenceObjectEx(0LL);
  return (unsigned int)NameSpaceObject;
}
