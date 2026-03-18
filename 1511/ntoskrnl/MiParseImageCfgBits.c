/*
 * XREFs of MiParseImageCfgBits @ 0x1403C6C80
 * Callers:
 *     MiRelocateImage @ 0x1403C5E30 (MiRelocateImage.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiLogRelocationRva @ 0x1403C71B0 (MiLogRelocationRva.c)
 *     MiCompressRvaList @ 0x140416A20 (MiCompressRvaList.c)
 */

__int64 __fastcall MiParseImageCfgBits(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 a5, PVOID *a6)
{
  __int64 v9; // r11
  char *v10; // rsi
  __int64 v11; // r9
  unsigned __int64 v12; // r13
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int16 v15; // cx
  unsigned int v16; // ebx
  unsigned int *v17; // rdx
  __int64 v18; // r11
  ULONG_PTR v19; // rax
  unsigned __int64 v20; // r12
  unsigned int v21; // ecx
  unsigned int v22; // edi
  unsigned int v23; // edi
  unsigned __int64 v24; // r12
  __int64 v25; // rbx
  unsigned int v26; // r13d
  char *PoolWithTag; // rax
  int v28; // r15d
  unsigned __int64 v29; // r13
  unsigned int v30; // r8d
  __int64 v31; // rax
  unsigned int v32; // edx
  unsigned int v33; // r12d
  unsigned int v34; // ebx
  _DWORD *v35; // rax
  unsigned int v37; // [rsp+40h] [rbp-168h] BYREF
  ULONG_PTR v38; // [rsp+48h] [rbp-160h]
  __int64 v39; // [rsp+50h] [rbp-158h]
  unsigned int v40; // [rsp+58h] [rbp-150h]
  PVOID P; // [rsp+60h] [rbp-148h]
  unsigned int v42; // [rsp+68h] [rbp-140h]
  __int64 v43; // [rsp+70h] [rbp-138h]
  unsigned __int64 v44; // [rsp+78h] [rbp-130h]
  char *v45; // [rsp+80h] [rbp-128h]
  __int64 v46; // [rsp+88h] [rbp-120h]
  __int64 v47; // [rsp+90h] [rbp-118h]
  unsigned __int64 v48; // [rsp+98h] [rbp-110h]
  __int64 v49; // [rsp+A0h] [rbp-108h]
  __int64 *v50; // [rsp+A8h] [rbp-100h]
  PVOID *v51; // [rsp+B0h] [rbp-F8h]
  char v52[80]; // [rsp+C0h] [rbp-E8h] BYREF
  unsigned int v53; // [rsp+110h] [rbp-98h]
  unsigned int v54; // [rsp+114h] [rbp-94h]
  unsigned int v55; // [rsp+118h] [rbp-90h]
  unsigned __int64 v56; // [rsp+140h] [rbp-68h]
  unsigned int v57; // [rsp+148h] [rbp-60h]
  unsigned int v58; // [rsp+150h] [rbp-58h]

  v49 = a2;
  v9 = a1;
  v39 = a1;
  v47 = a1;
  v43 = a2;
  v50 = a4;
  v51 = a6;
  if ( !dword_1403810E4 )
  {
    *a6 = 0LL;
    return 0LL;
  }
  v38 = 0LL;
  v10 = 0LL;
  v45 = 0LL;
  P = 0LL;
  v46 = 0LL;
  v11 = 0LL;
  if ( a1 )
    v11 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v12 = *a4;
  v44 = *a4;
  v37 = 0;
  v13 = *((_DWORD *)a4 + 25);
  v42 = v13;
  v14 = *((unsigned int *)a4 + 24);
  if ( !(_DWORD)v14 )
  {
    v28 = 0;
    v29 = 0LL;
    goto LABEL_38;
  }
  v15 = *((_WORD *)a4 + 24);
  if ( v15 == 523 )
  {
    v16 = 148;
  }
  else
  {
    if ( v15 != 267 )
      goto LABEL_50;
    v16 = 92;
  }
  v40 = v16;
  if ( (unsigned int)v14 + v16 <= (unsigned int)v14 || (unsigned int)v14 + v16 > *((_DWORD *)a4 + 4) )
    goto LABEL_50;
  v17 = (unsigned int *)(a2 + v14);
  v48 = a2 + v14;
  if ( v13 >= v16 )
    goto LABEL_10;
  if ( !v11 || *(_WORD *)(v11 + 48) != 332 )
  {
LABEL_50:
    v28 = 0;
    v29 = 0LL;
    goto LABEL_38;
  }
  if ( v13 > 4 )
  {
    v13 = *v17;
    v42 = *v17;
  }
  if ( v13 < v16 )
  {
    v28 = v37;
    v29 = v38;
    goto LABEL_38;
  }
LABEL_10:
  memmove(v52, v17, v16);
  v18 = v39;
  if ( v39 )
  {
    v19 = MI_REFERENCE_CONTROL_AREA_FILE(v39);
    v38 = v19;
    v18 = v39;
  }
  else
  {
    v19 = v38;
  }
  if ( v19 )
    MiLogRelocationRva(*((unsigned int *)a4 + 24), v16, v19, v18);
  if ( *((_WORD *)a4 + 24) == 523 )
  {
    v20 = v56;
    v21 = v57;
    v22 = v58;
  }
  else
  {
    v20 = v53;
    v21 = v54;
    v22 = v55;
  }
  v40 = v21;
  if ( (v22 & 0x400) != 0 && v20 )
  {
    v23 = (v22 >> 28) + 4;
    LODWORD(v43) = v23;
    if ( v20 >= v12 && v21 && v21 < 0xFFFFFFFF / v23 )
    {
      v24 = v20 - v12;
      v48 = v24;
      v25 = v21 * v23;
      LODWORD(v44) = v21 * v23;
      v26 = v21 * v23;
      if ( v24 + v25 <= v24 || v24 + v25 > *((unsigned int *)a4 + 4) || (int)v25 + 4 < (unsigned int)v25 )
      {
        v28 = -1073741819;
        dword_1402FE4E0 = 5;
      }
      else
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v26, 0x5443694Du);
        v10 = PoolWithTag;
        v45 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, (const void *)(v24 + v49), v26);
          v28 = v37;
          v29 = v38;
          if ( v38 )
            MiLogRelocationRva((unsigned int)v24, (unsigned int)v25, v38, v39);
          v30 = 0;
          v31 = 0LL;
          if ( (_DWORD)v25 )
          {
            while ( 1 )
            {
              v32 = *(_DWORD *)&v10[v31];
              if ( v32 >= a3 )
                break;
              if ( (_DWORD)v31 && v32 < v30 )
              {
                dword_1402FE4E0 = 9;
                goto LABEL_62;
              }
              v30 = *(_DWORD *)&v10[v31];
              v31 = v23 + (unsigned int)v31;
              if ( (unsigned int)v31 >= (unsigned int)v25 )
                goto LABEL_32;
            }
            dword_1402FE4E0 = 8;
LABEL_62:
            v28 = -1073741701;
          }
LABEL_32:
          if ( v28 >= 0 )
          {
            v37 = 0;
            v33 = v40;
            v28 = MiCompressRvaList((_DWORD)v10, v40, a3, v23, 0, 0LL, (__int64)&v37);
            if ( v28 >= 0 )
            {
              v34 = v37 + 4;
              if ( v37 + 4 < v37 )
              {
                v28 = -1073741789;
                dword_1402FE4E0 = 10;
              }
              else
              {
                v35 = ExAllocatePoolWithTag(PagedPool, v34, 0x6643694Du);
                P = v35;
                if ( v35 )
                {
                  v37 = v34 - 4;
                  *v35 = v34 - 4;
                  v28 = MiCompressRvaList((_DWORD)v10, v33, a3, v23, 0, (__int64)(v35 + 1), (__int64)&v37);
                }
                else
                {
                  v28 = -1073741670;
                  dword_1402FE4E0 = 11;
                }
              }
            }
          }
          goto LABEL_37;
        }
        v28 = -1073741670;
        dword_1402FE4E0 = 6;
      }
    }
    else
    {
      v28 = -1073741819;
      dword_1402FE4E0 = 4;
    }
  }
  else
  {
    v28 = v37;
  }
  v29 = v38;
LABEL_37:
  v9 = v39;
LABEL_38:
  if ( v29 )
    MI_DEREFERENCE_CONTROL_AREA_FILE(v9, v29);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v28 < 0 )
  {
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
  }
  *v51 = P;
  return (unsigned int)v28;
}
