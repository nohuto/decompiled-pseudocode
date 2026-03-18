/*
 * XREFs of IoConnectInterruptEx @ 0x140502D88
 * Callers:
 *     VfCtxHookAndConnectInterruptEx @ 0x1406CB140 (VfCtxHookAndConnectInterruptEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopConnectLineBasedInterrupt @ 0x140502B18 (IopConnectLineBasedInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x140503004 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectInterrupt @ 0x140503334 (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x14050392C (IopGetInterruptConnectionData.c)
 *     IopConnectInterruptFullySpecified @ 0x14054625C (IopConnectInterruptFullySpecified.c)
 */

NTSTATUS __stdcall IoConnectInterruptEx(PIO_CONNECT_INTERRUPT_PARAMETERS Parameters)
{
  ULONG Version; // ecx
  NTSTATUS result; // eax
  KIRQL SynchronizeIrql; // al
  KIRQL Irql; // dl
  char v6; // di
  USHORT Group; // si
  PVOID v8; // rdi
  unsigned int v9; // edx
  __int64 v10; // rcx
  KIRQL v11; // al
  __int64 v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  NTSTATUS v17; // esi
  PKSPIN_LOCK SpinLock; // r9
  PVOID ServiceContext; // r8
  PKSERVICE_ROUTINE ServiceRoutine; // rdx
  PKINTERRUPT *InterruptObject; // rcx
  ULONG Vector; // [rsp+28h] [rbp-59h]
  KIRQL v24; // [rsp+30h] [rbp-51h]
  KIRQL v25; // [rsp+38h] [rbp-49h]
  KINTERRUPT_MODE InterruptMode; // [rsp+40h] [rbp-41h]
  BOOLEAN ShareVector; // [rsp+48h] [rbp-39h]
  KAFFINITY ProcessorEnableMask; // [rsp+68h] [rbp-19h] BYREF
  __int64 v29; // [rsp+70h] [rbp-11h]
  _QWORD v30[12]; // [rsp+78h] [rbp-9h] BYREF
  PVOID P; // [rsp+F0h] [rbp+6Fh] BYREF

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  Version = Parameters->Version;
  if ( Version == 1 )
  {
LABEL_8:
    if ( !Parameters->FullySpecified.PhysicalDeviceObject )
      return -1073741811;
    if ( !Parameters->FullySpecified.ServiceRoutine )
      return -1073741811;
    SynchronizeIrql = Parameters->FullySpecified.SynchronizeIrql;
    Irql = Parameters->FullySpecified.Irql;
    if ( SynchronizeIrql < Irql )
      return -1073741811;
    if ( SynchronizeIrql || Irql )
    {
      v6 = 0;
    }
    else
    {
      v6 = 1;
      if ( Parameters->FullySpecified.SpinLock )
        return -1073741811;
    }
    if ( Version == 4 )
      Group = Parameters->FullySpecified.Group;
    else
      Group = 0;
    if ( (int)IopGetInterruptConnectionData(Parameters->FullySpecified.PhysicalDeviceObject) >= 0 )
    {
      memset(v30, 0, sizeof(v30));
      v8 = P;
      v9 = 0;
      LODWORD(v30[0]) = 0;
      if ( *(_DWORD *)P )
      {
        while ( 1 )
        {
          v10 = 88LL * v9;
          if ( *(_DWORD *)((char *)P + v10 + 12) == Parameters->FullySpecified.Vector )
          {
            v11 = Parameters->FullySpecified.Irql;
            if ( (*((_BYTE *)P + v10 + 16) == v11 || !v11)
              && *(_DWORD *)((char *)P + v10 + 24) == Parameters->FullySpecified.InterruptMode
              && *(_WORD *)((char *)P + v10 + 40) == Group
              && *(_QWORD *)((char *)P + v10 + 32) == Parameters->FullySpecified.ProcessorEnableMask )
            {
              break;
            }
          }
          if ( ++v9 >= *(_DWORD *)P )
            goto LABEL_43;
        }
        v12 = 88LL * v9;
        LODWORD(v30[0]) = 1;
        v13 = *(_OWORD *)((char *)P + v12 + 24);
        *(_OWORD *)&v30[1] = *(_OWORD *)((char *)P + v12 + 8);
        v14 = *(_OWORD *)((char *)P + v12 + 40);
        *(_OWORD *)&v30[3] = v13;
        v15 = *(_OWORD *)((char *)P + v12 + 56);
        *(_OWORD *)&v30[5] = v14;
        v16 = *(_OWORD *)((char *)P + v12 + 72);
        *(_OWORD *)&v30[7] = v15;
        v30[11] = *(_QWORD *)((char *)P + v12 + 88);
        *(_OWORD *)&v30[9] = v16;
        if ( !_mm_cvtsi128_si32(*(__m128i *)&v30[1]) && (v30[8] & 0x100000000LL) != 0 )
          Parameters->FullySpecified.ShareVector = 1;
        v17 = IopConnectInterrupt(
                (unsigned int)&P,
                Parameters->FullySpecified.ServiceRoutine,
                0,
                Parameters->FullySpecified.ServiceContext,
                0,
                (__int64)Parameters->FullySpecified.SpinLock,
                Parameters->FullySpecified.SynchronizeIrql,
                Parameters->FullySpecified.ShareVector);
        if ( v17 >= 0 )
          *Parameters->FullySpecified.InterruptObject = (PKINTERRUPT)((char *)P + 112);
        ExFreePoolWithTag(v8, 0);
        return v17;
      }
LABEL_43:
      ExFreePoolWithTag(P, 0);
      return -1073741637;
    }
    if ( v6 )
      return -1073741637;
    SpinLock = Parameters->FullySpecified.SpinLock;
    ServiceContext = Parameters->FullySpecified.ServiceContext;
    ServiceRoutine = Parameters->FullySpecified.ServiceRoutine;
    InterruptObject = Parameters->FullySpecified.InterruptObject;
    v29 = 0LL;
    ProcessorEnableMask = Parameters->FullySpecified.ProcessorEnableMask;
    ShareVector = Parameters->FullySpecified.ShareVector;
    InterruptMode = Parameters->FullySpecified.InterruptMode;
    v25 = Parameters->FullySpecified.SynchronizeIrql;
    v24 = Parameters->FullySpecified.Irql;
    Vector = Parameters->FullySpecified.Vector;
    LOWORD(v29) = Group;
    return IopConnectInterruptFullySpecified(
             (_DWORD)InterruptObject,
             (_DWORD)ServiceRoutine,
             (_DWORD)ServiceContext,
             (_DWORD)SpinLock,
             Vector,
             v24,
             v25,
             InterruptMode,
             ShareVector,
             (__int64)&ProcessorEnableMask);
  }
  if ( Version == 2 )
    return IopConnectLineBasedInterrupt(
             Parameters->FullySpecified.PhysicalDeviceObject,
             Parameters->FullySpecified.InterruptObject,
             (__int64)Parameters->FullySpecified.ServiceRoutine);
  if ( Version != 3 )
  {
    if ( Version != 4 )
    {
      Parameters->Version = 3;
      return -1073741637;
    }
    goto LABEL_8;
  }
  result = IopConnectMessageBasedInterrupt(
             Parameters->FullySpecified.PhysicalDeviceObject,
             (__int64)Parameters->FullySpecified.SpinLock,
             Parameters->FullySpecified.SynchronizeIrql);
  if ( result < 0 )
  {
    if ( Parameters->MessageBased.FallBackServiceRoutine )
    {
      v17 = IopConnectLineBasedInterrupt(
              Parameters->FullySpecified.PhysicalDeviceObject,
              Parameters->FullySpecified.InterruptObject,
              (__int64)Parameters->MessageBased.FallBackServiceRoutine);
      Parameters->Version = 2;
      return v17;
    }
    return -1073741637;
  }
  return result;
}
