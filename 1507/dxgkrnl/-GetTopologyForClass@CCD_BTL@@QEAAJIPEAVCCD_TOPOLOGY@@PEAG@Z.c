/*
 * XREFs of ?GetTopologyForClass@CCD_BTL@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C017F13C
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0063E1C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C017EC3C (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 */

__int64 __fastcall CCD_BTL::GetTopologyForClass(
        CCD_BTL *this,
        unsigned int a2,
        struct CCD_TOPOLOGY *a3,
        unsigned __int16 *a4)
{
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  int v6; // [rsp+28h] [rbp-38h]
  __int64 v7; // [rsp+2Ch] [rbp-34h]
  int v8; // [rsp+34h] [rbp-2Ch]
  int v9; // [rsp+38h] [rbp-28h]
  int v10; // [rsp+3Ch] [rbp-24h]
  int v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+44h] [rbp-1Ch]
  int v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+4Ch] [rbp-14h]
  int v15; // [rsp+50h] [rbp-10h]
  __int16 v16; // [rsp+54h] [rbp-Ch]

  v15 = 1;
  v5 = 0LL;
  v8 = -1;
  v7 = 0LL;
  v9 = -1;
  v13 = -1;
  v10 = -2;
  v11 = -2;
  v6 = 0;
  v12 = 0;
  v14 = 0;
  v16 = 0;
  return BTL_TOPOLOGY_CONSTRUCTOR::operator()((BTL_TOPOLOGY_CONSTRUCTOR *)&v5, a2, (__int64)a3, a4);
}
