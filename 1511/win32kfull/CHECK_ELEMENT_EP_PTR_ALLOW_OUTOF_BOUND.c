/*
 * XREFs of CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00B7030
 * Callers:
 *     itrp_MD @ 0x1C00B32E0 (itrp_MD.c)
 *     itrp_SDPVTL @ 0x1C00B37E0 (itrp_SDPVTL.c)
 *     itrp_MSIRP @ 0x1C00B3CB0 (itrp_MSIRP.c)
 *     itrp_SHC @ 0x1C00B4150 (itrp_SHC.c)
 *     itrp_RC @ 0x1C00B4640 (itrp_RC.c)
 *     itrp_DeltaEngine @ 0x1C00B4844 (itrp_DeltaEngine.c)
 *     itrp_ALIGNRP @ 0x1C00B4C90 (itrp_ALIGNRP.c)
 *     itrp_MIAP @ 0x1C00B5040 (itrp_MIAP.c)
 *     itrp_SHP @ 0x1C00B5380 (itrp_SHP.c)
 *     itrp_SHP_Common @ 0x1C00B5688 (itrp_SHP_Common.c)
 *     itrp_MDRP @ 0x1C00B5EF0 (itrp_MDRP.c)
 *     itrp_IP @ 0x1C00B65B0 (itrp_IP.c)
 *     itrp_ISECT @ 0x1C00B8460 (itrp_ISECT.c)
 *     itrp_SFVTL @ 0x1C00B8BA0 (itrp_SFVTL.c)
 *     itrp_SPVTL @ 0x1C00B9000 (itrp_SPVTL.c)
 *     itrp_WC @ 0x1C013C8E0 (itrp_WC.c)
 *     itrp_FLIPRGON @ 0x1C013E590 (itrp_FLIPRGON.c)
 *     itrp_SHE @ 0x1C0144330 (itrp_SHE.c)
 *     itrp_ALIGNPTS @ 0x1C02DCA60 (itrp_ALIGNPTS.c)
 *     itrp_FLIPPT @ 0x1C02DCE80 (itrp_FLIPPT.c)
 *     itrp_FLIPRGOFF @ 0x1C02DD030 (itrp_FLIPRGOFF.c)
 *     itrp_UTP @ 0x1C02DDB20 (itrp_UTP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(__int64 a1, __int64 a2)
{
  unsigned int v3; // r10d
  _WORD *v4; // rax
  unsigned __int16 v5; // cx
  unsigned int v6; // r8d
  int v7; // edx
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // dx
  int v10; // eax
  int v11; // r11d
  __int16 v12; // ax

  v3 = 1;
  if ( a2 != *(_QWORD *)(a1 + 56) + 112LL )
    return v3;
  v4 = *(_WORD **)(*(_QWORD *)(a1 + 64) + 344LL);
  v5 = v4[4];
  LOWORD(v6) = v4[6];
  if ( v5 <= (unsigned __int16)v6 )
    v7 = (unsigned __int16)v6;
  else
    v7 = v5;
  if ( v7 <= 1 )
  {
    v6 = 1;
  }
  else if ( v5 <= (unsigned __int16)v6 )
  {
    v6 = (unsigned __int16)v6;
  }
  else
  {
    v6 = v5;
  }
  v8 = v4[3];
  v9 = v4[5];
  if ( v8 <= v9 )
    v10 = v9;
  else
    v10 = v8;
  if ( v10 <= 1 )
  {
    v11 = 1;
  }
  else if ( v8 <= v9 )
  {
    v11 = v9;
  }
  else
  {
    v11 = v8;
  }
  v12 = *(_WORD *)(a2 + 80);
  if ( v12 >= 1 )
  {
    if ( v12 > v6
      && (unsigned int)(*(_DWORD *)(a2 + 104) + 12 * (v11 + 8) - *(_DWORD *)(a2 + 64)) < (unsigned __int64)(2LL * (v12 - 1)) )
    {
      return 0;
    }
    return v3;
  }
  return 0LL;
}
