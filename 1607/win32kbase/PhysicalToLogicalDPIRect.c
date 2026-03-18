/*
 * XREFs of PhysicalToLogicalDPIRect @ 0x1C0038010
 * Callers:
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z @ 0x1C0058AF4 (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z.c)
 * Callees:
 *     IsDCELogicalSpeedTopLevelHitTestSupported_0 @ 0x1C00027E0 (IsDCELogicalSpeedTopLevelHitTestSupported_0.c)
 *     DCELogicalSpeedTopLevelHitTest_0 @ 0x1C00027E8 (DCELogicalSpeedTopLevelHitTest_0.c)
 *     Is_MonitorFromRectSupported_0 @ 0x1C00027F0 (Is_MonitorFromRectSupported_0.c)
 *     _MonitorFromRect_0 @ 0x1C00027F8 (_MonitorFromRect_0.c)
 *     EngMulDiv @ 0x1C0038200 (EngMulDiv.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C003826C (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     ?DpiAwarenessContextFromMonitorFlags@@YAKK@Z @ 0x1C00B91F4 (-DpiAwarenessContextFromMonitorFlags@@YAKK@Z.c)
 */

__int64 __fastcall PhysicalToLogicalDPIRect(__m128i *a1, __m128i *a2, unsigned int a3, __int64 *a4)
{
  unsigned int v7; // r15d
  __int64 *v8; // rsi
  __int64 v9; // rbx
  __int64 *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 *v13; // rdi
  __int64 v14; // rdi
  unsigned __int16 v15; // dx
  __m128i v16; // xmm6
  INT v17; // r13d
  INT v18; // r12d
  __int64 v19; // r14
  INT v20; // eax
  INT v21; // ecx
  int v22; // esi
  int v23; // edi
  __int64 result; // rax
  unsigned __int8 v25; // bl
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  int v30; // r8d
  unsigned __int64 v31; // rdx
  __int64 v32; // rbx
  unsigned int v33[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v34; // [rsp+28h] [rbp-28h] BYREF
  __int64 v35; // [rsp+30h] [rbp-20h]
  unsigned int v37; // [rsp+A0h] [rbp+50h] BYREF

  v37 = a3;
  if ( !(unsigned int)ValidateMonFlags(&v37) || (int)Is_MonitorFromRectSupported_0() < 0 )
  {
    result = 0LL;
    *a1 = *a2;
    return result;
  }
  if ( a4 )
    v34 = *a4;
  else
    v34 = 0LL;
  v7 = v37;
  v8 = &v34;
  if ( a4 )
    v8 = a4;
  if ( (v37 & 0x100) == 0 )
    goto LABEL_8;
  if ( !*v8 )
  {
    if ( *(_DWORD *)(gpDispInfo + 80) > 1u )
    {
      v25 = DpiAwarenessContextFromMonitorFlags(v37);
      v33[0] = (a2->m128i_i32[0] + a2->m128i_i32[2]) / 2;
      v33[1] = (a2->m128i_i32[1] + a2->m128i_i32[3]) / 2;
      v27 = (int)IsDCELogicalSpeedTopLevelHitTestSupported_0() < 0 ? 0LL : DCELogicalSpeedTopLevelHitTest_0();
      if ( v27 && ((v25 ^ *(_BYTE *)(v27 + 352)) & 0xF) == 0 )
      {
        v28 = 0LL;
        v29 = *(_QWORD *)(v27 + 344);
        v30 = (unsigned __int16)v29;
        if ( (unsigned __int64)(unsigned __int16)v29 < *((_QWORD *)gpsi + 1) )
        {
          v31 = v29 >> 16;
          v32 = qword_1C011A128 + (unsigned int)(v30 * dword_1C011A130);
          if ( ((_WORD)v31 == *(_WORD *)(v32 + 18)
             || (_WORD)v31 == 0xFFFF
             || !(_WORD)v31 && PsGetCurrentProcessWow64Process(v26))
            && (*(_BYTE *)(v32 + 17) & 1) == 0
            && *(_BYTE *)(v32 + 16) == 12 )
          {
            v28 = *(_QWORD *)v32;
          }
        }
        *v8 = v28;
      }
    }
LABEL_8:
    if ( !*v8 )
      *v8 = MonitorFromRect_0();
  }
  v9 = *v8;
  v33[0] = 32;
  ValidateMonFlags(v33);
  if ( (v33[0] & 0x40) != 0 )
  {
    v10 = (__int64 *)(v9 + 44);
  }
  else if ( SLOBYTE(v33[0]) < 0 )
  {
    v10 = (__int64 *)(v9 + 60);
  }
  else
  {
    v10 = (__int64 *)(v9 + 28);
  }
  v11 = *v10;
  v12 = *v8;
  v35 = v11;
  v33[0] = v7;
  ValidateMonFlags(v33);
  if ( (v33[0] & 0x40) != 0 )
  {
    v13 = (__int64 *)(v12 + 44);
  }
  else if ( SLOBYTE(v33[0]) >= 0 )
  {
    v13 = (__int64 *)(v12 + 28);
  }
  else
  {
    v13 = (__int64 *)(v12 + 60);
  }
  v14 = *v13;
  if ( (v7 & 0x40) != 0 )
    v15 = 96;
  else
    v15 = *((_WORD *)gpsi + 4339);
  v16 = *a2;
  v17 = v15;
  v18 = *(unsigned __int16 *)(*v8 + 154);
  v19 = a2->m128i_i64[0];
  v20 = EngMulDiv(v19 - v11, v15, v18);
  v21 = HIDWORD(v19) - HIDWORD(v35);
  v22 = v20 + v14;
  a1->m128i_i32[0] = v20 + v14;
  v23 = EngMulDiv(v21, v17, v18) + HIDWORD(v14);
  v16.m128i_i64[0] = _mm_srli_si128(v16, 8).m128i_u64[0];
  a1->m128i_i32[1] = v23;
  a1->m128i_i32[2] = v22 + EngMulDiv(v16.m128i_i32[0] - v19, v17, v18);
  a1->m128i_i32[3] = v23 + EngMulDiv(v16.m128i_i32[1] - HIDWORD(v19), v17, v18);
  return 1LL;
}
