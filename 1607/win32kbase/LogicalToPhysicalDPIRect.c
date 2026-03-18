/*
 * XREFs of LogicalToPhysicalDPIRect @ 0x1C0037DE0
 * Callers:
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z @ 0x1C0058AF4 (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z.c)
 * Callees:
 *     IsDCELogicalSpeedTopLevelHitTestSupported_0 @ 0x1C00027E0 (IsDCELogicalSpeedTopLevelHitTestSupported_0.c)
 *     DCELogicalSpeedTopLevelHitTest_0 @ 0x1C00027E8 (DCELogicalSpeedTopLevelHitTest_0.c)
 *     Is_MonitorFromRectSupported_0 @ 0x1C00027F0 (Is_MonitorFromRectSupported_0.c)
 *     _MonitorFromRect_0 @ 0x1C00027F8 (_MonitorFromRect_0.c)
 *     OriginFromMonFlags @ 0x1C0037C70 (OriginFromMonFlags.c)
 *     ScaleDPIRect @ 0x1C0037F30 (ScaleDPIRect.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C003826C (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     ?DpiAwarenessContextFromMonitorFlags@@YAKK@Z @ 0x1C00B91F4 (-DpiAwarenessContextFromMonitorFlags@@YAKK@Z.c)
 */

__int64 __fastcall LogicalToPhysicalDPIRect(_OWORD *a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 *v7; // rdi
  __int64 v8; // rsi
  __int64 *v9; // rax
  __int64 v10; // rax
  unsigned __int16 v11; // dx
  __int64 result; // rax
  unsigned __int8 v13; // bl
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  int v18; // r8d
  unsigned __int64 v19; // rdx
  __int64 v20; // rbx
  unsigned int v21[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v22; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+40h] BYREF

  v23 = a3;
  if ( !(unsigned int)ValidateMonFlags(&v23) || (int)Is_MonitorFromRectSupported_0() < 0 )
  {
    result = 0LL;
    *a1 = *(_OWORD *)a2;
    return result;
  }
  if ( a4 )
    v22 = *a4;
  else
    v22 = 0LL;
  v7 = &v22;
  if ( a4 )
    v7 = a4;
  if ( (v23 & 0x100) == 0 )
    goto LABEL_10;
  if ( !*v7 )
  {
    if ( *(_DWORD *)(gpDispInfo + 80) > 1u )
    {
      v13 = DpiAwarenessContextFromMonitorFlags(v23);
      v21[0] = (*(_DWORD *)a2 + *(_DWORD *)(a2 + 8)) / 2;
      v21[1] = (*(_DWORD *)(a2 + 4) + *(_DWORD *)(a2 + 12)) / 2;
      v15 = (int)IsDCELogicalSpeedTopLevelHitTestSupported_0() < 0 ? 0LL : DCELogicalSpeedTopLevelHitTest_0();
      if ( v15 && ((v13 ^ *(_BYTE *)(v15 + 352)) & 0xF) == 0 )
      {
        v16 = 0LL;
        v17 = *(_QWORD *)(v15 + 344);
        v18 = (unsigned __int16)v17;
        if ( (unsigned __int64)(unsigned __int16)v17 < *((_QWORD *)gpsi + 1) )
        {
          v19 = v17 >> 16;
          v20 = qword_1C011A128 + (unsigned int)(v18 * dword_1C011A130);
          if ( ((_WORD)v19 == *(_WORD *)(v20 + 18)
             || (_WORD)v19 == 0xFFFF
             || !(_WORD)v19 && PsGetCurrentProcessWow64Process(v14))
            && (*(_BYTE *)(v20 + 17) & 1) == 0
            && *(_BYTE *)(v20 + 16) == 12 )
          {
            v16 = *(_QWORD *)v20;
          }
        }
        *v7 = v16;
      }
    }
LABEL_10:
    if ( !*v7 )
      *v7 = MonitorFromRect_0();
  }
  OriginFromMonFlags(v23, *v7);
  v8 = *v7;
  v21[0] = 32;
  ValidateMonFlags(v21);
  if ( (v21[0] & 0x40) != 0 )
  {
    v9 = (__int64 *)(v8 + 44);
  }
  else
  {
    v9 = (__int64 *)(v8 + 60);
    if ( SLOBYTE(v21[0]) >= 0 )
      v9 = (__int64 *)(v8 + 28);
  }
  v10 = *v9;
  if ( (v23 & 0x40) != 0 )
    v11 = 96;
  else
    v11 = *((_WORD *)gpsi + 4339);
  ScaleDPIRect((_DWORD)a1, a2, *(unsigned __int16 *)(*v7 + 154), v11, v10);
  return 1LL;
}
