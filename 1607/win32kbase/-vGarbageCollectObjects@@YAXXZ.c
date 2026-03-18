/*
 * XREFs of ?vGarbageCollectObjects@@YAXXZ @ 0x1C00CCF24
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00BFB48 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C00C0B98 (HmgNextGarbageCollectible.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CC8E4 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CC9CC (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCAE0 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCBE8 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCCC4 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCDA8 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 */

void vGarbageCollectObjects(void)
{
  __int64 v0; // rcx
  unsigned int v1; // ebx
  char v2; // [rsp+30h] [rbp+10h] BYREF
  unsigned __int64 v3; // [rsp+38h] [rbp+18h] BYREF

  v3 = 0LL;
  v0 = 0LL;
  v2 = 30;
  while ( 1 )
  {
    v1 = HmgNextGarbageCollectible(v0, &v3, &v2);
    if ( !v1 )
      break;
    switch ( v2 )
    {
      case 5:
        if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_Servicing_DynamicModeChange_31627929_31627929_FeatureDescriptorDetails) )
          vGarbageCollectObject<SURFREFGC>(v3);
        else
          vGarbageCollectObject<SURFREF>(v3);
        break;
      case 7:
        vGarbageCollectObject<EPATHOBJGC>(v3);
        break;
      case 8:
        vGarbageCollectObject<XEPALOBJ2>(v3);
        break;
      case 9:
        vGarbageCollectObject<COLORSPACEGC>(v3);
        break;
      case 16:
        vGarbageCollectObject<BRUSHSELOBJGC>(v3);
        break;
    }
    v0 = v1;
  }
}
