/*
 * XREFs of ?PackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z @ 0x1800463D0
 * Callers:
 *     GcsSrv_GetGameConfig @ 0x180043020 (GcsSrv_GetGameConfig.c)
 *     GcsSrv_GetGameConfigForClientProcess @ 0x1800430E0 (GcsSrv_GetGameConfigForClientProcess.c)
 * Callees:
 *     ?PackGameConfigPointer@Internal@ExecutionModel@@YAJ_KIPEA_K@Z @ 0x180046454 (-PackGameConfigPointer@Internal@ExecutionModel@@YAJ_KIPEA_K@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::PackGameConfig(
        ExecutionModel::Internal *this,
        struct ExecutionModel::GameConfig *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned int v5; // r8d
  __int64 v6; // rcx
  ExecutionModel::Internal *v7; // r10
  unsigned int v8; // r11d
  int v9; // r11d

  if ( *((_DWORD *)this + 4) && !*((_QWORD *)this + 1) || (unsigned int)a2 < 0x28 )
    return 2147942487LL;
  v5 = (_DWORD)this + 24;
  if ( *((_DWORD *)this + 5) != 1 )
    return ExecutionModel::Internal::PackGameConfigPointer(this, (unsigned __int64)a2, v5, a4);
  result = ExecutionModel::Internal::PackGameConfigPointer(this, (unsigned __int64)a2, v5, a4);
  if ( (int)result >= 0 && *(_DWORD *)(v6 + 16) )
  {
    v8 = 0;
    while ( 1 )
    {
      result = ExecutionModel::Internal::PackGameConfigPointer(
                 v7,
                 (unsigned __int64)a2,
                 16 * v8 + *((_DWORD *)v7 + 2) + 8,
                 a4);
      if ( (int)result < 0 )
        break;
      v8 = v9 + 1;
      if ( v8 >= *((_DWORD *)v7 + 4) )
      {
        v5 = (_DWORD)v7 + 8;
        this = v7;
        return ExecutionModel::Internal::PackGameConfigPointer(this, (unsigned __int64)a2, v5, a4);
      }
    }
  }
  return result;
}
