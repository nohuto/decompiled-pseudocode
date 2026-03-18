/*
 * XREFs of ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C00A640C
 * Callers:
 *     ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C00A6598 (-QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01830C8 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query(BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-40h]
  __int128 v5; // [rsp+30h] [rbp-30h]
  __int128 v6; // [rsp+40h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-10h]

  *((_QWORD *)&v4 + 1) = -1LL;
  *(_QWORD *)&v4 = 0LL;
  *(_QWORD *)&v5 = 0xFFFFFFFEFFFFFFFEuLL;
  *(_OWORD *)this = v4;
  *((_QWORD *)&v5 + 1) = 0xFFFFFFFF00000000uLL;
  *(_QWORD *)&v6 = 0x100000000LL;
  *((_OWORD *)this + 1) = v5;
  WORD4(v6) = 0;
  HIDWORD(v6) = 4;
  LOWORD(v7) = 256;
  *((_OWORD *)this + 2) = v6;
  *((_DWORD *)this + 12) = v7;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  result = DXGGLOBAL::IterateAdaptersWithCallback(
             (__int64)Global,
             (__int64 (__fastcall *)(_QWORD *, __int64))sub_1C00A64F0,
             (__int64)this,
             1);
  if ( (_DWORD)result == -2147483622 )
    result = 0LL;
  if ( (int)result >= 0 && *((_DWORD *)this + 3) == -1 )
    return 3221225473LL;
  return result;
}
