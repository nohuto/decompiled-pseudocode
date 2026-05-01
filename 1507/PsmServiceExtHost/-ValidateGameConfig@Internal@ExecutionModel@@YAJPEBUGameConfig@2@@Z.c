/*
 * XREFs of ?ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z @ 0x18001B4F4
 * Callers:
 *     ?AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x18001BD20 (-AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     ?ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180044D60 (-ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::Internal::ValidateGameConfig(
        ExecutionModel::Internal *this,
        const struct ExecutionModel::GameConfig *a2)
{
  unsigned int v2; // edx
  int v4; // ecx
  int v5; // r10d
  unsigned int v6; // r9d
  __int64 v7; // rbx
  unsigned int v8; // eax
  int v10; // ecx

  v2 = 0;
  if ( this )
  {
    v4 = *((_DWORD *)this + 5) - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return (unsigned int)-2147024809;
      if ( *((_QWORD *)this + 3) && !*((_DWORD *)this + 4) && !*((_QWORD *)this + 1) )
        return v2;
    }
    else
    {
      v5 = 0;
      if ( *((_QWORD *)this + 3) )
      {
        v6 = *((_DWORD *)this + 4);
        v7 = *((_QWORD *)this + 1);
        if ( (v6 != 0) == (v7 != 0) )
        {
          v8 = 0;
          if ( !v6 )
            return v2;
          while ( 1 )
          {
            v10 = *(_DWORD *)(v7 + 16LL * v8);
            if ( v10 >= 3 )
              break;
            if ( ((1 << v10) & v5) != 0 )
              break;
            v5 |= 1 << v10;
            if ( !*(_QWORD *)(v7 + 16LL * v8 + 8) )
              break;
            if ( ++v8 >= v6 )
              return v2;
          }
        }
      }
    }
  }
  return 2147942487LL;
}
