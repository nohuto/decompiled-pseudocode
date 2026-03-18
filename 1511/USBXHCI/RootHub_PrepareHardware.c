/*
 * XREFs of RootHub_PrepareHardware @ 0x1C0049A50
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0048BE0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     RootHub_DumpPortData @ 0x1C0008440 (RootHub_DumpPortData.c)
 *     Register_FindNextExtendedCapability @ 0x1C0008638 (Register_FindNextExtendedCapability.c)
 *     Register_FindFirstExtendedCapability @ 0x1C0008680 (Register_FindFirstExtendedCapability.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00086D4 (WPP_RECORDER_SF_dddd.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     WPP_RECORDER_SF_cccc @ 0x1C0028124 (WPP_RECORDER_SF_cccc.c)
 */

__int64 __fastcall RootHub_PrepareHardware(__int64 a1)
{
  char v2; // r14
  __int64 v3; // rdi
  PVOID PoolWithTag; // rax
  __int64 v5; // r9
  int *FirstExtendedCapability; // r15
  unsigned int *v7; // rdi
  int *v8; // rsi
  __int64 i; // rcx
  unsigned int v10; // ebp
  unsigned int v11; // edi
  unsigned int v12; // r12d
  int v13; // esi
  int v14; // r14d
  unsigned int v15; // r13d
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  unsigned int j; // edi
  unsigned int k; // edi
  __int64 v22; // rsi
  _QWORD *v23; // rax
  void *v24; // r14
  __int64 v25; // rcx
  __int64 v27; // rdx
  unsigned int v28; // edi
  unsigned __int16 v29; // r9
  unsigned int m; // esi
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rcx
  void *v34; // rcx
  int v35; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+50h] [rbp-48h]
  unsigned int v37; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v38; // [rsp+5Ch] [rbp-3Ch]
  unsigned int v39; // [rsp+60h] [rbp-38h]

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL);
  v36 = v3;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(v3 + 88);
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 24) = *(_WORD *)(v3 + 100);
  *(_WORD *)(a1 + 26) = *(_WORD *)(v3 + 102);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(v3 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(v3 + 32) + 1024LL;
  if ( Register_FindFirstExtendedCapability(v3, 0xAu) )
    *(_BYTE *)(a1 + 56) = 1;
  PoolWithTag = ExAllocatePoolWithTag(
                  *(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type,
                  56LL * *(unsigned int *)(a1 + 16),
                  0x49434858u);
  *(_QWORD *)(a1 + 48) = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      0xAu,
      0x14u,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
    v28 = -1073741670;
    goto LABEL_48;
  }
  memset(PoolWithTag, 0, 56LL * *(unsigned int *)(a1 + 16));
  FirstExtendedCapability = Register_FindFirstExtendedCapability(v3, 2u);
  if ( FirstExtendedCapability )
  {
    do
    {
      v7 = &v37;
      v8 = FirstExtendedCapability;
      for ( i = 4LL; i; --i )
        *v7++ = *v8++;
      if ( v38 == 541217621 )
      {
        v10 = HIBYTE(v37);
        if ( HIBYTE(v37) - 2 <= 1u )
        {
          v11 = v39;
          v12 = BYTE1(v39);
          v13 = (unsigned __int8)v39;
          v14 = BYTE1(v39) + (unsigned __int8)v39;
          v15 = HIWORD(v37);
          WPP_RECORDER_SF_dddd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
            4u,
            0xAu,
            0x15u,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
          if ( (_BYTE)v11 && v12 && (unsigned int)(v14 - 1) <= *(_DWORD *)(a1 + 16) )
          {
            v2 = 1;
            v16 = -v13;
            while ( 1 )
            {
              v17 = (unsigned int)(v13 - 1);
              v18 = *(_QWORD *)(a1 + 48) + 56 * v17;
              if ( *(_BYTE *)(v18 + 1) )
                break;
              if ( v10 == 2 )
                ++*(_WORD *)(a1 + 20);
              else
                ++*(_WORD *)(a1 + 22);
              *(_BYTE *)(v18 + 3) = (v11 & 0x20000) != 0;
              *(_BYTE *)v18 = v15;
              *(_BYTE *)(v18 + 1) = v10;
              *(_BYTE *)(v18 + 4) = (v11 & 0x40000) != 0;
              v19 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 16 * v17);
              v11 = v39;
              *(_BYTE *)(v18 + 7) = 0;
              if ( (v11 & 0x80000) != 0 )
                *(_BYTE *)(v18 + 7) = 1;
              if ( (v11 & 0x100000) != 0 )
                *(_BYTE *)(v18 + 7) |= 2u;
              if ( (v19 & 0x40000000) == 0 )
                *(_BYTE *)(v18 + 5) = 1;
              ++v13;
              *(_BYTE *)(v18 + 2) = (v11 >> 25) & 7;
              *(_WORD *)(v18 + 46) = (v11 >> 28) & 0xF;
              *(_QWORD *)(v18 + 48) = FirstExtendedCapability + 4;
              if ( v16 + v13 >= v12 )
                goto LABEL_25;
            }
            v29 = 23;
          }
          else
          {
            v29 = 22;
          }
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
            2u,
            0xAu,
            v29,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
          goto LABEL_47;
        }
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          2u,
          0xAu,
          0x18u,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
      }
      else
      {
        WPP_RECORDER_SF_cccc(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          v38,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v5,
          v35);
      }
LABEL_25:
      FirstExtendedCapability = Register_FindNextExtendedCapability(v36, FirstExtendedCapability);
    }
    while ( FirstExtendedCapability );
    if ( !v2 )
      goto LABEL_46;
    for ( j = 0; j < *(_DWORD *)(a1 + 16); ++j )
      RootHub_DumpPortData((unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * j), *(_QWORD *)(a1 + 8));
    for ( k = 0; k < *(_DWORD *)(a1 + 16); ++k )
    {
      v22 = 56LL * k;
      KeInitializeSpinLock((PKSPIN_LOCK)(v22 + *(_QWORD *)(a1 + 48) + 16LL));
      if ( *(_BYTE *)(v22 + *(_QWORD *)(a1 + 48) + 1) == 2 )
      {
        v23 = ExAllocatePoolWithTag(*(POOL_TYPE *)&WPP_MAIN_CB.DeviceQueue.Type, 0x10uLL, 0x49434858u);
        v24 = v23;
        if ( !v23 )
        {
          v28 = -1073741670;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
            2u,
            0xAu,
            0x1Bu,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            -1073741670);
          goto LABEL_48;
        }
        *v23 = a1;
        *((_DWORD *)v23 + 2) = k + 1;
        *(_QWORD *)(v22 + *(_QWORD *)(a1 + 48) + 32) = ExAllocateTimer(
                                                         RootHub_WdfEvtTimer20PortResumeComplete,
                                                         v23,
                                                         4LL);
        v25 = *(_QWORD *)(a1 + 48);
        if ( !*(_QWORD *)(v22 + v25 + 32) )
        {
          v28 = -1073741670;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
            2u,
            0xAu,
            0x1Cu,
            (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
            -1073741670);
          ExFreePoolWithTag(v24, 0x49434858u);
          goto LABEL_48;
        }
        *(_QWORD *)(v22 + v25 + 24) = v24;
      }
    }
    return 0LL;
  }
  else
  {
LABEL_46:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      0xAu,
      0x1Au,
      (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
LABEL_47:
    v28 = -1073741811;
LABEL_48:
    if ( *(_QWORD *)(a1 + 48) )
    {
      for ( m = 0; m < *(_DWORD *)(a1 + 16); ++m )
      {
        v31 = 56LL * m;
        v32 = *(_QWORD *)(a1 + 48);
        if ( *(_BYTE *)(v31 + v32 + 1) == 2 )
        {
          v33 = *(_QWORD *)(v31 + v32 + 32);
          if ( v33 )
          {
            LOBYTE(v27) = 1;
            ExDeleteTimer(v33, v27, 0LL, 0LL);
            *(_QWORD *)(v31 + *(_QWORD *)(a1 + 48) + 32) = 0LL;
          }
          v34 = *(void **)(v31 + *(_QWORD *)(a1 + 48) + 24);
          if ( v34 )
          {
            ExFreePoolWithTag(v34, 0x49434858u);
            *(_QWORD *)(v31 + *(_QWORD *)(a1 + 48) + 24) = 0LL;
          }
        }
      }
      ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0x49434858u);
      *(_QWORD *)(a1 + 48) = 0LL;
    }
    return v28;
  }
}
