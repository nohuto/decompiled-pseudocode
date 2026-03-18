/*
 * XREFs of ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C001E7D8
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0083900 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     DxgkShareObjects @ 0x1C008FB50 (DxgkShareObjects.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C00C3020 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C014F5B0 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001C354 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall DXGSYNCOBJECT::AddReference(DXGSYNCOBJECT *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  signed __int32 v7; // eax
  __int64 v8; // rax

  LOBYTE(v2) = EvaluateCurrentState((int **)&g_Feature_2402071864_57775485_FeatureDescriptorDetails);
  if ( v2 )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)this + 6);
      if ( v7 == -1 )
        break;
      v4 = (unsigned int)(v7 + 1);
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)this + 6, v4, v7) )
        return 0LL;
    }
    v8 = WdLogNewEntry5_WdWarning(v4, v3, v5, v6);
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v8);
    return 3221225495LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    return 0LL;
  }
}
