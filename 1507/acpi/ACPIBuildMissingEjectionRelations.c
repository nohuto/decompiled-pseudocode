/*
 * XREFs of ACPIBuildMissingEjectionRelations @ 0x1C0034BB0
 * Callers:
 *     ACPIDetectEjectDevices @ 0x1C0036CF8 (ACPIDetectEjectDevices.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0008968 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     ACPIInternalMoveList @ 0x1C001BDCC (ACPIInternalMoveList.c)
 */

__int64 ACPIBuildMissingEjectionRelations()
{
  KIRQL v0; // si
  __int64 v1; // rdx
  ULONG_PTR v2; // rdi
  _QWORD *v3; // rcx
  __int64 *v4; // r14
  int v5; // ebx
  __int64 **v6; // rax
  __int64 *v7; // rdi
  _QWORD v9[2]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v10[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 v11; // [rsp+42h] [rbp-2Eh]
  void *Src; // [rsp+60h] [rbp-10h]

  v9[1] = v9;
  v9[0] = v9;
  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (__int64 *)AcpiUnresolvedEjectList != &AcpiUnresolvedEjectList )
  {
    ACPIInternalMoveList(&AcpiUnresolvedEjectList, (__int64)v9);
    while ( (_QWORD *)v9[0] != v9 )
    {
      v1 = *(_QWORD *)v9[0];
      v2 = v9[0] - 792LL;
      v3 = *(_QWORD **)(v9[0] + 8LL);
      if ( *(_QWORD *)(*(_QWORD *)v9[0] + 8LL) != v9[0] || *v3 != v9[0] )
        __fastfail(3u);
      *v3 = v1;
      *(_QWORD *)(v1 + 8) = v3;
      v4 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(v2 + 704), 1145718111);
      if ( v4 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 676));
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
        v5 = AMLIEvalNameSpaceObject(v4, v10, 0, 0LL);
        if ( ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)v2) )
        {
          v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        }
        else
        {
          v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          if ( v5 >= 0 )
          {
            if ( v11 != 2 )
              KeBugCheckEx(0xA5u, 0xAuLL, v2, (ULONG_PTR)v4, v11);
            if ( (int)AMLIGetNameSpaceObject(Src) >= 0 )
            {
              dword_1C005A218 = 0;
              byte_1C005A21C = 0;
              FreeDataBuffs((__int64)v10, 1u);
            }
            v6 = (__int64 **)qword_1C0059DE8;
            v7 = (__int64 *)(v2 + 792);
            *v7 = (__int64)&AcpiUnresolvedEjectList;
            v7[1] = (__int64)v6;
            if ( *v6 != &AcpiUnresolvedEjectList )
              __fastfail(3u);
          }
          else
          {
            v6 = (__int64 **)qword_1C0059DE8;
            v7 = (__int64 *)(v2 + 792);
            *v7 = (__int64)&AcpiUnresolvedEjectList;
            v7[1] = (__int64)v6;
            if ( *v6 != &AcpiUnresolvedEjectList )
              __fastfail(3u);
          }
          *v6 = v7;
          qword_1C0059DE8 = (__int64)v7;
        }
        AMLIDereferenceHandleEx((volatile signed __int32 *)v4);
      }
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
  return 0LL;
}
