/*
 * XREFs of DebugNotify @ 0x1C0043C40
 * Callers:
 *     <none>
 * Callees:
 *     GetObjectPath @ 0x1C0005854 (GetObjectPath.c)
 *     GetNameSpaceObject @ 0x1C000D6F8 (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     _strupr_0 @ 0x1C0023634 (_strupr_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     IsNumber @ 0x1C0044270 (IsNumber.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall DebugNotify(__int64 a1, char *a2, int a3, int a4)
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
        PrintDebugMessage(221, (_DWORD)a2, 0, 0, 0LL);
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( !(unsigned __int8)IsNumber(a2, 16LL) )
    {
      strupr_0(a2);
      if ( (unsigned int)GetNameSpaceObject(a2) )
      {
        PrintDebugMessage(231, (_DWORD)a2, 0, 0, 0LL);
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
      PrintDebugMessage(222, 0, 0, 0, 0LL);
      goto LABEL_11;
    }
    ObjectPath = GetObjectPath(qword_1C005AD80);
    v8 = qword_1C0023E70;
    v9 = (void *)ObjectPath;
    if ( ObjectPath )
      v8 = (__int64 *)ObjectPath;
    ConPrintf("Queuing: Notify(%s, %x) ...\n", v8, qword_1C005AD78);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    ghNotify(2LL, (unsigned int)qword_1C005AD78, qword_1C005AD80 + 112, qword_1C005AAC8, PciConfigPinToLine, 0LL);
  }
LABEL_17:
  if ( qword_1C005AD80 )
    DereferenceObjectEx(qword_1C005AD80);
  return v4;
}
