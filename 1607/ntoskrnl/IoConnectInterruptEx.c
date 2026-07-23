/*
 * XREFs of IoConnectInterruptEx @ 0x140539A98
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopConnectLineBasedInterrupt @ 0x140539828 (IopConnectLineBasedInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x140539D14 (IopConnectMessageBasedInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x14053A04C (IopGetInterruptConnectionData.c)
 *     IopConnectInterrupt @ 0x14053A12C (IopConnectInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x14057A874 (IopConnectInterruptFullySpecified.c)
 */

NTSTATUS __stdcall IoConnectInterruptEx(PIO_CONNECT_INTERRUPT_PARAMETERS Parameters)
{
  __int64 Version; // rcx
  NTSTATUS result; // eax
  NTSTATUS v4; // esi
  KIRQL SynchronizeIrql; // al
  KIRQL Irql; // dl
  char v7; // di
  USHORT Group; // si
  PVOID v9; // rdi
  unsigned int v10; // edx
  __int64 v11; // rcx
  KIRQL v12; // al
  __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
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
  switch ( (_DWORD)Version )
  {
    case 1:
      goto LABEL_48;
    case 2:
      return IopConnectLineBasedInterrupt(
               Parameters->FullySpecified.PhysicalDeviceObject,
               Parameters->FullySpecified.InterruptObject,
               (__int64)Parameters->FullySpecified.ServiceRoutine);
    case 3:
      goto LABEL_5;
    case 4:
LABEL_48:
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
        v7 = 0;
      }
      else
      {
        v7 = 1;
        if ( Parameters->FullySpecified.SpinLock )
          return -1073741811;
      }
      if ( (_DWORD)Version == 4 )
        Group = Parameters->FullySpecified.Group;
      else
        Group = 0;
      if ( (int)IopGetInterruptConnectionData(Parameters->FullySpecified.PhysicalDeviceObject) >= 0 )
      {
        memset(v30, 0, sizeof(v30));
        v9 = P;
        v10 = 0;
        LODWORD(v30[0]) = 0;
        if ( *(_DWORD *)P )
        {
          while ( 1 )
          {
            v11 = 88LL * v10;
            if ( *(_DWORD *)((char *)P + v11 + 12) == Parameters->FullySpecified.Vector )
            {
              v12 = Parameters->FullySpecified.Irql;
              if ( (*((_BYTE *)P + v11 + 16) == v12 || !v12)
                && *(_DWORD *)((char *)P + v11 + 24) == Parameters->FullySpecified.InterruptMode
                && *(_WORD *)((char *)P + v11 + 40) == Group
                && *(_QWORD *)((char *)P + v11 + 32) == Parameters->FullySpecified.ProcessorEnableMask )
              {
                break;
              }
            }
            if ( ++v10 >= *(_DWORD *)P )
              goto LABEL_44;
          }
          v13 = 88LL * v10;
          LODWORD(v30[0]) = 1;
          v14 = *(_OWORD *)((char *)P + v13 + 24);
          *(_OWORD *)&v30[1] = *(_OWORD *)((char *)P + v13 + 8);
          v15 = *(_OWORD *)((char *)P + v13 + 40);
          *(_OWORD *)&v30[3] = v14;
          v16 = *(_OWORD *)((char *)P + v13 + 56);
          *(_OWORD *)&v30[5] = v15;
          v17 = *(_OWORD *)((char *)P + v13 + 72);
          *(_OWORD *)&v30[7] = v16;
          v30[11] = *(_QWORD *)((char *)P + v13 + 88);
          *(_OWORD *)&v30[9] = v17;
          if ( !_mm_cvtsi128_si32(*(__m128i *)&v30[1]) && (v30[8] & 0x100000000LL) != 0 )
            Parameters->FullySpecified.ShareVector = 1;
          v4 = IopConnectInterrupt(
                 (unsigned int)&P,
                 Parameters->FullySpecified.ServiceRoutine,
                 0,
                 Parameters->FullySpecified.ServiceContext,
                 0,
                 (__int64)Parameters->FullySpecified.SpinLock,
                 Parameters->FullySpecified.SynchronizeIrql,
                 Parameters->FullySpecified.ShareVector);
          if ( v4 >= 0 )
            *Parameters->FullySpecified.InterruptObject = (PKINTERRUPT)((char *)P + 112);
          ExFreePoolWithTag(v9, 0);
          return v4;
        }
LABEL_44:
        ExFreePoolWithTag(P, 0);
        return -1073741637;
      }
      if ( v7 )
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
  if ( (_DWORD)Version != 5 )
  {
    Parameters->Version = 3;
    return -1073741637;
  }
LABEL_5:
  result = IopConnectMessageBasedInterrupt(
             Version,
             Parameters->FullySpecified.PhysicalDeviceObject,
             Parameters->FullySpecified.InterruptObject,
             Parameters->FullySpecified.ServiceRoutine,
             Parameters->FullySpecified.ServiceContext,
             Parameters->FullySpecified.SpinLock,
             Parameters->FullySpecified.SynchronizeIrql);
  if ( result >= 0 )
    return result;
  if ( !Parameters->MessageBased.FallBackServiceRoutine )
    return -1073741637;
  v4 = IopConnectLineBasedInterrupt(
         Parameters->FullySpecified.PhysicalDeviceObject,
         Parameters->FullySpecified.InterruptObject,
         (__int64)Parameters->MessageBased.FallBackServiceRoutine);
  Parameters->Version = 2;
  return v4;
}
