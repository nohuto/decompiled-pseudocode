/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000FE50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0012530 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001341C (WPP_RECORDER_SF_qLqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase3(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 *v2; // rsi
  unsigned int v3; // r14d
  __int64 v4; // r15
  int v5; // edx
  __int64 *v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  int v11; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // edx
  __int64 *v16; // rax
  char v17; // [rsp+30h] [rbp-78h]
  _QWORD v18[6]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *(_QWORD **)(a1 + 40);
  v2 = qword_1C002C340;
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  v7 = qword_1C002C340;
  v8 = qword_1C002C340;
  if ( v1 )
  {
    v9 = v1[1];
    v5 = (int)v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = (__int64 *)v1[70];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (__int64 *)v1[71];
    }
  }
  v17 = v5;
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_qqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    10,
    75,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a1,
    v17,
    (__int64)v7,
    (__int64)v8);
  v10 = 6;
  v11 = *(_DWORD *)(a1 + 56);
  if ( *(_DWORD *)(a1 + 104) != 1 )
    v10 = 8;
  *(_DWORD *)(a1 + 212) = v10;
  if ( (v1[1] & 0x8000000000000LL) != 0 )
    goto LABEL_10;
  v4 = AMLIGetNamedChild(v1[89], 1262701663LL);
  if ( !v4 )
  {
    if ( (v11 & 4) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 912LL), 0x80uLL);
    }
    else if ( (v11 & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 912LL), 0xFFFFFFFFFFFFFF7FuLL);
    }
    goto LABEL_10;
  }
  memset(v18, 0, 0x28uLL);
  WORD1(v18[0]) = 1;
  if ( (v11 & 4) != 0 )
  {
    v18[2] = 1LL;
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 912LL), 0x80uLL);
  }
  else
  {
    if ( (v11 & 8) == 0 )
    {
LABEL_10:
      ACPIDeviceCompleteGenericPhase(v4, v3, 0LL, a1);
      return 0LL;
    }
    v18[2] = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 912LL), 0xFFFFFFFFFFFFFF7FuLL);
  }
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v3 = AMLIAsyncEvalObject(v4, 0LL, 1LL, v18, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx(v4, v13);
  v14 = v1[1];
  v15 = 0;
  v4 = 0LL;
  v16 = qword_1C002C340;
  if ( (v14 & 0x200000000000LL) != 0 )
  {
    v2 = (__int64 *)v1[70];
    if ( (v14 & 0x400000000000LL) != 0 )
      v16 = (__int64 *)v1[71];
  }
  LOBYTE(v15) = 4;
  WPP_RECORDER_SF_qLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v15,
    10,
    76,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a1,
    v3,
    (char)v1,
    (__int64)v2,
    (__int64)v16);
  if ( v3 != 259 )
    goto LABEL_10;
  return 0LL;
}
