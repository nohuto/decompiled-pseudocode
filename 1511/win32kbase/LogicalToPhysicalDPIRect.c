/*
 * XREFs of LogicalToPhysicalDPIRect @ 0x1C0048470
 * Callers:
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMONITOR@@@Z @ 0x1C0048084 (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0PEAUtagPROCESSINFO@@1PEAUtagMO.c)
 * Callees:
 *     IsDCELogicalSpeedTopLevelHitTestSupported_0 @ 0x1C00024F0 (IsDCELogicalSpeedTopLevelHitTestSupported_0.c)
 *     DCELogicalSpeedTopLevelHitTest_0 @ 0x1C00024F8 (DCELogicalSpeedTopLevelHitTest_0.c)
 *     Is_MonitorFromRectSupported_0 @ 0x1C0002500 (Is_MonitorFromRectSupported_0.c)
 *     _MonitorFromRect_0 @ 0x1C0002508 (_MonitorFromRect_0.c)
 *     GetMonitorFlags @ 0x1C00482A0 (GetMonitorFlags.c)
 *     EngMulDiv @ 0x1C0048860 (EngMulDiv.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C00488F0 (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     ?DpiAwarenessFromMonitorFlags@@YA?AW4PROCESS_DPI_AWARENESS@@K@Z @ 0x1C00AACC0 (-DpiAwarenessFromMonitorFlags@@YA-AW4PROCESS_DPI_AWARENESS@@K@Z.c)
 */

__int64 __fastcall LogicalToPhysicalDPIRect(__m128i *a1, __m128i *a2, unsigned int a3, __int64 *a4)
{
  unsigned int v5; // esi
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 *v13; // rdi
  __int64 v14; // rdi
  unsigned __int16 v15; // dx
  __m128i v16; // xmm6
  INT v17; // r12d
  INT v18; // r13d
  __int64 v19; // r14
  INT v20; // eax
  INT v21; // ecx
  int v22; // esi
  int v23; // edi
  __int64 result; // rax
  int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // [rsp+20h] [rbp-20h] BYREF
  __int64 v34; // [rsp+28h] [rbp-18h]
  unsigned int v36; // [rsp+90h] [rbp+50h] BYREF

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
    v33 = *a4;
  else
    v33 = 0LL;
  v8 = &v33;
  if ( a4 )
    v8 = a4;
  if ( (v5 & 0x100) == 0 )
    goto LABEL_14;
  if ( !*v8 )
  {
    if ( *(_DWORD *)(gpDispInfo + 80) > 1u )
    {
      v25 = DpiAwarenessFromMonitorFlags(v5);
      LODWORD(v34) = (a2->m128i_i32[0] + a2->m128i_i32[2]) / 2;
      HIDWORD(v34) = (a2->m128i_i32[1] + a2->m128i_i32[3]) / 2;
      v26 = (int)IsDCELogicalSpeedTopLevelHitTestSupported_0() < 0 ? 0LL : DCELogicalSpeedTopLevelHitTest_0();
      if ( v26 )
      {
        v27 = *(unsigned int *)(v26 + 344);
        if ( v25 == (_DWORD)v27 || v25 <= 0 && (int)v27 <= 0 )
        {
          v28 = *(_QWORD *)(v26 + 352);
          v29 = 0LL;
          v30 = (unsigned __int16)v28;
          if ( (unsigned __int64)(unsigned __int16)v28 < *((_QWORD *)gpsi + 1) )
          {
            v31 = v28 >> 16;
            v32 = qword_1C0102D48 + (unsigned int)(v30 * dword_1C0102D50);
            if ( ((_WORD)v31 == *(_WORD *)(v32 + 18)
               || (_WORD)v31 == 0xFFFF
               || !(_WORD)v31 && PsGetCurrentProcessWow64Process(v27, v31, v30))
              && (*(_BYTE *)(v32 + 17) & 1) == 0
              && *(_BYTE *)(v32 + 16) == 12 )
            {
              v29 = *(_QWORD *)v32;
            }
          }
          *v8 = v29;
        }
      }
    }
LABEL_14:
    if ( !*v8 )
      *v8 = MonitorFromRect_0();
  }
  v9 = *v8;
  v36 = v5;
  ValidateMonFlags(&v36);
  if ( (v36 & 0x40) != 0 )
  {
    v10 = (__int64 *)(v9 + 44);
  }
  else if ( (v36 & 0x80u) == 0 )
  {
    v10 = (__int64 *)(v9 + 28);
  }
  else
  {
    v10 = (__int64 *)(v9 + 60);
  }
  v11 = *v10;
  v12 = *v8;
  v34 = v11;
  v36 = 32;
  ValidateMonFlags(&v36);
  if ( (v36 & 0x40) != 0 )
  {
    v13 = (__int64 *)(v12 + 44);
  }
  else if ( (v36 & 0x80u) != 0 )
  {
    v13 = (__int64 *)(v12 + 60);
  }
  else
  {
    v13 = (__int64 *)(v12 + 28);
  }
  v14 = *v13;
  if ( (v5 & 0x40) != 0 )
    v15 = 96;
  else
    v15 = *((_WORD *)gpsi + 3643);
  v16 = *a2;
  v17 = v15;
  v18 = *(unsigned __int16 *)(*v8 + 152);
  v19 = a2->m128i_i64[0];
  v20 = EngMulDiv(*(_OWORD *)a2 - v11, v18, v15);
  v21 = HIDWORD(v19) - HIDWORD(v34);
  v22 = v20 + v14;
  a1->m128i_i32[0] = v20 + v14;
  v23 = EngMulDiv(v21, v18, v17) + HIDWORD(v14);
  v16.m128i_i64[0] = _mm_srli_si128(v16, 8).m128i_u64[0];
  a1->m128i_i32[1] = v23;
  a1->m128i_i32[2] = v22 + EngMulDiv(v16.m128i_i32[0] - v19, v18, v17);
  a1->m128i_i32[3] = v23 + EngMulDiv(v16.m128i_i32[1] - HIDWORD(v19), v18, v17);
  return 1LL;
}
