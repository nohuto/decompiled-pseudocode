/*
 * XREFs of ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C0063448
 * Callers:
 *     ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C00633C0 (-QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C017EC3C (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008ACE4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query(BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-30h]
  __int128 v5; // [rsp+30h] [rbp-20h]
  int v6; // [rsp+48h] [rbp-8h]

  *((_QWORD *)&v4 + 1) = -1LL;
  *(_QWORD *)&v4 = 0LL;
  *(_QWORD *)&v5 = 0xFFFFFFFEFFFFFFFEuLL;
  *(_OWORD *)this = v4;
  *((_QWORD *)&v5 + 1) = 0xFFFFFFFF00000000uLL;
  *((_OWORD *)this + 1) = v5;
  LOWORD(v6) = 0;
  *((_QWORD *)this + 4) = 0x100000000LL;
  *((_DWORD *)this + 10) = v6;
  Global = DXGGLOBAL::GetGlobal();
  result = DXGGLOBAL::IterateAdaptersWithCallback(
             Global,
             BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_,
             this,
             1LL);
  if ( (_DWORD)result == -2147483622 )
    result = 0LL;
  if ( (int)result >= 0 && *((_DWORD *)this + 3) == -1 )
    return 3221225473LL;
  return result;
}
