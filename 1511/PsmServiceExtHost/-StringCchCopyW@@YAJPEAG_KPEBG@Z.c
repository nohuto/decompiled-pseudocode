/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180006CD0
 * Callers:
 *     RmpPsmAppFamilyIdInitialize @ 0x180006A18 (RmpPsmAppFamilyIdInitialize.c)
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x180006B68 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     ?CopyResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEBVBaseResourceSet@2@AEAURmResourceSetInfo@@@Z @ 0x180043714 (-CopyResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEBVBaseResourceSet@2@AEAURmResourceSe.c)
 *     ?EncryptString@Internal@ExecutionModel@@YAJPEBGPEAPEAU_CRYPTOAPI_BLOB@@@Z @ 0x180048F00 (-EncryptString@Internal@ExecutionModel@@YAJPEBGPEAPEAU_CRYPTOAPI_BLOB@@@Z.c)
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x18004A598 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x18004AB30 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  int v3; // r10d
  __int64 v4; // r9
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( !a2 )
      return (unsigned int)v3;
  }
  else
  {
    v3 = 0;
    if ( a2 )
    {
      v4 = 2147483646 - a2;
      v5 = a3 - a1;
      while ( v4 + a2 )
      {
        v6 = *(_WORD *)&a1[v5];
        if ( !v6 )
          break;
        *(_WORD *)a1 = v6;
        a1 += 2;
        if ( !--a2 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      a1 -= 2;
      v3 = -2147024774;
    }
  }
  *(_WORD *)a1 = 0;
  return (unsigned int)v3;
}
