/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14003B640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_DDDD @ 0x140017060 (WPP_SF_DDDD.c)
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140017B58 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ii @ 0x14002C79C (WPP_SF_ii.c)
 *     Template_pqqqq @ 0x14003C03C (Template_pqqqq.c)
 *     Template_pxxq @ 0x14003C0E4 (Template_pxxq.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z @ 0x14003E050 (-AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXE_K11@Z @ 0x14003E15C (-AEWMILOG_DATA@@YAXKPEAXE_K11@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        unsigned int a2,
        struct AE_CURRENT_POSITION *a3)
{
  __int64 v3; // rax
  char *v4; // r12
  unsigned int v7; // r13d
  signed __int64 v8; // r14
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

  v3 = *((_QWORD *)this - 44);
  v4 = (char *)this - 416;
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 4) = 2;
  v7 = 0;
  v8 = *(_QWORD *)(v3 + 16);
  v9 = *(_QWORD *)(v3 + 8);
  v24 = a2;
  AEWMILOG_DATA((unsigned int)this, (char *)this - 416, 0x11u, a2, v9, v8);
  if ( CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessBaseEndpoint *)v4, v9)
    && CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessBaseEndpoint *)v4, v8)
    && a2 )
  {
    v10 = a2 * *((_DWORD *)this - 84);
    if ( v9 >= v8 )
    {
      v14 = *((_DWORD *)this - 72);
      v7 = v8 + v14 - v9;
    }
    else
    {
      v11 = (unsigned int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_ii(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xCu,
          (__int64)&WPP_a879fc58190d540fda30a047280e1908_Traceguids,
          v9,
          v8);
      }
      AEWMILOG_GLITCH(v11, v4, 9u, v9, v8, 0LL, v10);
      if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
        Template_pxxq(v13, v12, (_DWORD)v4, v9, v8, v10);
      v25 = 1;
      (**((void (__fastcall ***)(char *, __int64, int *))this - 17))((char *)this - 136, 2LL, &v25);
      v14 = *((_DWORD *)this - 72);
      v7 = v14;
    }
    v15 = *((_QWORD *)this - 43);
    v16 = *(_DWORD *)(v15 + 140);
    v17 = v16 + (unsigned int)(v9 % v14);
    v18 = v16 + v8 % v14;
    if ( v7 >= v10 )
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
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        LODWORD(v23) = *(_DWORD *)(*((_QWORD *)this - 43) + 144LL);
        LODWORD(v22) = v10;
        LODWORD(v21) = v18;
        WPP_SF_DDDD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xDu,
          &WPP_a879fc58190d540fda30a047280e1908_Traceguids,
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
  AEWMILOG_DATA(v7 / *((_DWORD *)this - 84), v4, 0x12u, v24, v7 / *((_DWORD *)this - 84), *((int *)this + 4));
  return v19;
}
