/*
 * XREFs of ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C018489C
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01830C8 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C0183CC0 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(BTL_TOPOLOGY_CONSTRUCTOR *this)
{
  struct DXGGLOBAL *Global; // rax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // eax
  _QWORD *v7; // rax

  *((_WORD *)this + 5) = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v3 = DXGGLOBAL::IterateAdaptersWithCallback(
         (__int64)Global,
         (__int64 (__fastcall *)(_QWORD *, __int64))sub_1C0182FB0,
         (__int64)this,
         1);
  v5 = v3;
  if ( v3 < 0
    || !*((_WORD *)this + 4)
    && (v6 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
               (CCD_TOPOLOGY **)this,
               1,
               (const struct _LUID *)((char *)this + 12),
               0xFFFFFFFF),
        v5 = v6,
        v6 < 0) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v7[3] = v5;
    v7[4] = *(_QWORD *)this;
    v7[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)v5;
}
