/*
 * XREFs of ?FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z @ 0x1C0024238
 * Callers:
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002914C (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpFilterResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C003AE70 (-_PnpFilterResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?FilterResourceRequirements@FxInterrupt@@QEAAXPEAU_IO_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0018528 (-FilterResourceRequirements@FxInterrupt@@QEAAXPEAU_IO_RESOURCE_DESCRIPTOR@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 */

__int64 __fastcall FxPkgPnp::FilterResourceRequirements(FxPkgPnp *this, _IO_RESOURCE_REQUIREMENTS_LIST **IoList)
{
  __int64 v2; // rdi
  _LIST_ENTRY *p_m_InterruptListHead; // rbx
  __int64 v6; // rsi
  unsigned int v7; // r12d
  char v8; // r9
  _LIST_ENTRY *v9; // r15
  _LIST_ENTRY *Flink; // r14
  unsigned int v11; // ebp
  __int64 v12; // rdx
  FxInterrupt *p_Blink; // rcx
  unsigned __int16 v14; // r9
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx
  char v18; // [rsp+78h] [rbp+10h]
  unsigned int i; // [rsp+80h] [rbp+18h]
  __int64 v20; // [rsp+88h] [rbp+20h]

  v2 = (__int64)*IoList;
  v20 = (__int64)*IoList;
  if ( *IoList )
  {
    p_m_InterruptListHead = &this->m_InterruptListHead;
    if ( p_m_InterruptListHead->Flink != p_m_InterruptListHead )
    {
      v6 = v2 + 32;
      v7 = 0;
      for ( i = 0; v7 < *(_DWORD *)(v2 + 28); i = v7 )
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
            if ( v9 != p_m_InterruptListHead )
            {
              p_Blink = (FxInterrupt *)&v9[-28].Blink;
LABEL_16:
              FxInterrupt::FilterResourceRequirements(p_Blink, (_IO_RESOURCE_DESCRIPTOR *)v12);
              goto LABEL_7;
            }
            v14 = 10;
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
            if ( Flink != p_m_InterruptListHead )
            {
              p_Blink = (FxInterrupt *)&Flink[-28].Blink;
              goto LABEL_16;
            }
            v14 = 11;
          }
          m_DeviceBase = this->m_DeviceBase;
          m_ObjectSize = m_DeviceBase->m_ObjectSize;
          _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_ObjectSize )
            _a1 = 0LL;
          WPP_IFR_SF_q(this->m_Globals, 3u, 0xCu, v14, WPP_FxPkgPnpKM_cpp_Traceguids, _a1);
          v8 = v18;
LABEL_7:
          ++v11;
        }
        while ( v11 < *(_DWORD *)(v6 + 4) );
        v2 = v20;
        v7 = i;
LABEL_9:
        ++v7;
        v6 += 32LL * v11 + 8;
      }
    }
  }
  return 0LL;
}
