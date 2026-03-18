/*
 * XREFs of ?FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z @ 0x1C0024C4C
 * Callers:
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0029A3C (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpFilterResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0037AF0 (-_PnpFilterResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?FilterResourceRequirements@FxInterrupt@@QEAAXPEAU_IO_RESOURCE_DESCRIPTOR@@@Z @ 0x1C00155D4 (-FilterResourceRequirements@FxInterrupt@@QEAAXPEAU_IO_RESOURCE_DESCRIPTOR@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 */

__int64 __fastcall FxPkgPnp::FilterResourceRequirements(FxPkgPnp *this, _IO_RESOURCE_REQUIREMENTS_LIST **IoList)
{
  __int64 v2; // rdi
  _LIST_ENTRY *p_m_InterruptListHead; // rbx
  __int64 v6; // rsi
  unsigned int i; // r12d
  char v8; // r9
  _LIST_ENTRY *v9; // r13
  _LIST_ENTRY *Flink; // r15
  unsigned int v11; // r14d
  __int64 v12; // rdx
  FxInterrupt *p_Blink; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  const void *_a1; // rax
  unsigned __int16 v16; // r9
  FxDeviceBase *v17; // rax
  char v18; // [rsp+78h] [rbp+10h]
  __int64 v19; // [rsp+80h] [rbp+18h]

  v2 = (__int64)*IoList;
  v19 = (__int64)*IoList;
  if ( *IoList )
  {
    p_m_InterruptListHead = &this->m_InterruptListHead;
    if ( p_m_InterruptListHead->Flink != p_m_InterruptListHead )
    {
      v6 = v2 + 32;
      for ( i = 0; i < *(_DWORD *)(v2 + 28); v6 += 32LL * v11 + 8 )
      {
        v8 = 0;
        v18 = 0;
        v9 = &this->m_InterruptListHead;
        Flink = &this->m_InterruptListHead;
        v11 = 0;
        if ( !*(_DWORD *)(v6 + 4) )
          goto LABEL_9;
        do
        {
          v12 = 32LL * v11 + v6 + 8;
          if ( *(_BYTE *)(v12 + 1) != 2 )
            goto LABEL_7;
          if ( (*(_BYTE *)(v12 + 4) & 2) != 0 )
          {
            v18 = 1;
            if ( (*(_BYTE *)v12 & 8) == 0 )
              v9 = v9->Flink;
            if ( v9 == p_m_InterruptListHead )
            {
              m_DeviceBase = this->m_DeviceBase;
              if ( m_DeviceBase->m_ObjectSize )
                _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                _a1 = 0LL;
              v16 = 10;
LABEL_30:
              WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, v16, WPP_FxPkgPnpKM_cpp_Traceguids, _a1);
              v8 = v18;
              goto LABEL_7;
            }
            p_Blink = (FxInterrupt *)&v9[-28].Blink;
          }
          else
          {
            if ( (*(_BYTE *)v12 & 8) == 0 )
              Flink = Flink->Flink;
            if ( v8 )
            {
              Flink = p_m_InterruptListHead->Flink;
              v18 = 0;
            }
            if ( Flink == p_m_InterruptListHead )
            {
              v17 = this->m_DeviceBase;
              if ( v17->m_ObjectSize )
                _a1 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                _a1 = 0LL;
              v16 = 11;
              goto LABEL_30;
            }
            p_Blink = (FxInterrupt *)&Flink[-28].Blink;
          }
          FxInterrupt::FilterResourceRequirements(p_Blink, (_IO_RESOURCE_DESCRIPTOR *)v12);
LABEL_7:
          ++v11;
        }
        while ( v11 < *(_DWORD *)(v6 + 4) );
        v2 = v19;
LABEL_9:
        ++i;
      }
    }
  }
  return 0LL;
}
