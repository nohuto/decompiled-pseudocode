/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14003C510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_DDDD @ 0x140016EEC (WPP_SF_DDDD.c)
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140025CCC (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     Template_pqqq @ 0x14003CC40 (Template_pqqq.c)
 *     Template_pxqxq @ 0x14003CD78 (Template_pxqxq.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z @ 0x14003E008 (-AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXE_K11@Z @ 0x14003E3E0 (-AEWMILOG_DATA@@YAXKPEAXE_K11@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::GetOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        unsigned int a2,
        struct AE_CURRENT_POSITION *a3)
{
  CCrossProcessBaseEndpoint *v3; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // xmm0_8
  int v14; // r12d
  unsigned int v15; // r12d
  int v16; // ecx
  unsigned int v17; // r8d
  unsigned __int32 v18; // edx
  unsigned __int64 v19; // rbx
  int v20; // edx
  int v21; // ecx
  unsigned int v22; // r14d
  __int64 v23; // r10
  int v24; // r9d
  __int64 v25; // rbx
  unsigned int v26; // edi
  int v27; // edx
  int v28; // ecx
  __int64 v29; // rbx
  unsigned __int64 v31; // [rsp+20h] [rbp-68h]
  unsigned __int64 v32; // [rsp+20h] [rbp-68h]
  unsigned __int64 v33; // [rsp+28h] [rbp-60h]
  unsigned __int64 v34; // [rsp+30h] [rbp-58h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]
  int v36; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v37; // [rsp+98h] [rbp+10h]
  int v38; // [rsp+A8h] [rbp+20h] BYREF

  v37 = a2;
  v3 = (CCrossProcessServerOutputEndpoint *)((char *)this - 440);
  v31 = *((unsigned int *)this - 89);
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 4) = 2;
  v35 = a2;
  AEWMILOG_DATA((unsigned int)this, (char *)this - 440, 9u, a2, v31, 0LL);
  ResetEvent(*((HANDLE *)this - 40));
  v7 = *((_QWORD *)this - 47);
  LODWORD(v8) = *(_DWORD *)(v7 + 156) & 1;
  if ( (*(_BYTE *)(v7 + 156) & 1) == 0
    || !a2
    || (v9 = *((_QWORD *)this - 47),
        v10 = *(_QWORD *)(v9 + 8),
        v11 = *(_QWORD *)(v9 + 16),
        !CCrossProcessBaseEndpoint::IsValidOffset(v3, v10))
    || !CCrossProcessBaseEndpoint::IsValidOffset(v3, v11) )
  {
LABEL_25:
    _InterlockedExchange((volatile __int32 *)this - 76, 1);
    goto LABEL_26;
  }
  (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*(_QWORD *)v3 + 80LL))(
    v3,
    a3,
    v10);
  v12 = *((_QWORD *)this - 47);
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)&a3->u64DevicePosition;
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)&a3->u64PaddingFrames;
  v13 = *(_QWORD *)&a3->f32FramesPerSecond;
  v14 = *((_DWORD *)this - 90);
  *((_QWORD *)this + 15) = v13;
  v15 = a2 * v14;
  v16 = *(_DWORD *)(v12 + 4) + 1;
  if ( v16 == *(_DWORD *)(*((_QWORD *)this - 46) + 132LL) )
    v16 = 0;
  v17 = **((_DWORD **)this - 47);
  if ( v16 == v17 )
  {
    v18 = v17 + 1;
    if ( v17 + 1 == *(_DWORD *)(*((_QWORD *)this - 46) + 132LL) )
      v18 = 0;
    v19 = (unsigned __int64)v17 << 6;
    _InterlockedExchange(*((volatile __int32 **)this - 47), v18);
    *(_DWORD *)(((unsigned __int64)v18 << 6) + *((_QWORD *)this - 42) + 52) = 1;
    AEWMILOG_GLITCH(v15, v3, 0xAu, v10, *(unsigned int *)(v19 + *((_QWORD *)this - 42) + 4), v11, v15);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      Template_pxqxq(v21, v20, (_DWORD)v3, v10, *(_DWORD *)(v19 + *((_QWORD *)this - 42) + 4), v11, v15);
    v36 = 1;
    (**((void (__fastcall ***)(char *, __int64, int *))this - 20))((char *)this - 160, 5LL, &v36);
  }
  v8 = *((unsigned int *)this - 78);
  if ( (unsigned int)v8 >= (int)v10 - (int)v11 )
    v22 = v11 + v8 - v10;
  else
    v22 = v15;
  v23 = *((_QWORD *)this - 46);
  v24 = *(_DWORD *)(v23 + 140);
  v25 = v24 + (unsigned int)(v10 % v8);
  v26 = v24 + v11 % v8;
  if ( v22 < v15 )
  {
    AEWMILOG_GLITCH(v26, v3, 2u, (unsigned int)v25, v26, 0LL, v15);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      Template_pqqq(v28, v27, (_DWORD)v3, v25, v26, v15);
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 5u )
    {
      LODWORD(v34) = *(_DWORD *)(*((_QWORD *)this - 46) + 144LL);
      LODWORD(v33) = v37 * *((_DWORD *)this - 90);
      LODWORD(v32) = v26;
      WPP_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0xAu,
        &WPP_72dfd2f9d97fe37d947a3b168587dfcb_Traceguids,
        v25,
        v32,
        v33,
        v34);
    }
    v38 = 1;
    (**((void (__fastcall ***)(char *, __int64, int *))this - 20))((char *)this - 160, 6LL, &v38);
    if ( v22 )
    {
      *((_DWORD *)this + 20) = v22;
      *((_DWORD *)this + 4) = 1;
    }
    goto LABEL_25;
  }
  if ( (unsigned int)v25 + v15 <= *(_DWORD *)(v23 + 148) )
  {
    v29 = *((_QWORD *)this - 47) + v25;
    *((_DWORD *)this + 4) = 0;
    goto LABEL_27;
  }
  *((_DWORD *)this + 4) = 1;
LABEL_26:
  v29 = *((_QWORD *)this - 43);
LABEL_27:
  AEWMILOG_DATA(v8, v3, 0xAu, v35, 0LL, 0LL);
  return v29;
}
