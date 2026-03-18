/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C0010000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qdqss @ 0x1C000FCF0 (WPP_RECORDER_SF_qdqss.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C0010524 (WPP_RECORDER_SF_qLdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0012530 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase1(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // ebp
  unsigned int v4; // r15d
  int v5; // r14d
  __int64 v6; // rsi
  __int64 v7; // r8
  char v8; // r10
  __int64 *v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // rax
  const char *v16; // rdx
  int v17; // [rsp+20h] [rbp-58h]

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 56);
  v6 = 0LL;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_WORD *)(a1 + 218) = 1;
  if ( v3 == 1 || (v5 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 6;
  }
  else if ( (*(_QWORD *)(v1 + 8) & 0x8000000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 5;
  }
  else
  {
    *(_DWORD *)(a1 + 212) = 4;
    if ( v3 == 4 )
    {
      v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1397310559LL);
      if ( v6 )
      {
        if ( (*(_DWORD *)(v1 + 912) & 0x100LL) == 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 912LL), 0x100uLL);
          *(_DWORD *)(a1 + 56) |= 0x1000000u;
          v4 = AMLIAsyncEvalObject(v6, 0LL, 0LL, 0LL, ACPIDeviceCompleteGenericPhase, a1);
          AMLIDereferenceHandleEx(v6, v13);
          v6 = 0LL;
          if ( v4 == 259 )
          {
            v14 = *(_QWORD *)(v1 + 8);
            v15 = (const char *)qword_1C002C340;
            v16 = (const char *)qword_1C002C340;
            if ( (v14 & 0x200000000000LL) != 0 )
            {
              v15 = *(const char **)(v1 + 560);
              if ( (v14 & 0x400000000000LL) != 0 )
                v16 = *(const char **)(v1 + 568);
            }
            WPP_RECORDER_SF_qdqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              (__int64)v16,
              0xAu,
              0x36u,
              (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
              a1,
              *(_DWORD *)(a1 + 212),
              v1,
              v15,
              v16);
            return 259LL;
          }
        }
      }
      else
      {
        _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 912LL), 0x100uLL);
      }
    }
  }
  v8 = 0;
  v9 = qword_1C002C340;
  v10 = qword_1C002C340;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v8 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v9 = *(__int64 **)(v1 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v10 = *(__int64 **)(v1 + 568);
    }
  }
  WPP_RECORDER_SF_qLdqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v10,
    v7,
    55,
    v17,
    a1,
    v4,
    *(_DWORD *)(a1 + 212),
    v8,
    (__int64)v9,
    (__int64)v10);
  ACPIDeviceCompleteGenericPhase(v6, v4, 0LL, a1);
  if ( v6 )
    AMLIDereferenceHandleEx(v6, v11);
  return 0LL;
}
