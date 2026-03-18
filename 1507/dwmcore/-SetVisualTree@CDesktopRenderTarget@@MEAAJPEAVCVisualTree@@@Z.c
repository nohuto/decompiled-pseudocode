/*
 * XREFs of ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180092890
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x18006091C (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x180060A08 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??_GCComposeTop@@UEAAPEAXI@Z @ 0x1800EAFA0 (--_GCComposeTop@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::SetVisualTree(CDesktopRenderTarget *this, struct CVisualTree *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  CMILRefCountBase *v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // r14
  int v10; // eax
  CComposeTop *v11; // rcx
  int v13; // eax

  v2 = *((_QWORD *)this + 7);
  v3 = 0;
  if ( v2
    && (*(_BYTE *)(v2 + 32) = 0,
        v13 = CMonitorTreeAssociation::RemoveTree(
                *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
                *((struct CVisualTree **)this + 7)),
        v3 = v13,
        v13 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x3DBu);
  }
  else
  {
    v6 = (CMILRefCountBase *)*((_QWORD *)this + 7);
    if ( v6 )
      CMILRefCountBase::Release(v6);
    *((_QWORD *)this + 7) = a2;
    if ( a2
      && (_InterlockedIncrement((volatile signed __int32 *)a2 + 2),
          v7 = 0LL,
          *((_BYTE *)a2 + 32) = 1,
          *((_DWORD *)this + 28)) )
    {
      while ( 1 )
      {
        v8 = CMonitorTreeAssociation::AddMonitorTree(
               *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
               *(HMONITOR *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v7) + 80LL) + 152LL) + 32LL),
               a2);
        v3 = v8;
        if ( v8 < 0 )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *((_DWORD *)this + 28) )
          goto LABEL_8;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3ECu);
    }
    else
    {
LABEL_8:
      v9 = 0LL;
      if ( *((_DWORD *)this + 28) )
      {
        while ( 1 )
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD, struct CVisualTree *))(**(_QWORD **)(*((_QWORD *)this + 11) + 8 * v9)
                                                                        + 176LL))(
                  *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v9),
                  a2);
          v3 = v10;
          if ( v10 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *((_DWORD *)this + 28) )
            goto LABEL_11;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x3FDu);
      }
      else
      {
LABEL_11:
        v11 = (CComposeTop *)*((_QWORD *)this + 31);
        if ( v11 )
        {
          CComposeTop::`scalar deleting destructor'(v11, 1u);
          *((_QWORD *)this + 31) = 0LL;
        }
      }
    }
  }
  return v3;
}
