/*
 * XREFs of VmpRemoveMemoryRange @ 0x1402245A0
 * Callers:
 *     VmDeleteMemoryRange @ 0x14069B468 (VmDeleteMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140031320 (RtlRbRemoveNode.c)
 *     VmpFlushTbVaRange @ 0x1402240C0 (VmpFlushTbVaRange.c)
 *     VmpProcessContextLockExclusive @ 0x140224508 (VmpProcessContextLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpRemoveMemoryRange(PEX_SPIN_LOCK SpinLock, _QWORD *a2, __int64 a3)
{
  unsigned __int64 *v3; // rbp
  unsigned int v7; // ebx
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v11 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a3 )
  {
    v7 = -1073740007;
    goto LABEL_11;
  }
  VmpFlushTbVaRange(SpinLock, a2[8], a2[9], &v13, &v12, &v11);
  v8 = (unsigned __int64 *)*((_QWORD *)SpinLock + 1);
  if ( !v8 )
  {
LABEL_10:
    v7 = -1073741172;
    goto LABEL_11;
  }
  v9 = a2[6];
  while ( 1 )
  {
    if ( v9 > v8[4] )
    {
      v8 = (unsigned __int64 *)v8[1];
      goto LABEL_9;
    }
    if ( v9 >= v8[3] )
      break;
    v8 = (unsigned __int64 *)*v8;
LABEL_9:
    if ( !v8 )
      goto LABEL_10;
  }
  if ( v8[3] == v9 && v8[4] == a2[7] && v8[5] == a2[8] && v8[6] == a2[9] )
  {
    RtlRbRemoveNode((unsigned __int64 *)SpinLock + 1, v8);
    RtlRbRemoveNode((unsigned __int64 *)SpinLock + 3, v8 - 3);
    ++*((_QWORD *)SpinLock + 5);
    if ( !*((_QWORD *)SpinLock + 1) )
      *((_QWORD *)SpinLock + 9) = -1LL;
    v3 = v8 - 3;
    v7 = 0;
  }
  else
  {
    v7 = -1073741637;
  }
LABEL_11:
  if ( v11 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8((unsigned __int8)v11);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v7;
}
