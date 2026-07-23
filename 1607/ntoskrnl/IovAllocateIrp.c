/*
 * XREFs of IovAllocateIrp @ 0x14070066C
 * Callers:
 *     <none>
 * Callees:
 *     IopInitActivityIdIrp @ 0x1401C4E8C (IopInitActivityIdIrp.c)
 *     XdvIoAllocateIrp @ 0x14022323C (XdvIoAllocateIrp.c)
 *     IovpLogStackTrace @ 0x1407016C4 (IovpLogStackTrace.c)
 *     VfIoAllocateIrp2 @ 0x14070BC1C (VfIoAllocateIrp2.c)
 *     ViIrpAllocateLockedPacket @ 0x14070C14C (ViIrpAllocateLockedPacket.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140716B8C (VfIrpDatabaseEntryReleaseLock.c)
 */

__int64 __fastcall IovAllocateIrp(__int64 a1, char a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rsi
  _OWORD *v13; // rdi
  char v14; // bp
  __int64 v15; // rbx
  __int64 LockedPacket; // rax
  __int64 Irp; // rax
  bool v18; // cl

  v8 = IovpLogStackTrace(0LL);
  v12 = (_QWORD *)v8;
  if ( v8 )
    v13 = (_OWORD *)(v8 + 24);
  else
    v13 = 0LL;
  v14 = a2 + 1;
  v15 = 0LL;
  if ( !VfIoDisabled )
  {
    LOBYTE(v10) = v14;
    LockedPacket = ViIrpAllocateLockedPacket(v10, a3, a4);
    if ( LockedPacket )
    {
      v15 = *(_QWORD *)LockedPacket;
      if ( v13 )
      {
        *(_OWORD *)(LockedPacket + 120) = *v13;
        *(_OWORD *)(LockedPacket + 136) = v13[1];
        *(_OWORD *)(LockedPacket + 152) = v13[2];
        *(_OWORD *)(LockedPacket + 168) = v13[3];
      }
      else
      {
        *(_QWORD *)(LockedPacket + 120) = 0LL;
      }
      VfIrpDatabaseEntryReleaseLock(LockedPacket);
    }
  }
  if ( !v15 )
  {
    LOBYTE(v11) = a3;
    LOBYTE(v9) = v14;
    Irp = pXdvIoAllocateIrp(a1, v9, v11, a4, (__int64 (*)(void))IopAllocateIrpPrivate);
    v15 = Irp;
    if ( Irp )
      VfIoAllocateIrp2(Irp, v13);
  }
  if ( v12 )
    *v12 = v15;
  if ( v15 )
  {
    *(_QWORD *)(v15 + 184) -= 72LL;
    --*(_BYTE *)(v15 + 67);
    --*(_BYTE *)(v15 + 66);
    v18 = (IopIrpExtensionStatus & 1) != 0;
    *(_QWORD *)(v15 + 200) = *(_QWORD *)(v15 + 184);
    if ( v18 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(v15);
  }
  return v15;
}
