/*
 * XREFs of ?UnpackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z @ 0x180011B18
 * Callers:
 *     ?GetGameConfigForCurrentProcess@GameConfigStoreClient@ExecutionModel@@UEBAJPEAUGameConfig@2@PEAI@Z @ 0x180007470 (-GetGameConfigForCurrentProcess@GameConfigStoreClient@ExecutionModel@@UEBAJPEAUGameConfig@2@PEAI.c)
 *     ?GetGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z @ 0x180011540 (-GetGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z.c)
 * Callees:
 *     ?UnpackGameConfigPointer@Internal@ExecutionModel@@YAJ_KIPEA_K@Z @ 0x180011BA0 (-UnpackGameConfigPointer@Internal@ExecutionModel@@YAJ_KIPEA_K@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::UnpackGameConfig(
        ExecutionModel::Internal *this,
        struct ExecutionModel::GameConfig *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned int v5; // r8d
  unsigned __int64 v6; // rdx
  ExecutionModel::Internal *v7; // rcx
  unsigned __int64 *v8; // r9
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 *v11; // r9
  ExecutionModel::Internal *v12; // r10
  unsigned int v13; // r11d
  int v14; // r11d

  if ( (unsigned int)a2 < 0x28 )
    return 2147942487LL;
  v5 = (_DWORD)this + 24;
  if ( !*((_DWORD *)this + 5) )
    return ExecutionModel::Internal::UnpackGameConfigPointer(this, (unsigned __int64)a2, v5, a4);
  result = ExecutionModel::Internal::UnpackGameConfigPointer(this, (unsigned __int64)a2, v5, a4);
  if ( (int)result >= 0 )
  {
    if ( *((_DWORD *)v7 + 4) )
    {
      result = ExecutionModel::Internal::UnpackGameConfigPointer(v7, v6, (int)v7 + 8, v8);
      if ( (int)result >= 0 )
      {
        v13 = 0;
        if ( *(_DWORD *)(v10 + 16) )
        {
          do
          {
            result = ExecutionModel::Internal::UnpackGameConfigPointer(
                       v12,
                       v9,
                       16 * v13 + *((_DWORD *)v12 + 2) + 8,
                       v11);
            if ( (int)result < 0 )
              break;
            v13 = v14 + 1;
          }
          while ( v13 < *((_DWORD *)v12 + 4) );
        }
      }
    }
  }
  return result;
}
