/*
 * XREFs of IoSetActivityIdIrp @ 0x1401BB3D4
 * Callers:
 *     IoMakeAssociatedIrpPriv @ 0x140100098 (IoMakeAssociatedIrpPriv.c)
 *     IoReuseIrp @ 0x140100350 (IoReuseIrp.c)
 *     IopInitActivityIdIrp @ 0x1401B73A0 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwActivityIdControl @ 0x1400E48B0 (EtwActivityIdControl.c)
 *     IopAllocateIrpExtension @ 0x14010536C (IopAllocateIrpExtension.c)
 *     IopFreeIrpExtension @ 0x1401BC504 (IopFreeIrpExtension.c)
 */

__int64 __fastcall IoSetActivityIdIrp(__int64 a1, GUID *a2)
{
  NTSTATUS v4; // ebx
  GUID *IrpExtension; // rax
  __int64 v6; // r8
  __int64 v7; // r9

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
      IopFreeIrpExtension(a1, 0LL, v6, v7);
    }
  }
  return (unsigned int)v4;
}
