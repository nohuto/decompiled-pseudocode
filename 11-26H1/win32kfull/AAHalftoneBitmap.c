/*
 * XREFs of AAHalftoneBitmap @ 0x140141E5C
 * Callers:
 *     HT_HalftoneBitmap @ 0x1401449FC (HT_HalftoneBitmap.c)
 * Callees:
 *     InitializeFUDI @ 0x140141B6C (InitializeFUDI.c)
 *     SetGrayColorTable @ 0x140141C88 (SetGrayColorTable.c)
 *     ValidateHTSI @ 0x140142724 (ValidateHTSI.c)
 *     SetupAAHeader @ 0x140142A9C (SetupAAHeader.c)
 *     CreateDyesColorMappingTable @ 0x1401441D4 (CreateDyesColorMappingTable.c)
 *     GetDstBFInfo @ 0x14030405C (GetDstBFInfo.c)
 *     FindBGRMapCache @ 0x140305094 (FindBGRMapCache.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall AAHalftoneBitmap(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rax
  int v7; // r8d
  int v8; // r15d
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  char v12; // r13
  int v13; // eax
  unsigned __int8 v14; // r15
  __int64 (__fastcall *v15)(int, int, int, int, __int64); // rcx
  unsigned int v16; // esi
  int v17; // r12d
  PVOID *v18; // rbx
  HSEMAPHORE v20; // rcx
  __int64 (__fastcall *v21)(int, int, int, int, __int64, __int64, __int64, int, int); // rax
  bool v22; // zf
  __int64 v23; // rax
  _OWORD *v24; // rdx
  _OWORD *v25; // rcx
  __int64 v26; // r8
  __int64 (__fastcall *v27)(int, int, int, int, __int64, __int64, __int64, int); // rax
  bool v28; // zf
  char v29; // cl
  char v30; // cl
  char v31; // al
  char v32; // al
  __int64 v33; // r11
  void *v34; // r10
  unsigned __int8 *v35; // rdx
  char v36; // al
  char v37; // al
  __int64 v38; // rcx
  void *v39; // [rsp+20h] [rbp-A8h]
  int v40; // [rsp+28h] [rbp-A0h]
  __int64 v41; // [rsp+30h] [rbp-98h]
  int v42; // [rsp+3Ch] [rbp-8Ch]
  __int64 v43; // [rsp+40h] [rbp-88h]
  int v44; // [rsp+48h] [rbp-80h]
  char v45; // [rsp+4Ch] [rbp-7Ch]
  __int64 (__fastcall *v46)(__int64); // [rsp+68h] [rbp-60h] BYREF
  __int64 v47; // [rsp+70h] [rbp-58h]
  _DWORD *v48; // [rsp+78h] [rbp-50h]
  PVOID *v49; // [rsp+80h] [rbp-48h]
  unsigned __int8 v50; // [rsp+D0h] [rbp+8h]
  __int64 v51; // [rsp+D8h] [rbp+10h]
  int v52; // [rsp+D8h] [rbp+10h]
  int DyesColorMappingTable; // [rsp+E0h] [rbp+18h]

  v46 = 0LL;
  v41 = *a1;
  v51 = a1[1];
  v2 = a1[6];
  v48 = (_DWORD *)v2;
  v3 = v2;
  v4 = ValidateHTSI(a1, 0LL);
  if ( v4 < 0 || (v4 = ValidateHTSI(a1, 1LL), v4 < 0) || (v4 = ValidateHTSI(a1, 2LL), v4 < 0) )
  {
    v20 = *(HSEMAPHORE *)(v41 + 8);
    goto LABEL_44;
  }
  v4 = SetupAAHeader(a1, v41, v2, &v46);
  if ( v4 <= 0 )
  {
    *(_QWORD *)(v2 + 304) = 0LL;
    *(_QWORD *)(v2 + 312) = 0LL;
    v20 = *(HSEMAPHORE *)(v41 + 8);
LABEL_44:
    EngReleaseSemaphore(v20);
    return (unsigned int)v4;
  }
  DyesColorMappingTable = CreateDyesColorMappingTable(a1);
  if ( DyesColorMappingTable > 0 )
  {
    v40 = 1;
    v6 = v51;
    v50 = *(_BYTE *)(v51 + 31);
    v7 = *(_DWORD *)v2;
    v52 = *(_DWORD *)v2;
    v47 = *(_QWORD *)(v2 + 136);
    v49 = (PVOID *)(v2 + 304);
    v8 = *(_DWORD *)(*(_QWORD *)(v2 + 304) + 4LL);
    v45 = v8;
    v9 = *(_DWORD *)(v2 + 444);
    v39 = 0LL;
    v42 = *(_DWORD *)(v6 + 56) & 0x2000000;
    if ( v42 )
      v39 = (void *)(v41 + 548);
    v44 = v7 & 0x800;
    if ( v7 < 0 )
    {
      v40 = 0;
      if ( (v7 & 0x800) != 0 )
      {
        v23 = *(_QWORD *)(v41 + 7064);
        *(_QWORD *)(v2 + 336) = v23;
        if ( (v7 & 0x1000) != 0 )
          *(_QWORD *)(v2 + 336) = v23 + 768;
      }
      v43 = v2 + 376;
    }
    else
    {
      v43 = v2 + 376;
      memmove(*(void **)(v2 + 376), (const void *)(v41 + 856), 0xC1CuLL);
      v10 = v41;
      if ( v44 )
      {
        v24 = *(_OWORD **)(v41 + 7064);
        v25 = *(_OWORD **)(v2 + 336);
        if ( (v52 & 0x1000) != 0 )
        {
          memmove(v25, v24 + 48, 0x800uLL);
          v10 = v41;
        }
        else
        {
          v26 = 6LL;
          do
          {
            *v25 = *v24;
            v25[1] = v24[1];
            v25[2] = v24[2];
            v25[3] = v24[3];
            v25[4] = v24[4];
            v25[5] = v24[5];
            v25[6] = v24[6];
            v25 += 8;
            *(v25 - 1) = v24[7];
            v24 += 8;
            --v26;
          }
          while ( v26 );
        }
      }
      EngReleaseSemaphore(*(HSEMAPHORE *)(v10 + 8));
    }
    if ( (*(_BYTE *)(v2 + 8) & 4) != 0 )
      SetGrayColorTable(*(_OWORD **)(v2 + 384), v2 + 8);
    if ( *(_DWORD *)(v2 + 528) )
      InitializeFUDI(v2);
    *(_QWORD *)(v2 + 560) -= 4LL;
    v11 = v50;
    if ( v50 > 0xF8u )
    {
      switch ( v50 )
      {
        case 0xF9u:
          goto LABEL_106;
        case 0xFAu:
          v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_B332_XLATE;
          v27 = OutputAATo8BPP_B332;
          goto LABEL_64;
        case 0xFBu:
          BYTE1(v39) = *(_BYTE *)(*(_QWORD *)(v2 + 376) + 17LL);
          v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_MONO;
LABEL_42:
          v12 = v52;
LABEL_22:
          v16 = DyesColorMappingTable;
LABEL_23:
          *(_QWORD *)(v3 + 272) = v15;
          if ( v15 )
          {
            *(_QWORD *)(v3 + 280) = v39;
            if ( (*v48 & 0x800) != 0 )
            {
              LOBYTE(v5) = v9;
              GetDstBFInfo(v3, *(_QWORD *)(a1[2] + 8), v11, v5);
            }
            v16 = v46(v3);
            v17 = v40;
          }
          else
          {
            v17 = v40;
          }
          v18 = v49;
          if ( (v12 & 0x18) != 0 )
          {
            v38 = *(_QWORD *)(v3 + 392);
            if ( v38 )
              FindBGRMapCache(v38, 0LL);
          }
          goto LABEL_28;
        case 0xFCu:
        case 0xFDu:
          v36 = (char)v39;
          if ( (v47 & 3) != 0 )
            v36 = 1;
          LOBYTE(v39) = v36;
          v37 = v8 - 1;
          if ( (v47 & 3) == 0 )
            v37 = v8;
          if ( (v37 & 1) != 0 )
          {
            BYTE3(v39) = 1;
            *(_QWORD *)(v2 + 568) -= 4LL;
          }
          if ( (_BYTE)v9 )
          {
            v16 = DyesColorMappingTable;
            v12 = v52;
            if ( (_BYTE)v9 != 4 )
            {
              v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_ExtBGR;
              goto LABEL_23;
            }
            v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_555_BGR;
            v21 = OutputAATo16BPP_565_BGR;
            v22 = v50 == 0xFD;
LABEL_47:
            if ( !v22 )
              v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))v21;
            goto LABEL_23;
          }
          v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_565_RGB;
          v27 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int))OutputAATo16BPP_555_RGB;
          v28 = v50 == 0xFD;
          goto LABEL_66;
        case 0xFEu:
          v11 = *(_QWORD *)(v2 + 400);
          v33 = a1[7];
          if ( v33 )
          {
            v34 = *(void **)(v2 + 400);
            if ( v11 )
            {
              v35 = (unsigned __int8 *)&VGA256Xlate;
              LODWORD(v5) = 366;
              do
              {
                *(_BYTE *)v11++ = *(_BYTE *)(*v35++ + v33);
                v22 = (_DWORD)v5 == 1;
                v5 = (unsigned int)(v5 - 1);
              }
              while ( !v22 );
            }
          }
          else
          {
            v34 = &VGA256Xlate;
          }
          v39 = v34;
          v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAAToVGA256;
          LOBYTE(v11) = v50;
          goto LABEL_42;
      }
      if ( v50 != 255 )
      {
LABEL_79:
        v15 = 0LL;
        v16 = -11;
        v12 = v52;
        goto LABEL_23;
      }
    }
    else
    {
      if ( v50 == 248 )
        goto LABEL_106;
      if ( v50 == 1 )
      {
        v12 = v52;
        BYTE1(v39) = -((v52 & 4) == 0);
        v13 = *(unsigned __int8 *)(v2 + 97);
        if ( *(_BYTE *)(v2 + 97) )
        {
          v29 = 8 - v13;
          v8 -= 8 - v13;
          if ( v8 < 0 )
          {
            v29 = v45;
            BYTE2(v39) = -(char)v8;
            LOBYTE(v8) = 0;
          }
          LOBYTE(v39) = v29;
        }
        v14 = v8 & 7;
        BYTE3(v39) = v14;
        if ( v14 )
          *(_QWORD *)(v2 + 568) += -4LL * v14;
        v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo1BPP;
        goto LABEL_22;
      }
      if ( v50 != 2 )
      {
        if ( v50 == 5 )
        {
          *(_WORD *)((char *)&v39 + 1) = v9 >> 8;
          BYTE3(v39) = HIBYTE(v9);
          LOBYTE(v39) = v9;
          v16 = DyesColorMappingTable;
          v12 = v52;
          if ( !(_BYTE)v9 )
          {
            v15 = OutputAATo24BPP_RGB;
            goto LABEL_23;
          }
          v15 = OutputAATo24BPP_BGR;
          v21 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo24BPP_ORDER;
LABEL_46:
          v22 = (_BYTE)v9 == 4;
          goto LABEL_47;
        }
        if ( v50 == 6 )
        {
          *(_WORD *)((char *)&v39 + 1) = v9 >> 8;
          BYTE3(v39) = HIBYTE(v9);
          LOBYTE(v39) = v9;
          v16 = DyesColorMappingTable;
          v12 = v52;
          if ( !(_BYTE)v9 )
          {
            v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo32BPP_RGB;
            goto LABEL_23;
          }
          v15 = OutputAATo32BPP_BGR;
          v21 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo32BPP_ORDER;
          goto LABEL_46;
        }
        if ( v50 != 245 && v50 != 246 )
        {
          if ( v50 == 247 )
          {
            v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_B332_XLATE;
            v27 = OutputAATo8BPP_K_B332;
LABEL_64:
            v28 = v42 == 0;
LABEL_66:
            if ( v28 )
              v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))v27;
            goto LABEL_42;
          }
          goto LABEL_79;
        }
LABEL_106:
        v39 = *(&p8BPPXlate + *(unsigned __int8 *)(*(_QWORD *)v43 + 16LL));
        v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_XLATE;
        if ( (unsigned __int8)(v50 + 8) > 1u )
          v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_XLATE;
        goto LABEL_42;
      }
    }
    BYTE1(v39) = (v52 & 4) == 0 ? 0x77 : 0;
    v30 = *(_BYTE *)(v2 + 97);
    v31 = (char)v39;
    if ( v30 )
      v31 = 1;
    LOBYTE(v39) = v31;
    v32 = v8 - 1;
    if ( !v30 )
      v32 = v8;
    if ( (v32 & 1) != 0 )
    {
      BYTE3(v39) = 1;
      *(_QWORD *)(v2 + 568) -= 4LL;
    }
    v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo4BPP;
    if ( v50 != 2 )
      v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAAToVGA16;
    goto LABEL_42;
  }
  v17 = 0;
  v18 = (PVOID *)(v2 + 304);
  v16 = DyesColorMappingTable;
LABEL_28:
  if ( !v17 )
    EngReleaseSemaphore(*(HSEMAPHORE *)(v41 + 8));
  EngFreeMem(*v18);
  EngFreeMem(*(PVOID *)(v3 + 312));
  *v18 = 0LL;
  *(_QWORD *)(v3 + 312) = 0LL;
  return v16;
}
