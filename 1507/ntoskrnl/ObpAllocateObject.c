/*
 * XREFs of ObpAllocateObject @ 0x14048B260
 * Callers:
 *     IopAllocRealFileObject @ 0x140488940 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x14048A8A0 (ObCreateObjectEx.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     ObCreateObjectTypeEx @ 0x140595F64 (ObCreateObjectTypeEx.c)
 * Callees:
 *     SeAuditHeaderRequired @ 0x140045F90 (SeAuditHeaderRequired.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpAllocateObject(_DWORD *a1, char a2, __int64 a3, __int128 *a4, int a5, _QWORD *a6, _BYTE *a7)
{
  char v7; // bp
  int v10; // r14d
  int v11; // r10d
  __int64 v12; // r8
  int v13; // r10d
  _WORD *v14; // r11
  int v15; // r9d
  struct _KTHREAD *CurrentThread; // rcx
  int v17; // edx
  char v18; // al
  int v19; // r8d
  unsigned __int8 v20; // cl
  int v21; // r15d
  int v22; // r12d
  int v23; // eax
  unsigned int v24; // ecx
  SIZE_T v25; // rdx
  unsigned int v26; // r13d
  _QWORD *PoolWithTag; // rax
  _QWORD *v28; // rbx
  char v29; // cl
  unsigned int v30; // eax
  char v32; // cl
  __int128 v33; // xmm0
  unsigned __int8 v34; // cl
  int v35; // [rsp+20h] [rbp-58h]
  int v36; // [rsp+24h] [rbp-54h]
  int v37; // [rsp+28h] [rbp-50h]
  char v38; // [rsp+2Ch] [rbp-4Ch]
  char v39; // [rsp+80h] [rbp+8h]
  int v41; // [rsp+90h] [rbp+18h]

  v7 = 0;
  v10 = 16;
  if ( (*a1 & 0x20) != 0 )
  {
    v11 = 16;
    v7 = 16;
  }
  else
  {
    v11 = 0;
  }
  v35 = v11;
  if ( SeAuditHeaderRequired((POBJECT_TYPE *)a3) )
  {
    v15 = 16;
    v7 |= 0x20u;
  }
  else
  {
    v15 = 0;
  }
  v41 = v15;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
    || (CurrentThread = KeGetCurrentThread(), !PsInitialSystemProcess)
    || CurrentThread->ApcState.Process == PsIdleProcess )
  {
    v17 = 0;
  }
  else
  {
    v17 = 32;
    v7 |= 8u;
  }
  v18 = *(_BYTE *)(v12 + 66);
  v36 = v17;
  if ( (v18 & 0x10) != 0 )
    v7 |= 4u;
  else
    v10 = 0;
  if ( *v14 )
  {
    if ( (v18 & 2) != 0 )
      return 3221225523LL;
    v19 = 32;
    v7 |= 2u;
  }
  else
  {
    v19 = 0;
  }
  v20 = 0;
  v37 = v19;
  v39 = 0;
  if ( v18 < 0 )
  {
    v20 = 48;
    v39 = 48;
  }
  if ( (v18 & 0x20) != 0 )
  {
    v21 = 32;
    v7 |= 1u;
  }
  else
  {
    v21 = 0;
  }
  if ( a7 && *a7 )
  {
    v22 = 32;
    v7 |= 0x40u;
  }
  else
  {
    v22 = 0;
  }
  v23 = v15 + v17 + v10 + v19 + v22 + v21;
  v24 = v23 + v13 + 48 + v20;
  v38 = v23 + v13 + 48;
  v25 = v24 + a5;
  if ( (unsigned int)v25 < v24 )
    return 3221225485LL;
  v26 = v24 + a5;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a3 + 100), v25, *(_DWORD *)(a3 + 192));
  v28 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v26);
  if ( v39 )
  {
    v34 = -(char)((_BYTE)v28 + v38) & 0x3F;
    if ( v34 )
    {
      v28 = (_QWORD *)((char *)v28 + v34);
      v7 |= 0x80u;
      *((_DWORD *)v28 - 1) = v34;
    }
  }
  if ( v22 )
  {
    memset(v28, 0, 0x20uLL);
    v28 += 4;
  }
  if ( v41 )
  {
    *v28 = 0LL;
    v28[1] = 0LL;
    v28 += 2;
  }
  if ( v35 )
  {
    *v28 = 0LL;
    v28 += 2;
  }
  if ( v36 )
  {
    *(_DWORD *)v28 = a1[5];
    *((_DWORD *)v28 + 1) = a1[6];
    *((_DWORD *)v28 + 2) = a1[7];
    v28[2] = 0LL;
    v28 += 4;
  }
  if ( v10 )
  {
    *((_DWORD *)v28 + 2) &= 0xFF000000;
    *((_BYTE *)v28 + 11) = 0;
    *v28 = 0LL;
    v28 += 2;
  }
  if ( v37 )
  {
    v33 = *a4;
    *v28 = 0LL;
    *((_DWORD *)v28 + 6) = 0;
    *(_OWORD *)(v28 + 1) = v33;
    v28 += 4;
  }
  if ( v21 )
  {
    *((_WORD *)v28 + 12) = 0;
    v28[2] = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink;
    v28[1] = v28;
    *v28 = v28;
    v28 += 4;
  }
  *((_BYTE *)v28 + 27) = 1;
  v29 = *((_BYTE *)v28 + 27);
  if ( v10 )
    v29 = 65;
  *((_BYTE *)v28 + 26) = v7;
  *((_BYTE *)v28 + 25) = 0;
  *((_BYTE *)v28 + 27) = v29;
  *v28 = 1LL;
  v28[1] = 0LL;
  v28[2] = 0LL;
  *((_BYTE *)v28 + 24) = ObHeaderCookie ^ *(_BYTE *)(a3 + 40) ^ BYTE1(v28);
  if ( !a2 )
  {
    v32 = v29 | 2;
    *((_BYTE *)v28 + 27) = v32;
    if ( (*a1 & 0x10000) != 0 )
      *((_BYTE *)v28 + 27) = v32 | 4;
  }
  if ( (*a1 & 0x10) != 0 )
    *((_BYTE *)v28 + 27) |= 0x10u;
  if ( (*a1 & 0x20) != 0 )
    *((_BYTE *)v28 + 27) |= 8u;
  v28[4] = a1;
  v28[5] = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 44));
  v30 = *(_DWORD *)(a3 + 44);
  if ( v30 > *(_DWORD *)(a3 + 52) )
    *(_DWORD *)(a3 + 52) = v30;
  *a6 = v28;
  return 0LL;
}
