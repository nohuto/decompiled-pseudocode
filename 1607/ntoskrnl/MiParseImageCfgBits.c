/*
 * XREFs of MiParseImageCfgBits @ 0x140508740
 * Callers:
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiCompressRvaList @ 0x14042E730 (MiCompressRvaList.c)
 *     MiLogRelocationRva @ 0x140508C50 (MiLogRelocationRva.c)
 */

__int64 __fastcall MiParseImageCfgBits(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 a5, _QWORD *a6)
{
  unsigned int *v9; // rsi
  PVOID v10; // rbx
  __int64 v11; // r9
  unsigned __int64 v12; // r13
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int16 v15; // cx
  unsigned int v16; // ebx
  unsigned int *v17; // rdx
  __int64 v18; // rdx
  ULONG_PTR v19; // rax
  unsigned __int64 v20; // r12
  unsigned int v21; // ecx
  unsigned int v22; // edi
  unsigned int v23; // edi
  unsigned __int64 v24; // r12
  __int64 v25; // rbx
  unsigned int v26; // r13d
  unsigned int *PoolWithTag; // rax
  int v28; // r15d
  unsigned __int64 v29; // r13
  unsigned int v30; // r8d
  unsigned int v31; // eax
  unsigned int v32; // edx
  int v33; // r12d
  unsigned int v34; // ebx
  unsigned int *v35; // rax
  char v37; // [rsp+28h] [rbp-1A0h]
  char v38; // [rsp+28h] [rbp-1A0h]
  unsigned int v39; // [rsp+40h] [rbp-188h] BYREF
  __int64 v40; // [rsp+48h] [rbp-180h]
  PVOID P; // [rsp+50h] [rbp-178h]
  ULONG_PTR v42; // [rsp+58h] [rbp-170h]
  unsigned int v43; // [rsp+60h] [rbp-168h]
  unsigned int v44; // [rsp+64h] [rbp-164h]
  __int64 v45; // [rsp+68h] [rbp-160h]
  unsigned __int64 v46; // [rsp+70h] [rbp-158h]
  unsigned int *v47; // [rsp+78h] [rbp-150h]
  __int64 v48; // [rsp+80h] [rbp-148h]
  __int64 v49; // [rsp+90h] [rbp-138h]
  unsigned __int64 v50; // [rsp+98h] [rbp-130h]
  __int64 *v51; // [rsp+A0h] [rbp-128h]
  _QWORD *v52; // [rsp+A8h] [rbp-120h]
  char v53[80]; // [rsp+B0h] [rbp-118h] BYREF
  unsigned int v54; // [rsp+100h] [rbp-C8h]
  unsigned int v55; // [rsp+104h] [rbp-C4h]
  unsigned int v56; // [rsp+108h] [rbp-C0h]
  unsigned __int64 v57; // [rsp+130h] [rbp-98h]
  unsigned int v58; // [rsp+138h] [rbp-90h]
  unsigned int v59; // [rsp+140h] [rbp-88h]

  v48 = a2;
  v40 = a1;
  v49 = a1;
  v45 = a2;
  v51 = a4;
  v52 = a6;
  v42 = 0LL;
  v9 = 0LL;
  v47 = 0LL;
  v10 = 0LL;
  P = 0LL;
  v11 = 0LL;
  if ( a1 )
    v11 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v12 = *a4;
  v46 = *a4;
  v39 = 0;
  v13 = *((_DWORD *)a4 + 25);
  v44 = v13;
  v14 = *((unsigned int *)a4 + 24);
  if ( (_DWORD)v14 )
  {
    v15 = *((_WORD *)a4 + 24);
    if ( v15 == 523 )
    {
      v16 = 148;
    }
    else
    {
      if ( v15 != 267 )
      {
        v28 = 0;
        v29 = 0LL;
        goto LABEL_37;
      }
      v16 = 92;
    }
    v43 = v16;
    if ( (unsigned int)v14 + v16 <= (unsigned int)v14 || (unsigned int)v14 + v16 > *((_DWORD *)a4 + 4) )
      goto LABEL_54;
    v17 = (unsigned int *)(a2 + v14);
    v50 = a2 + v14;
    if ( v13 >= v16 )
      goto LABEL_9;
    if ( !v11 || *(_WORD *)(v11 + 48) != 332 )
    {
LABEL_54:
      v28 = 0;
      v29 = 0LL;
      v10 = 0LL;
      goto LABEL_37;
    }
    if ( v13 > 4 )
    {
      v13 = *v17;
      v44 = *v17;
    }
    a1 = v40;
    if ( v13 >= v16 )
    {
LABEL_9:
      memmove(v53, v17, v16);
      v18 = v40;
      if ( v40 )
      {
        v19 = MiReferenceControlAreaFile(v40);
        v42 = v19;
        v18 = v40;
      }
      else
      {
        v19 = v42;
      }
      if ( v19 )
        MiLogRelocationRva(*((unsigned int *)a4 + 24), v16, v19, v18);
      if ( *((_WORD *)a4 + 24) == 523 )
      {
        v20 = v57;
        v21 = v58;
        v22 = v59;
      }
      else
      {
        v20 = v54;
        v21 = v55;
        v22 = v56;
      }
      v43 = v21;
      if ( (v22 & 0x400) != 0 && v20 )
      {
        v23 = (v22 >> 28) + 4;
        LODWORD(v45) = v23;
        if ( v20 >= v12 && v21 && v21 < 0xFFFFFFFF / v23 )
        {
          v24 = v20 - v12;
          v50 = v24;
          v25 = v21 * v23;
          LODWORD(v46) = v21 * v23;
          v26 = v21 * v23;
          if ( v24 + v25 <= v24 || v24 + v25 > *((unsigned int *)a4 + 4) || (int)v25 + 4 < (unsigned int)v25 )
          {
            v28 = -1073741819;
            dword_1403267E8 = 5;
          }
          else
          {
            PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v26, 0x5443694Du);
            v9 = PoolWithTag;
            v47 = PoolWithTag;
            if ( PoolWithTag )
            {
              memmove(PoolWithTag, (const void *)(v24 + v48), v26);
              v28 = v39;
              v29 = v42;
              if ( v42 )
                MiLogRelocationRva((unsigned int)v24, (unsigned int)v25, v42, v40);
              v30 = 0;
              v31 = 0;
              if ( (_DWORD)v25 )
              {
                while ( 1 )
                {
                  v32 = *(unsigned int *)((char *)v9 + v31);
                  if ( v32 >= a3 )
                    break;
                  if ( v31 && v32 < v30 )
                  {
                    dword_1403267E8 = 9;
                    goto LABEL_61;
                  }
                  v30 = *(unsigned int *)((char *)v9 + v31);
                  v31 += v23;
                  if ( v31 >= (unsigned int)v25 )
                    goto LABEL_31;
                }
                dword_1403267E8 = 8;
LABEL_61:
                v28 = -1073741701;
              }
LABEL_31:
              if ( v28 >= 0 )
              {
                v39 = 0;
                v33 = v43;
                v28 = MiCompressRvaList(v9, v43, a3, v23, 0, v37, 0LL, (int *)&v39);
                if ( v28 >= 0 )
                {
                  v34 = v39;
                  if ( v39 + 4 < v39 )
                  {
                    v28 = -1073741789;
                    dword_1403267E8 = 10;
                  }
                  else
                  {
                    v35 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v39 + 4, 0x6643694Du);
                    P = v35;
                    if ( !v35 )
                    {
                      v28 = -1073741670;
                      dword_1403267E8 = 11;
                      v10 = 0LL;
                      goto LABEL_37;
                    }
                    *v35 = v34;
                    v28 = MiCompressRvaList(v9, v33, a3, v23, 0, v38, v35 + 1, (int *)&v39);
                  }
                }
              }
              goto LABEL_36;
            }
            v28 = -1073741670;
            dword_1403267E8 = 6;
          }
        }
        else
        {
          v28 = -1073741819;
          dword_1403267E8 = 4;
        }
      }
      else
      {
        v28 = v39;
      }
      v29 = v42;
LABEL_36:
      v10 = P;
LABEL_37:
      a1 = v40;
      goto LABEL_38;
    }
    v28 = v39;
    v29 = v42;
    v10 = P;
  }
  else
  {
    v28 = 0;
    v29 = 0LL;
  }
LABEL_38:
  if ( v29 )
    MiDereferenceControlAreaFile(a1, v29);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v28 < 0 && v10 )
  {
    ExFreePoolWithTag(v10, 0);
    v10 = 0LL;
  }
  *v52 = v10;
  return (unsigned int)v28;
}
