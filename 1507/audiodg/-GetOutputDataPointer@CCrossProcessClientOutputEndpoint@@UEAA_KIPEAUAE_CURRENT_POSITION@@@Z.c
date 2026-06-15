/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14003B670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_DDDD @ 0x140016EEC (WPP_SF_DDDD.c)
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140025CCC (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ii @ 0x14003AC00 (WPP_SF_ii.c)
 *     Template_pqqqq @ 0x14003C02C (Template_pqqqq.c)
 *     Template_pxxq @ 0x14003C0D4 (Template_pxxq.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z @ 0x14003E008 (-AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXE_K11@Z @ 0x14003E3E0 (-AEWMILOG_DATA@@YAXKPEAXE_K11@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        unsigned int a2,
        struct AE_CURRENT_POSITION *a3)
{
  char *v4; // r14
  unsigned int v6; // r12d
  __int64 v7; // rax
  signed __int64 v8; // r13
  signed __int64 v9; // r15
  unsigned int v10; // ebp
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // r10
  int v16; // ecx
  __int64 v17; // rbx
  unsigned int v18; // edi
  __int64 v19; // rbx
  unsigned __int64 v21; // [rsp+20h] [rbp-58h]
  unsigned __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+30h] [rbp-48h]
  unsigned __int64 v24; // [rsp+80h] [rbp+8h]
  int v25; // [rsp+88h] [rbp+10h] BYREF

  v4 = (char *)this - 416;
  v24 = a2;
  v6 = 0;
  AEWMILOG_DATA((unsigned int)this, (char *)this - 416, 0x11u, a2, 0LL, 0LL);
  v7 = *((_QWORD *)this - 44);
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 4) = 2;
  v8 = *(_QWORD *)(v7 + 8);
  v9 = *(_QWORD *)(v7 + 16);
  if ( CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessBaseEndpoint *)v4, v8)
    && CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessBaseEndpoint *)v4, v9)
    && a2 )
  {
    v10 = a2 * *((_DWORD *)this - 84);
    if ( v8 >= v9 )
    {
      v14 = *((_DWORD *)this - 72);
      v6 = v9 + v14 - v8;
    }
    else
    {
      v11 = WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_ii(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0xCu,
          &WPP_bfec22a2cdc32d9f629e6959d910e384_Traceguids,
          v8,
          v9);
      }
      AEWMILOG_GLITCH(v11, v4, 9u, v8, v9, 0LL, v10);
      if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
        Template_pxxq(v13, v12, (_DWORD)v4, v8, v9, v10);
      v25 = 1;
      (**((void (__fastcall ***)(char *, __int64, int *))this - 17))((char *)this - 136, 2LL, &v25);
      v14 = *((_DWORD *)this - 72);
      v6 = v14;
    }
    v15 = *((_QWORD *)this - 43);
    v16 = *(_DWORD *)(v15 + 140);
    v17 = v16 + (unsigned int)(v8 % v14);
    v18 = v16 + v9 % v14;
    if ( v6 >= v10 )
    {
      if ( (unsigned int)v17 + v10 <= *(_DWORD *)(v15 + 144) )
      {
        *((_DWORD *)this + 4) = 0;
        v19 = *((_QWORD *)this - 44) + v17;
        goto LABEL_22;
      }
      *((_DWORD *)this + 4) = 1;
    }
    else
    {
      AEWMILOG_GLITCH(v18, v4, 2u, (unsigned int)v17, v18, 0LL, v10);
      if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
        Template_pqqqq(
          *(_DWORD *)(*((_QWORD *)this - 43) + 144LL),
          (unsigned int)&EVT_GLITCH_CP_CLIENT_OUTPUT_READ_POINTER_OVERWRITE,
          (_DWORD)v4,
          v17,
          v18,
          v10,
          *(_DWORD *)(*((_QWORD *)this - 43) + 144LL));
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 5u )
      {
        LODWORD(v23) = *(_DWORD *)(*((_QWORD *)this - 43) + 144LL);
        LODWORD(v22) = v10;
        LODWORD(v21) = v18;
        WPP_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0xDu,
          &WPP_bfec22a2cdc32d9f629e6959d910e384_Traceguids,
          v17,
          v21,
          v22,
          v23);
      }
      v25 = 1;
      (**((void (__fastcall ***)(char *, __int64, int *))this - 17))((char *)this - 136, 3LL, &v25);
    }
  }
  v19 = *((_QWORD *)this - 40);
LABEL_22:
  AEWMILOG_DATA(v6 / *((_DWORD *)this - 84), v4, 0x12u, v24, v6 / *((_DWORD *)this - 84), *((int *)this + 4));
  return v19;
}
