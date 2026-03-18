/*
 * XREFs of ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800768A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800B6480 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800B6578 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800B8390 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCComposeTop@@UEAAPEAXI@Z @ 0x18011CEA0 (--_GCComposeTop@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::SetVisualTree(CDesktopRenderTarget *this, struct CVisualTree *a2)
{
  __int64 v2; // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // rcx
  int v11; // eax
  CComposeTop *v12; // rcx
  int v14; // eax

  v2 = *((_QWORD *)this + 16);
  if ( v2
    && (*(_BYTE *)(v2 + 32) = 0,
        v14 = CMonitorTreeAssociation::RemoveTree(
                *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
                *((struct CVisualTree **)this + 16)),
        v6 = v14,
        v14 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x469u);
  }
  else
  {
    v5 = CRenderTarget::SetVisualTree(this, a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x46Cu);
    }
    else if ( a2 && (v7 = 0LL, *((_BYTE *)a2 + 32) = 1, *((_DWORD *)this + 46)) )
    {
      while ( 1 )
      {
        v8 = CMonitorTreeAssociation::AddMonitorTree(
               *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
               *(HMONITOR *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 20) + 8 * v7) + 152LL) + 136LL)
                           + 24LL),
               a2);
        v6 = v8;
        if ( v8 < 0 )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *((_DWORD *)this + 46) )
          goto LABEL_7;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x47Au);
    }
    else
    {
LABEL_7:
      v9 = 0LL;
      if ( *((_DWORD *)this + 46) )
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(*((_QWORD *)this + 20) + 8 * v9);
          v11 = (*(__int64 (__fastcall **)(__int64, struct CVisualTree *))(*(_QWORD *)v10 + 192LL))(v10, a2);
          v6 = v11;
          if ( v11 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *((_DWORD *)this + 46) )
            goto LABEL_10;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x485u);
      }
      else
      {
LABEL_10:
        v12 = (CComposeTop *)*((_QWORD *)this + 52);
        if ( v12 )
        {
          CComposeTop::`scalar deleting destructor'(v12, 1u);
          *((_QWORD *)this + 52) = 0LL;
        }
      }
    }
  }
  return v6;
}
