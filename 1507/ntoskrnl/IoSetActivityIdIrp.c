/*
 * XREFs of IoSetActivityIdIrp @ 0x1401F669C
 * Callers:
 *     IoReuseIrp @ 0x14010B380 (IoReuseIrp.c)
 *     IoMakeAssociatedIrpPriv @ 0x140118234 (IoMakeAssociatedIrpPriv.c)
 *     IopInitActivityIdIrp @ 0x1401F2680 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwActivityIdControl @ 0x14011B7E4 (EtwActivityIdControl.c)
 *     IopAllocateIrpExtension @ 0x140135D90 (IopAllocateIrpExtension.c)
 *     IopFreeIrpExtension @ 0x1401F7D7C (IopFreeIrpExtension.c)
 */

__int64 __fastcall IoSetActivityIdIrp(__int64 a1, GUID *a2)
{
  NTSTATUS v4; // ebx
  GUID *IrpExtension; // rax
  __int64 v6; // r8

  v4 = 0;
  IrpExtension = (GUID *)IopAllocateIrpExtension(a1, 0);
  if ( !IrpExtension )
    return 3221225626LL;
  if ( a2 )
  {
    IrpExtension[1] = *a2;
  }
  else
  {
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 152) )
      v4 = EtwActivityIdControl(1u, IrpExtension + 1);
    else
      v4 = -1073741637;
    if ( v4 < 0 )
    {
      LOBYTE(v6) = 1;
      IopFreeIrpExtension(a1, 0LL, v6);
    }
  }
  return (unsigned int)v4;
}
