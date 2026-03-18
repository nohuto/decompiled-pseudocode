/*
 * XREFs of LogicalToPhysicalDPIRect @ 0x1C0056280
 * Callers:
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMONITOR@@@Z @ 0x1C0055EDC (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMO.c)
 * Callees:
 *     IsDCELogicalSpeedTopLevelHitTestSupported_0 @ 0x1C00024C0 (IsDCELogicalSpeedTopLevelHitTestSupported_0.c)
 *     DCELogicalSpeedTopLevelHitTest_0 @ 0x1C00024C8 (DCELogicalSpeedTopLevelHitTest_0.c)
 *     Is_MonitorFromRectSupported_0 @ 0x1C00024D0 (Is_MonitorFromRectSupported_0.c)
 *     _MonitorFromRect_0 @ 0x1C00024D8 (_MonitorFromRect_0.c)
 *     GetMonitorFlags @ 0x1C00560B0 (GetMonitorFlags.c)
 *     EngMulDiv @ 0x1C0056650 (EngMulDiv.c)
 *     ?DpiAwarenessFromMonitorFlags@@YA?AW4PROCESS_DPI_AWARENESS@@K@Z @ 0x1C00A64E0 (-DpiAwarenessFromMonitorFlags@@YA-AW4PROCESS_DPI_AWARENESS@@K@Z.c)
 */

__int64 __fastcall LogicalToPhysicalDPIRect(__m128i *a1, __m128i *a2, unsigned int a3, __int64 *a4)
{
  unsigned int v5; // edi
  __int64 *v8; // rbx
  __int64 v9; // rsi
  int v10; // eax
  bool v11; // sf
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int16 v16; // dx
  INT v17; // r12d
  __m128i v18; // xmm6
  INT v19; // r15d
  __int64 v20; // rbp
  INT v21; // eax
  INT v22; // ecx
  int v23; // esi
  int v24; // edi
  __int64 result; // rax
  int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // r14
  int v31; // r8d
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // [rsp+20h] [rbp-48h] BYREF
  __int64 v35; // [rsp+28h] [rbp-40h]

  v5 = a3;
  if ( (a3 & 0xE0) == 0 )
    v5 = GetMonitorFlags(0LL) | a3;
  if ( (v5 & 3) == 0 )
    v5 |= 2u;
  if ( (v5 & 0x20) != 0 || (int)Is_MonitorFromRectSupported_0() < 0 )
  {
    result = 0LL;
    *a1 = *a2;
    return result;
  }
  if ( a4 )
    v34 = *a4;
  else
    v34 = 0LL;
  v8 = &v34;
  if ( a4 )
    v8 = a4;
  if ( (v5 & 0x100) == 0 )
    goto LABEL_14;
  if ( !*v8 )
  {
    if ( *(_DWORD *)(gpDispInfo + 80) > 1u )
    {
      v26 = DpiAwarenessFromMonitorFlags(v5);
      LODWORD(v35) = (a2->m128i_i32[0] + a2->m128i_i32[2]) / 2;
      HIDWORD(v35) = (a2->m128i_i32[1] + a2->m128i_i32[3]) / 2;
      v27 = (int)IsDCELogicalSpeedTopLevelHitTestSupported_0() < 0 ? 0LL : DCELogicalSpeedTopLevelHitTest_0();
      if ( v27 )
      {
        v28 = *(unsigned int *)(v27 + 344);
        if ( v26 == (_DWORD)v28 || v26 <= 0 && (int)v28 <= 0 )
        {
          v29 = *(_QWORD *)(v27 + 352);
          v30 = 0LL;
          v31 = (unsigned __int16)v29;
          if ( (unsigned __int64)(unsigned __int16)v29 < *((_QWORD *)gpsi + 1) )
          {
            v32 = v29 >> 16;
            v33 = qword_1C01003E8 + (unsigned int)(v31 * dword_1C01003F0);
            if ( ((_WORD)v32 == *(_WORD *)(v33 + 18)
               || (_WORD)v32 == 0xFFFF
               || !(_WORD)v32 && PsGetCurrentProcessWow64Process(v28))
              && (*(_BYTE *)(v33 + 17) & 1) == 0
              && *(_BYTE *)(v33 + 16) == 12 )
            {
              v30 = *(_QWORD *)v33;
            }
          }
          *v8 = v30;
        }
      }
    }
LABEL_14:
    if ( !*v8 )
      *v8 = MonitorFromRect_0();
  }
  v9 = *v8;
  LOBYTE(v10) = v5;
  if ( (v5 & 0xE0) == 0 )
    v10 = v5 | GetMonitorFlags(0LL);
  if ( (v10 & 3) == 0 )
    LOBYTE(v10) = v10 | 2;
  if ( (v10 & 0x40) != 0 )
  {
    v12 = (__int64 *)(v9 + 44);
  }
  else
  {
    v11 = (v10 & 0x80u) != 0;
    v12 = (__int64 *)(v9 + 60);
    if ( !v11 )
      v12 = (__int64 *)(v9 + 28);
  }
  v13 = *v8;
  v14 = *v12;
  v35 = v14;
  v15 = *(_QWORD *)(v13 + 28);
  if ( (v5 & 0x40) != 0 )
    v16 = 96;
  else
    v16 = *((_WORD *)gpsi + 3643);
  v17 = *(unsigned __int16 *)(v13 + 152);
  v18 = *a2;
  v19 = v16;
  v20 = a2->m128i_i64[0];
  v21 = EngMulDiv(v20 - v14, v17, v16);
  v22 = HIDWORD(v20) - HIDWORD(v35);
  v23 = v21 + v15;
  a1->m128i_i32[0] = v21 + v15;
  v18.m128i_i64[0] = _mm_srli_si128(v18, 8).m128i_u64[0];
  v24 = EngMulDiv(v22, v17, v19) + HIDWORD(v15);
  a1->m128i_i32[1] = v24;
  a1->m128i_i32[2] = v23 + EngMulDiv(v18.m128i_i32[0] - v20, v17, v19);
  a1->m128i_i32[3] = v24 + EngMulDiv(v18.m128i_i32[1] - HIDWORD(v20), v17, v19);
  return 1LL;
}
