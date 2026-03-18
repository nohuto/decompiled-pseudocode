/*
 * XREFs of ACPIBuildMissingEjectionRelations @ 0x1C00444EC
 * Callers:
 *     ACPIDetectEjectDevices @ 0x1C0048368 (ACPIDetectEjectDevices.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C000D7F4 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     ACPIInternalMoveList @ 0x1C002AC40 (ACPIInternalMoveList.c)
 */

__int64 ACPIBuildMissingEjectionRelations()
{
  KIRQL v0; // si
  __int64 v1; // rdx
  ULONG_PTR v2; // rdi
  _QWORD *v3; // rcx
  __int64 *v4; // r14
  int v5; // ebx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  _QWORD v10[2]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v11[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 v12; // [rsp+42h] [rbp-2Eh]
  void *Src; // [rsp+60h] [rbp-10h]

  v10[1] = v10;
  v10[0] = v10;
  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (__int64 *)AcpiUnresolvedEjectList != &AcpiUnresolvedEjectList )
  {
    ACPIInternalMoveList(&AcpiUnresolvedEjectList, (__int64)v10);
    while ( (_QWORD *)v10[0] != v10 )
    {
      v1 = *(_QWORD *)v10[0];
      v2 = v10[0] - 800LL;
      v3 = *(_QWORD **)(v10[0] + 8LL);
      if ( *(_QWORD *)(*(_QWORD *)v10[0] + 8LL) != v10[0] || *v3 != v10[0] )
        __fastfail(3u);
      *v3 = v1;
      *(_QWORD *)(v1 + 8) = v3;
      v4 = AMLIGetNamedChild(*(__int64 **)(v2 + 712), 1145718111);
      if ( v4 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 684));
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
        v5 = AMLIEvalNameSpaceObject(v4, v11, 0, 0LL);
        if ( ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)v2) )
        {
          v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        }
        else
        {
          v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          if ( v5 >= 0 )
          {
            if ( v12 != 2 )
              KeBugCheckEx(0xA5u, 0xAuLL, v2, (ULONG_PTR)v4, v12);
            if ( (int)AMLIGetNameSpaceObject(Src) >= 0 )
            {
              dword_1C0074698 = 0;
              byte_1C007469C = 0;
              FreeDataBuffs((__int64)v11, 1u);
            }
            v7 = (_QWORD *)qword_1C00741E8;
            v8 = (_QWORD *)(v2 + 800);
            if ( *(__int64 **)qword_1C00741E8 != &AcpiUnresolvedEjectList )
              __fastfail(3u);
          }
          else
          {
            v7 = (_QWORD *)qword_1C00741E8;
            v8 = (_QWORD *)(v2 + 800);
            if ( *(__int64 **)qword_1C00741E8 != &AcpiUnresolvedEjectList )
              __fastfail(3u);
          }
          *v8 = &AcpiUnresolvedEjectList;
          v8[1] = v7;
          *v7 = v8;
          qword_1C00741E8 = (__int64)v8;
        }
        AMLIDereferenceHandleEx((volatile signed __int32 *)v4, v6);
      }
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
  return 0LL;
}
