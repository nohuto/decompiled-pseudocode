/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140017900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_DDDD @ 0x140014AE0 (WPP_SF_DDDD.c)
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x1400171B4 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     Template_pqqq @ 0x14003B07C (Template_pqqq.c)
 *     Template_pxqxq @ 0x14003B1B4 (Template_pxqxq.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x14003C104 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x14003C3D0 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::GetOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        unsigned int a2,
        struct AE_CURRENT_POSITION *a3)
{
  unsigned __int64 v6; // rax
  CCrossProcessBaseEndpoint *v7; // r14
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // xmm0_8
  int v16; // r12d
  unsigned int v17; // r12d
  int v18; // ecx
  unsigned int v19; // r8d
  unsigned __int32 v20; // edx
  unsigned __int64 v21; // rdi
  int v22; // edx
  int v23; // ecx
  unsigned int v24; // edi
  __int64 v25; // r10
  unsigned int v26; // ebp
  unsigned int v27; // r13d
  int v28; // edx
  int v29; // ecx
  __int64 v30; // rdi
  unsigned __int64 v32; // [rsp+20h] [rbp-68h]
  unsigned __int64 v33; // [rsp+28h] [rbp-60h]
  unsigned __int64 v34; // [rsp+30h] [rbp-58h]
  unsigned __int64 v35; // [rsp+40h] [rbp-48h]
  int v36; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v37; // [rsp+98h] [rbp+10h]
  int v38; // [rsp+A8h] [rbp+20h] BYREF

  v37 = a2;
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 20) = 0;
  v6 = *((unsigned int *)this - 89);
  v7 = (CCrossProcessServerOutputEndpoint *)((char *)this - 440);
  *((_DWORD *)this + 4) = 2;
  v35 = a2;
  AEWMILOG_DATA(v35, (char *)this - 440, (unsigned __int8)a3, 9u, v35, v6, 0LL);
  ResetEvent(*((HANDLE *)this - 40));
  v9 = *((_QWORD *)this - 47);
  LODWORD(v10) = *(_DWORD *)(v9 + 156) & 1;
  if ( (*(_BYTE *)(v9 + 156) & 1) == 0
    || !a2
    || (v11 = *((_QWORD *)this - 47),
        v12 = *(_QWORD *)(v11 + 8),
        v13 = *(_QWORD *)(v11 + 16),
        !CCrossProcessBaseEndpoint::IsValidOffset(v7, v12, v8))
    || !CCrossProcessBaseEndpoint::IsValidOffset(v7, v13, v8) )
  {
LABEL_26:
    _InterlockedExchange((volatile __int32 *)this - 76, 1);
    goto LABEL_27;
  }
  (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*(_QWORD *)v7 + 80LL))(
    v7,
    a3,
    v12);
  v14 = *((_QWORD *)this - 47);
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)&a3->u64DevicePosition;
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)&a3->u64PaddingFrames;
  v15 = *(_QWORD *)&a3->f32FramesPerSecond;
  v16 = *((_DWORD *)this - 90);
  *((_QWORD *)this + 15) = v15;
  v17 = a2 * v16;
  v18 = *(_DWORD *)(v14 + 4) + 1;
  if ( v18 == *(_DWORD *)(*((_QWORD *)this - 46) + 132LL) )
    v18 = 0;
  v19 = **((_DWORD **)this - 47);
  if ( v18 == v19 )
  {
    v20 = v19 + 1;
    if ( v19 + 1 == *(_DWORD *)(*((_QWORD *)this - 46) + 132LL) )
      v20 = 0;
    v21 = (unsigned __int64)v19 << 6;
    _InterlockedExchange(*((volatile __int32 **)this - 47), v20);
    *(_DWORD *)(((unsigned __int64)v20 << 6) + *((_QWORD *)this - 42) + 52) = 1;
    AEWMILOG_GLITCH(v17, v7, v19, 0xAu, v12, *(unsigned int *)(v21 + *((_QWORD *)this - 42) + 4), v13, v17);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      Template_pxqxq(v23, v22, (_DWORD)v7, v12, *(_DWORD *)(v21 + *((_QWORD *)this - 42) + 4), v13, v17);
    v36 = 1;
    (**((void (__fastcall ***)(char *, __int64, int *))this - 20))((char *)this - 160, 5LL, &v36);
  }
  v10 = *((unsigned int *)this - 78);
  if ( (unsigned int)v10 < (int)v12 - (int)v13 )
    v24 = v17;
  else
    v24 = v13 + v10 - v12;
  v25 = *((_QWORD *)this - 46);
  v8 = *(_DWORD *)(v25 + 140);
  v26 = v8 + v12 % v10;
  v27 = v8 + v13 % v10;
  if ( v24 < v17 )
  {
    AEWMILOG_GLITCH(v27, v7, v26, 2u, v26, v27, 0LL, v17);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      Template_pqqq(v29, v28, (_DWORD)v7, v26, v27, v17);
    LODWORD(v10) = (_DWORD)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      LODWORD(v34) = *(_DWORD *)(*((_QWORD *)this - 46) + 144LL);
      LODWORD(v33) = v37 * *((_DWORD *)this - 90);
      LODWORD(v32) = v27;
      WPP_SF_DDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        &WPP_50292f6487a5368530fe30e21e48c679_Traceguids,
        v26,
        v32,
        v33,
        v34);
    }
    if ( v13 > 0 )
    {
      v38 = 1;
      (**((void (__fastcall ***)(char *, __int64, int *))this - 20))((char *)this - 160, 6LL, &v38);
    }
    if ( v24 )
    {
      *((_DWORD *)this + 20) = v24;
      *((_DWORD *)this + 4) = 1;
    }
    goto LABEL_26;
  }
  if ( v17 + v26 <= *(_DWORD *)(v25 + 148) )
  {
    *((_DWORD *)this + 4) = 0;
    v30 = *((_QWORD *)this - 47) + v26;
    goto LABEL_28;
  }
  *((_DWORD *)this + 4) = 1;
LABEL_27:
  v30 = *((_QWORD *)this - 43);
LABEL_28:
  AEWMILOG_DATA(v10, v7, v8, 0xAu, v35, 0LL, 0LL);
  return v30;
}
