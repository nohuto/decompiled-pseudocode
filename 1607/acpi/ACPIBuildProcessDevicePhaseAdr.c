/*
 * XREFs of ACPIBuildProcessDevicePhaseAdr @ 0x1C000F530
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     AMLIIsNamedChildPresent @ 0x1C0013F30 (AMLIIsNamedChildPresent.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C001DE30 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00286B8 (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseAdr(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 *v2; // r14
  int v3; // ebp
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 *v14; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = qword_1C002C340;
  v3 = 0;
  if ( (*(_BYTE *)(v1 + 912) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 600) && (*(_QWORD *)(v1 + 8) & 0x300000000000LL) == 0 )
      goto LABEL_17;
  }
  else
  {
    v11 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 712), a1 + 80, v1 + 600);
    dword_1C0074698 = 0;
    byte_1C007469C = 0;
    v3 = v11;
    FreeDataBuffs(a1 + 80, 1LL);
    if ( v3 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 912), 0x20uLL);
LABEL_17:
      *(_DWORD *)(a1 + 20) |= 0x20u;
      goto LABEL_3;
    }
    v12 = *(_QWORD *)(v1 + 8);
    v13 = qword_1C002C340;
    v14 = qword_1C002C340;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v13 = *(__int64 **)(v1 + 560);
      if ( (v12 & 0x400000000000LL) != 0 )
        v14 = *(__int64 **)(v1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      2,
      6,
      29,
      (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
      v3,
      v1,
      (__int64)v13,
      (__int64)v14);
  }
LABEL_3:
  if ( (*(_QWORD *)(v1 + 8) & 0x100000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else if ( (unsigned __int8)AMLIIsNamedChildPresent(*(_QWORD *)(v1 + 712), 1145653343LL) )
  {
    if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
      *(_DWORD *)(a1 + 32) = 16;
    }
    else
    {
      *(_DWORD *)(a1 + 32) = 6;
    }
  }
  else
  {
    v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1380204895LL);
    if ( !v6 )
      KeBugCheckEx(0xA5u, 0xDuLL, v1, 0x5244415FuLL, 0LL);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x100000000000uLL);
    v7 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 10;
    if ( v7 )
    {
      AMLIDereferenceHandleEx(v7, v5);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = v6;
    v3 = ACPIGet(
           (__int64 *)v1,
           1380204895,
           -1610349566,
           0LL,
           0,
           (__int64)ACPIBuildCompleteMustSucceed,
           a1,
           v1 + 560,
           0LL);
  }
  v8 = *(_QWORD *)(v1 + 8);
  v9 = qword_1C002C340;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v2 = *(__int64 **)(v1 + 560);
    if ( (v8 & 0x400000000000LL) != 0 )
      v9 = *(__int64 **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    6,
    30,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    v3,
    v1,
    (__int64)v2,
    (__int64)v9);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return (unsigned int)v3;
}
