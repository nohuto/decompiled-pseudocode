/*
 * XREFs of AlpcpDispatchCloseMessage @ 0x1404A48A4
 * Callers:
 *     AlpcpSendCloseMessage @ 0x1404A46BC (AlpcpSendCloseMessage.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1404A4A40 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1404A4EA8 (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 *     AlpcpLogClosePort @ 0x1406A0114 (AlpcpLogClosePort.c)
 */

__int64 __fastcall AlpcpDispatchCloseMessage(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdi
  _QWORD *v4; // r14
  __int64 result; // rax
  char v6; // r15
  volatile signed __int32 *v7; // rcx
  signed __int32 v8; // eax
  signed __int64 *v9; // rbx
  signed __int64 *v10; // rbp
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v2 = a1[1];
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v4 = *(_QWORD **)(v1 + 16);
  result = AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(v1, &v12, &Object);
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(v12 + 256) & 0x20000) != 0 )
    {
      *(_DWORD *)(v2 + 40) |= 0x200u;
      v6 = 1;
      v7 = (volatile signed __int32 *)Object;
      *(_WORD *)(v2 + 228) &= ~0x2000u;
      v8 = _InterlockedExchangeAdd(v7 + 100, 1u);
      v9 = (signed __int64 *)Object;
      *(_DWORD *)(v2 + 44) = v8 + 1;
      *(_QWORD *)(v2 + 120) = v9[7];
      *(_QWORD *)(v2 + 176) = v4;
      *(_QWORD *)(v2 + 184) = *v4;
      if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
      {
        ObfReferenceObject(v9);
        *(_DWORD *)(v2 + 40) |= 0x1000u;
        v10 = (signed __int64 *)v12;
        *(_QWORD *)(v2 + 24) = v9;
      }
      else
      {
        ObfReferenceObject((PVOID)v1);
        *(_DWORD *)(v2 + 40) |= 0x1000u;
        *(_QWORD *)(v2 + 24) = v1;
        v10 = (signed __int64 *)v12;
        if ( v9 != (signed __int64 *)v12 )
        {
          if ( _InterlockedCompareExchange64(v9 + 44, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v9 + 44);
          KeAbPostRelease((ULONG_PTR)(v9 + 44));
          v9 = (signed __int64 *)Object;
          v10 = (signed __int64 *)v12;
        }
        v6 = 0;
      }
      if ( AlpcpLogEnabled )
        AlpcpLogClosePort(v2);
      a1[4] = (__int64)v10;
      a1[2] = (__int64)v4;
      AlpcpCompleteDispatchMessage((__int64)a1);
      if ( v6 && v9 != v10 )
      {
        if ( _InterlockedCompareExchange64(v9 + 44, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v9 + 44);
        KeAbPostRelease((ULONG_PTR)(v9 + 44));
        v9 = (signed __int64 *)Object;
      }
      ObfDereferenceObject(v9);
      return 0LL;
    }
    else
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v4, v12, Object);
      return 3221227271LL;
    }
  }
  return result;
}
