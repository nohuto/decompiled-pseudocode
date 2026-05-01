/*
 * XREFs of ?ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z @ 0x1800080E0
 * Callers:
 *     ?AddGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x180007EB0 (-AddGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     ?ModifyGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180010AE0 (-ModifyGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::Internal::ValidateGameConfig(
        ExecutionModel::Internal *this,
        const struct ExecutionModel::GameConfig *a2)
{
  unsigned int v2; // edx
  int v3; // r11d
  unsigned int v4; // r8d
  __int64 v5; // r10
  unsigned int v6; // r9d
  int v8; // ecx

  v2 = 0;
  if ( !this )
    return 2147942487LL;
  if ( *((_DWORD *)this + 5) == 1 )
  {
    v3 = 0;
    if ( *((_QWORD *)this + 3) )
    {
      v4 = *((_DWORD *)this + 4);
      v5 = *((_QWORD *)this + 1);
      if ( (v4 != 0) == (v5 != 0) )
      {
        v6 = 0;
        if ( !v4 )
          return v2;
        while ( 1 )
        {
          v8 = *(_DWORD *)(v5 + 16LL * v6);
          if ( v8 >= 3 )
            break;
          if ( ((1 << v8) & v3) != 0 )
            break;
          v3 |= 1 << v8;
          if ( !*(_QWORD *)(v5 + 16LL * v6 + 8) )
            break;
          if ( ++v6 >= v4 )
            return v2;
        }
      }
    }
  }
  else
  {
    if ( *((_DWORD *)this + 5) != 2 )
      return (unsigned int)-2147024809;
    if ( *((_QWORD *)this + 3) && !*((_DWORD *)this + 4) && !*((_QWORD *)this + 1) )
      return v2;
  }
  return 2147942487LL;
}
