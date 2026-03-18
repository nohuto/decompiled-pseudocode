/*
 * XREFs of _GetPointerDeviceRects @ 0x140030CA8
 * Callers:
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x14023F1A8 (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     NtUserGetPointerDeviceRects @ 0x1402505B0 (NtUserGetPointerDeviceRects.c)
 *     ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x14025514C (-CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1402B3840 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1402C32E4 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     GetCurrentThreadCompositedDpi @ 0x140031050 (GetCurrentThreadCompositedDpi.c)
 *     GetScreenRectForDpi @ 0x1400310BC (GetScreenRectForDpi.c)
 *     ExpandedMonitorSpace @ 0x14003121C (ExpandedMonitorSpace.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1401C8B10 (EnsurePointerDeviceHasMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1401D1C14 (VirtualizeMultiMonDigitizerSize.c)
 */

__int64 __fastcall GetPointerDeviceRects(__int64 a1, _OWORD *a2, __m128i *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int16 CurrentThreadCompositedDpi; // r14
  __int64 *DispInfo; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __m128i si128; // xmm2
  __int128 v14; // xmm6
  __int64 v15; // rdx
  __int64 v16; // rcx
  __m128i v17; // xmm6
  __m128i *ScreenRectForDpi; // rax
  __m128i v19; // xmm7
  __int64 v21; // r15
  int v22; // r13d
  int v23; // ebx
  __m128i *MonitorRectForDpi; // rax
  INT v25; // r8d
  INT v26; // edx
  __m128i v27; // xmm0
  __int64 v28; // rax
  unsigned __int64 v29; // xmm0_8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rbx
  __m128i *v34; // rcx
  __int64 v35; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v37; // [rsp+28h] [rbp-49h]
  int v38; // [rsp+38h] [rbp-39h]
  int v39; // [rsp+40h] [rbp-31h]
  __int64 v40; // [rsp+48h] [rbp-29h] BYREF
  INT a[4]; // [rsp+58h] [rbp-19h] BYREF
  char v42[8]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v43; // [rsp+70h] [rbp-1h]
  __m128i v44[3]; // [rsp+78h] [rbp+7h] BYREF
  int v45; // [rsp+F0h] [rbp+7Fh] BYREF

  v45 = 0;
  v40 = 0LL;
  v6 = 1;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v42);
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v40, &v45) )
  {
    v6 = 0;
    goto LABEL_12;
  }
  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  if ( v45 )
  {
    if ( a3 )
    {
      DispInfo = (__int64 *)GetDispInfo(v8, v7);
      v12 = *DispInfo;
      if ( CurrentThreadCompositedDpi )
      {
        if ( *(_DWORD *)v12 == 1 )
        {
          v35 = GetDispInfo(v12, v11);
          si128 = *GetMonitorRectForDpi((__m128i *)a, *(_QWORD *)(v35 + 96), CurrentThreadCompositedDpi);
        }
        else
        {
          v21 = DispInfo[13];
          si128 = 0LL;
          *(_OWORD *)a = 0LL;
          if ( v21 )
          {
            v37 = _mm_cvtsi128_si32((__m128i)0LL);
            v22 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
            v23 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
            v38 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
            do
            {
              v39 = v23;
              if ( (*(_DWORD *)(*(_QWORD *)(v21 + 40) + 24LL) & 1) != 0 )
              {
                MonitorRectForDpi = GetMonitorRectForDpi(v44, v21, CurrentThreadCompositedDpi);
                v25 = v37;
                v26 = v38;
                v27 = *MonitorRectForDpi;
                v28 = MonitorRectForDpi->m128i_i64[0];
                v29 = _mm_srli_si128(v27, 8).m128i_u64[0];
                if ( v37 >= (int)v28 )
                  v25 = v28;
                v23 = HIDWORD(v28);
                v37 = v25;
                if ( v39 < SHIDWORD(v28) )
                  v23 = v39;
                a[0] = v25;
                if ( v38 <= (int)v29 )
                  v26 = v29;
                a[1] = v23;
                v38 = v26;
                a[2] = v26;
                if ( v22 <= SHIDWORD(v29) )
                {
                  v22 = HIDWORD(v29);
                  a[3] = HIDWORD(v29);
                  a[1] = v23;
                }
                si128 = _mm_load_si128((const __m128i *)a);
              }
              v21 = *(_QWORD *)(v21 + 56);
            }
            while ( v21 );
          }
        }
      }
      else
      {
        si128 = *(__m128i *)(v12 + 24);
      }
      *a3 = si128;
    }
    if ( a2 )
    {
      v14 = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize(v44);
      *(_OWORD *)a = v14;
      if ( ***(_DWORD ***)(W32GetUserSessionState(v16, v15) + 56968) > 1u && CurrentThreadCompositedDpi )
      {
        v17 = *(__m128i *)ExpandedMonitorSpace(v44, CurrentThreadCompositedDpi);
        ScreenRectForDpi = (__m128i *)GetScreenRectForDpi(v44, CurrentThreadCompositedDpi);
        v19 = *ScreenRectForDpi;
        a[2] = EngMulDiv(
                 a[2],
                 _mm_cvtsi128_si32(_mm_srli_si128(*ScreenRectForDpi, 8)) - _mm_cvtsi128_si32(*ScreenRectForDpi),
                 _mm_cvtsi128_si32(_mm_srli_si128(v17, 8)) - _mm_cvtsi128_si32(v17));
        a[3] = EngMulDiv(
                 a[3],
                 _mm_cvtsi128_si32(_mm_srli_si128(v19, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v19, 4)),
                 _mm_cvtsi128_si32(_mm_srli_si128(v17, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v17, 4)));
        v14 = *(_OWORD *)a;
      }
      *a2 = v14;
    }
    goto LABEL_12;
  }
  EnsurePointerDeviceHasMonitor(v40);
  if ( !a2 )
    goto LABEL_33;
  v32 = v40;
  *a2 = *(_OWORD *)(v40 + 176);
  v33 = *(_QWORD *)(v32 + 16);
  if ( ***(_DWORD ***)(W32GetUserSessionState(v31, v30) + 56968) <= 1u || *(_DWORD *)(v33 + 1328) )
    goto LABEL_33;
  v34 = (__m128i *)v40;
  if ( *(_DWORD *)(v40 + 24) != 7 )
  {
    VirtualizeMultiMonDigitizerSize(a2, CurrentThreadCompositedDpi);
LABEL_33:
    v34 = (__m128i *)v40;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)(v34[1].m128i_i64[0] + 1328) )
    {
      *a3 = v34[10];
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      PhysicalToLogicalDPIRect(a3, a3, CurrentThreadDpiAwarenessContext, 0LL);
    }
    else
    {
      *a3 = *(__m128i *)GetScreenRectForDpi(v44, CurrentThreadCompositedDpi);
    }
  }
LABEL_12:
  if ( v42[0] )
    --*(_DWORD *)(v43 + 28);
  return v6;
}
