/*
 * XREFs of IovpCallDriverNoIrpTracking @ 0x140735520
 * Callers:
 *     IovCallDriver @ 0x140734C6C (IovCallDriver.c)
 * Callees:
 *     IopPoHandleIrp @ 0x140137894 (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     IopPerfCallDriver @ 0x1401F7F54 (IopPerfCallDriver.c)
 *     VfAfterCallDriver @ 0x140740DEC (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1407410A4 (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverNoIrpTracking(PVOID Object, ULONG_PTR BugCheckParameter1)
{
  unsigned int v4; // ebp
  unsigned int v5; // eax
  __int64 v6; // rax
  unsigned __int8 v7; // cl
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = VfBeforeCallDriver(Object, BugCheckParameter1, 0LL);
  if ( (IopFunctionPointerMask & 2) != 0 )
  {
    v5 = IopPerfCallDriver(Object, BugCheckParameter1);
  }
  else
  {
    if ( (char)--*(_BYTE *)(BugCheckParameter1 + 67) <= 0 )
      KeBugCheckEx(0x35u, BugCheckParameter1, 0LL, 0LL, 0LL);
    v6 = *(_QWORD *)(BugCheckParameter1 + 184) - 72LL;
    *(_QWORD *)(BugCheckParameter1 + 184) = v6;
    v7 = *(_BYTE *)v6;
    *(_QWORD *)(v6 + 40) = Object;
    if ( v7 == 22 && (unsigned __int8)(*(_BYTE *)(v6 + 1) - 2) <= 1u )
      v5 = IopPoHandleIrp(BugCheckParameter1);
    else
      v5 = (*(__int64 (__fastcall **)(PVOID, ULONG_PTR))(*((_QWORD *)Object + 1) + 8LL * v7 + 112))(
             Object,
             BugCheckParameter1);
  }
  v9 = v5;
  VfAfterCallDriver(0LL, &v9, v4);
  return v9;
}
