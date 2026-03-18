/*
 * XREFs of AAHalftoneBitmap @ 0x1C00BE678
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C00BD0EC (HT_HalftoneBitmap.c)
 * Callees:
 *     SetGrayColorTable @ 0x1C000C278 (SetGrayColorTable.c)
 *     SetupAAHeader @ 0x1C00BD57C (SetupAAHeader.c)
 *     ValidateHTSI @ 0x1C00BE928 (ValidateHTSI.c)
 *     CreateDyesColorMappingTable @ 0x1C00BECF8 (CreateDyesColorMappingTable.c)
 *     InitializeFUDI @ 0x1C00C13C8 (InitializeFUDI.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     GetDstBFInfo @ 0x1C024DEB8 (GetDstBFInfo.c)
 *     FindBGRMapCache @ 0x1C024EED8 (FindBGRMapCache.c)
 */

__int64 __fastcall AAHalftoneBitmap(__int64 *a1)
{
  __int64 v1; // r13
  __int64 v2; // r15
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v6; // r9
  unsigned int v7; // esi
  unsigned int v8; // ebx
  int v9; // r12d
  int v10; // esi
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int128 v15; // xmm1
  unsigned __int64 v16; // r8
  __int64 (__fastcall *v17)(int, int, int, int, __int64); // rcx
  int v19; // eax
  unsigned __int8 v20; // si
  __int64 v21; // rax
  _OWORD *v22; // rax
  _OWORD *v23; // rcx
  _OWORD *v24; // rax
  __int64 v25; // rdx
  __int128 v26; // xmm1
  __int64 v27; // rdx
  __int128 v28; // xmm1
  __int64 (__fastcall *v29)(int, int, int, int, __int64, __int64, __int64, int); // rax
  bool v30; // zf
  char v31; // cl
  bool v32; // zf
  __int64 (__fastcall *v33)(int, int, int, int, __int64, __int64, __int64, __int64, __int16); // rax
  __int64 v34; // r11
  void *v35; // r10
  unsigned __int8 *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  void *v39; // [rsp+20h] [rbp-28h]
  __int64 v40; // [rsp+28h] [rbp-20h]
  __int64 (__fastcall *v41)(__int64); // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 v42; // [rsp+90h] [rbp+48h]
  int DyesColorMappingTable; // [rsp+98h] [rbp+50h]
  int v44; // [rsp+A8h] [rbp+60h]

  v1 = *a1;
  v2 = a1[1];
  v4 = a1[6];
  v5 = ValidateHTSI(a1, 0LL);
  if ( v5 >= 0 )
  {
    v5 = ValidateHTSI(a1, 1LL);
    if ( v5 >= 0 )
    {
      v5 = ValidateHTSI(a1, 2LL);
      if ( v5 >= 0 )
      {
        v5 = SetupAAHeader(a1, v1, v4, (__int64 (__fastcall **)(__int128 *, __int64, __int64))&v41);
        if ( v5 > 0 )
        {
          DyesColorMappingTable = CreateDyesColorMappingTable(a1);
          v7 = DyesColorMappingTable;
          if ( DyesColorMappingTable <= 0 )
          {
LABEL_101:
            EngReleaseSemaphore(*(HSEMAPHORE *)(v1 + 8));
LABEL_28:
            EngFreeMem(*(PVOID *)(v4 + 304));
            EngFreeMem(*(PVOID *)(v4 + 312));
            return v7;
          }
          v8 = *(_DWORD *)(v4 + 444);
          v9 = *(_DWORD *)v4;
          v42 = *(_BYTE *)(v2 + 31);
          v40 = *(_QWORD *)(v4 + 136);
          v44 = 1;
          v10 = *(_DWORD *)(*(_QWORD *)(v4 + 304) + 4LL);
          v39 = 0LL;
          v11 = *(_DWORD *)(v2 + 56) & 0x2000000;
          if ( v11 )
            v39 = (void *)(v1 + 548);
          if ( v9 < 0 )
          {
            v44 = 0;
            if ( (v9 & 0x800) != 0 )
            {
              v21 = *(_QWORD *)(v1 + 7064);
              *(_QWORD *)(v4 + 336) = v21;
              if ( (v9 & 0x1000) != 0 )
                *(_QWORD *)(v4 + 336) = v21 + 768;
            }
          }
          else
          {
            v12 = *(_QWORD *)(v4 + 376);
            v13 = v1 + 856;
            v14 = 24LL;
            do
            {
              *(_OWORD *)v12 = *(_OWORD *)v13;
              *(_OWORD *)(v12 + 16) = *(_OWORD *)(v13 + 16);
              *(_OWORD *)(v12 + 32) = *(_OWORD *)(v13 + 32);
              *(_OWORD *)(v12 + 48) = *(_OWORD *)(v13 + 48);
              *(_OWORD *)(v12 + 64) = *(_OWORD *)(v13 + 64);
              *(_OWORD *)(v12 + 80) = *(_OWORD *)(v13 + 80);
              *(_OWORD *)(v12 + 96) = *(_OWORD *)(v13 + 96);
              v12 += 128LL;
              v15 = *(_OWORD *)(v13 + 112);
              v13 += 128LL;
              *(_OWORD *)(v12 - 16) = v15;
              --v14;
            }
            while ( v14 );
            *(_OWORD *)v12 = *(_OWORD *)v13;
            *(_QWORD *)(v12 + 16) = *(_QWORD *)(v13 + 16);
            *(_DWORD *)(v12 + 24) = *(_DWORD *)(v13 + 24);
            if ( (v9 & 0x800) != 0 )
            {
              v22 = *(_OWORD **)(v1 + 7064);
              v23 = *(_OWORD **)(v4 + 336);
              if ( (v9 & 0x1000) != 0 )
              {
                v24 = v22 + 48;
                v25 = 16LL;
                do
                {
                  *v23 = *v24;
                  v23[1] = v24[1];
                  v23[2] = v24[2];
                  v23[3] = v24[3];
                  v23[4] = v24[4];
                  v23[5] = v24[5];
                  v23[6] = v24[6];
                  v23 += 8;
                  v26 = v24[7];
                  v24 += 8;
                  *(v23 - 1) = v26;
                  --v25;
                }
                while ( v25 );
              }
              else
              {
                v27 = 6LL;
                do
                {
                  *v23 = *v22;
                  v23[1] = v22[1];
                  v23[2] = v22[2];
                  v23[3] = v22[3];
                  v23[4] = v22[4];
                  v23[5] = v22[5];
                  v23[6] = v22[6];
                  v23 += 8;
                  v28 = v22[7];
                  v22 += 8;
                  *(v23 - 1) = v28;
                  --v27;
                }
                while ( v27 );
              }
            }
            EngReleaseSemaphore(*(HSEMAPHORE *)(v1 + 8));
          }
          if ( (*(_BYTE *)(v4 + 8) & 4) != 0 )
            SetGrayColorTable(*(_OWORD **)(v4 + 384), v4 + 8);
          if ( *(_DWORD *)(v4 + 528) )
            InitializeFUDI(v4);
          v16 = v42;
          *(_QWORD *)(v4 + 560) -= 4LL;
          if ( v42 > 0xF9u )
          {
            if ( v42 == 250 )
            {
              v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_B332;
              v29 = OutputAATo8BPP_B332_XLATE;
              goto LABEL_95;
            }
            if ( v42 == 251 )
            {
              BYTE1(v39) = *(_BYTE *)(*(_QWORD *)(v4 + 376) + 17LL);
              v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_MONO;
LABEL_34:
              v7 = DyesColorMappingTable;
              goto LABEL_22;
            }
            if ( v42 <= 0xFBu )
              goto LABEL_92;
            if ( v42 <= 0xFDu )
            {
              if ( (v40 & 3) != 0 )
              {
                LOBYTE(v39) = 1;
                LOBYTE(v10) = v10 - 1;
              }
              if ( (v10 & 1) != 0 )
              {
                *(_QWORD *)(v4 + 568) -= 4LL;
                BYTE3(v39) = 1;
              }
              if ( (_BYTE)v8 )
              {
                v7 = DyesColorMappingTable;
                if ( (_BYTE)v8 == 4 )
                {
                  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_565_BGR;
                  if ( v42 == 0xFD )
                    v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_555_BGR;
                }
                else
                {
                  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_ExtBGR;
                }
LABEL_22:
                *(_QWORD *)(v4 + 272) = v17;
                if ( v17 )
                {
                  v30 = (*(_DWORD *)v4 & 0x800) == 0;
                  *(_QWORD *)(v4 + 280) = v39;
                  if ( !v30 )
                  {
                    LOBYTE(v6) = v8;
                    GetDstBFInfo(v4, *(_QWORD *)(a1[2] + 8), v16, v6);
                  }
                  v7 = v41(v4);
                }
                if ( (v9 & 0x18) != 0 )
                {
                  v38 = *(_QWORD *)(v4 + 392);
                  if ( v38 )
                    FindBGRMapCache(v38, 0LL);
                }
                if ( v44 )
                  goto LABEL_28;
                goto LABEL_101;
              }
              v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_565_RGB;
              v32 = v42 == 0xFD;
              v33 = OutputAATo16BPP_555_RGB;
              goto LABEL_72;
            }
            if ( v42 == 254 )
            {
              v34 = a1[7];
              v16 = *(_QWORD *)(v4 + 400);
              if ( v34 )
              {
                v35 = *(void **)(v4 + 400);
                if ( v16 )
                {
                  v36 = (unsigned __int8 *)&VGA256Xlate;
                  LODWORD(v6) = 366;
                  do
                  {
                    v37 = *v36++;
                    *(_BYTE *)v16++ = *(_BYTE *)(v37 + v34);
                    v30 = (_DWORD)v6 == 1;
                    v6 = (unsigned int)(v6 - 1);
                  }
                  while ( !v30 );
                }
              }
              else
              {
                v35 = &VGA256Xlate;
              }
              LOBYTE(v16) = v42;
              v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAAToVGA256;
              v39 = v35;
              goto LABEL_34;
            }
          }
          else
          {
            if ( v42 >= 0xF8u )
              goto LABEL_58;
            if ( v42 == 6 )
            {
              v7 = DyesColorMappingTable;
              *(_WORD *)((char *)&v39 + 1) = v8 >> 8;
              BYTE3(v39) = HIBYTE(v8);
              LOBYTE(v39) = v8;
              if ( !(_BYTE)v8 )
              {
                v17 = OutputAATo32BPP_RGB;
                goto LABEL_22;
              }
              v17 = OutputAATo32BPP_BGR;
              v29 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int))OutputAATo32BPP_ORDER;
LABEL_52:
              v30 = (_BYTE)v8 == 4;
              goto LABEL_96;
            }
            if ( v42 == 1 )
            {
              v19 = *(unsigned __int8 *)(v4 + 97);
              BYTE1(v39) = -((v9 & 4) == 0);
              if ( *(_BYTE *)(v4 + 97) )
              {
                v31 = 8 - v19;
                v10 -= 8 - v19;
                if ( v10 < 0 )
                {
                  v31 += v10;
                  BYTE2(v39) = -(char)v10;
                  LOBYTE(v10) = 0;
                }
                LOBYTE(v39) = v31;
              }
              v20 = v10 & 7;
              BYTE3(v39) = v20;
              if ( v20 )
                *(_QWORD *)(v4 + 568) += -4LL * v20;
              v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo1BPP;
              goto LABEL_34;
            }
            if ( v42 != 2 )
            {
              if ( v42 == 5 )
              {
                v7 = DyesColorMappingTable;
                *(_WORD *)((char *)&v39 + 1) = v8 >> 8;
                BYTE3(v39) = HIBYTE(v8);
                LOBYTE(v39) = v8;
                if ( !(_BYTE)v8 )
                {
                  v17 = OutputAATo24BPP_RGB;
                  goto LABEL_22;
                }
                v17 = OutputAATo24BPP_BGR;
                v29 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int))OutputAATo24BPP_ORDER;
                goto LABEL_52;
              }
              if ( v42 > 0xF4u )
              {
                if ( v42 > 0xF6u )
                {
                  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_B332;
                  v29 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int))OutputAATo8BPP_K_B332_XLATE;
LABEL_95:
                  v7 = DyesColorMappingTable;
                  v30 = v11 == 0;
LABEL_96:
                  if ( !v30 )
                    v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))v29;
                  goto LABEL_22;
                }
LABEL_58:
                v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_XLATE;
                v39 = *(&p8BPPXlate + *(unsigned __int8 *)(*(_QWORD *)(v4 + 376) + 16LL));
                if ( (unsigned __int8)(v42 + 8) > 1u )
                  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_XLATE;
                goto LABEL_34;
              }
LABEL_92:
              v17 = 0LL;
              v7 = -11;
              goto LABEL_22;
            }
          }
          BYTE1(v39) = (v9 & 4) == 0 ? 0x77 : 0;
          if ( *(_BYTE *)(v4 + 97) )
          {
            LOBYTE(v39) = 1;
            LOBYTE(v10) = v10 - 1;
          }
          if ( (v10 & 1) != 0 )
          {
            *(_QWORD *)(v4 + 568) -= 4LL;
            BYTE3(v39) = 1;
          }
          v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAAToVGA16;
          v32 = v42 == 2;
          v33 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, __int64, __int16))OutputAATo4BPP;
LABEL_72:
          if ( v32 )
            v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))v33;
          goto LABEL_34;
        }
      }
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(v1 + 8));
  return (unsigned int)v5;
}
