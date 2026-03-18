/*
 * XREFs of ACPIBuildProcessDevicePhaseAdr @ 0x1C000B510
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000C030 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     AMLIIsNamedChildPresent @ 0x1C000DC00 (AMLIIsNamedChildPresent.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C001F350 (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseAdr(__int64 a1)
{
  ULONG_PTR v1; // rsi
  int v2; // ebp
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v7; // eax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  if ( (*(_BYTE *)(v1 + 904) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 592) && (*(_QWORD *)v1 & 0x300000000000LL) == 0 )
      goto LABEL_16;
  }
  else
  {
    v7 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 704));
    dword_1C005A228 = 0;
    byte_1C005A22C = 0;
    v2 = v7;
    FreeDataBuffs(a1 + 80, 1LL);
    if ( v2 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 904), 0x20uLL);
LABEL_16:
      *(_DWORD *)(a1 + 20) |= 0x20u;
    }
  }
  if ( (*(_QWORD *)v1 & 0x100000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else if ( (unsigned __int8)AMLIIsNamedChildPresent(*(_QWORD *)(v1 + 704), 1145653343LL) )
  {
    if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)v1, 0x200000000000uLL);
      *(_DWORD *)(a1 + 32) = 16;
    }
    else
    {
      *(_DWORD *)(a1 + 32) = 6;
    }
  }
  else
  {
    v4 = AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 1380204895LL);
    if ( !v4 )
      KeBugCheckEx(0xA5u, 0xDuLL, v1, 0x5244415FuLL, 0LL);
    _InterlockedOr64((volatile signed __int64 *)v1, 0x100000000000uLL);
    v5 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 10;
    if ( v5 )
    {
      AMLIDereferenceHandleEx(v5);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = v4;
    v2 = ACPIGet(
           (_QWORD *)v1,
           1380204895,
           -1610349566,
           0LL,
           0,
           (__int64)ACPIBuildCompleteMustSucceed,
           a1,
           v1 + 552,
           0LL);
  }
  if ( v2 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return (unsigned int)v2;
}
