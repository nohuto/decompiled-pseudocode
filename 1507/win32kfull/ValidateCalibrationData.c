/*
 * XREFs of ValidateCalibrationData @ 0x1C01C2C88
 * Callers:
 *     ?ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z @ 0x1C013AC20 (-ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z.c)
 *     ?ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z @ 0x1C01C17B4 (-ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z.c)
 *     _SetCalibrationData @ 0x1C01D4244 (_SetCalibrationData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateCalibrationData(unsigned int a1, __int64 a2, int a3)
{
  unsigned int v4; // r10d
  BOOL v5; // edx
  int v6; // r8d
  int v7; // r8d
  int v8; // ebx
  __int64 i; // rcx
  unsigned int v10; // edx
  __int64 v11; // rdi
  unsigned __int16 v12; // r8
  unsigned __int16 v13; // dx

  v4 = 0;
  v5 = 0;
  if ( a1 >= 0x40 && a2 && *(_DWORD *)(a2 + 4) == 2 && *(_DWORD *)a2 < 0xFFFFu )
  {
    if ( *(_DWORD *)(a2 + 16) == 0x8000 && *(_DWORD *)(a2 + 20) == 0x8000 )
    {
      v5 = 1;
      v6 = a3 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 == 1 )
          {
            if ( *(_WORD *)(a2 + 28) != 2 || *(_WORD *)(a2 + 30) != 2 )
              v5 = 0;
            v4 = 4;
          }
        }
        else
        {
          if ( *(_WORD *)(a2 + 28) != 4 || *(_WORD *)(a2 + 30) != 4 )
            v5 = 0;
          v4 = 16;
        }
      }
      else
      {
        v4 = *(unsigned __int16 *)(a2 + 28) * *(unsigned __int16 *)(a2 + 30);
      }
    }
    if ( a1 == 8 * v4 + 32 )
    {
      v8 = *(unsigned __int16 *)(a2 + 34);
      for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
      {
        if ( !v5 )
          break;
        v10 = (unsigned int)i % *(unsigned __int16 *)(a2 + 28);
        v11 = v10;
        if ( !v10 )
          v8 = *(unsigned __int16 *)(a2 + 8 * i + 34);
        v12 = *(_WORD *)(a2 + 8 * i + 32);
        if ( v12 <= 0x8000u
          && (v13 = *(_WORD *)(a2 + 8 * i + 34), v13 <= 0x8000u)
          && *(_WORD *)(a2 + 8 * i + 36) <= 0x8000u
          && *(_WORD *)(a2 + 8 * i + 38) <= 0x8000u
          && v13 == v8 )
        {
          v5 = 1;
          if ( (unsigned int)i > *(unsigned __int16 *)(a2 + 28) )
            v5 = v12 == *(_WORD *)(a2 + 8 * v11 + 32);
        }
        else
        {
          v5 = 0;
        }
      }
    }
  }
  return v5;
}
