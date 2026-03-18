/*
 * XREFs of ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C018033C
 * Callers:
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C018021C (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C0180304 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008ACE4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C017F830 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // si
  struct DXGGLOBAL *Global; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  _QWORD *v12; // rax

  v4 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
  v7 = DXGGLOBAL::IterateAdaptersWithCallback(
         (__int64)Global,
         (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_,
         (__int64)this,
         1LL);
  v10 = v7;
  if ( v7 < 0
    || *((_WORD *)this + 4) < 2u
    && v4
    && (LOBYTE(v8) = 1,
        v11 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
                (CCD_TOPOLOGY **)this,
                v8,
                (const struct _LUID *)((char *)this + 12),
                0xFFFFFFFFLL),
        v10 = v11,
        v11 < 0) )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v12[3] = v10;
    v12[4] = *(_QWORD *)this;
    v12[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    WdLogEvent5_WdError(v12);
  }
  return (unsigned int)v10;
}
