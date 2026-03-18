/*
 * XREFs of ValidateCalibrationData @ 0x1402992B4
 * Callers:
 *     ?ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z @ 0x1402315DC (-ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z.c)
 *     ?ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z @ 0x140298C14 (-ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z.c)
 *     _SetCalibrationData @ 0x14029AD18 (_SetCalibrationData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateCalibrationData(unsigned int a1, __int64 a2, int a3)
{
  BOOL v4; // edx
  int v5; // r8d
  int v6; // r8d
  unsigned int v7; // r8d
  int v8; // r11d
  __int64 i; // r10
  unsigned int v10; // ebx
  unsigned __int16 v11; // di
  int v12; // eax

  v4 = 0;
  if ( a1 >= 0x40
    && a2
    && *(_DWORD *)(a2 + 4) == 2
    && *(_DWORD *)a2 < 0xFFFFu
    && *(_DWORD *)(a2 + 16) == 0x8000
    && *(_DWORD *)(a2 + 20) == 0x8000 )
  {
    v4 = 1;
    v5 = a3 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return v4;
        v4 = *(_DWORD *)(a2 + 28) == 131074;
        v7 = 4;
      }
      else
      {
        if ( *(_WORD *)(a2 + 28) != 4 || *(_WORD *)(a2 + 30) != 4 )
          v4 = 0;
        v7 = 16;
      }
    }
    else
    {
      v7 = *(unsigned __int16 *)(a2 + 28) * *(unsigned __int16 *)(a2 + 30);
    }
    if ( a1 == 8 * v7 + 32 )
    {
      v8 = *(unsigned __int16 *)(a2 + 34);
      for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
      {
        if ( !v4 )
          break;
        v10 = *(unsigned __int16 *)(a2 + 28);
        if ( !((unsigned int)i % v10) )
          v8 = *(unsigned __int16 *)(a2 + 8 * i + 34);
        v11 = *(_WORD *)(a2 + 8 * i + 32);
        if ( v11 <= 0x8000u
          && (v12 = *(unsigned __int16 *)(a2 + 8 * i + 34), (unsigned __int16)v12 <= 0x8000u)
          && *(_WORD *)(a2 + 8 * i + 36) <= 0x8000u
          && *(_WORD *)(a2 + 8 * i + 38) <= 0x8000u
          && v12 == v8 )
        {
          v4 = 1;
          if ( (unsigned int)i > v10 )
            v4 = v11 == *(_WORD *)(a2 + 8LL * ((unsigned int)i % v10) + 32);
        }
        else
        {
          v4 = 0;
        }
      }
    }
  }
  return v4;
}
