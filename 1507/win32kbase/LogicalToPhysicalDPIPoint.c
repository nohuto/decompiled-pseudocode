/*
 * XREFs of LogicalToPhysicalDPIPoint @ 0x1C00566E0
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0055FB0 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     Is_MonitorFromPointSupported_0 @ 0x1C00024B0 (Is_MonitorFromPointSupported_0.c)
 *     _MonitorFromPoint_0 @ 0x1C00024B8 (_MonitorFromPoint_0.c)
 *     IsDCELogicalSpeedTopLevelHitTestSupported_0 @ 0x1C00024C0 (IsDCELogicalSpeedTopLevelHitTestSupported_0.c)
 *     DCELogicalSpeedTopLevelHitTest_0 @ 0x1C00024C8 (DCELogicalSpeedTopLevelHitTest_0.c)
 *     GetMonitorFlags @ 0x1C00560B0 (GetMonitorFlags.c)
 *     ?DpiAwarenessFromMonitorFlags@@YA?AW4PROCESS_DPI_AWARENESS@@K@Z @ 0x1C00A64E0 (-DpiAwarenessFromMonitorFlags@@YA-AW4PROCESS_DPI_AWARENESS@@K@Z.c)
 */

__int64 __fastcall LogicalToPhysicalDPIPoint(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 *v4; // rdi
  unsigned int v5; // ebx
  int v8; // r8d
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rsi
  int v12; // eax
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int16 v16; // r8
  int v17; // edx
  int v18; // ebp
  int v19; // r10d
  int v20; // r9d
  int v21; // edi
  int v22; // r11d
  __int64 v23; // r10
  unsigned __int64 v24; // rdx
  int v25; // ebx
  int v26; // r8d
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  int v31; // ebp
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  __int64 v36; // rbp
  int v37; // r8d
  unsigned __int64 v38; // rdx
  __int64 v39; // r15
  _QWORD v40[2]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a4;
  v5 = a3;
  if ( (a3 & 0xE0) == 0 )
  {
    v8 = *(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2, a3, a4, v40[0], v40[1]) + 776);
    if ( (v8 & 0x6000) != 0 )
    {
      v9 = 32;
      if ( (v8 & 0x2000) != 0 )
        v9 = 128;
    }
    else
    {
      v9 = 64;
    }
    v5 |= v9;
  }
  if ( (v5 & 3) == 0 )
    v5 |= 2u;
  if ( (v5 & 0x20) != 0 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    return 0LL;
  }
  else
  {
    v10 = 0;
    if ( v4 )
    {
      v40[0] = *v4;
    }
    else
    {
      v40[0] = 0LL;
      v4 = v40;
    }
    if ( (v5 & 0x100) != 0 && !*v4 && *(_DWORD *)(gpDispInfo + 80) > 1u )
    {
      v31 = DpiAwarenessFromMonitorFlags(v5);
      v32 = IsDCELogicalSpeedTopLevelHitTestSupported_0();
      if ( v32 >= 0 )
      {
        v33 = DCELogicalSpeedTopLevelHitTest_0();
        if ( v33 )
        {
          v34 = *(unsigned int *)(v33 + 344);
          if ( v31 == (_DWORD)v34 || v31 <= 0 && (int)v34 <= 0 )
          {
            v35 = *(_QWORD *)(v33 + 352);
            v36 = 0LL;
            v37 = (unsigned __int16)v35;
            if ( (unsigned __int64)(unsigned __int16)v35 < *((_QWORD *)gpsi + 1) )
            {
              v38 = v35 >> 16;
              v39 = qword_1C01003E8 + (unsigned int)(v37 * dword_1C01003F0);
              if ( ((_WORD)v38 == *(_WORD *)(v39 + 18)
                 || (_WORD)v38 == 0xFFFF
                 || !(_WORD)v38 && PsGetCurrentProcessWow64Process(v34))
                && (*(_BYTE *)(v39 + 17) & 1) == 0
                && *(_BYTE *)(v39 + 16) == 12 )
              {
                v36 = *(_QWORD *)v39;
              }
            }
            *v4 = v36;
          }
        }
      }
    }
    if ( (v5 & 0xE0) == 0 )
      v5 |= GetMonitorFlags(0LL);
    if ( (v5 & 3) == 0 )
      v5 |= 2u;
    if ( (v5 & 0x20) != 0 || (int)Is_MonitorFromPointSupported_0() < 0 )
    {
      *(_QWORD *)a1 = *(_QWORD *)a2;
    }
    else
    {
      if ( !v4 || (v11 = *v4) == 0 )
        v11 = MonitorFromPoint_0();
      if ( v4 )
        *v4 = v11;
      LOBYTE(v12) = v5;
      if ( (v5 & 0xE0) == 0 )
        v12 = v5 | GetMonitorFlags(0LL);
      if ( (v12 & 3) == 0 )
        LOBYTE(v12) = v12 | 2;
      if ( (v12 & 0x40) != 0 )
      {
        v13 = (__int64 *)(v11 + 44);
      }
      else if ( (v12 & 0x80u) == 0 )
      {
        v13 = (__int64 *)(v11 + 28);
      }
      else
      {
        v13 = (__int64 *)(v11 + 60);
      }
      v14 = *v13;
      v15 = *(_QWORD *)(v11 + 28);
      v40[0] = v14;
      if ( (v5 & 0x40) != 0 )
        v16 = 96;
      else
        v16 = *((_WORD *)gpsi + 3643);
      v17 = *(unsigned __int16 *)(v11 + 152);
      v10 = 1;
      v18 = 1;
      v19 = *(_DWORD *)a2 - v14;
      v20 = v16;
      v21 = v17;
      if ( v19 < 0 )
      {
        v18 = -1;
        v19 = v14 - *(_DWORD *)a2;
      }
      v22 = 0x80000000;
      if ( v16
        && ((v23 = v16 / 2 + v17 * (__int64)v19, v16 != 96LL) ? (v24 = v23 / v16) : (v24 = v23 / 96), v24 <= 0x7FFFFFFF) )
      {
        if ( v18 <= 0 )
          LODWORD(v24) = -(int)v24;
      }
      else
      {
        LODWORD(v24) = 0x80000000;
        if ( v18 > 0 )
          LODWORD(v24) = 0x7FFFFFFF;
      }
      v25 = 1;
      *(_DWORD *)a1 = v15 + v24;
      v26 = *(_DWORD *)(a2 + 4) - HIDWORD(v40[0]);
      if ( v26 < 0 )
      {
        v25 = -1;
        v26 = HIDWORD(v40[0]) - *(_DWORD *)(a2 + 4);
      }
      if ( v20
        && ((v27 = v20 / 2 + v26 * (__int64)v21, v20 != 96LL)
          ? (v29 = v27 / v20)
          : (v28 = (__int64)((unsigned __int128)(v27 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4,
             v29 = (v28 >> 63) + v28),
            v29 <= 0x7FFFFFFF) )
      {
        v22 = v29;
        if ( v25 <= 0 )
          v22 = -(int)v29;
      }
      else if ( v25 > 0 )
      {
        v22 = 0x7FFFFFFF;
      }
      *(_DWORD *)(a1 + 4) = v22 + HIDWORD(v15);
    }
    return v10;
  }
}
