/*
 * XREFs of ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140039B40
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140039A40 (-GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140017B58 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     WPP_SF_ii @ 0x14002C79C (WPP_SF_ii.c)
 *     ?AEWMILOG_GENERIC@@YAXKPEAXE_K111NNNN@Z @ 0x140039664 (-AEWMILOG_GENERIC@@YAXKPEAXE_K111NNNN@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXE_K111@Z @ 0x14003E36C (-AEWMILOG_POSITION@@YAXKPEAXE_K111@Z.c)
 */

void __fastcall CCrossProcessBaseEndpoint::GetCurrentPadding(
        CCrossProcessBaseEndpoint *this,
        __int64 *a2,
        struct AE_CURRENT_POSITION *a3)
{
  __int64 v3; // rax
  char *v4; // rbp
  signed __int64 v7; // rsi
  signed __int64 v8; // rbx
  unsigned int v9; // edi
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // [rsp+28h] [rbp-50h]
  unsigned __int64 v14; // [rsp+30h] [rbp-48h]

  v3 = *((_QWORD *)this + 7);
  v4 = (char *)this - 8;
  v7 = *(_QWORD *)(v3 + 8);
  v8 = *(_QWORD *)(v3 + 16);
  v9 = 0;
  if ( CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessBaseEndpoint *)((char *)this - 8), v7)
    && CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessBaseEndpoint *)v4, v8) )
  {
    if ( v7 >= v8 )
    {
      v9 = v7 - v8;
    }
    else
    {
      v10 = (unsigned int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_ii(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xBu,
          (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
          v7,
          v8);
      }
      AEWMILOG_POSITION(v10, v4, 4u, 0LL, v7, v8, 0LL);
      ShipAssert(65537LL, 0LL);
    }
    AEWMILOG_POSITION(
      v8 / *((unsigned int *)this + 18),
      v4,
      3u,
      0LL,
      v7 / *((unsigned int *)this + 18),
      v8 / *((unsigned int *)this + 18),
      v9 / *((_DWORD *)this + 18));
    v11 = *((_QWORD *)this + 8);
    v12 = *(_DWORD *)(v11 + 160) % (unsigned int)*(unsigned __int16 *)(v11 + 164);
    v14 = v9 / *((_DWORD *)this + 18);
    v13 = (unsigned int)(int)((double)(int)(v9 / *((_DWORD *)this + 18))
                            * 10000000.0
                            / (double)(int)(*(_DWORD *)(v11 + 160) / (unsigned int)*(unsigned __int16 *)(v11 + 164))
                            + 0.5);
    *a2 = v13;
    AEWMILOG_GENERIC(v13, (void *)v12, 0x64u, v7, v8, v13, v14, 0.0, 0.0, 0.0, 0.0);
  }
  else
  {
    *a2 = 0LL;
  }
}
