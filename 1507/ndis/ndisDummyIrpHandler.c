/*
 * XREFs of ndisDummyIrpHandler @ 0x1C009A520
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisDummyIrpHandler(__int64 a1, _IRP *a2)
{
  _BYTE *v2; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v6; // ebx
  __int64 (__fastcall *v8)(__int64, _IRP *); // rax

  v2 = *(_BYTE **)(a1 + 64);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x1Cu, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a1, a2);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *v2 == 17 )
  {
    v6 = CurrentStackLocation->MajorFunction != 18 ? 0xC00000BB : 0;
LABEL_5:
    a2->IoStatus.Status = v6;
    IofCompleteRequest(a2, 2);
    goto LABEL_6;
  }
  if ( *v2 != 9
    || (v8 = *(__int64 (__fastcall **)(__int64, _IRP *))&v2[8 * CurrentStackLocation->MajorFunction + 48]) == 0LL )
  {
    v6 = -1073741637;
    goto LABEL_5;
  }
  v6 = v8(a1, a2);
LABEL_6:
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x1Du, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a1, a2);
  return v6;
}
