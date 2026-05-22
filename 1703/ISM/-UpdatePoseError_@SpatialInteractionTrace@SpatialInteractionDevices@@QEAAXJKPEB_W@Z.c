/*
 * XREFs of ?UpdatePoseError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z @ 0x180098EE8
 * Callers:
 *     ?UpdatePose@SpatialInteractionController@SpatialInteractionDevices@@AEAAJ_JPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@6@@Z @ 0x180099DD0 (-UpdatePose@SpatialInteractionController@SpatialInteractionDevices@@AEAAJ_JPEAUISpatialGraphNode.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180063F5C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::UpdatePoseError_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        const wchar_t *a4)
{
  __int64 v5; // rcx
  const wchar_t *v6; // rdx
  __int64 v7; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-19h] BYREF
  int *v9; // [rsp+58h] [rbp+7h]
  __int64 v10; // [rsp+60h] [rbp+Fh]
  int *v11; // [rsp+68h] [rbp+17h]
  __int64 v12; // [rsp+70h] [rbp+1Fh]
  const wchar_t *v13; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  int v16; // [rsp+C0h] [rbp+6Fh] BYREF
  int v17; // [rsp+C8h] [rbp+77h] BYREF

  v17 = a3;
  v16 = a2;
  v5 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v5 > 2u && (*(_BYTE *)(v5 + 16) & 2) != 0 && (*(_QWORD *)(v5 + 24) & 2LL) == *(_QWORD *)(v5 + 24) )
  {
    v10 = 4LL;
    v9 = &v16;
    v6 = (const wchar_t *)&unk_1800AE6CC;
    v12 = 4LL;
    v11 = &v17;
    LODWORD(v7) = 0;
    if ( a4 )
    {
      v6 = a4;
      v7 = -1LL;
      do
        ++v7;
      while ( a4[v7] );
    }
    v13 = v6;
    v14 = 2 * v7 + 2;
    v15 = 0;
    TlgWrite((TraceLoggingHProvider)v5, &unk_1800BB80C, 0LL, 0LL, 5u, &pData);
  }
}
