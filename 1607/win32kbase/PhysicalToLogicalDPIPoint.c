/*
 * XREFs of PhysicalToLogicalDPIPoint @ 0x1C0037BE0
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0037B00 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     IsDCELogicalSpeedTopLevelHitTestSupported_0 @ 0x1C00027E0 (IsDCELogicalSpeedTopLevelHitTestSupported_0.c)
 *     DCELogicalSpeedTopLevelHitTest_0 @ 0x1C00027E8 (DCELogicalSpeedTopLevelHitTest_0.c)
 *     PhysicalToLogicalDPIMonitorPoint @ 0x1C0037CB0 (PhysicalToLogicalDPIMonitorPoint.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C003826C (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     ?DpiAwarenessContextFromMonitorFlags@@YAKK@Z @ 0x1C00B91F4 (-DpiAwarenessContextFromMonitorFlags@@YAKK@Z.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPoint(_QWORD *a1, _QWORD *a2, unsigned int a3, __int64 *a4)
{
  __int64 v7; // rbx
  __int64 *v8; // rsi
  unsigned __int8 v10; // di
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  int v13; // r8d
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = a3;
  v7 = 0LL;
  if ( (unsigned int)ValidateMonFlags(&v17) )
  {
    if ( a4 )
      v16 = *a4;
    else
      v16 = 0LL;
    v8 = &v16;
    if ( a4 )
      v8 = a4;
    if ( (v17 & 0x100) != 0 && !*v8 && *(_DWORD *)(gpDispInfo + 80) > 1u )
    {
      v10 = DpiAwarenessContextFromMonitorFlags(v17);
      v11 = (int)IsDCELogicalSpeedTopLevelHitTestSupported_0() < 0 ? 0LL : DCELogicalSpeedTopLevelHitTest_0();
      if ( v11 && ((v10 ^ *(_BYTE *)(v11 + 352)) & 0xF) == 0 )
      {
        v12 = *(_QWORD *)(v11 + 344);
        v13 = (unsigned __int16)v12;
        if ( (unsigned __int64)(unsigned __int16)v12 < *((_QWORD *)gpsi + 1) )
        {
          v14 = v12 >> 16;
          v15 = qword_1C011A128 + (unsigned int)(v13 * dword_1C011A130);
          if ( ((_WORD)v14 == *(_WORD *)(v15 + 18)
             || (_WORD)v14 == 0xFFFF
             || !(_WORD)v14 && PsGetCurrentProcessWow64Process(v11))
            && (*(_BYTE *)(v15 + 17) & 1) == 0
            && *(_BYTE *)(v15 + 16) == 12 )
          {
            v7 = *(_QWORD *)v15;
          }
        }
        *v8 = v7;
      }
    }
    return PhysicalToLogicalDPIMonitorPoint(a1, a2, v17, v8, v16);
  }
  else
  {
    *a1 = *a2;
    return 0LL;
  }
}
