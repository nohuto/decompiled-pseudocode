/*
 * XREFs of Endpoint_ControlEndpointResetCompletion @ 0x1C0020F30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     Command_SendCommand @ 0x1C001C18C (Command_SendCommand.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C001CB34 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0022364 (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_ddx @ 0x1C00265E8 (WPP_RECORDER_SF_ddx.c)
 *     TR_InitializeTransferRing @ 0x1C0028EB4 (TR_InitializeTransferRing.c)
 *     ESM_AddEvent @ 0x1C0039978 (ESM_AddEvent.c)
 */

void __fastcall Endpoint_ControlEndpointResetCompletion(_QWORD *a1, int a2, _QWORD *a3)
{
  __int64 *v3; // rdi
  unsigned __int8 v6; // al
  __int64 v7; // rbx
  unsigned int v8; // r10d
  int v9; // r10d
  int v10; // r8d
  int v11; // edx
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+38h] [rbp-10h]

  v3 = (__int64 *)a1[7];
  if ( a2 == 3 )
  {
    v14 = *((_DWORD *)v3 + 36);
    v12 = *(unsigned __int8 *)(v3[2] + 135);
    WPP_RECORDER_SF_dd(v3[10], 4u, 0xCu, 0x51u, (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids, v12, v14);
  }
  else
  {
    v6 = *((_BYTE *)a1 + 68);
    if ( v6 == 1 )
    {
      v7 = *(_QWORD *)(*v3 + 112);
      TR_InitializeTransferRing(v3[11]);
      memset(a1, 0, 0x50uLL);
      v8 = *((_DWORD *)a1 + 9) & 0xFFFF43FF;
      a1[6] = Endpoint_ControlEndpointResetSetDequeuePointerCompletion;
      a1[7] = v3;
      *((_DWORD *)a1 + 9) = v8 | 0x4000;
      a1[3] = Endpoint_GetDequeuePointer(v3, 0LL);
      *((_DWORD *)a1 + 9) = v9 ^ (v9 ^ (*((_DWORD *)v3 + 36) << 16)) & 0x1F0000;
      v10 = *(unsigned __int8 *)(v3[2] + 135);
      *((_BYTE *)a1 + 39) = v10;
      v11 = *((_WORD *)a1 + 19) & 0x1F;
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_ddx(v3[10], v11, v10, 83);
      Command_SendCommand(v7, (__int64)a1);
      return;
    }
    v16 = v6;
    v15 = *((_DWORD *)v3 + 36);
    v13 = *(unsigned __int8 *)(v3[2] + 135);
    WPP_RECORDER_SF_ddL(
      v3[10],
      2u,
      0xCu,
      0x52u,
      (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
      v13,
      v15,
      v16);
    Controller_HwVerifierBreakIfEnabled((_QWORD *)*v3, v3[1], v3[3], 256LL, "Endpoint Reset Command failed", a1 + 3, a3);
    Controller_ReportFatalError(*v3, 2, 4102, v3[2], (__int64)v3, 0LL);
  }
  _m_prefetchw(v3 + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u) & 2) == 0 )
    ESM_AddEvent(v3 + 34);
}
