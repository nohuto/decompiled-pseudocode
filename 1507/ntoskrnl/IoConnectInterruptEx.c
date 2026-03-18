/*
 * XREFs of IoConnectInterruptEx @ 0x14057C8D8
 * Callers:
 *     VfCtxHookAndConnectInterruptEx @ 0x14074E7D4 (VfCtxHookAndConnectInterruptEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopConnectLineBasedInterrupt @ 0x14057C66C (IopConnectLineBasedInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x14057CB44 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectInterrupt @ 0x14057CE68 (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x14057D528 (IopGetInterruptConnectionData.c)
 *     IopConnectInterruptFullySpecified @ 0x1405BC298 (IopConnectInterruptFullySpecified.c)
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
  __int64 v9; // rdx
  KIRQL v10; // al
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  NTSTATUS v14; // esi
  PKSPIN_LOCK SpinLock; // r9
  PVOID ServiceContext; // r8
  PKSERVICE_ROUTINE ServiceRoutine; // rdx
  PKINTERRUPT *InterruptObject; // rcx
  ULONG Vector; // [rsp+28h] [rbp-59h]
  KIRQL v21; // [rsp+30h] [rbp-51h]
  KIRQL v22; // [rsp+38h] [rbp-49h]
  KINTERRUPT_MODE InterruptMode; // [rsp+40h] [rbp-41h]
  BOOLEAN ShareVector; // [rsp+48h] [rbp-39h]
  KAFFINITY ProcessorEnableMask; // [rsp+68h] [rbp-19h] BYREF
  __int64 v26; // [rsp+70h] [rbp-11h]
  _QWORD v27[11]; // [rsp+78h] [rbp-9h] BYREF
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
      memset(v27, 0, sizeof(v27));
      v8 = P;
      v9 = 0LL;
      LODWORD(v27[0]) = 0;
      if ( *(_DWORD *)P )
      {
        while ( 1 )
        {
          if ( *((_DWORD *)P + 20 * v9 + 3) == Parameters->FullySpecified.Vector )
          {
            v10 = Parameters->FullySpecified.Irql;
            if ( (*((_BYTE *)P + 80 * v9 + 16) == v10 || !v10)
              && *((_DWORD *)P + 20 * v9 + 6) == Parameters->FullySpecified.InterruptMode
              && *((_WORD *)P + 40 * v9 + 20) == Group
              && *((_QWORD *)P + 10 * v9 + 4) == Parameters->FullySpecified.ProcessorEnableMask )
            {
              break;
            }
          }
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *(_DWORD *)P )
            goto LABEL_43;
        }
        LODWORD(v27[0]) = 1;
        v11 = *(_OWORD *)((char *)P + 80 * v9 + 24);
        *(_OWORD *)&v27[1] = *(_OWORD *)((char *)P + 80 * v9 + 8);
        v12 = *(_OWORD *)((char *)P + 80 * v9 + 40);
        *(_OWORD *)&v27[3] = v11;
        v13 = *(_OWORD *)((char *)P + 80 * v9 + 56);
        *(_OWORD *)&v27[5] = v12;
        *(_OWORD *)&v27[9] = *(_OWORD *)((char *)P + 80 * v9 + 72);
        *(_OWORD *)&v27[7] = v13;
        if ( !_mm_cvtsi128_si32(*(__m128i *)&v27[1]) && (v27[8] & 0x100000000LL) != 0 )
          Parameters->FullySpecified.ShareVector = 1;
        v14 = IopConnectInterrupt(
                (unsigned int)&P,
                Parameters->FullySpecified.ServiceRoutine,
                0,
                Parameters->FullySpecified.ServiceContext,
                0,
                (__int64)Parameters->FullySpecified.SpinLock,
                Parameters->FullySpecified.SynchronizeIrql,
                Parameters->FullySpecified.ShareVector);
        if ( v14 >= 0 )
          *Parameters->FullySpecified.InterruptObject = (PKINTERRUPT)((char *)P + 104);
        ExFreePoolWithTag(v8, 0);
        return v14;
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
    v26 = 0LL;
    ProcessorEnableMask = Parameters->FullySpecified.ProcessorEnableMask;
    ShareVector = Parameters->FullySpecified.ShareVector;
    InterruptMode = Parameters->FullySpecified.InterruptMode;
    v22 = Parameters->FullySpecified.SynchronizeIrql;
    v21 = Parameters->FullySpecified.Irql;
    Vector = Parameters->FullySpecified.Vector;
    LOWORD(v26) = Group;
    return IopConnectInterruptFullySpecified(
             (_DWORD)InterruptObject,
             (_DWORD)ServiceRoutine,
             (_DWORD)ServiceContext,
             (_DWORD)SpinLock,
             Vector,
             v21,
             v22,
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
      v14 = IopConnectLineBasedInterrupt(
              Parameters->FullySpecified.PhysicalDeviceObject,
              Parameters->FullySpecified.InterruptObject,
              (__int64)Parameters->MessageBased.FallBackServiceRoutine);
      Parameters->Version = 2;
      return v14;
    }
    return -1073741637;
  }
  return result;
}
