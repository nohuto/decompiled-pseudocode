/*
 * XREFs of ?ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z @ 0x18004B91C
 * Callers:
 *     ?AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x180048950 (-AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     ?ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z @ 0x18004A370 (-ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::Internal::ValidateGameConfig(
        ExecutionModel::Internal *this,
        const struct ExecutionModel::GameConfig *a2)
{
  unsigned int v2; // edx
  int v5; // ecx
  int v6; // r10d
  unsigned int v7; // r9d
  __int64 v8; // rbx
  unsigned int v9; // eax
  int v10; // ecx

  v2 = 0;
  if ( !this )
    return 2147942487LL;
  v5 = *((_DWORD *)this + 5) - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      return (unsigned int)-2147024809;
    if ( *((_QWORD *)this + 3) && !*((_DWORD *)this + 4) && !*((_QWORD *)this + 1) )
      return v2;
    return 2147942487LL;
  }
  v6 = 0;
  if ( !*((_QWORD *)this + 3) )
    return 2147942487LL;
  v7 = *((_DWORD *)this + 4);
  v8 = *((_QWORD *)this + 1);
  if ( (v7 != 0) != (v8 != 0) )
    return 2147942487LL;
  v9 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v8 + 16LL * v9);
      if ( v10 >= 3 )
        break;
      if ( ((1 << v10) & v6) != 0 )
        break;
      v6 |= 1 << v10;
      if ( !*(_QWORD *)(v8 + 16LL * v9 + 8) )
        break;
      if ( ++v9 >= v7 )
        return v2;
    }
    return 2147942487LL;
  }
  return v2;
}
