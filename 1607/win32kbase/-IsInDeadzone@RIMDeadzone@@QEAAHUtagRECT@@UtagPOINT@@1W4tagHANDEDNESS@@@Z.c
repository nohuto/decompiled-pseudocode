/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C00E0BF8
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C00D0A88 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C00D0B1C (rimAbIsPointInPenDeadzone.c)
 * Callees:
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C00052CC (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C00053C4 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     RIMIsRunningOnSurfaceHub @ 0x1C0005494 (RIMIsRunningOnSurfaceHub.c)
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C00E0E50 (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C00E0F1C (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C00E0FC4 (-_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // r12d
  unsigned int v6; // r14d
  RIMDeadzone *v7; // r15
  int v9; // eax
  unsigned int Angle; // eax
  unsigned int v12; // edi
  __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // rbx
  int v16; // r8d
  __int64 v17; // r9
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  unsigned int v20; // ecx
  __int64 v21; // rdx
  int v22; // ecx
  struct tagPOINT v23; // [rsp+20h] [rbp-10h]
  struct tagPOINT v24; // [rsp+70h] [rbp+40h]
  __int64 v25; // [rsp+80h] [rbp+50h]
  __int64 v26; // [rsp+88h] [rbp+58h]
  unsigned int v27; // [rsp+90h] [rbp+60h]

  v26 = a4;
  v25 = a3;
  v5 = a5;
  v6 = 0;
  v7 = RIMDeadzone::s_pRimDeadzoneInstance;
  if ( !a5 )
    v5 = 2;
  if ( !*((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 4) || v5 != *(_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance )
  {
    if ( *((_QWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 3) )
      RIMDeadzone::_ClearDeadzoneAreas(RIMDeadzone::s_pRimDeadzoneInstance);
    if ( v5 == 1 )
      v9 = RIMDeadzone::_InitializeLeftHandedDeadzone(v7);
    else
      v9 = RIMDeadzone::_InitializeRightHandedDeadzone(v7);
    if ( v9 < 0 )
      return 0LL;
    LODWORD(a4) = v26;
    LODWORD(a3) = v25;
  }
  v24.x = (int)a3 / 100;
  v24.y = SHIDWORD(v25) / 100;
  v23.x = (int)a4 / 100;
  v23.y = SHIDWORD(v26) / 100;
  Angle = RIMDeadzone::_GetAngle(v24, v23);
  v12 = *((_DWORD *)v7 + 8);
  v13 = Angle;
  v14 = 0;
  v27 = Angle;
  if ( v12 )
  {
    v15 = *((_QWORD *)v7 + 3);
    do
    {
      if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(v13, *(_QWORD *)(v15 + 24LL * v14)) )
      {
        v19 = *(_DWORD *)(v15 + 8 * v17 + 16);
        v20 = 0;
        if ( v19 )
        {
          v21 = *(_QWORD *)(v15 + 8 * v17 + 8);
          while ( v18 < *(_DWORD *)(v21 + 8LL * v20) || v18 >= *(_DWORD *)(v21 + 8LL * v20 + 4) )
          {
            if ( ++v20 >= v19 )
              goto LABEL_21;
          }
          return 1;
        }
LABEL_21:
        v13 = v27;
      }
      v14 = v16 + 1;
    }
    while ( v14 < v12 );
  }
  if ( RIMIsRunningOnSurfaceHub() )
    return v6;
  v22 = a2[3] - 1000;
  if ( v5 == 2 )
  {
    if ( SHIDWORD(v25) > v22 && (int)v25 >= (int)v26 )
      return 1;
    if ( (int)v25 <= a2[2] - 530 )
      return v6;
LABEL_32:
    if ( SHIDWORD(v25) >= SHIDWORD(v26) )
      return 1;
    return v6;
  }
  if ( SHIDWORD(v25) > v22 && (int)v25 <= (int)v26 )
    return 1;
  if ( (int)v25 < *a2 + 530 )
    goto LABEL_32;
  return v6;
}
