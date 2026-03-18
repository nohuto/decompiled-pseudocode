/*
 * XREFs of ?SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z @ 0x180166B60
 * Callers:
 *     ??1CAnalogTextureTarget@@EEAA@XZ @ 0x180165F38 (--1CAnalogTextureTarget@@EEAA@XZ.c)
 * Callees:
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C9F8 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800B6480 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800B6578 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800B8390 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ @ 0x180166170 (-EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CAnalogTextureTarget::SetVisualTree(
        CAnalogTextureTarget *this,
        struct CVisualTree *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13)
{
  __int64 v14; // rdi
  struct CVisualTree *v15; // rdx
  int v17; // eax
  unsigned int v18; // esi
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  int Bounds; // eax
  int v23; // ecx
  signed __int64 v24; // rax
  float v26[6]; // [rsp+30h] [rbp-38h] BYREF

  v14 = 0LL;
  v15 = (struct CVisualTree *)*((_QWORD *)this + 16);
  if ( v15 )
  {
    v17 = CMonitorTreeAssociation::RemoveTree(*(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL), v15);
    v18 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x41u);
      return v18;
    }
    *(_BYTE *)(*((_QWORD *)this + 16) + 32LL) = 0;
  }
  v19 = CRenderTarget::SetVisualTree(this, a2);
  v18 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x45u);
    return v18;
  }
  if ( a2 )
  {
    CAnalogTextureTarget::EnsureAnalogDisplay(this);
    v20 = *((_QWORD *)this + 19);
    if ( v20
      && (v21 = CMonitorTreeAssociation::AddMonitorTree(
                  *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
                  *(HMONITOR *)(*(_QWORD *)(v20 + 136) + 24LL),
                  a2),
          v18 = v21,
          v21 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x53u);
    }
    else
    {
      *((_BYTE *)a2 + 32) = 1;
      if ( *((_DWORD *)this + 42) == *((_DWORD *)this + 40) && *((_DWORD *)this + 43) == *((_DWORD *)this + 41) )
      {
        Bounds = CVisualTree::GetBounds(a2, (__int64)v26);
        v18 = Bounds;
        if ( Bounds < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x5Bu);
          return v18;
        }
        do
        {
          v23 = (int)v26[v14];
          v24 = this - (CAnalogTextureTarget *)v26 + 4 * v14++;
          *(int *)((char *)&a13 + v24) = v23;
        }
        while ( v14 < 4 );
      }
      *((_BYTE *)this + 276) = 1;
    }
  }
  return v18;
}
