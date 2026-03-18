/*
 * XREFs of PhysicalToLogicalDPIPoint @ 0x1C00482E0
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x1C00481A0 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     Is_MonitorFromPointSupported_0 @ 0x1C00024E0 (Is_MonitorFromPointSupported_0.c)
 *     _MonitorFromPoint_0 @ 0x1C00024E8 (_MonitorFromPoint_0.c)
 *     IsDCELogicalSpeedTopLevelHitTestSupported_0 @ 0x1C00024F0 (IsDCELogicalSpeedTopLevelHitTestSupported_0.c)
 *     DCELogicalSpeedTopLevelHitTest_0 @ 0x1C00024F8 (DCELogicalSpeedTopLevelHitTest_0.c)
 *     GetMonitorFlags @ 0x1C00482A0 (GetMonitorFlags.c)
 *     EngMulDiv @ 0x1C0048860 (EngMulDiv.c)
 *     ?DpiAwarenessFromMonitorFlags@@YA?AW4PROCESS_DPI_AWARENESS@@K@Z @ 0x1C00AACC0 (-DpiAwarenessFromMonitorFlags@@YA-AW4PROCESS_DPI_AWARENESS@@K@Z.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPoint(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int v5; // esi
  __int64 *v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rbp
  __int64 *v11; // rbx
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned __int16 v15; // cx
  INT v16; // eax
  INT v17; // ebp
  INT v18; // esi
  int v20; // edi
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // [rsp+20h] [rbp-38h] BYREF

  v5 = a3;
  if ( (a3 & 0xE0) == 0 )
    v5 = GetMonitorFlags(0LL) | a3;
  if ( (v5 & 3) == 0 )
    v5 |= 2u;
  if ( (v5 & 0x20) != 0 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    return 0LL;
  }
  else
  {
    if ( a4 )
      v28 = *a4;
    else
      v28 = 0LL;
    v8 = &v28;
    v9 = 1;
    if ( a4 )
      v8 = a4;
    if ( (v5 & 0x100) != 0 && !*v8 && *(_DWORD *)(gpDispInfo + 80) > 1u )
    {
      v20 = DpiAwarenessFromMonitorFlags(v5);
      v21 = (int)IsDCELogicalSpeedTopLevelHitTestSupported_0() < 0 ? 0LL : DCELogicalSpeedTopLevelHitTest_0();
      if ( v21 )
      {
        v22 = *(unsigned int *)(v21 + 344);
        if ( v20 == (_DWORD)v22 || v20 <= 0 && (int)v22 <= 0 )
        {
          v23 = *(_QWORD *)(v21 + 352);
          v24 = 0LL;
          v25 = (unsigned __int16)v23;
          if ( (unsigned __int64)(unsigned __int16)v23 < *((_QWORD *)gpsi + 1) )
          {
            v26 = v23 >> 16;
            v27 = qword_1C0102D48 + (unsigned int)(v25 * dword_1C0102D50);
            if ( ((_WORD)v26 == *(_WORD *)(v27 + 18)
               || (_WORD)v26 == 0xFFFF
               || !(_WORD)v26 && PsGetCurrentProcessWow64Process(v22, v26, v25))
              && (*(_BYTE *)(v27 + 17) & 1) == 0
              && *(_BYTE *)(v27 + 16) == 12 )
            {
              v24 = *(_QWORD *)v27;
            }
          }
          *v8 = v24;
        }
      }
    }
    if ( (v5 & 0xE0) == 0 )
      v5 |= GetMonitorFlags(0LL);
    if ( (v5 & 3) == 0 )
      v5 |= 2u;
    if ( (v5 & 0x20) != 0 || (int)Is_MonitorFromPointSupported_0() < 0 )
    {
      v9 = 0;
      *(_QWORD *)a1 = *(_QWORD *)a2;
    }
    else
    {
      if ( v8 )
        v10 = *v8;
      else
        v10 = 0LL;
      if ( !v10 )
        v10 = MonitorFromPoint_0();
      if ( v8 )
        *v8 = v10;
      v11 = (__int64 *)(v10 + 28);
      LOBYTE(v12) = v5;
      v13 = *(_QWORD *)(v10 + 28);
      v28 = v13;
      if ( (v5 & 0xE0) == 0 )
        v12 = v5 | GetMonitorFlags(0LL);
      if ( (v12 & 3) == 0 )
        LOBYTE(v12) = v12 | 2;
      if ( (v12 & 0x40) != 0 )
      {
        v11 = (__int64 *)(v10 + 44);
      }
      else if ( (v12 & 0x80u) != 0 )
      {
        v11 = (__int64 *)(v10 + 60);
      }
      v14 = *v11;
      if ( (v5 & 0x40) != 0 )
        v15 = 96;
      else
        v15 = *((_WORD *)gpsi + 3643);
      v16 = *(unsigned __int16 *)(v10 + 152);
      v17 = v15;
      v18 = v16;
      *(_DWORD *)a1 = v14 + EngMulDiv(*(_DWORD *)a2 - v13, v15, v16);
      *(_DWORD *)(a1 + 4) = HIDWORD(v14) + EngMulDiv(*(_DWORD *)(a2 + 4) - HIDWORD(v28), v17, v18);
    }
    return v9;
  }
}
