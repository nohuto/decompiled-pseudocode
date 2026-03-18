/*
 * XREFs of VmAccessFault @ 0x14020C258
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     VmpFaultEntryInsert @ 0x14020C3C8 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x14020C460 (VmpFaultEntryRemove.c)
 *     VmpProcessUpdateSlat @ 0x14020C9E0 (VmpProcessUpdateSlat.c)
 *     MmVirtualAccessFault @ 0x140626764 (MmVirtualAccessFault.c)
 */

__int64 __fastcall VmAccessFault(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v8; // rsi
  int updated; // ebx
  unsigned int v10; // edi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v12; // rbp
  _QWORD v14[6]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF

  v4 = a1 >> 12;
  v8 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[12];
  if ( v8 )
  {
    if ( a2 <= (unsigned __int64)MmHighestUserAddress )
    {
      v10 = (a3 & 1) != 0;
      if ( (a3 & 2) != 0 )
        v10 |= 2u;
      if ( (a3 & 4) != 0 )
        v10 |= 4u;
      memset(v14, 0, 0x28uLL);
      v14[3] = a2 >> 12;
      VmpFaultEntryInsert(v8, v14);
      while ( 1 )
      {
        updated = MmVirtualAccessFault(a2, v10, &v15);
        if ( updated < 0 )
          break;
        if ( !v14[4] )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)v8);
          v12 = CurrentIrql;
          if ( *(_QWORD *)(v8 + 64) != a4 )
          {
            updated = -1073741558;
LABEL_21:
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v8);
            __writecr8(v12);
            break;
          }
          if ( !v14[4] )
          {
            updated = VmpProcessUpdateSlat(v8, v4, v15, a3);
            if ( updated >= 0 )
              updated = 0;
            goto LABEL_21;
          }
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v8);
          __writecr8(CurrentIrql);
        }
        v14[4] = 0LL;
      }
      VmpFaultEntryRemove(v8, v14);
    }
    else
    {
      return (unsigned int)-1073741819;
    }
  }
  else
  {
    return (unsigned int)-1073741688;
  }
  return (unsigned int)updated;
}
