/*
 * XREFs of ObpAllocateObject @ 0x14041A9D0
 * Callers:
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 *     IopAllocRealFileObject @ 0x140441980 (IopAllocRealFileObject.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     ObCreateObjectTypeEx @ 0x140552594 (ObCreateObjectTypeEx.c)
 * Callees:
 *     SeAuditHeaderRequired @ 0x140011610 (SeAuditHeaderRequired.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpAllocateObject(_DWORD *a1, char a2, __int64 a3, __int128 *a4, int a5, _QWORD *a6, _BYTE *a7)
{
  char v8; // r14
  int v10; // r11d
  int v11; // r8d
  _WORD *v12; // r10
  int v13; // r11d
  int v14; // r9d
  int v15; // ebp
  int v16; // edx
  char v17; // al
  int v18; // r12d
  int v19; // r8d
  unsigned __int8 v20; // cl
  int v21; // eax
  int v22; // r10d
  unsigned int v23; // ecx
  unsigned int v24; // r13d
  char *PoolWithTag; // rax
  char *v26; // rbx
  char *v27; // rdx
  __int64 v28; // rcx
  char v29; // cl
  unsigned int v30; // eax
  char v32; // cl
  __int128 v33; // xmm0
  unsigned __int8 v34; // dl
  int v35; // [rsp+20h] [rbp-68h]
  int v36; // [rsp+24h] [rbp-64h]
  int v37; // [rsp+28h] [rbp-60h]
  int v38; // [rsp+2Ch] [rbp-5Ch]
  int v39; // [rsp+30h] [rbp-58h]
  char v40; // [rsp+90h] [rbp+8h]
  int v42; // [rsp+A0h] [rbp+18h]

  v8 = 0;
  v42 = 16;
  if ( (*a1 & 0x20) != 0 )
  {
    v10 = 16;
    v8 = 16;
  }
  else
  {
    v10 = 0;
  }
  v37 = v10;
  if ( SeAuditHeaderRequired((POBJECT_TYPE *)a3) )
  {
    v14 = v11;
    v8 |= 0x20u;
  }
  else
  {
    v14 = 0;
  }
  v15 = 32;
  v36 = v14;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
    || KeGetCurrentThread()->ApcState.Process == PsIdleProcess
    || !PsInitialSystemProcess )
  {
    v16 = 0;
  }
  else
  {
    v16 = 32;
    v8 |= 8u;
  }
  v17 = *(_BYTE *)(a3 + 66);
  v38 = v16;
  if ( ((unsigned __int8)v17 & (unsigned __int8)v11) != 0 )
  {
    v18 = v11;
    v8 |= 4u;
  }
  else
  {
    v18 = 0;
  }
  if ( *v12 )
  {
    if ( (v17 & 2) != 0 )
      return 3221225523LL;
    v19 = 32;
    v8 |= 2u;
  }
  else
  {
    v19 = 0;
  }
  v20 = 0;
  v39 = v19;
  v40 = 0;
  if ( v17 < 0 )
  {
    v20 = 48;
    v40 = 48;
  }
  if ( (v17 & 0x20) != 0 )
    v8 |= 1u;
  else
    v15 = 0;
  if ( a7 && (*a7 || a7[1]) )
  {
    v21 = 16;
    v8 |= 0x40u;
    v22 = 48;
  }
  else
  {
    v22 = 0;
    v42 = 0;
    v21 = 0;
  }
  v35 = v13 + v14 + v18 + v19 + v15 + v21 + 48 + v16;
  v23 = v22 + v35 + v20;
  if ( v23 + a5 < v23 )
    return 3221225485LL;
  v24 = v23 + a5;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a3 + 100), v23 + a5, *(_DWORD *)(a3 + 192));
  v26 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v24);
  if ( v40 )
  {
    v34 = -(char)((_BYTE)v26 + v35) & 0x3F;
    if ( v34 )
    {
      v26 += v34;
      v8 |= 0x80u;
      *((_DWORD *)v26 - 1) = v34;
    }
  }
  if ( v42 )
  {
    v27 = &v26[v35 + a5];
    *(_QWORD *)v26 = v27;
    *(_QWORD *)v27 = 0LL;
    *((_QWORD *)v27 + 1) = 0LL;
    *((_QWORD *)v27 + 2) = 0LL;
    *((_QWORD *)v27 + 3) = 0LL;
    *((_QWORD *)v27 + 4) = 0LL;
    *((_QWORD *)v27 + 5) = 0LL;
    v28 = *(_QWORD *)v26;
    v26 += 16;
    *(_BYTE *)(v28 + 24) = *a7;
  }
  if ( v36 )
  {
    *(_QWORD *)v26 = 0LL;
    *((_QWORD *)v26 + 1) = 0LL;
    v26 += 16;
  }
  if ( v37 )
  {
    *(_QWORD *)v26 = 0LL;
    v26 += 16;
  }
  if ( v38 )
  {
    *(_DWORD *)v26 = a1[5];
    *((_DWORD *)v26 + 1) = a1[6];
    *((_DWORD *)v26 + 2) = a1[7];
    *((_QWORD *)v26 + 2) = 0LL;
    v26 += 32;
  }
  if ( v18 )
  {
    *((_DWORD *)v26 + 2) &= 0xFF000000;
    v26[11] = 0;
    *(_QWORD *)v26 = 0LL;
    v26 += 16;
  }
  if ( v39 )
  {
    v33 = *a4;
    *(_QWORD *)v26 = 0LL;
    *((_DWORD *)v26 + 6) = 0;
    *(_OWORD *)(v26 + 8) = v33;
    v26 += 32;
  }
  if ( v15 )
  {
    *((_WORD *)v26 + 12) = 0;
    *((_QWORD *)v26 + 2) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink;
    *((_QWORD *)v26 + 1) = v26;
    *(_QWORD *)v26 = v26;
    v26 += 32;
  }
  v26[27] = 1;
  v29 = v26[27];
  if ( v18 )
    v29 = 65;
  v26[26] = v8;
  v26[25] = 0;
  v26[27] = v29;
  *(_QWORD *)v26 = 1LL;
  *((_QWORD *)v26 + 1) = 0LL;
  *((_QWORD *)v26 + 2) = 0LL;
  v26[24] = ObHeaderCookie ^ *(_BYTE *)(a3 + 40) ^ BYTE1(v26);
  if ( !a2 )
  {
    v32 = v29 | 2;
    v26[27] = v32;
    if ( (*a1 & 0x10000) != 0 )
      v26[27] = v32 | 4;
  }
  if ( (*a1 & 0x10) != 0 )
    v26[27] |= 0x10u;
  if ( (*a1 & 0x20) != 0 )
    v26[27] |= 8u;
  *((_QWORD *)v26 + 4) = a1;
  *((_QWORD *)v26 + 5) = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 44));
  v30 = *(_DWORD *)(a3 + 44);
  if ( v30 > *(_DWORD *)(a3 + 52) )
    *(_DWORD *)(a3 + 52) = v30;
  *a6 = v26;
  return 0LL;
}
