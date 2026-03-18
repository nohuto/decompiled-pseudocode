/*
 * XREFs of PhysicalToLogicalDPIRect @ 0x1C0048680
 * Callers:
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMONITOR@@@Z @ 0x1C0048084 (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMO.c)
 * Callees:
 *     IsDCELogicalSpeedTopLevelHitTestSupported_0 @ 0x1C00024F0 (IsDCELogicalSpeedTopLevelHitTestSupported_0.c)
 *     DCELogicalSpeedTopLevelHitTest_0 @ 0x1C00024F8 (DCELogicalSpeedTopLevelHitTest_0.c)
 *     Is_MonitorFromRectSupported_0 @ 0x1C0002500 (Is_MonitorFromRectSupported_0.c)
 *     _MonitorFromRect_0 @ 0x1C0002508 (_MonitorFromRect_0.c)
 *     GetMonitorFlags @ 0x1C00482A0 (GetMonitorFlags.c)
 *     EngMulDiv @ 0x1C0048860 (EngMulDiv.c)
 *     ?DpiAwarenessFromMonitorFlags@@YA?AW4PROCESS_DPI_AWARENESS@@K@Z @ 0x1C00AACC0 (-DpiAwarenessFromMonitorFlags@@YA-AW4PROCESS_DPI_AWARENESS@@K@Z.c)
 */

__int64 __fastcall PhysicalToLogicalDPIRect(__m128i *a1, __m128i *a2, unsigned int a3, __m128i *a4)
{
  unsigned int v5; // esi
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // rdi
  unsigned __int16 v14; // dx
  __m128i v15; // xmm0
  __int64 v16; // rax
  INT v17; // r12d
  __int64 v18; // rbp
  INT v19; // r15d
  INT v20; // eax
  INT v21; // ecx
  int v22; // esi
  int v23; // edi
  __int64 result; // rax
  int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  __int64 v31; // rdi
  __m128i v32; // [rsp+20h] [rbp-48h] BYREF
  __int64 v33; // [rsp+30h] [rbp-38h]

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
  v8 = 0LL;
  if ( a4 )
  {
    v32.m128i_i64[0] = a4->m128i_i64[0];
  }
  else
  {
    v32.m128i_i64[0] = 0LL;
    a4 = &v32;
  }
  if ( (v5 & 0x100) == 0 )
    goto LABEL_10;
  if ( !a4->m128i_i64[0] )
  {
    if ( *(_DWORD *)(gpDispInfo + 80) > 1u )
    {
      v25 = DpiAwarenessFromMonitorFlags(v5);
      LODWORD(v33) = (a2->m128i_i32[0] + a2->m128i_i32[2]) / 2;
      HIDWORD(v33) = (a2->m128i_i32[1] + a2->m128i_i32[3]) / 2;
      if ( (int)IsDCELogicalSpeedTopLevelHitTestSupported_0() >= 0 )
      {
        v26 = DCELogicalSpeedTopLevelHitTest_0();
        if ( v26 )
        {
          v27 = *(unsigned int *)(v26 + 344);
          if ( v25 == (_DWORD)v27 || v25 <= 0 && (int)v27 <= 0 )
          {
            v28 = *(_QWORD *)(v26 + 352);
            v29 = (unsigned __int16)v28;
            if ( (unsigned __int64)(unsigned __int16)v28 < *((_QWORD *)gpsi + 1) )
            {
              v30 = v28 >> 16;
              v31 = qword_1C0102D48 + (unsigned int)(v29 * dword_1C0102D50);
              if ( ((_WORD)v30 == *(_WORD *)(v31 + 18)
                 || (_WORD)v30 == 0xFFFF
                 || !(_WORD)v30 && PsGetCurrentProcessWow64Process(v27, v30, v29))
                && (*(_BYTE *)(v31 + 17) & 1) == 0
                && *(_BYTE *)(v31 + 16) == 12 )
              {
                v8 = *(_QWORD *)v31;
              }
            }
            a4->m128i_i64[0] = v8;
          }
        }
      }
    }
LABEL_10:
    if ( !a4->m128i_i64[0] )
      a4->m128i_i64[0] = MonitorFromRect_0();
  }
  v9 = a4->m128i_i64[0];
  LOBYTE(v10) = v5;
  v11 = *(_QWORD *)(a4->m128i_i64[0] + 28);
  v33 = v11;
  if ( (v5 & 0xE0) == 0 )
    v10 = v5 | GetMonitorFlags(0LL);
  if ( (v10 & 3) == 0 )
    LOBYTE(v10) = v10 | 2;
  if ( (v10 & 0x40) != 0 )
  {
    v12 = (__int64 *)(v9 + 44);
  }
  else if ( (v10 & 0x80u) == 0 )
  {
    v12 = (__int64 *)(v9 + 28);
  }
  else
  {
    v12 = (__int64 *)(v9 + 60);
  }
  v13 = *v12;
  if ( (v5 & 0x40) != 0 )
    v14 = 96;
  else
    v14 = *((_WORD *)gpsi + 3643);
  v15 = *a2;
  v16 = a4->m128i_i64[0];
  v17 = v14;
  v18 = a2->m128i_i64[0];
  v32 = v15;
  v19 = *(unsigned __int16 *)(v16 + 152);
  v20 = EngMulDiv(v18 - v11, v14, v19);
  v21 = HIDWORD(v18) - HIDWORD(v33);
  v22 = v20 + v13;
  a1->m128i_i32[0] = v20 + v13;
  v23 = EngMulDiv(v21, v17, v19) + HIDWORD(v13);
  v15.m128i_i64[0] = _mm_srli_si128(v32, 8).m128i_u64[0];
  a1->m128i_i32[1] = v23;
  a1->m128i_i32[2] = v22 + EngMulDiv(v15.m128i_i32[0] - v18, v17, v19);
  a1->m128i_i32[3] = v23 + EngMulDiv(v15.m128i_i32[1] - HIDWORD(v18), v17, v19);
  return 1LL;
}
