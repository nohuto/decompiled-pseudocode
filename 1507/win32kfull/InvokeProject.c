/*
 * XREFs of InvokeProject @ 0x1C00BDDF8
 * Callers:
 *     itrp_SH_Common @ 0x1C00BAA78 (itrp_SH_Common.c)
 *     itrp_MD @ 0x1C00BABC0 (itrp_MD.c)
 *     itrp_MSIRP @ 0x1C00BB560 (itrp_MSIRP.c)
 *     itrp_RC @ 0x1C00BBA00 (itrp_RC.c)
 *     itrp_ALIGNRP @ 0x1C00BC0A0 (itrp_ALIGNRP.c)
 *     itrp_MIAP @ 0x1C00BC8C0 (itrp_MIAP.c)
 *     itrp_SHP @ 0x1C00BCC00 (itrp_SHP.c)
 *     itrp_MDAP @ 0x1C00BD320 (itrp_MDAP.c)
 *     itrp_MDRP @ 0x1C00BD810 (itrp_MDRP.c)
 *     itrp_IP @ 0x1C00BDE80 (itrp_IP.c)
 *     itrp_MIRP @ 0x1C00BE9A0 (itrp_MIRP.c)
 *     itrp_WC @ 0x1C0112430 (itrp_WC.c)
 *     itrp_ALIGNPTS @ 0x1C02DC350 (itrp_ALIGNPTS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvokeProject(int a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = (int)a2;
  v4 = a1 - 1;
  if ( !v4 )
  {
    v8 = (__int16)dword_1C0323138;
    v9 = SHIWORD(dword_1C0323138);
    return (unsigned int)(((((unsigned int)(v3 * v8) >> 13) + 1) >> 1)
                        + ((((a3 * (unsigned int)v9) >> 13) + 1) >> 1)
                        + ((((unsigned __int64)((int)a3 * v9) >> 32) + ((unsigned __int64)(v3 * v8) >> 32)) << 18));
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = (__int16)dword_1C0323140;
    v9 = SHIWORD(dword_1C0323140);
    return (unsigned int)(((((unsigned int)(v3 * v8) >> 13) + 1) >> 1)
                        + ((((a3 * (unsigned int)v9) >> 13) + 1) >> 1)
                        + ((((unsigned __int64)((int)a3 * v9) >> 32) + ((unsigned __int64)(v3 * v8) >> 32)) << 18));
  }
  v6 = v5 - 1;
  if ( !v6 )
    return a2;
  if ( v6 == 1 )
    return a3;
  EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
  return 0LL;
}
