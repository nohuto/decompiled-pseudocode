/*
 * XREFs of DebugNotify @ 0x1C005AD30
 * Callers:
 *     <none>
 * Callees:
 *     GetObjectPath @ 0x1C0005860 (GetObjectPath.c)
 *     GetNameSpaceObject @ 0x1C00140F8 (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     _strupr_0 @ 0x1C002BC74 (_strupr_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     IsNumber @ 0x1C005B360 (IsNumber.c)
 */

__int64 __fastcall DebugNotify(__int64 a1, _BYTE *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  int v6; // r8d
  __int64 ObjectPath; // rax
  __int64 *v8; // rdx
  void *v9; // rdi

  v4 = 0;
  if ( a2 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( (unsigned __int8)IsNumber(a2, 16LL) )
          goto LABEL_17;
        PrintDebugMessage(221, a2, 0LL, 0LL, 0LL);
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( !(unsigned __int8)IsNumber(a2, 16LL) )
    {
      strupr_0(a2);
      if ( (unsigned int)GetNameSpaceObject(a2) )
      {
        PrintDebugMessage(231, a2, 0LL, 0LL, 0LL);
LABEL_11:
        v4 = -2;
      }
    }
  }
  else
  {
    if ( a4 != 2 )
    {
LABEL_10:
      PrintDebugMessage(222, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_11;
    }
    ObjectPath = GetObjectPath(qword_1C0075200);
    v8 = qword_1C002C340;
    v9 = (void *)ObjectPath;
    if ( ObjectPath )
      v8 = (__int64 *)ObjectPath;
    ConPrintf("Queuing: Notify(%s, %x) ...\n", v8, qword_1C00751F8);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    ghNotify(2LL, (unsigned int)qword_1C00751F8, qword_1C0075200 + 120, qword_1C0074F48, PciConfigPinToLine, 0LL);
  }
LABEL_17:
  if ( qword_1C0075200 )
    DereferenceObjectEx((_QWORD *)qword_1C0075200);
  return v4;
}
