/*
 * XREFs of ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C00E0A3C
 * Callers:
 *     rimAbIsContactSuppressedByDeviceDeadzones @ 0x1C00D0A1C (rimAbIsContactSuppressedByDeviceDeadzones.c)
 * Callees:
 *     ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C00E0E50 (-_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z.c)
 *     ?_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C00E0FC4 (-_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1C00E1604 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 *     PtInRect @ 0x1C00E29A0 (PtInRect.c)
 */

__int64 __fastcall RIMDeadzone::IsInDeadzone(RIMDeadzone *this, struct tagPOINT *a2)
{
  unsigned int v2; // ebx
  BOOL v4; // r13d
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rdi
  unsigned int Angle; // r12d
  unsigned int v9; // r15d
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rcx
  DeadzonePalmTelemetry *v13; // rcx
  DeadzonePalmTelemetry *v14; // rcx
  tagPOINT v16; // [rsp+60h] [rbp+40h]
  struct tagPOINT v17; // [rsp+68h] [rbp+48h]

  v2 = 0;
  v4 = (a2[327].y & 4) == 0 && (a2[300].y & 4) != 0;
  v5 = *((_DWORD *)this + 4);
  if ( v5 && *((_DWORD *)this + 10) )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v17 = a2[304];
        v16 = *(tagPOINT *)((char *)this + 44);
        v17.x /= 100;
        v17.y /= 100;
        v16.x /= 100;
        v16.y /= 100;
        v7 = 0LL;
        Angle = RIMDeadzone::_GetAngle(v17, v16);
        v9 = (v17.x - v16.x) * (v17.x - v16.x) + (v17.y - v16.y) * (v17.y - v16.y);
        if ( *((_DWORD *)this + 8) )
        {
          while ( 1 )
          {
            if ( (unsigned int)RIMDeadzone::_IsAngleWithinRange(Angle, *(_QWORD *)(*((_QWORD *)this + 3) + 24 * v7)) )
            {
              v11 = 0LL;
              if ( *(_DWORD *)(v10 + 16) )
                break;
            }
LABEL_19:
            v7 = (unsigned int)(v7 + 1);
            if ( (unsigned int)v7 >= *((_DWORD *)this + 8) )
              return 0;
          }
          while ( 1 )
          {
            v12 = *(_QWORD *)(v10 + 8);
            if ( v9 >= *(_DWORD *)(v12 + 8 * v11) && v9 < *(_DWORD *)(v12 + 8 * v11 + 4) )
              break;
            if ( v4 )
            {
              v13 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
              if ( v13 )
              {
                if ( v9 < 0x57E4 )
                  DeadzonePalmTelemetry::UpdateTelemetryBuffer(v13, v9, Angle, 0);
              }
            }
            v11 = (unsigned int)(v11 + 1);
            v10 = *((_QWORD *)this + 3) + 24 * v7;
            if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 16) )
              goto LABEL_19;
          }
          v2 = 1;
          if ( v4 )
          {
            v14 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
            if ( v14 )
              DeadzonePalmTelemetry::UpdateTelemetryBuffer(v14, v9, Angle, 1);
          }
        }
        else
        {
          return 0;
        }
      }
    }
    else
    {
      return (unsigned int)PtInRect((char *)this + 24, *(_QWORD *)&a2[304]);
    }
  }
  return v2;
}
