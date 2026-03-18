/*
 * XREFs of ObpAllocateObject @ 0x1404065F0
 * Callers:
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 *     IopAllocRealFileObject @ 0x140414F70 (IopAllocRealFileObject.c)
 *     ObCreateObjectTypeEx @ 0x140525B54 (ObCreateObjectTypeEx.c)
 * Callees:
 *     SeAuditHeaderRequired @ 0x140041E40 (SeAuditHeaderRequired.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpAllocateObject(_DWORD *a1, char a2, __int64 a3, __int128 *a4, int a5, _QWORD *a6, _BYTE *a7)
{
  char v7; // si
  int v10; // r12d
  int v11; // r8d
  int v12; // r8d
  _WORD *v13; // r9
  struct _KPROCESS *v14; // r10
  int v15; // edx
  int v16; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  int v18; // r13d
  char v19; // al
  int v20; // ecx
  unsigned __int8 v21; // bp
  int v22; // r15d
  unsigned int v23; // ecx
  SIZE_T v24; // rdx
  char *PoolWithTag; // rax
  char v26; // dl
  unsigned int v27; // ecx
  char v29; // dl
  __int128 v30; // xmm0
  unsigned __int8 v31; // dl
  int v32; // [rsp+20h] [rbp-58h]
  int v33; // [rsp+24h] [rbp-54h]
  int v34; // [rsp+80h] [rbp+8h]
  int v36; // [rsp+90h] [rbp+18h]

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
  v36 = v11;
  if ( SeAuditHeaderRequired((POBJECT_TYPE *)a3) )
  {
    v15 = 16;
    v7 |= 0x20u;
  }
  else
  {
    v15 = (int)v14;
  }
  v16 = 32;
  v34 = v15;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
    || (CurrentThread = KeGetCurrentThread(), PsInitialSystemProcess == v14)
    || CurrentThread->ApcState.Process == PsIdleProcess )
  {
    v18 = (int)v14;
  }
  else
  {
    v18 = 32;
    v7 |= 8u;
  }
  v19 = *(_BYTE *)(a3 + 66);
  if ( (v19 & 0x10) != 0 )
    v7 |= 4u;
  else
    v10 = (int)v14;
  if ( *v13 == (_WORD)v14 )
  {
    v20 = (int)v14;
  }
  else
  {
    if ( (v19 & 2) != 0 )
      return 3221225523LL;
    v20 = 32;
    v7 |= 2u;
  }
  v21 = 0;
  v32 = v20;
  if ( v19 < 0 )
    v21 = 48;
  if ( (v19 & 0x20) != 0 )
  {
    v22 = 32;
    v7 |= 1u;
  }
  else
  {
    v22 = (int)v14;
  }
  if ( !a7 || *a7 == (_BYTE)v14 )
    v16 = (int)v14;
  else
    v7 |= 0x40u;
  v33 = v12 + v15 + 48 + v18 + v10 + v16 + v22 + v20;
  v23 = v21 + v33;
  v24 = v23 + a5;
  if ( (unsigned int)v24 < v23 )
    return 3221225485LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a3 + 100), v24, *(_DWORD *)(a3 + 192));
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( v21 )
  {
    v31 = -(char)((_BYTE)PoolWithTag + v33) & 0x3F;
    if ( v31 )
    {
      PoolWithTag += v31;
      v7 |= 0x80u;
      *((_DWORD *)PoolWithTag - 1) = v31;
    }
  }
  if ( v16 )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    PoolWithTag += 32;
  }
  if ( v34 )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    PoolWithTag += 16;
  }
  if ( v36 )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag += 16;
  }
  if ( v18 )
  {
    *(_DWORD *)PoolWithTag = a1[5];
    *((_DWORD *)PoolWithTag + 1) = a1[6];
    *((_DWORD *)PoolWithTag + 2) = a1[7];
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    PoolWithTag += 32;
  }
  if ( v10 )
  {
    *((_DWORD *)PoolWithTag + 2) &= 0xFF000000;
    PoolWithTag[11] = 0;
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag += 16;
  }
  if ( v32 )
  {
    v30 = *a4;
    *(_QWORD *)PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *(_OWORD *)(PoolWithTag + 8) = v30;
    PoolWithTag += 32;
  }
  if ( v22 )
  {
    *((_WORD *)PoolWithTag + 12) = 0;
    *((_QWORD *)PoolWithTag + 2) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
    *(_QWORD *)PoolWithTag = PoolWithTag;
    PoolWithTag += 32;
  }
  PoolWithTag[27] = 1;
  v26 = PoolWithTag[27];
  if ( v10 )
    v26 = 65;
  PoolWithTag[26] = v7;
  PoolWithTag[25] = 0;
  PoolWithTag[27] = v26;
  *(_QWORD *)PoolWithTag = 1LL;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  PoolWithTag[24] = ObHeaderCookie ^ *(_BYTE *)(a3 + 40) ^ BYTE1(PoolWithTag);
  if ( !a2 )
  {
    v29 = v26 | 2;
    PoolWithTag[27] = v29;
    if ( (*a1 & 0x10000) != 0 )
      PoolWithTag[27] = v29 | 4;
  }
  if ( (*a1 & 0x10) != 0 )
    PoolWithTag[27] |= 0x10u;
  if ( (*a1 & 0x20) != 0 )
    PoolWithTag[27] |= 8u;
  *((_QWORD *)PoolWithTag + 4) = a1;
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 44));
  v27 = *(_DWORD *)(a3 + 44);
  if ( v27 > *(_DWORD *)(a3 + 52) )
    *(_DWORD *)(a3 + 52) = v27;
  *a6 = PoolWithTag;
  return 0LL;
}
